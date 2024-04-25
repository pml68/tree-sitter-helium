module.exports = grammar({
  name: 'helium',

  word: $ => $.identifier,

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /[ \t\f\r\n]/
  ],

  rules: {
    source_file: $ => repeat($._declaration),

    _declaration: $ => choice(
      $.variable_declaration,
      $.function_declaration
    ),

    variable_declaration: $ => seq(
      $._type,
      $.identifier,
      '=',
      $._value,
      ';'
    ),

    _type: $ => choice(
      $.normal_type,
      $.pointer_type
    ),

    normal_type: $ => choice(
      'u8',
      'i8',
      'b1'
    ),

    pointer_type: $ => seq(
      $.normal_type,
      'ptr'
    ),

    _value: $ => choice(
      $.decimal,
      $.string
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
      'mov',
      $.register,
      ',',
      $.value
    ),

    register: $ => seq(
      '$',
      $.register_identifier
    ),

    register_identifier: $ => choice(
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

    identifier: $ => /([a-z_][a-z0-9_:]*[a-z_])|([a-z_])/,

    decimal: $ => /\d+/,

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^"\\\n\r]+/),
        $.escape_sequence
      )),
      '"'
    ),

    escape_sequence: $ => token.immediate(
      seq(
        '\\',
        /[\\"]/
      )
    ),

    line_comment: $ => token(seq('//', /.*/)),

    block_comment: $ => token(
      /\/\*[^*]*\*+([^/*][^*]*\*+)*\//,
    )
  }
})
