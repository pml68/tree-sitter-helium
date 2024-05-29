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
      repeat(
        choice(
          $._declaration,
          $.function_declaration,
        )
      )
    ),

    target_declaration: $ => seq(
      '#target',
      $.string,
      choice(
        seq(
          ';',
          optional('\n')
        ),
        '\n'
      )
    ),

    _declaration: $ => seq(
      choice(
        $.variable_declaration,
        $.array_declaration,
      ),
      choice(
        seq(
          ';',
          optional('\n')
        ),
        '\n'
      )
    ),

    variable_declaration: $ => seq(
      $._type,
      $.identifier,
      '=',
      $._expression,
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
      repeat1(
        $._statement
      )
    ),

    _statement: $ => seq(
      choice(
        $.mov_statement,
        $.jmp_statement,
        $.add_statement,
        $.hlt_statement,
        $.bnc_statement,
      ),
      choice(
        seq(
          ';',
          optional('\n')
        ),
        '\n'
      )
    ),

    add_statement: $ => seq(
      'ADD',
      $.statement_parameter,
      optional(','),
      $.statement_parameter,
      optional(','),
      $.register
    ),

    jmp_statement: $ => seq(
      'JMP',
      $.identifier
    ),

    bnc_statement: $ => seq(
      'BNC',
      $.identifier
    ),

    mov_statement: $ => seq(
      'MOV',
      $.statement_parameter,
      optional(','),
      $.statement_parameter
    ),

    hlt_statement: _ => "HLT",

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
      $._expression,
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

    identifier: _ => /([a-z_][a-z0-9_:]*[a-z0-9_])|([a-z_])/,

    line_comment: _ => token(seq('//', /.*/)),

    block_comment: _ => token(
      /\/\*[^*]*\*+([^/*][^*]*\*+)*\//,
    )
  }
})
