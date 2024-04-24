module.exports = grammar({
  name: 'helium',

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
      $.number,
      $.string
    ),

    function_declaration: $ => seq(
      $.function_identifier,
      ':',
      repeat(
        seq(
          $._statement, ';'
        )
      )
    ),

    _statement: $ => choice(
      $.mov_statement
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
      $.register_value
    ),

    register_value: $ => choice(
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

    function_identifier: $ => /[a-z_][a-z0-9_]*/,

    identifier: $ => /[a-z_][a-z0-9_:]*/,

    number: $ => /\d+/,

    string: $ => seq(
      '"',
      /[^"]*/,
      '"'
    ),
  }
})
