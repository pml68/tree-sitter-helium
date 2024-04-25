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

    _type: $ => seq(
      $.normal_type,
      optional($.endian),
      optional($.pointer)
    ),

    normal_type: _ => choice(
      'u8',
      'i8',
      'b1'
    ),

    endian: _ => choice(
      'le',
      'be'
    ),

    pointer: _ => 'ptr',

    _value: $ => choice(
      $.decimal,
      $.string,
      $.char
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

    identifier: _ => /([a-z_][a-z0-9_:]*[a-z_])|([a-z_])/,

    decimal: _ => /\d+/,

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^"\\\n\r]+/),
        $.escape_sequence
      )),
      '"'
    ),

    char: $ => seq(
      '\'',
      repeat1(
        choice(
          token.immediate(/'[^'\\\n\r]'/),
          $.escape_sequence1
        )
      ),
      '\''
    ),

    escape_sequence: _ => token.immediate(
      seq(
        '\\',
        /[\\"]/
      )
    ),

    escape_sequence1: _ => token.immediate(
      seq(
        '\\',
        /[\\']/
      )
    ),

    line_comment: _ => token(seq('//', /.*/)),

    block_comment: _ => token(
      /\/\*[^*]*\*+([^/*][^*]*\*+)*\//,
    )
  }
})
