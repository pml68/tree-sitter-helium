(normal_type) @type.builtin

(number) @number
(string) @string

(value) @attribute

[
 "ptr"
 "mov"
] @keyword
"=" @operator

"," @punctuation.delimiter
":" @punctuation.delimiter
";" @punctuation.delimiter

(register) @constant.builtin
(variable_declaration (identifier) @attribute)
(function_declaration (identifier) @function)
