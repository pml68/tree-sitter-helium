#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_SEMI = 2,
  anon_sym_u8 = 3,
  anon_sym_i8 = 4,
  anon_sym_b1 = 5,
  anon_sym_ptr = 6,
  anon_sym_COLON = 7,
  anon_sym_mov = 8,
  anon_sym_COMMA = 9,
  anon_sym_DOLLAR = 10,
  aux_sym_register_identifier_token1 = 11,
  aux_sym_register_identifier_token2 = 12,
  anon_sym_X = 13,
  anon_sym_Y = 14,
  anon_sym_F = 15,
  anon_sym_SPL = 16,
  anon_sym_SPH = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_identifier = 20,
  sym_number = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  sym_source_file = 24,
  sym__declaration = 25,
  sym_variable_declaration = 26,
  sym__type = 27,
  sym_normal_type = 28,
  sym_pointer_type = 29,
  sym__value = 30,
  sym_function_declaration = 31,
  sym__statement = 32,
  sym_mov_statement = 33,
  sym_register = 34,
  sym_register_identifier = 35,
  sym_value = 36,
  sym_string = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_function_declaration_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
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
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '"', 37,
        '$', 17,
        ',', 16,
        ':', 14,
        ';', 9,
        '=', 8,
        'F', 23,
        'S', 2,
        'X', 21,
        'Y', 22,
        '[', 26,
        ']', 27,
        'b', 28,
        'i', 29,
        'm', 31,
        'p', 33,
        'u', 30,
        '8', 36,
        '9', 36,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(19);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == 'P') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'p') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(2);
      if (lookahead == 'X') ADVANCE(21);
      if (lookahead == 'Y') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_mov);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_register_identifier_token2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym__type] = STATE(15),
    [sym_normal_type] = STATE(14),
    [sym_pointer_type] = STATE(15),
    [sym_function_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_b1] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_normal_type,
    STATE(15), 2,
      sym__type,
      sym_pointer_type,
    ACTIONS(5), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(3), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [25] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      sym_identifier,
    STATE(14), 1,
      sym_normal_type,
    STATE(15), 2,
      sym__type,
      sym_pointer_type,
    ACTIONS(13), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
    STATE(3), 4,
      sym__declaration,
      sym_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [50] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_mov,
    STATE(4), 1,
      aux_sym_function_declaration_repeat1,
    STATE(24), 2,
      sym__statement,
      sym_mov_statement,
    ACTIONS(21), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [70] = 5,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_mov,
    STATE(4), 1,
      aux_sym_function_declaration_repeat1,
    STATE(24), 2,
      sym__statement,
      sym_mov_statement,
    ACTIONS(28), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [90] = 5,
    ACTIONS(30), 1,
      anon_sym_mov,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_function_declaration_repeat1,
    STATE(24), 2,
      sym__statement,
      sym_mov_statement,
    ACTIONS(34), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_identifier,
  [110] = 2,
    STATE(23), 1,
      sym_register_identifier,
    ACTIONS(36), 7,
      aux_sym_register_identifier_token1,
      aux_sym_register_identifier_token2,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [123] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 5,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_mov,
      sym_identifier,
  [134] = 2,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym_identifier,
    ACTIONS(40), 3,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
  [144] = 3,
    ACTIONS(42), 1,
      sym_number,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    STATE(21), 2,
      sym__value,
      sym_string,
  [155] = 2,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_value,
  [162] = 1,
    ACTIONS(48), 2,
      anon_sym_ptr,
      sym_identifier,
  [167] = 2,
    ACTIONS(50), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_register,
  [174] = 2,
    ACTIONS(52), 1,
      anon_sym_ptr,
    ACTIONS(54), 1,
      sym_identifier,
  [181] = 1,
    ACTIONS(56), 1,
      sym_identifier,
  [185] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [189] = 1,
    ACTIONS(60), 1,
      anon_sym_COMMA,
  [193] = 1,
    ACTIONS(62), 1,
      anon_sym_EQ,
  [197] = 1,
    ACTIONS(64), 1,
      anon_sym_COLON,
  [201] = 1,
    ACTIONS(66), 1,
      aux_sym_string_token1,
  [205] = 1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
  [209] = 1,
    ACTIONS(70), 1,
      anon_sym_COMMA,
  [213] = 1,
    ACTIONS(72), 1,
      anon_sym_COMMA,
  [217] = 1,
    ACTIONS(74), 1,
      anon_sym_SEMI,
  [221] = 1,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
  [225] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [229] = 1,
    ACTIONS(80), 1,
      sym_identifier,
  [233] = 1,
    ACTIONS(82), 1,
      anon_sym_SEMI,
  [237] = 1,
    ACTIONS(84), 1,
      anon_sym_SEMI,
  [241] = 1,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
  [245] = 1,
    ACTIONS(88), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 185,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 201,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 209,
  [SMALL_STATE(23)] = 213,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 221,
  [SMALL_STATE(26)] = 225,
  [SMALL_STATE(27)] = 229,
  [SMALL_STATE(28)] = 233,
  [SMALL_STATE(29)] = 237,
  [SMALL_STATE(30)] = 241,
  [SMALL_STATE(31)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
