(normal_type) @type.builtin

(decimal) @number
(string) @string
(escape_sequence) @string.escape

(value) @attribute

[
 (line_comment)
 (block_comment)
] @comment

[
 (pointer)
 "mov"
 "#target"
] @keyword
[
 "be"
 "le"
] @attribute.builtin
"=" @operator

[
 ";"
 ":"
 ","
] @punctuation.delimiter

(register) @constant.builtin
(variable_declaration (identifier) @attribute)
(function_declaration (identifier) @function)
