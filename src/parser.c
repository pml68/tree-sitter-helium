#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_POUNDtarget = 2,
  anon_sym_SEMI = 3,
  anon_sym_EQ = 4,
  anon_sym_u8 = 5,
  anon_sym_i8 = 6,
  anon_sym_b1 = 7,
  anon_sym_le = 8,
  anon_sym_be = 9,
  sym_pointer = 10,
  anon_sym_COLON = 11,
  anon_sym_mov = 12,
  anon_sym_COMMA = 13,
  anon_sym_DOLLAR = 14,
  aux_sym_register_identifier_token1 = 15,
  aux_sym_register_identifier_token2 = 16,
  anon_sym_X = 17,
  anon_sym_Y = 18,
  anon_sym_F = 19,
  anon_sym_SPL = 20,
  anon_sym_SPH = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym_decimal = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_token1 = 26,
  aux_sym_string_token2 = 27,
  sym_line_comment = 28,
  sym_block_comment = 29,
  sym_source_file = 30,
  sym_target_declaration = 31,
  sym__declaration = 32,
  sym_variable_declaration = 33,
  sym__type = 34,
  sym_normal_type = 35,
  sym_endian = 36,
  sym__value = 37,
  sym_function_declaration = 38,
  sym__statement = 39,
  sym_mov_statement = 40,
  sym_register = 41,
  sym_register_identifier = 42,
  sym_value = 43,
  sym_string = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_function_declaration_repeat1 = 46,
  aux_sym_string_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_POUNDtarget] = "#target",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_u8] = "u8",
  [anon_sym_i8] = "i8",
  [anon_sym_b1] = "b1",
  [anon_sym_le] = "le",
  [anon_sym_be] = "be",
  [sym_pointer] = "pointer",
  [anon_sym_COLON] = ":",
  [anon_sym_mov] = "mov",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_register_identifier_token1] = "register_identifier_token1",
  [aux_sym_register_identifier_token2] = "register_identifier_token2",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_F] = "F",
  [anon_sym_SPL] = "SPL",
  [anon_sym_SPH] = "SPH",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym__type] = "_type",
  [sym_normal_type] = "normal_type",
  [sym_endian] = "endian",
  [sym__value] = "_value",
  [sym_function_declaration] = "function_declaration",
  [sym__statement] = "_statement",
  [sym_mov_statement] = "mov_statement",
  [sym_register] = "register",
  [sym_register_identifier] = "register_identifier",
  [sym_value] = "value",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUNDtarget] = anon_sym_POUNDtarget,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_b1] = anon_sym_b1,
  [anon_sym_le] = anon_sym_le,
  [anon_sym_be] = anon_sym_be,
  [sym_pointer] = sym_pointer,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_register_identifier_token1] = aux_sym_register_identifier_token1,
  [aux_sym_register_identifier_token2] = aux_sym_register_identifier_token2,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_SPL] = anon_sym_SPL,
  [anon_sym_SPH] = anon_sym_SPH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym__type] = sym__type,
  [sym_normal_type] = sym_normal_type,
  [sym_endian] = sym_endian,
  [sym__value] = sym__value,
  [sym_function_declaration] = sym_function_declaration,
  [sym__statement] = sym__statement,
  [sym_mov_statement] = sym_mov_statement,
  [sym_register] = sym_register,
  [sym_register_identifier] = sym_register_identifier,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_u8] = {
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
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 40,
        '#', 14,
        '$', 28,
        ',', 27,
        '/', 4,
        ':', 26,
        ';', 21,
        '=', 22,
        'F', 34,
        'S', 9,
        'X', 32,
        'Y', 33,
        '[', 37,
        '\\', 16,
        ']', 38,
        'b', 48,
        'i', 49,
        'u', 50,
        '8', 39,
        '9', 39,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(30);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'X') ADVANCE(32);
      if (lookahead == 'Y') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 40,
        '#', 14,
        '$', 28,
        ',', 27,
        '/', 4,
        ':', 26,
        ';', 21,
        '=', 22,
        'F', 34,
        'S', 9,
        'X', 32,
        'Y', 33,
        '[', 37,
        ']', 38,
        'b', 48,
        'i', 49,
        'u', 50,
        '8', 39,
        '9', 39,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(30);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUNDtarget);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
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
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(4);
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
      if (lookahead == 'o') ADVANCE(7);
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
      if (lookahead == 'v') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_pointer);
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
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_POUNDtarget] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_b1] = ACTIONS(1),
    [anon_sym_le] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [sym_pointer] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_register_identifier_token1] = ACTIONS(1),
    [aux_sym_register_identifier_token2] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_SPL] = ACTIONS(1),
    [anon_sym_SPH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_target_declaration] = STATE(3),
    [sym__declaration] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym__type] = STATE(29),
    [sym_normal_type] = STATE(12),
    [sym_function_declaration] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_POUNDtarget] = ACTIONS(9),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_b1] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(12), 1,
      sym_normal_type,
    STATE(29), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(18), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(2), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [28] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_normal_type,
    STATE(29), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(5), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [56] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_normal_type,
    STATE(29), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(2), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [84] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_normal_type,
    STATE(29), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(2), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [112] = 6,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_mov,
    STATE(25), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(6), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(27), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [136] = 6,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_mov,
    STATE(25), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(6), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(34), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [160] = 6,
    ACTIONS(36), 1,
      anon_sym_mov,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(40), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [184] = 3,
    STATE(35), 1,
      sym_register_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(42), 7,
      aux_sym_register_identifier_token1,
      aux_sym_register_identifier_token2,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [201] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(46), 5,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_mov,
      sym_identifier,
  [216] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(50), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
  [230] = 5,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_pointer,
    STATE(20), 1,
      sym_endian,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(54), 2,
      anon_sym_le,
      anon_sym_be,
  [248] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(60), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
  [262] = 5,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(66), 1,
      aux_sym_string_token2,
    STATE(17), 1,
      aux_sym_string_repeat1,
    ACTIONS(68), 2,
      sym_line_comment,
      sym_block_comment,
  [279] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_string_token1,
    ACTIONS(74), 1,
      aux_sym_string_token2,
    STATE(14), 1,
      aux_sym_string_repeat1,
    ACTIONS(68), 2,
      sym_line_comment,
      sym_block_comment,
  [296] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(76), 4,
      anon_sym_le,
      anon_sym_be,
      sym_pointer,
      sym_identifier,
  [307] = 5,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_string_token1,
    ACTIONS(83), 1,
      aux_sym_string_token2,
    STATE(17), 1,
      aux_sym_string_repeat1,
    ACTIONS(68), 2,
      sym_line_comment,
      sym_block_comment,
  [324] = 4,
    ACTIONS(86), 1,
      sym_decimal,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym__value,
      sym_string,
  [339] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 2,
      sym_pointer,
      sym_identifier,
  [348] = 3,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      sym_pointer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [359] = 3,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [370] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [381] = 3,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [392] = 2,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [400] = 2,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [408] = 2,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [416] = 2,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [424] = 2,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [432] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [440] = 2,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [448] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [456] = 2,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [464] = 2,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [472] = 2,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [480] = 2,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [488] = 2,
    ACTIONS(124), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [496] = 2,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [504] = 2,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [512] = 2,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [520] = 2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [528] = 2,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 262,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 307,
  [SMALL_STATE(18)] = 324,
  [SMALL_STATE(19)] = 339,
  [SMALL_STATE(20)] = 348,
  [SMALL_STATE(21)] = 359,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 381,
  [SMALL_STATE(24)] = 392,
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 408,
  [SMALL_STATE(27)] = 416,
  [SMALL_STATE(28)] = 424,
  [SMALL_STATE(29)] = 432,
  [SMALL_STATE(30)] = 440,
  [SMALL_STATE(31)] = 448,
  [SMALL_STATE(32)] = 456,
  [SMALL_STATE(33)] = 464,
  [SMALL_STATE(34)] = 472,
  [SMALL_STATE(35)] = 480,
  [SMALL_STATE(36)] = 488,
  [SMALL_STATE(37)] = 496,
  [SMALL_STATE(38)] = 504,
  [SMALL_STATE(39)] = 512,
  [SMALL_STATE(40)] = 520,
  [SMALL_STATE(41)] = 528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_declaration, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endian, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
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
