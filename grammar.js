module.exports = grammar({
  name: 'helium',

  word: $ => $.identifier,

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /[ \t\f\r\n]/
  ],

  rules: {
    source_file: $ => seq(
      optional($.target_declaration),
      repeat($._declaration)
    ),

    target_declaration: $ => seq(
      '#target',
      $.string,
      ';'
    ),

    _declaration: $ => choice(
      $.variable_declaration,
      $.function_declaration,
      $.array_declaration,
    ),

    variable_declaration: $ => seq(
      $._type,
      $.identifier,
      '=',
      $._expression,
      ';'
    ),

    array_declaration: $ => seq(
      seq(
        $.normal_type,
        seq(
          '[',
          optional($.decimal),
          ']',
        )
      ),
      optional($.endian),
      $.pointer,
      $.identifier,
      '=',
      $._expression,
      repeat(
        seq(
          ',',
          $._expression,
        )
      ),
      ';'
    ),

    _expression: $ => choice(
      $.expression,
      seq(
        '(',
        $.expression,
        ')',
      )
    ),

    expression: $ => choice(
      $.identifier,
      $._value,
      $.binary_expression,
    ),

    binary_expression: $ => choice(
      prec.left(2, seq($._expression, '*', $._expression)),
      prec.left(1, seq($._expression, '+', $._expression)),
      prec.left(2, seq($._expression, '/', $._expression)),
      prec.left(1, seq($._expression, '-', $._expression)),
      prec.left(2, seq($._expression, '%', $._expression)),
      prec.left(2, seq($._expression, '|', $._expression)),
      prec.left(2, seq($._expression, '&', $._expression)),
      prec.left(2, seq($._expression, '>>', $._expression)),
      prec.left(2, seq($._expression, '<<', $._expression)),
    ),

    _type: $ => seq(
      $.normal_type,
      optional($.endian),
      optional($.pointer)
    ),

    normal_type: _ => choice(
      'u8',
      'u16',
      'i8',
      'b1',
      'str'
    ),

    endian: _ => choice(
      'le',
      'be'
    ),

    pointer: _ => 'ptr',

    _value: $ => choice(
      $.decimal,
      $.string,
      //$.char
    ),

    function_declaration: $ => seq(
      $.identifier,
      ':',
      repeat(
        $._statement
      )
    ),

    _statement: $ => seq(
      choice(
        $.mov_statement
      ),
      ';'
    ),

    mov_statement: $ => seq(
      'MOV',
      $.statement_parameter,
      $.statement_parameter
    ),

    statement_parameter: $ => choice(
      $.register,
      $.value
    ),

    register: $ => seq(
      '$',
      $.register_identifier
    ),

    register_identifier: _ => choice(
      /[0-7]/,
      /[A-C]/,
      'X',
      'Y',
      'F',
      'SPL',
      'SPH'
    ),

    value: $ => seq(
      '[',
      $.identifier,
      ']'
    ),

    decimal: _ => /\d+/,

    /*
    char: $ => choice(
      token.immediate(/'([^'\\\n\r]){1}'/),
      alias(token.immediate(/'(\\['\\]){1}'/), $.escape_sequence)
    ),
    */

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^"\\\n\r]+/),
        alias(token.immediate(/\\["\\]/), $.escape_sequence)
      )),
      '"'
    ),

    identifier: _ => /([a-z_][a-z0-9_:]*[a-z_])|([a-z_])/,

    line_comment: _ => token(seq('//', /.*/)),

    block_comment: _ => token(
      /\/\*[^*]*\*+([^/*][^*]*\*+)*\//,
    )
  }
})
