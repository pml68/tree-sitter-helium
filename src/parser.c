#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_MOV = 28,
  anon_sym_DOLLAR = 29,
  aux_sym_register_identifier_token1 = 30,
  aux_sym_register_identifier_token2 = 31,
  anon_sym_X = 32,
  anon_sym_Y = 33,
  anon_sym_F = 34,
  anon_sym_SPL = 35,
  anon_sym_SPH = 36,
  sym_decimal = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_string_token1 = 39,
  aux_sym_string_token2 = 40,
  sym_line_comment = 41,
  sym_block_comment = 42,
  sym_source_file = 43,
  sym_target_declaration = 44,
  sym__declaration = 45,
  sym_variable_declaration = 46,
  sym_array_declaration = 47,
  sym__expression = 48,
  sym_expression = 49,
  sym_binary_expression = 50,
  sym__type = 51,
  sym_normal_type = 52,
  sym_endian = 53,
  sym__value = 54,
  sym_function_declaration = 55,
  sym__statement = 56,
  sym_mov_statement = 57,
  sym_statement_parameter = 58,
  sym_register = 59,
  sym_register_identifier = 60,
  sym_value = 61,
  sym_string = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_array_declaration_repeat1 = 64,
  aux_sym_function_declaration_repeat1 = 65,
  aux_sym_string_repeat1 = 66,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 58,
        '#', 19,
        '$', 48,
        '%', 37,
        '&', 39,
        '(', 31,
        ')', 32,
        '*', 33,
        '+', 34,
        ',', 30,
        '-', 36,
        '/', 35,
        ':', 46,
        ';', 26,
        '<', 9,
        '=', 27,
        '>', 10,
        'F', 54,
        'M', 12,
        'S', 13,
        'X', 52,
        'Y', 53,
        '[', 28,
        '\\', 21,
        ']', 29,
        'b', 65,
        'i', 67,
        'u', 66,
        '|', 38,
        '8', 57,
        '9', 57,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'X') ADVANCE(52);
      if (lookahead == 'Y') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == '<') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(64);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 58,
        '#', 19,
        '$', 48,
        '%', 37,
        '&', 39,
        '(', 31,
        ')', 32,
        '*', 33,
        '+', 34,
        ',', 30,
        '-', 36,
        '/', 35,
        ':', 46,
        ';', 26,
        '<', 9,
        '=', 27,
        '>', 10,
        'F', 54,
        'M', 12,
        'S', 13,
        'X', 52,
        'Y', 53,
        '[', 28,
        ']', 29,
        'b', 65,
        'i', 67,
        'u', 66,
        '|', 38,
        '8', 57,
        '9', 57,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUNDtarget);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_MOV);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '8') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
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
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 0},
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
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
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
    [sym_source_file] = STATE(78),
    [sym_target_declaration] = STATE(2),
    [sym__declaration] = STATE(5),
    [sym_variable_declaration] = STATE(5),
    [sym_array_declaration] = STATE(5),
    [sym__type] = STATE(76),
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
  [0] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_normal_type,
    STATE(76), 1,
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
    STATE(4), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [31] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(38), 1,
      sym_normal_type,
    STATE(76), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(20), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(3), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [62] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_normal_type,
    STATE(76), 1,
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
    STATE(3), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [93] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_normal_type,
    STATE(76), 1,
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
    STATE(3), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [124] = 3,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 11,
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
  [145] = 7,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [174] = 3,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 11,
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
  [195] = 7,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [224] = 3,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(45), 11,
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
  [245] = 7,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [274] = 3,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 11,
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
  [295] = 4,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [318] = 3,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 11,
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
  [339] = 6,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_MOV,
    STATE(63), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(61), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [365] = 5,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(66), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(33), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [389] = 6,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_MOV,
    STATE(63), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(70), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [415] = 6,
    ACTIONS(72), 1,
      anon_sym_MOV,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(76), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [441] = 5,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [464] = 4,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [485] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(6), 2,
      sym__expression,
      sym_expression,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [509] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(7), 2,
      sym__expression,
      sym_expression,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [533] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(19), 2,
      sym__expression,
      sym_expression,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [557] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(11), 2,
      sym__expression,
      sym_expression,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [581] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(13), 2,
      sym__expression,
      sym_expression,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [605] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(16), 2,
      sym__expression,
      sym_expression,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [629] = 6,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(9), 2,
      sym__expression,
      sym_expression,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [653] = 7,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    STATE(29), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      sym_decimal,
      sym_identifier,
    STATE(8), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [679] = 4,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [699] = 3,
    STATE(49), 1,
      sym_register_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(92), 7,
      aux_sym_register_identifier_token1,
      aux_sym_register_identifier_token2,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [716] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_MOV,
    ACTIONS(96), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [733] = 3,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [749] = 3,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [765] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(108), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [781] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(112), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [797] = 3,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [813] = 3,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [829] = 6,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_pointer,
    STATE(58), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 2,
      anon_sym_le,
      anon_sym_be,
  [850] = 5,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(52), 2,
      sym_register,
      sym_value,
  [868] = 3,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(134), 4,
      anon_sym_le,
      anon_sym_be,
      sym_pointer,
      sym_identifier,
  [882] = 5,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    STATE(77), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(52), 2,
      sym_register,
      sym_value,
  [900] = 4,
    ACTIONS(140), 1,
      sym_pointer,
    STATE(66), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 2,
      anon_sym_le,
      anon_sym_be,
  [915] = 4,
    ACTIONS(142), 1,
      sym_pointer,
    STATE(70), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 2,
      anon_sym_le,
      anon_sym_be,
  [930] = 5,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      aux_sym_string_token1,
    ACTIONS(148), 1,
      aux_sym_string_token2,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(150), 2,
      sym_line_comment,
      sym_block_comment,
  [947] = 5,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_string_token1,
    ACTIONS(157), 1,
      aux_sym_string_token2,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(150), 2,
      sym_line_comment,
      sym_block_comment,
  [964] = 5,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      aux_sym_string_token1,
    ACTIONS(164), 1,
      aux_sym_string_token2,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(150), 2,
      sym_line_comment,
      sym_block_comment,
  [981] = 4,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [995] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1005] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1015] = 4,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1029] = 4,
    ACTIONS(66), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1043] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1053] = 4,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1067] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1077] = 3,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(181), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1088] = 3,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1099] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 2,
      sym_pointer,
      sym_identifier,
  [1108] = 3,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1119] = 2,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1127] = 2,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1135] = 2,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1143] = 2,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1151] = 2,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1159] = 2,
    ACTIONS(199), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1167] = 2,
    ACTIONS(201), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1175] = 2,
    ACTIONS(203), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1183] = 2,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1191] = 2,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1199] = 2,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1207] = 2,
    ACTIONS(140), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1215] = 2,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1223] = 2,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1231] = 2,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1239] = 2,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1247] = 2,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1255] = 2,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1263] = 2,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1271] = 2,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 245,
  [SMALL_STATE(12)] = 274,
  [SMALL_STATE(13)] = 295,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 339,
  [SMALL_STATE(16)] = 365,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 415,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 464,
  [SMALL_STATE(21)] = 485,
  [SMALL_STATE(22)] = 509,
  [SMALL_STATE(23)] = 533,
  [SMALL_STATE(24)] = 557,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 605,
  [SMALL_STATE(27)] = 629,
  [SMALL_STATE(28)] = 653,
  [SMALL_STATE(29)] = 679,
  [SMALL_STATE(30)] = 699,
  [SMALL_STATE(31)] = 716,
  [SMALL_STATE(32)] = 733,
  [SMALL_STATE(33)] = 749,
  [SMALL_STATE(34)] = 765,
  [SMALL_STATE(35)] = 781,
  [SMALL_STATE(36)] = 797,
  [SMALL_STATE(37)] = 813,
  [SMALL_STATE(38)] = 829,
  [SMALL_STATE(39)] = 850,
  [SMALL_STATE(40)] = 868,
  [SMALL_STATE(41)] = 882,
  [SMALL_STATE(42)] = 900,
  [SMALL_STATE(43)] = 915,
  [SMALL_STATE(44)] = 930,
  [SMALL_STATE(45)] = 947,
  [SMALL_STATE(46)] = 964,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 995,
  [SMALL_STATE(49)] = 1005,
  [SMALL_STATE(50)] = 1015,
  [SMALL_STATE(51)] = 1029,
  [SMALL_STATE(52)] = 1043,
  [SMALL_STATE(53)] = 1053,
  [SMALL_STATE(54)] = 1067,
  [SMALL_STATE(55)] = 1077,
  [SMALL_STATE(56)] = 1088,
  [SMALL_STATE(57)] = 1099,
  [SMALL_STATE(58)] = 1108,
  [SMALL_STATE(59)] = 1119,
  [SMALL_STATE(60)] = 1127,
  [SMALL_STATE(61)] = 1135,
  [SMALL_STATE(62)] = 1143,
  [SMALL_STATE(63)] = 1151,
  [SMALL_STATE(64)] = 1159,
  [SMALL_STATE(65)] = 1167,
  [SMALL_STATE(66)] = 1175,
  [SMALL_STATE(67)] = 1183,
  [SMALL_STATE(68)] = 1191,
  [SMALL_STATE(69)] = 1199,
  [SMALL_STATE(70)] = 1207,
  [SMALL_STATE(71)] = 1215,
  [SMALL_STATE(72)] = 1223,
  [SMALL_STATE(73)] = 1231,
  [SMALL_STATE(74)] = 1239,
  [SMALL_STATE(75)] = 1247,
  [SMALL_STATE(76)] = 1255,
  [SMALL_STATE(77)] = 1263,
  [SMALL_STATE(78)] = 1271,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 11, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 11, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 8, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 8, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 9, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 9, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 10, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 10, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_type, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_parameter, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
