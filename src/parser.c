#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_POUNDtarget = 2,
  anon_sym_SEMI = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_STAR = 10,
  anon_sym_PLUS = 11,
  anon_sym_SLASH = 12,
  anon_sym_DASH = 13,
  anon_sym_PERCENT = 14,
  anon_sym_PIPE = 15,
  anon_sym_AMP = 16,
  anon_sym_GT_GT = 17,
  anon_sym_LT_LT = 18,
  anon_sym_u8 = 19,
  anon_sym_u16 = 20,
  anon_sym_i8 = 21,
  anon_sym_b1 = 22,
  anon_sym_str = 23,
  anon_sym_le = 24,
  anon_sym_be = 25,
  sym_pointer = 26,
  anon_sym_COLON = 27,
  anon_sym_ADD = 28,
  anon_sym_JMP = 29,
  anon_sym_MOV = 30,
  anon_sym_DOLLAR = 31,
  aux_sym_register_identifier_token1 = 32,
  aux_sym_register_identifier_token2 = 33,
  anon_sym_X = 34,
  anon_sym_Y = 35,
  anon_sym_F = 36,
  anon_sym_SPL = 37,
  anon_sym_SPH = 38,
  sym_decimal = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_token1 = 41,
  aux_sym_string_token2 = 42,
  sym_line_comment = 43,
  sym_block_comment = 44,
  sym_source_file = 45,
  sym_target_declaration = 46,
  sym__declaration = 47,
  sym_variable_declaration = 48,
  sym_array_declaration = 49,
  sym__expression = 50,
  sym_expression = 51,
  sym_binary_expression = 52,
  sym__type = 53,
  sym_normal_type = 54,
  sym_endian = 55,
  sym__value = 56,
  sym_function_declaration = 57,
  sym__statement = 58,
  sym_add_statement = 59,
  sym_jmp_statement = 60,
  sym_mov_statement = 61,
  sym_statement_parameter = 62,
  sym_register = 63,
  sym_register_identifier = 64,
  sym_value = 65,
  sym_string = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_array_declaration_repeat1 = 68,
  aux_sym_function_declaration_repeat1 = 69,
  aux_sym_string_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_POUNDtarget] = "#target",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_i8] = "i8",
  [anon_sym_b1] = "b1",
  [anon_sym_str] = "str",
  [anon_sym_le] = "le",
  [anon_sym_be] = "be",
  [sym_pointer] = "pointer",
  [anon_sym_COLON] = ":",
  [anon_sym_ADD] = "ADD",
  [anon_sym_JMP] = "JMP",
  [anon_sym_MOV] = "MOV",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_register_identifier_token1] = "register_identifier_token1",
  [aux_sym_register_identifier_token2] = "register_identifier_token2",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_F] = "F",
  [anon_sym_SPL] = "SPL",
  [anon_sym_SPH] = "SPH",
  [sym_decimal] = "decimal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "escape_sequence",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym_target_declaration] = "target_declaration",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_array_declaration] = "array_declaration",
  [sym__expression] = "_expression",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym__type] = "_type",
  [sym_normal_type] = "normal_type",
  [sym_endian] = "endian",
  [sym__value] = "_value",
  [sym_function_declaration] = "function_declaration",
  [sym__statement] = "_statement",
  [sym_add_statement] = "add_statement",
  [sym_jmp_statement] = "jmp_statement",
  [sym_mov_statement] = "mov_statement",
  [sym_statement_parameter] = "statement_parameter",
  [sym_register] = "register",
  [sym_register_identifier] = "register_identifier",
  [sym_value] = "value",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_declaration_repeat1] = "array_declaration_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUNDtarget] = anon_sym_POUNDtarget,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_b1] = anon_sym_b1,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_le] = anon_sym_le,
  [anon_sym_be] = anon_sym_be,
  [sym_pointer] = sym_pointer,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_MOV] = anon_sym_MOV,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_register_identifier_token1] = aux_sym_register_identifier_token1,
  [aux_sym_register_identifier_token2] = aux_sym_register_identifier_token2,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_SPL] = anon_sym_SPL,
  [anon_sym_SPH] = anon_sym_SPH,
  [sym_decimal] = sym_decimal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_target_declaration] = sym_target_declaration,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_array_declaration] = sym_array_declaration,
  [sym__expression] = sym__expression,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__type] = sym__type,
  [sym_normal_type] = sym_normal_type,
  [sym_endian] = sym_endian,
  [sym__value] = sym__value,
  [sym_function_declaration] = sym_function_declaration,
  [sym__statement] = sym__statement,
  [sym_add_statement] = sym_add_statement,
  [sym_jmp_statement] = sym_jmp_statement,
  [sym_mov_statement] = sym_mov_statement,
  [sym_statement_parameter] = sym_statement_parameter,
  [sym_register] = sym_register,
  [sym_register_identifier] = sym_register_identifier,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_declaration_repeat1] = aux_sym_array_declaration_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDtarget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_le] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_be] = {
    .visible = true,
    .named = false,
  },
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_register_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPH] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_target_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_normal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_endian] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_add_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_jmp_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_register_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 78,
        '#', 29,
        '$', 67,
        '%', 48,
        '&', 50,
        '(', 42,
        ')', 43,
        '*', 44,
        '+', 45,
        ',', 41,
        '-', 47,
        '/', 46,
        ':', 63,
        ';', 37,
        '<', 14,
        '=', 38,
        '>', 15,
        'A', 71,
        'F', 74,
        'J', 19,
        'M', 20,
        'S', 21,
        'X', 72,
        'Y', 73,
        '[', 39,
        '\\', 32,
        ']', 40,
        'b', 86,
        'i', 88,
        's', 90,
        'u', 87,
        '|', 49,
        '8', 77,
        '9', 77,
        'B', 70,
        'C', 70,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '/', 4,
        ';', 37,
        'A', 16,
        'J', 19,
        'M', 20,
        ']', 40,
        'b', 9,
        'i', 13,
        's', 31,
        'u', 10,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'X') ADVANCE(72);
      if (lookahead == 'Y') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '8') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'H') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'V') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(85);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 78,
        '#', 29,
        '$', 67,
        '%', 48,
        '&', 50,
        '(', 42,
        ')', 43,
        '*', 44,
        '+', 45,
        ',', 41,
        '-', 47,
        '/', 46,
        ':', 63,
        ';', 37,
        '<', 14,
        '=', 38,
        '>', 15,
        'A', 71,
        'F', 74,
        'J', 19,
        'M', 20,
        'S', 21,
        'X', 72,
        'Y', 73,
        '[', 39,
        ']', 40,
        'b', 86,
        'i', 88,
        's', 90,
        'u', 87,
        '|', 49,
        '8', 77,
        '9', 77,
        'B', 70,
        'C', 70,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUNDtarget);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_b1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_MOV);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '8') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_pointer);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_POUNDtarget] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_b1] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_le] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [sym_pointer] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_MOV] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_register_identifier_token1] = ACTIONS(1),
    [aux_sym_register_identifier_token2] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_SPL] = ACTIONS(1),
    [anon_sym_SPH] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym_target_declaration] = STATE(6),
    [sym__declaration] = STATE(5),
    [sym_variable_declaration] = STATE(79),
    [sym_array_declaration] = STATE(79),
    [sym__type] = STATE(78),
    [sym_normal_type] = STATE(36),
    [sym_function_declaration] = STATE(79),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_POUNDtarget] = ACTIONS(9),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_b1] = ACTIONS(11),
    [anon_sym_str] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_ADD,
    ACTIONS(19), 1,
      anon_sym_JMP,
    ACTIONS(21), 1,
      anon_sym_MOV,
    STATE(36), 1,
      sym_normal_type,
    STATE(78), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(15), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(70), 5,
      sym_variable_declaration,
      sym_array_declaration,
      sym_add_statement,
      sym_jmp_statement,
      sym_mov_statement,
  [41] = 10,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(28), 1,
      anon_sym_ADD,
    ACTIONS(31), 1,
      anon_sym_JMP,
    ACTIONS(34), 1,
      anon_sym_MOV,
    STATE(36), 1,
      sym_normal_type,
    STATE(78), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(25), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(70), 5,
      sym_variable_declaration,
      sym_array_declaration,
      sym_add_statement,
      sym_jmp_statement,
      sym_mov_statement,
  [82] = 10,
    ACTIONS(17), 1,
      anon_sym_ADD,
    ACTIONS(19), 1,
      anon_sym_JMP,
    ACTIONS(21), 1,
      anon_sym_MOV,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_normal_type,
    STATE(78), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(15), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(70), 5,
      sym_variable_declaration,
      sym_array_declaration,
      sym_add_statement,
      sym_jmp_statement,
      sym_mov_statement,
  [123] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_normal_type,
    STATE(78), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(79), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [156] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_normal_type,
    STATE(78), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(79), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [189] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_normal_type,
    STATE(78), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(79), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [222] = 8,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(36), 1,
      sym_normal_type,
    STATE(78), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(79), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(48), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [255] = 3,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 12,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [277] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 6,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [301] = 3,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 12,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [323] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 12,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [345] = 3,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 12,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [367] = 3,
    ACTIONS(73), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(71), 12,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [389] = 7,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [418] = 7,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [447] = 7,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [476] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [500] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [523] = 4,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(91), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [544] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [567] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(18), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [591] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(16), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [615] = 7,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [641] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(10), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [665] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(103), 9,
      anon_sym_SEMI,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      anon_sym_ADD,
      anon_sym_JMP,
      anon_sym_MOV,
  [681] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(17), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [705] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(21), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [729] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(15), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [753] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [773] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(19), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [797] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_decimal,
      sym_identifier,
    STATE(9), 2,
      sym__expression,
      sym_expression,
    STATE(11), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [821] = 3,
    STATE(52), 1,
      sym_register_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 7,
      aux_sym_register_identifier_token1,
      aux_sym_register_identifier_token2,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [838] = 3,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [854] = 3,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [870] = 6,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_pointer,
    STATE(55), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 2,
      anon_sym_le,
      anon_sym_be,
  [891] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [909] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [927] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [945] = 5,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [963] = 3,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 4,
      anon_sym_le,
      anon_sym_be,
      sym_pointer,
      sym_identifier,
  [977] = 4,
    ACTIONS(133), 1,
      sym_pointer,
    STATE(63), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 2,
      anon_sym_le,
      anon_sym_be,
  [992] = 5,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym_string_token1,
    ACTIONS(140), 1,
      aux_sym_string_token2,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(143), 2,
      sym_line_comment,
      sym_block_comment,
  [1009] = 5,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_string_token1,
    ACTIONS(149), 1,
      aux_sym_string_token2,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(143), 2,
      sym_line_comment,
      sym_block_comment,
  [1026] = 4,
    ACTIONS(151), 1,
      sym_pointer,
    STATE(62), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 2,
      anon_sym_le,
      anon_sym_be,
  [1041] = 5,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_string_token1,
    ACTIONS(157), 1,
      aux_sym_string_token2,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(143), 2,
      sym_line_comment,
      sym_block_comment,
  [1058] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1068] = 4,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1082] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1092] = 4,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1106] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1116] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1126] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1140] = 4,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1154] = 3,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(174), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1165] = 3,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1176] = 3,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1187] = 3,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(178), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1198] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 2,
      sym_pointer,
      sym_identifier,
  [1207] = 2,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1215] = 2,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1223] = 2,
    ACTIONS(186), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1231] = 2,
    ACTIONS(151), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1239] = 2,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1247] = 2,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1255] = 2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1263] = 2,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1271] = 2,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1279] = 2,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1287] = 2,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1295] = 2,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1303] = 2,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1311] = 2,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1319] = 2,
    ACTIONS(208), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1327] = 2,
    ACTIONS(210), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1335] = 2,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1343] = 2,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1351] = 2,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1359] = 2,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1367] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1375] = 2,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 323,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 389,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 476,
  [SMALL_STATE(19)] = 500,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 544,
  [SMALL_STATE(22)] = 567,
  [SMALL_STATE(23)] = 591,
  [SMALL_STATE(24)] = 615,
  [SMALL_STATE(25)] = 641,
  [SMALL_STATE(26)] = 665,
  [SMALL_STATE(27)] = 681,
  [SMALL_STATE(28)] = 705,
  [SMALL_STATE(29)] = 729,
  [SMALL_STATE(30)] = 753,
  [SMALL_STATE(31)] = 773,
  [SMALL_STATE(32)] = 797,
  [SMALL_STATE(33)] = 821,
  [SMALL_STATE(34)] = 838,
  [SMALL_STATE(35)] = 854,
  [SMALL_STATE(36)] = 870,
  [SMALL_STATE(37)] = 891,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 927,
  [SMALL_STATE(40)] = 945,
  [SMALL_STATE(41)] = 963,
  [SMALL_STATE(42)] = 977,
  [SMALL_STATE(43)] = 992,
  [SMALL_STATE(44)] = 1009,
  [SMALL_STATE(45)] = 1026,
  [SMALL_STATE(46)] = 1041,
  [SMALL_STATE(47)] = 1058,
  [SMALL_STATE(48)] = 1068,
  [SMALL_STATE(49)] = 1082,
  [SMALL_STATE(50)] = 1092,
  [SMALL_STATE(51)] = 1106,
  [SMALL_STATE(52)] = 1116,
  [SMALL_STATE(53)] = 1126,
  [SMALL_STATE(54)] = 1140,
  [SMALL_STATE(55)] = 1154,
  [SMALL_STATE(56)] = 1165,
  [SMALL_STATE(57)] = 1176,
  [SMALL_STATE(58)] = 1187,
  [SMALL_STATE(59)] = 1198,
  [SMALL_STATE(60)] = 1207,
  [SMALL_STATE(61)] = 1215,
  [SMALL_STATE(62)] = 1223,
  [SMALL_STATE(63)] = 1231,
  [SMALL_STATE(64)] = 1239,
  [SMALL_STATE(65)] = 1247,
  [SMALL_STATE(66)] = 1255,
  [SMALL_STATE(67)] = 1263,
  [SMALL_STATE(68)] = 1271,
  [SMALL_STATE(69)] = 1279,
  [SMALL_STATE(70)] = 1287,
  [SMALL_STATE(71)] = 1295,
  [SMALL_STATE(72)] = 1303,
  [SMALL_STATE(73)] = 1311,
  [SMALL_STATE(74)] = 1319,
  [SMALL_STATE(75)] = 1327,
  [SMALL_STATE(76)] = 1335,
  [SMALL_STATE(77)] = 1343,
  [SMALL_STATE(78)] = 1351,
  [SMALL_STATE(79)] = 1359,
  [SMALL_STATE(80)] = 1367,
  [SMALL_STATE(81)] = 1375,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 9, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 8, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 7, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_type, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_parameter, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 10, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp_statement, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_helium(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
