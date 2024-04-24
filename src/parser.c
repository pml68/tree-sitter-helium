#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  aux_sym_register_value_token1 = 12,
  anon_sym_X = 13,
  anon_sym_Y = 14,
  anon_sym_F = 15,
  anon_sym_SPL = 16,
  anon_sym_SPH = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_function_identifier = 20,
  sym_identifier = 21,
  sym_number = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_token1 = 24,
  sym_source_file = 25,
  sym__declaration = 26,
  sym_variable_declaration = 27,
  sym__type = 28,
  sym_normal_type = 29,
  sym_pointer_type = 30,
  sym__value = 31,
  sym_function_declaration = 32,
  sym__statement = 33,
  sym_mov_statement = 34,
  sym_register = 35,
  sym_register_identifier = 36,
  sym_register_value = 37,
  sym_value = 38,
  sym_string = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_function_declaration_repeat1 = 41,
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
  [aux_sym_register_value_token1] = "register_value_token1",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_F] = "F",
  [anon_sym_SPL] = "SPL",
  [anon_sym_SPH] = "SPH",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_function_identifier] = "function_identifier",
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
  [sym_register_value] = "register_value",
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
  [aux_sym_register_value_token1] = aux_sym_register_value_token1,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_SPL] = anon_sym_SPL,
  [anon_sym_SPH] = anon_sym_SPH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_function_identifier] = sym_function_identifier,
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
  [sym_register_value] = sym_register_value,
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
  [aux_sym_register_value_token1] = {
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
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_register_value] = {
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
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 53,
        '$', 37,
        ',', 36,
        ':', 33,
        ';', 24,
        '=', 23,
        'F', 43,
        'S', 8,
        'X', 41,
        'Y', 42,
        '[', 46,
        ']', 47,
        'b', 1,
        'i', 3,
        'm', 9,
        'p', 13,
        'u', 4,
        '8', 52,
        '9', 52,
      );
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '8') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '8') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '8') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '8') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == 'P') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(55);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'X') ADVANCE(41);
      if (lookahead == 'Y') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'C')) ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_b1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_b1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_mov);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_register_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_register_value_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SPL);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SPH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_function_identifier);
      if (lookahead == 'v') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_function_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
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
    [aux_sym_register_value_token1] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_SPL] = ACTIONS(1),
    [anon_sym_SPH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym__type] = STATE(18),
    [sym_normal_type] = STATE(14),
    [sym_pointer_type] = STATE(18),
    [sym_function_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_b1] = ACTIONS(5),
    [sym_function_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_function_identifier,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_normal_type,
    STATE(18), 2,
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
      sym_function_identifier,
    STATE(14), 1,
      sym_normal_type,
    STATE(18), 2,
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
  [50] = 4,
    ACTIONS(19), 1,
      aux_sym_register_identifier_token1,
    STATE(22), 1,
      sym_register_value,
    STATE(24), 1,
      sym_register_identifier,
    ACTIONS(21), 6,
      aux_sym_register_value_token1,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_F,
      anon_sym_SPL,
      anon_sym_SPH,
  [68] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_mov,
    STATE(5), 1,
      aux_sym_function_declaration_repeat1,
    STATE(27), 2,
      sym__statement,
      sym_mov_statement,
    ACTIONS(25), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_function_identifier,
  [88] = 5,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_mov,
    STATE(7), 1,
      aux_sym_function_declaration_repeat1,
    STATE(27), 2,
      sym__statement,
      sym_mov_statement,
    ACTIONS(32), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_function_identifier,
  [108] = 5,
    ACTIONS(34), 1,
      anon_sym_mov,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_function_declaration_repeat1,
    STATE(27), 2,
      sym__statement,
      sym_mov_statement,
    ACTIONS(38), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_function_identifier,
  [128] = 2,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 5,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      anon_sym_mov,
      sym_function_identifier,
  [139] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 4,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_b1,
      sym_function_identifier,
  [149] = 3,
    ACTIONS(44), 1,
      sym_number,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    STATE(21), 2,
      sym__value,
      sym_string,
  [160] = 2,
    ACTIONS(48), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_register,
  [167] = 2,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_value,
  [174] = 1,
    ACTIONS(52), 2,
      anon_sym_ptr,
      sym_identifier,
  [179] = 2,
    ACTIONS(54), 1,
      anon_sym_ptr,
    ACTIONS(56), 1,
      sym_identifier,
  [186] = 1,
    ACTIONS(58), 1,
      anon_sym_COMMA,
  [190] = 1,
    ACTIONS(60), 1,
      anon_sym_COLON,
  [194] = 1,
    ACTIONS(62), 1,
      sym_identifier,
  [198] = 1,
    ACTIONS(64), 1,
      sym_identifier,
  [202] = 1,
    ACTIONS(66), 1,
      anon_sym_EQ,
  [206] = 1,
    ACTIONS(68), 1,
      aux_sym_string_token1,
  [210] = 1,
    ACTIONS(70), 1,
      anon_sym_SEMI,
  [214] = 1,
    ACTIONS(72), 1,
      anon_sym_COMMA,
  [218] = 1,
    ACTIONS(74), 1,
      anon_sym_COMMA,
  [222] = 1,
    ACTIONS(76), 1,
      anon_sym_COMMA,
  [226] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [230] = 1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
  [234] = 1,
    ACTIONS(82), 1,
      anon_sym_SEMI,
  [238] = 1,
    ACTIONS(84), 1,
      sym_identifier,
  [242] = 1,
    ACTIONS(86), 1,
      anon_sym_SEMI,
  [246] = 1,
    ACTIONS(88), 1,
      anon_sym_SEMI,
  [250] = 1,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
  [254] = 1,
    ACTIONS(92), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 186,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 194,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 210,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 230,
  [SMALL_STATE(27)] = 234,
  [SMALL_STATE(28)] = 238,
  [SMALL_STATE(29)] = 242,
  [SMALL_STATE(30)] = 246,
  [SMALL_STATE(31)] = 250,
  [SMALL_STATE(32)] = 254,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_type, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_identifier, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_value, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
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
