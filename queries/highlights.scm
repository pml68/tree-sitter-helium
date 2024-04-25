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
 "ptr"
 "mov"
] @keyword
"=" @operator

[
 ";"
 ":"
 ","
] @punctuation.delimiter

(register) @constant.builtin
(variable_declaration (identifier) @attribute)
(function_declaration (identifier) @function)
