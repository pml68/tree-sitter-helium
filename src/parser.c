#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_u8 = 4,
  anon_sym_i8 = 5,
  anon_sym_b1 = 6,
  anon_sym_ptr = 7,
  anon_sym_COLON = 8,
  anon_sym_mov = 9,
  anon_sym_COMMA = 10,
  anon_sym_DOLLAR = 11,
  aux_sym_register_identifier_token1 = 12,
  aux_sym_register_identifier_token2 = 13,
  anon_sym_X = 14,
  anon_sym_Y = 15,
  anon_sym_F = 16,
  anon_sym_SPL = 17,
  anon_sym_SPH = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  sym_decimal = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  sym_escape_sequence = 24,
  sym_line_comment = 25,
  sym_block_comment = 26,
  sym_source_file = 27,
  sym__declaration = 28,
  sym_variable_declaration = 29,
  sym__type = 30,
  sym_normal_type = 31,
  sym_pointer_type = 32,
  sym__value = 33,
  sym_function_declaration = 34,
  sym__statement = 35,
  sym_mov_statement = 36,
  sym_register = 37,
  sym_register_identifier = 38,
  sym_value = 39,
  sym_string = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_function_declaration_repeat1 = 42,
  aux_sym_string_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_u8] = "u8",
  [anon_sym_i8] = "i8",
  [anon_sym_b1] = "b1",
  [anon_sym_ptr] = "ptr",
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
  [sym_escape_sequence] = "escape_sequence",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym__type] = "_type",
  [sym_normal_type] = "normal_type",
  [sym_pointer_type] = "pointer_type",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_b1] = anon_sym_b1,
  [anon_sym_ptr] = anon_sym_ptr,
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
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__type] = sym__type,
  [sym_normal_type] = sym_normal_type,
  [sym_pointer_type] = sym_pointer_type,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
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
  [sym_escape_sequence] = {
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
  [sym_pointer_type] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '"', 37,
        '$', 21,
        ',', 20,
        '/', 4,
        ':', 19,
        ';', 15,
        '=', 14,
        'F', 27,
        'S', 9,
        'X', 25,
        'Y', 26,
        '[', 30,
        '\\', 10,
        ']', 31,
        'b', 32,
        'i', 33,
        'u', 34,
        '8', 36,
        '9', 36,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'X') ADVANCE(25);
      if (lookahead == 'Y') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'H') ADVANCE(29);
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(44);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '"', 37,
        '$', 21,
        ',', 20,
        '/', 4,
        ':', 19,
        ';', 15,
        '=', 14,
        'F', 27,
        'S', 9,
        'X', 25,
        'Y', 26,
        '[', 30,
        ']', 31,
        'b', 32,
        'i', 33,
        'u', 34,
        '8', 36,
        '9', 36,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
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
      if (lookahead == 'm') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_ptr);
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
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_b1] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
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
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym__type] = STATE(31),
    [sym_normal_type] = STATE(17),
    [sym_pointer_type] = STATE(31),
    [sym_function_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(9),
    [anon_sym_i8] = ACTIONS(9),
    [anon_sym_b1] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_normal_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 2,
      sym__type,
      sym_pointer_type,
    ACTIONS(9), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(3), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [29] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(17), 1,
      sym_normal_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 2,
      sym__type,
      sym_pointer_type,
    ACTIONS(18), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(3), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [58] = 6,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_mov,
    STATE(22), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(4), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(23), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [82] = 6,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_mov,
    STATE(22), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(4), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(30), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [106] = 6,
    ACTIONS(32), 1,
      anon_sym_mov,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_mov_statement,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym__statement,
      aux_sym_function_declaration_repeat1,
    ACTIONS(36), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [130] = 3,
    STATE(23), 1,
      sym_register_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(38), 7,
      aux_sym_register_identifier_token1,
      aux_sym_register_identifier_token2,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [147] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(42), 5,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_mov,
      sym_identifier,
  [162] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(46), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
  [176] = 5,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      aux_sym_string_token1,
    ACTIONS(52), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym_string_repeat1,
    ACTIONS(54), 2,
      sym_line_comment,
      sym_block_comment,
  [193] = 5,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      aux_sym_string_token1,
    ACTIONS(61), 1,
      sym_escape_sequence,
    STATE(11), 1,
      aux_sym_string_repeat1,
    ACTIONS(54), 2,
      sym_line_comment,
      sym_block_comment,
  [210] = 4,
    ACTIONS(64), 1,
      sym_decimal,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(24), 2,
      sym__value,
      sym_string,
  [225] = 5,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym_string_token1,
    ACTIONS(72), 1,
      sym_escape_sequence,
    STATE(10), 1,
      aux_sym_string_repeat1,
    ACTIONS(54), 2,
      sym_line_comment,
      sym_block_comment,
  [242] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 2,
      anon_sym_ptr,
      sym_identifier,
  [251] = 3,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [262] = 3,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [273] = 3,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_ptr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [284] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [292] = 2,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [300] = 2,
    ACTIONS(88), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [308] = 2,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [316] = 2,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [324] = 2,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [332] = 2,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [340] = 2,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [348] = 2,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [356] = 2,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [364] = 2,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [372] = 2,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [380] = 2,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [388] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [396] = 2,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [404] = 2,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 193,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 292,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 348,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 372,
  [SMALL_STATE(30)] = 380,
  [SMALL_STATE(31)] = 388,
  [SMALL_STATE(32)] = 396,
  [SMALL_STATE(33)] = 404,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
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
