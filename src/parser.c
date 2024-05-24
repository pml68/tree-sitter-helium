#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '"', 65,
        '#', 22,
        '$', 54,
        '%', 41,
        '&', 43,
        '(', 35,
        ')', 36,
        '*', 37,
        '+', 38,
        ',', 34,
        '-', 40,
        '/', 39,
        ':', 50,
        ';', 30,
        '<', 8,
        '=', 31,
        '>', 9,
        'A', 58,
        'F', 61,
        'J', 13,
        'M', 14,
        'S', 15,
        'X', 59,
        'Y', 60,
        '[', 32,
        '\\', 24,
        ']', 33,
        'b', 73,
        'i', 75,
        'u', 74,
        '|', 42,
        '8', 64,
        '9', 64,
        'B', 57,
        'C', 57,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == 'Y') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'H') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'V') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(72);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '"', 65,
        '#', 22,
        '$', 54,
        '%', 41,
        '&', 43,
        '(', 35,
        ')', 36,
        '*', 37,
        '+', 38,
        ',', 34,
        '-', 40,
        '/', 39,
        ':', 50,
        ';', 30,
        '<', 8,
        '=', 31,
        '>', 9,
        'A', 58,
        'F', 61,
        'J', 13,
        'M', 14,
        'S', 15,
        'X', 59,
        'Y', 60,
        '[', 32,
        ']', 33,
        'b', 73,
        'i', 75,
        'u', 74,
        '|', 42,
        '8', 64,
        '9', 64,
        'B', 57,
        'C', 57,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '"', 65,
        '(', 35,
        '/', 3,
        'A', 10,
        'J', 13,
        'M', 14,
        ']', 33,
        'b', 73,
        'i', 75,
        'u', 74,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUNDtarget);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_MOV);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '8') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
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
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_pointer);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
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
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
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
    [sym_source_file] = STATE(63),
    [sym_target_declaration] = STATE(7),
    [sym__declaration] = STATE(5),
    [sym_variable_declaration] = STATE(5),
    [sym_array_declaration] = STATE(5),
    [sym__type] = STATE(81),
    [sym_normal_type] = STATE(38),
    [sym_function_declaration] = STATE(5),
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
  [0] = 8,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_ADD,
    ACTIONS(20), 1,
      anon_sym_JMP,
    ACTIONS(23), 1,
      anon_sym_MOV,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    STATE(82), 3,
      sym_add_statement,
      sym_jmp_statement,
      sym_mov_statement,
    ACTIONS(15), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [34] = 8,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_ADD,
    ACTIONS(32), 1,
      anon_sym_JMP,
    ACTIONS(34), 1,
      anon_sym_MOV,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    STATE(82), 3,
      sym_add_statement,
      sym_jmp_statement,
      sym_mov_statement,
    ACTIONS(28), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [68] = 8,
    ACTIONS(30), 1,
      anon_sym_ADD,
    ACTIONS(32), 1,
      anon_sym_JMP,
    ACTIONS(34), 1,
      anon_sym_MOV,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    STATE(82), 3,
      sym_add_statement,
      sym_jmp_statement,
      sym_mov_statement,
    ACTIONS(38), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [102] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(6), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [133] = 7,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(38), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(6), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [164] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(8), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [195] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(6), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [226] = 3,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(52), 11,
      anon_sym_SEMI,
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
  [247] = 3,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(56), 11,
      anon_sym_SEMI,
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
  [268] = 7,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [297] = 7,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [326] = 7,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [355] = 4,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(52), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [378] = 3,
    ACTIONS(76), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 11,
      anon_sym_SEMI,
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
  [399] = 3,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(78), 11,
      anon_sym_SEMI,
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
  [420] = 3,
    ACTIONS(84), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 11,
      anon_sym_SEMI,
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
  [441] = 5,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(86), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(64), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [465] = 4,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [486] = 5,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [509] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_ADD,
      anon_sym_JMP,
      anon_sym_MOV,
    ACTIONS(98), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [528] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(9), 2,
      sym__expression,
      sym_expression,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [552] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(12), 2,
      sym__expression,
      sym_expression,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [576] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(14), 2,
      sym__expression,
      sym_expression,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [600] = 4,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [620] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(13), 2,
      sym__expression,
      sym_expression,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [644] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(20), 2,
      sym__expression,
      sym_expression,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [668] = 7,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_expression,
    STATE(25), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [694] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(11), 2,
      sym__expression,
      sym_expression,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [718] = 6,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      sym_decimal,
      sym_identifier,
    STATE(18), 2,
      sym__expression,
      sym_expression,
    STATE(17), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [742] = 3,
    STATE(50), 1,
      sym_register_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 7,
      aux_sym_register_identifier_token1,
      aux_sym_register_identifier_token2,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [759] = 3,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [775] = 3,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [791] = 3,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [807] = 3,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [823] = 3,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [839] = 3,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [855] = 6,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      sym_pointer,
    STATE(61), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 2,
      anon_sym_le,
      anon_sym_be,
  [876] = 5,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 2,
      sym_register,
      sym_value,
  [894] = 5,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 2,
      sym_register,
      sym_value,
  [912] = 5,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 2,
      sym_register,
      sym_value,
  [930] = 3,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 4,
      anon_sym_le,
      anon_sym_be,
      sym_pointer,
      sym_identifier,
  [944] = 5,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 2,
      sym_register,
      sym_value,
  [962] = 5,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_string_token1,
    ACTIONS(152), 1,
      aux_sym_string_token2,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(154), 2,
      sym_line_comment,
      sym_block_comment,
  [979] = 5,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym_string_token1,
    ACTIONS(161), 1,
      aux_sym_string_token2,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(154), 2,
      sym_line_comment,
      sym_block_comment,
  [996] = 5,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      aux_sym_string_token1,
    ACTIONS(168), 1,
      aux_sym_string_token2,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(154), 2,
      sym_line_comment,
      sym_block_comment,
  [1013] = 4,
    ACTIONS(172), 1,
      sym_pointer,
    STATE(72), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 2,
      anon_sym_le,
      anon_sym_be,
  [1028] = 4,
    ACTIONS(174), 1,
      sym_pointer,
    STATE(70), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 2,
      anon_sym_le,
      anon_sym_be,
  [1043] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1053] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1063] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1073] = 4,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1087] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1097] = 4,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1111] = 4,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1125] = 4,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1139] = 3,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1150] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      sym_pointer,
      sym_identifier,
  [1159] = 3,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1170] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1181] = 3,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1192] = 2,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1200] = 2,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1208] = 2,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1216] = 2,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1224] = 2,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1232] = 2,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1240] = 2,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1248] = 2,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1256] = 2,
    ACTIONS(215), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1264] = 2,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1272] = 2,
    ACTIONS(174), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1280] = 2,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1288] = 2,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1296] = 2,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1304] = 2,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1312] = 2,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1320] = 2,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1328] = 2,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1336] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1344] = 2,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1352] = 2,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1360] = 2,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1368] = 2,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 133,
  [SMALL_STATE(7)] = 164,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 247,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 378,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 420,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 465,
  [SMALL_STATE(20)] = 486,
  [SMALL_STATE(21)] = 509,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 552,
  [SMALL_STATE(24)] = 576,
  [SMALL_STATE(25)] = 600,
  [SMALL_STATE(26)] = 620,
  [SMALL_STATE(27)] = 644,
  [SMALL_STATE(28)] = 668,
  [SMALL_STATE(29)] = 694,
  [SMALL_STATE(30)] = 718,
  [SMALL_STATE(31)] = 742,
  [SMALL_STATE(32)] = 759,
  [SMALL_STATE(33)] = 775,
  [SMALL_STATE(34)] = 791,
  [SMALL_STATE(35)] = 807,
  [SMALL_STATE(36)] = 823,
  [SMALL_STATE(37)] = 839,
  [SMALL_STATE(38)] = 855,
  [SMALL_STATE(39)] = 876,
  [SMALL_STATE(40)] = 894,
  [SMALL_STATE(41)] = 912,
  [SMALL_STATE(42)] = 930,
  [SMALL_STATE(43)] = 944,
  [SMALL_STATE(44)] = 962,
  [SMALL_STATE(45)] = 979,
  [SMALL_STATE(46)] = 996,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1028,
  [SMALL_STATE(49)] = 1043,
  [SMALL_STATE(50)] = 1053,
  [SMALL_STATE(51)] = 1063,
  [SMALL_STATE(52)] = 1073,
  [SMALL_STATE(53)] = 1087,
  [SMALL_STATE(54)] = 1097,
  [SMALL_STATE(55)] = 1111,
  [SMALL_STATE(56)] = 1125,
  [SMALL_STATE(57)] = 1139,
  [SMALL_STATE(58)] = 1150,
  [SMALL_STATE(59)] = 1159,
  [SMALL_STATE(60)] = 1170,
  [SMALL_STATE(61)] = 1181,
  [SMALL_STATE(62)] = 1192,
  [SMALL_STATE(63)] = 1200,
  [SMALL_STATE(64)] = 1208,
  [SMALL_STATE(65)] = 1216,
  [SMALL_STATE(66)] = 1224,
  [SMALL_STATE(67)] = 1232,
  [SMALL_STATE(68)] = 1240,
  [SMALL_STATE(69)] = 1248,
  [SMALL_STATE(70)] = 1256,
  [SMALL_STATE(71)] = 1264,
  [SMALL_STATE(72)] = 1272,
  [SMALL_STATE(73)] = 1280,
  [SMALL_STATE(74)] = 1288,
  [SMALL_STATE(75)] = 1296,
  [SMALL_STATE(76)] = 1304,
  [SMALL_STATE(77)] = 1312,
  [SMALL_STATE(78)] = 1320,
  [SMALL_STATE(79)] = 1328,
  [SMALL_STATE(80)] = 1336,
  [SMALL_STATE(81)] = 1344,
  [SMALL_STATE(82)] = 1352,
  [SMALL_STATE(83)] = 1360,
  [SMALL_STATE(84)] = 1368,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 11, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 11, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 8, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 8, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 10, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 10, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 9, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 9, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_type, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_parameter, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp_statement, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
