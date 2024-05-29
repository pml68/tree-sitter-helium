#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  anon_sym_BNC = 30,
  anon_sym_MOV = 31,
  sym_hlt_statement = 32,
  anon_sym_DOLLAR = 33,
  aux_sym_register_identifier_token1 = 34,
  aux_sym_register_identifier_token2 = 35,
  anon_sym_X = 36,
  anon_sym_Y = 37,
  anon_sym_F = 38,
  anon_sym_SPL = 39,
  anon_sym_SPH = 40,
  sym_decimal = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_string_token1 = 43,
  aux_sym_string_token2 = 44,
  sym_line_comment = 45,
  sym_block_comment = 46,
  sym_source_file = 47,
  sym_target_declaration = 48,
  sym__declaration = 49,
  sym_variable_declaration = 50,
  sym_array_declaration = 51,
  sym__expression = 52,
  sym_expression = 53,
  sym_binary_expression = 54,
  sym__type = 55,
  sym_normal_type = 56,
  sym_endian = 57,
  sym__value = 58,
  sym_function_declaration = 59,
  sym__statement = 60,
  sym_add_statement = 61,
  sym_jmp_statement = 62,
  sym_bnc_statement = 63,
  sym_mov_statement = 64,
  sym_statement_parameter = 65,
  sym_register = 66,
  sym_register_identifier = 67,
  sym_value = 68,
  sym_string = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_array_declaration_repeat1 = 71,
  aux_sym_function_declaration_repeat1 = 72,
  aux_sym_string_repeat1 = 73,
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
  [anon_sym_BNC] = "BNC",
  [anon_sym_MOV] = "MOV",
  [sym_hlt_statement] = "hlt_statement",
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
  [sym_bnc_statement] = "bnc_statement",
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
  [anon_sym_BNC] = anon_sym_BNC,
  [anon_sym_MOV] = anon_sym_MOV,
  [sym_hlt_statement] = sym_hlt_statement,
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
  [sym_bnc_statement] = sym_bnc_statement,
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
  [anon_sym_BNC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOV] = {
    .visible = true,
    .named = false,
  },
  [sym_hlt_statement] = {
    .visible = true,
    .named = true,
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
  [sym_bnc_statement] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '"', 85,
        '#', 33,
        '$', 73,
        '%', 52,
        '&', 54,
        '(', 46,
        ')', 47,
        '*', 48,
        '+', 49,
        ',', 45,
        '-', 51,
        '/', 50,
        ':', 67,
        ';', 41,
        '<', 14,
        '=', 42,
        '>', 15,
        'A', 77,
        'B', 78,
        'C', 76,
        'F', 81,
        'H', 20,
        'J', 21,
        'M', 23,
        'S', 24,
        'X', 79,
        'Y', 80,
        '[', 43,
        '\\', 36,
        ']', 44,
        'b', 93,
        'i', 95,
        's', 97,
        'u', 94,
        '|', 53,
        '8', 84,
        '9', 84,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '/', 4,
        ';', 41,
        'A', 17,
        'B', 22,
        'H', 20,
        'J', 21,
        'M', 23,
        ']', 44,
        'b', 9,
        'i', 13,
        's', 35,
        'u', 10,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'X') ADVANCE(79);
      if (lookahead == 'Y') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '8') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'V') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(92);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '"', 85,
        '#', 33,
        '$', 73,
        '%', 52,
        '&', 54,
        '(', 46,
        ')', 47,
        '*', 48,
        '+', 49,
        ',', 45,
        '-', 51,
        '/', 50,
        ':', 67,
        ';', 41,
        '<', 14,
        '=', 42,
        '>', 15,
        'A', 77,
        'B', 78,
        'C', 76,
        'F', 81,
        'H', 20,
        'J', 21,
        'M', 23,
        'S', 24,
        'X', 79,
        'Y', 80,
        '[', 43,
        ']', 44,
        'b', 93,
        'i', 95,
        's', 97,
        'u', 94,
        '|', 53,
        '8', 84,
        '9', 84,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_POUNDtarget);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_b1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BNC);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_MOV);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_hlt_statement);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '8') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
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
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
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
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
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
    [anon_sym_BNC] = ACTIONS(1),
    [anon_sym_MOV] = ACTIONS(1),
    [sym_hlt_statement] = ACTIONS(1),
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
    [sym_source_file] = STATE(83),
    [sym_target_declaration] = STATE(7),
    [sym__declaration] = STATE(8),
    [sym_variable_declaration] = STATE(82),
    [sym_array_declaration] = STATE(82),
    [sym__type] = STATE(81),
    [sym_normal_type] = STATE(36),
    [sym_function_declaration] = STATE(82),
    [aux_sym_source_file_repeat1] = STATE(8),
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
  [0] = 12,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      anon_sym_ADD,
    ACTIONS(21), 1,
      anon_sym_JMP,
    ACTIONS(24), 1,
      anon_sym_BNC,
    ACTIONS(27), 1,
      anon_sym_MOV,
    ACTIONS(30), 1,
      sym_hlt_statement,
    STATE(36), 1,
      sym_normal_type,
    STATE(81), 1,
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
    STATE(75), 6,
      sym_variable_declaration,
      sym_array_declaration,
      sym_add_statement,
      sym_jmp_statement,
      sym_bnc_statement,
      sym_mov_statement,
  [48] = 12,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_ADD,
    ACTIONS(39), 1,
      anon_sym_JMP,
    ACTIONS(41), 1,
      anon_sym_BNC,
    ACTIONS(43), 1,
      anon_sym_MOV,
    ACTIONS(45), 1,
      sym_hlt_statement,
    STATE(36), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(2), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(35), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(75), 6,
      sym_variable_declaration,
      sym_array_declaration,
      sym_add_statement,
      sym_jmp_statement,
      sym_bnc_statement,
      sym_mov_statement,
  [96] = 12,
    ACTIONS(37), 1,
      anon_sym_ADD,
    ACTIONS(39), 1,
      anon_sym_JMP,
    ACTIONS(41), 1,
      anon_sym_BNC,
    ACTIONS(43), 1,
      anon_sym_MOV,
    ACTIONS(45), 1,
      sym_hlt_statement,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(35), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
    STATE(75), 6,
      sym_variable_declaration,
      sym_array_declaration,
      sym_add_statement,
      sym_jmp_statement,
      sym_bnc_statement,
      sym_mov_statement,
  [144] = 8,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(36), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(82), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(54), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [177] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(82), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [210] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(6), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(82), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [243] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_normal_type,
    STATE(81), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym__declaration,
      aux_sym_source_file_repeat1,
    STATE(82), 3,
      sym_variable_declaration,
      sym_array_declaration,
      sym_function_declaration,
    ACTIONS(11), 5,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
  [276] = 4,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 6,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [300] = 3,
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
  [322] = 3,
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
  [344] = 3,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 12,
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
  [366] = 3,
    ACTIONS(79), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 12,
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
  [388] = 3,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 12,
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
  [410] = 7,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [439] = 7,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [468] = 7,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [497] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 11,
      anon_sym_SEMI,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      anon_sym_ADD,
      anon_sym_JMP,
      anon_sym_BNC,
      anon_sym_MOV,
      sym_hlt_statement,
  [515] = 5,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [539] = 5,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [562] = 5,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [585] = 4,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [606] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(15), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [630] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(12), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [654] = 4,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 6,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
  [674] = 7,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_expression,
    STATE(25), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [700] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(9), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [724] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(19), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [748] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(17), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [772] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(16), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [796] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(20), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [820] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      sym_decimal,
      sym_identifier,
    STATE(21), 2,
      sym__expression,
      sym_expression,
    STATE(10), 3,
      sym_binary_expression,
      sym__value,
      sym_string,
  [844] = 3,
    STATE(53), 1,
      sym_register_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 7,
      aux_sym_register_identifier_token1,
      aux_sym_register_identifier_token2,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [861] = 3,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [877] = 3,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_str,
      sym_identifier,
  [893] = 6,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      sym_pointer,
    STATE(57), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 2,
      anon_sym_le,
      anon_sym_be,
  [914] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [932] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [950] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [968] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 4,
      anon_sym_le,
      anon_sym_be,
      sym_pointer,
      sym_identifier,
  [982] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(37), 1,
      sym_statement_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(47), 2,
      sym_register,
      sym_value,
  [1000] = 5,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym_string_token1,
    ACTIONS(146), 1,
      aux_sym_string_token2,
    STATE(42), 1,
      aux_sym_string_repeat1,
    ACTIONS(149), 2,
      sym_line_comment,
      sym_block_comment,
  [1017] = 4,
    ACTIONS(153), 1,
      sym_pointer,
    STATE(67), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_le,
      anon_sym_be,
  [1032] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_string_token1,
    ACTIONS(159), 1,
      aux_sym_string_token2,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(149), 2,
      sym_line_comment,
      sym_block_comment,
  [1049] = 5,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      aux_sym_string_token1,
    ACTIONS(165), 1,
      aux_sym_string_token2,
    STATE(42), 1,
      aux_sym_string_repeat1,
    ACTIONS(149), 2,
      sym_line_comment,
      sym_block_comment,
  [1066] = 4,
    ACTIONS(167), 1,
      sym_pointer,
    STATE(63), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_le,
      anon_sym_be,
  [1081] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1091] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1101] = 4,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1115] = 4,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1129] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1143] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1153] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
  [1163] = 4,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_array_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1177] = 3,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1188] = 3,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1199] = 3,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1210] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    ACTIONS(188), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1221] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 2,
      sym_pointer,
      sym_identifier,
  [1230] = 2,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1238] = 2,
    ACTIONS(194), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1246] = 2,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1254] = 2,
    ACTIONS(198), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1262] = 2,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1270] = 2,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1278] = 2,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1286] = 2,
    ACTIONS(167), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1294] = 2,
    ACTIONS(206), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1302] = 2,
    ACTIONS(208), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1310] = 2,
    ACTIONS(210), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1318] = 2,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1326] = 2,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1334] = 2,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1342] = 2,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1350] = 2,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1358] = 2,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1366] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1374] = 2,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1382] = 2,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1390] = 2,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1398] = 2,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1406] = 2,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1414] = 2,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 276,
  [SMALL_STATE(10)] = 300,
  [SMALL_STATE(11)] = 322,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 410,
  [SMALL_STATE(16)] = 439,
  [SMALL_STATE(17)] = 468,
  [SMALL_STATE(18)] = 497,
  [SMALL_STATE(19)] = 515,
  [SMALL_STATE(20)] = 539,
  [SMALL_STATE(21)] = 562,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 606,
  [SMALL_STATE(24)] = 630,
  [SMALL_STATE(25)] = 654,
  [SMALL_STATE(26)] = 674,
  [SMALL_STATE(27)] = 700,
  [SMALL_STATE(28)] = 724,
  [SMALL_STATE(29)] = 748,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 796,
  [SMALL_STATE(32)] = 820,
  [SMALL_STATE(33)] = 844,
  [SMALL_STATE(34)] = 861,
  [SMALL_STATE(35)] = 877,
  [SMALL_STATE(36)] = 893,
  [SMALL_STATE(37)] = 914,
  [SMALL_STATE(38)] = 932,
  [SMALL_STATE(39)] = 950,
  [SMALL_STATE(40)] = 968,
  [SMALL_STATE(41)] = 982,
  [SMALL_STATE(42)] = 1000,
  [SMALL_STATE(43)] = 1017,
  [SMALL_STATE(44)] = 1032,
  [SMALL_STATE(45)] = 1049,
  [SMALL_STATE(46)] = 1066,
  [SMALL_STATE(47)] = 1081,
  [SMALL_STATE(48)] = 1091,
  [SMALL_STATE(49)] = 1101,
  [SMALL_STATE(50)] = 1115,
  [SMALL_STATE(51)] = 1129,
  [SMALL_STATE(52)] = 1143,
  [SMALL_STATE(53)] = 1153,
  [SMALL_STATE(54)] = 1163,
  [SMALL_STATE(55)] = 1177,
  [SMALL_STATE(56)] = 1188,
  [SMALL_STATE(57)] = 1199,
  [SMALL_STATE(58)] = 1210,
  [SMALL_STATE(59)] = 1221,
  [SMALL_STATE(60)] = 1230,
  [SMALL_STATE(61)] = 1238,
  [SMALL_STATE(62)] = 1246,
  [SMALL_STATE(63)] = 1254,
  [SMALL_STATE(64)] = 1262,
  [SMALL_STATE(65)] = 1270,
  [SMALL_STATE(66)] = 1278,
  [SMALL_STATE(67)] = 1286,
  [SMALL_STATE(68)] = 1294,
  [SMALL_STATE(69)] = 1302,
  [SMALL_STATE(70)] = 1310,
  [SMALL_STATE(71)] = 1318,
  [SMALL_STATE(72)] = 1326,
  [SMALL_STATE(73)] = 1334,
  [SMALL_STATE(74)] = 1342,
  [SMALL_STATE(75)] = 1350,
  [SMALL_STATE(76)] = 1358,
  [SMALL_STATE(77)] = 1366,
  [SMALL_STATE(78)] = 1374,
  [SMALL_STATE(79)] = 1382,
  [SMALL_STATE(80)] = 1390,
  [SMALL_STATE(81)] = 1398,
  [SMALL_STATE(82)] = 1406,
  [SMALL_STATE(83)] = 1414,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 9, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 8, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 7, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_type, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_parameter, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 10, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp_statement, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bnc_statement, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
