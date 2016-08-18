#include "tree_sitter/parser.h"

#define STATE_COUNT 568
#define SYMBOL_COUNT 110

enum {
    sym_source_file = ts_builtin_sym_start,
    sym_package_clause,
    sym_import_declaration,
    sym_import_spec,
    sym__top_level_declaration,
    sym__declaration,
    sym_const_declaration,
    sym_const_spec,
    sym_var_declaration,
    sym_var_spec,
    sym_function_declaration,
    sym_method_declaration,
    sym_parameters,
    sym__parameter_list,
    sym_parameter_declaration,
    sym_type_declaration,
    sym_type_spec,
    sym_identifier_list,
    sym_expression_list,
    sym__type,
    sym_pointer_type,
    sym_array_type,
    sym_slice_type,
    sym_struct_type,
    sym_field_declaration,
    sym_interface_type,
    sym_method_spec,
    sym_map_type,
    sym_channel_type,
    sym_function_type,
    sym_block,
    sym__statement,
    sym_send_statement,
    sym_inc_statement,
    sym_dec_statement,
    sym_assignment_statement,
    sym_short_var_declaration,
    sym__expression,
    sym_call_expression,
    sym_unary_expression,
    sym_binary_expression,
    sym__primary_expression,
    sym_qualified_identifier,
    sym__string_literal,
    sym_int_literal,
    sym_float_literal,
    aux_sym_source_file_repeat1,
    aux_sym_source_file_repeat2,
    aux_sym_import_declaration_repeat1,
    aux_sym_const_declaration_repeat1,
    aux_sym_var_declaration_repeat1,
    aux_sym_type_declaration_repeat1,
    aux_sym_identifier_list_repeat1,
    aux_sym_expression_list_repeat1,
    aux_sym_struct_type_repeat1,
    aux_sym_interface_type_repeat1,
    aux_sym_block_repeat1,
    aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH,
    anon_sym_package,
    anon_sym_import,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_DOT,
    anon_sym_const,
    anon_sym_EQ,
    anon_sym_var,
    anon_sym_func,
    anon_sym_COMMA,
    anon_sym_type,
    anon_sym_STAR,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_struct,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_map,
    anon_sym_chan,
    anon_sym_LT_DASH,
    anon_sym_PLUS_PLUS,
    anon_sym_DASH_DASH,
    aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH,
    anon_sym_COLON_EQ,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_LT_LT,
    anon_sym_GT_GT,
    anon_sym_AMP,
    anon_sym_AMP_CARET,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_AMP_AMP,
    anon_sym_PIPE_PIPE,
    sym_identifier,
    sym_raw_string_literal,
    sym_interpreted_string_literal,
    aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH,
    aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH,
    aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH,
    sym_comment,
};

static const char *ts_symbol_names[] = {
    [sym_source_file] = "source_file",
    [sym_package_clause] = "package_clause",
    [sym_import_declaration] = "import_declaration",
    [sym_import_spec] = "import_spec",
    [sym__top_level_declaration] = "_top_level_declaration",
    [sym__declaration] = "_declaration",
    [sym_const_declaration] = "const_declaration",
    [sym_const_spec] = "const_spec",
    [sym_var_declaration] = "var_declaration",
    [sym_var_spec] = "var_spec",
    [sym_function_declaration] = "function_declaration",
    [sym_method_declaration] = "method_declaration",
    [sym_parameters] = "parameters",
    [sym__parameter_list] = "_parameter_list",
    [sym_parameter_declaration] = "parameter_declaration",
    [sym_type_declaration] = "type_declaration",
    [sym_type_spec] = "type_spec",
    [sym_identifier_list] = "identifier_list",
    [sym_expression_list] = "expression_list",
    [sym__type] = "_type",
    [sym_pointer_type] = "pointer_type",
    [sym_array_type] = "array_type",
    [sym_slice_type] = "slice_type",
    [sym_struct_type] = "struct_type",
    [sym_field_declaration] = "field_declaration",
    [sym_interface_type] = "interface_type",
    [sym_method_spec] = "method_spec",
    [sym_map_type] = "map_type",
    [sym_channel_type] = "channel_type",
    [sym_function_type] = "function_type",
    [sym_block] = "block",
    [sym__statement] = "_statement",
    [sym_send_statement] = "send_statement",
    [sym_inc_statement] = "inc_statement",
    [sym_dec_statement] = "dec_statement",
    [sym_assignment_statement] = "assignment_statement",
    [sym_short_var_declaration] = "short_var_declaration",
    [sym__expression] = "_expression",
    [sym_call_expression] = "call_expression",
    [sym_unary_expression] = "unary_expression",
    [sym_binary_expression] = "binary_expression",
    [sym__primary_expression] = "_primary_expression",
    [sym_qualified_identifier] = "qualified_identifier",
    [sym__string_literal] = "_string_literal",
    [sym_int_literal] = "int_literal",
    [sym_float_literal] = "float_literal",
    [aux_sym_source_file_repeat1] = "source_file_repeat1",
    [aux_sym_source_file_repeat2] = "source_file_repeat2",
    [aux_sym_import_declaration_repeat1] = "import_declaration_repeat1",
    [aux_sym_const_declaration_repeat1] = "const_declaration_repeat1",
    [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
    [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
    [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
    [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
    [aux_sym_struct_type_repeat1] = "struct_type_repeat1",
    [aux_sym_interface_type_repeat1] = "interface_type_repeat1",
    [aux_sym_block_repeat1] = "block_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = "/(\n|;)/",
    [anon_sym_package] = "package",
    [anon_sym_import] = "import",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_DOT] = ".",
    [anon_sym_const] = "const",
    [anon_sym_EQ] = "=",
    [anon_sym_var] = "var",
    [anon_sym_func] = "func",
    [anon_sym_COMMA] = ",",
    [anon_sym_type] = "type",
    [anon_sym_STAR] = "*",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_struct] = "struct",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_interface] = "interface",
    [anon_sym_map] = "map",
    [anon_sym_chan] = "chan",
    [anon_sym_LT_DASH] = "<-",
    [anon_sym_PLUS_PLUS] = "++",
    [anon_sym_DASH_DASH] = "--",
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = "/(*|/|%|<<|>>|&|&^|+|-|||^|)=/",
    [anon_sym_COLON_EQ] = ":=",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_AMP] = "&",
    [anon_sym_AMP_CARET] = "&^",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_PIPE] = "|",
    [anon_sym_CARET] = "^",
    [anon_sym_EQ_EQ] = "==",
    [anon_sym_BANG_EQ] = "!=",
    [anon_sym_LT] = "<",
    [anon_sym_LT_EQ] = "<=",
    [anon_sym_GT] = ">",
    [anon_sym_GT_EQ] = ">=",
    [anon_sym_AMP_AMP] = "&&",
    [anon_sym_PIPE_PIPE] = "||",
    [sym_identifier] = "identifier",
    [sym_raw_string_literal] = "raw_string_literal",
    [sym_interpreted_string_literal] = "interpreted_string_literal",
    [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = "/[1-9]([0-9]*|)/",
    [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = "/0([0-7]*|)/",
    [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = "/0(x|X)[0-7]*/",
    [sym_comment] = "comment",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym_source_file] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_package_clause] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_import_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_import_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__top_level_declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__declaration] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_const_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_const_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_var_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_var_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_function_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_parameters] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__parameter_list] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_parameter_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_identifier_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_expression_list] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__type] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_pointer_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_array_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_slice_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_struct_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_field_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interface_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_map_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_channel_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_function_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_send_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_inc_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_dec_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_assignment_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_short_var_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_call_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_unary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__primary_expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_qualified_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__string_literal] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_int_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_float_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_source_file_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_source_file_repeat2] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_import_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_const_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_var_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_type_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_identifier_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_expression_list_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_struct_type_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_interface_type_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_block_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = true, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_package] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_import] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_const] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_var] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_func] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_type] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_struct] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_interface] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_map] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_chan] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SLASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PERCENT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_BANG_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_raw_string_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpreted_string_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_comment] = {.visible = true, .named = true, .structural = false, .extra = true},
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId state, bool error_mode) {
    START_LEXER();
    switch (state) {
        case 0:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(0);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(28);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(35);
            if (lookahead == '>')
                ADVANCE(37);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                (lookahead == 'n') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(75);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == 't')
                ADVANCE(88);
            if (lookahead == 'v')
                ADVANCE(92);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(96);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 3:
            if (lookahead == '=')
                ADVANCE(4);
            LEX_ERROR();
        case 4:
            ACCEPT_TOKEN(anon_sym_BANG_EQ);
        case 5:
            if (lookahead == '\"')
                ADVANCE(6);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(5);
            LEX_ERROR();
        case 6:
            ACCEPT_TOKEN(sym_interpreted_string_literal);
        case 7:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 8:
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH);
        case 9:
            if (lookahead == '&')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '^')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 10:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 11:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 12:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 13:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 14:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 15:
            if (lookahead == '+')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 16:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
        case 17:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 18:
            if (lookahead == '-')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 19:
            ACCEPT_TOKEN(anon_sym_DASH_DASH);
        case 20:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 21:
            if (lookahead == '/')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 22:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(22);
            ACCEPT_TOKEN(sym_comment);
        case 23:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(24);
            if (lookahead == 'X')
                ADVANCE(25);
            if (lookahead == 'x')
                ADVANCE(25);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 24:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(24);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 25:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(26);
            LEX_ERROR();
        case 26:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(26);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 28:
            if (lookahead == '=')
                ADVANCE(29);
            LEX_ERROR();
        case 29:
            ACCEPT_TOKEN(anon_sym_COLON_EQ);
        case 30:
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 31:
            if (lookahead == '-')
                ADVANCE(32);
            if (lookahead == '<')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 32:
            ACCEPT_TOKEN(anon_sym_LT_DASH);
        case 33:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 34:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 35:
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 36:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 37:
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(39);
            ACCEPT_TOKEN(anon_sym_GT);
        case 38:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 39:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 41:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 42:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 43:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_CARET);
        case 44:
            if (lookahead == '`')
                ADVANCE(45);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(44);
            LEX_ERROR();
        case 45:
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(47);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(49);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_chan);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_const);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_func);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'm')
                ADVANCE(59);
            if (lookahead == 'n')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_import);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_interface);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_map);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'k')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_package);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_struct);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 90:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_type);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(94);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_var);
        case 95:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 96:
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '|')
                ADVANCE(97);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 97:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 98:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 99:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(99);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'p')
                ADVANCE(101);
            LEX_ERROR();
        case 100:
            if (lookahead == '/')
                ADVANCE(22);
            LEX_ERROR();
        case 101:
            if (lookahead == 'a')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'c')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'k')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'a')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'g')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'e')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            ACCEPT_TOKEN(anon_sym_package);
        case 108:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(108);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 109:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'c')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(115);
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(129);
            LEX_ERROR();
        case 110:
            if (lookahead == 'o')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'n')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 's')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 't')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            ACCEPT_TOKEN(anon_sym_const);
        case 115:
            if (lookahead == 'u')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 'n')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'c')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            ACCEPT_TOKEN(anon_sym_func);
        case 119:
            if (lookahead == 'm')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'p')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'o')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'r')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 't')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_import);
        case 125:
            if (lookahead == 'y')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'p')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'e')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_type);
        case 129:
            if (lookahead == 'a')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'r')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            ACCEPT_TOKEN(anon_sym_var);
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'c')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(115);
            if (lookahead == 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(129);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 140:
            if (lookahead == '-')
                ADVANCE(32);
            LEX_ERROR();
        case 141:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 142:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '[')
                ADVANCE(41);
            LEX_ERROR();
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'c')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'h')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'n')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(anon_sym_chan);
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ']')
                ADVANCE(42);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ']')
                ADVANCE(42);
            LEX_ERROR();
        case 155:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(168);
            if (lookahead == '&')
                ADVANCE(169);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(171);
            if (lookahead == '-')
                ADVANCE(172);
            if (lookahead == '/')
                ADVANCE(173);
            if (lookahead == '<')
                ADVANCE(174);
            if (lookahead == '=')
                ADVANCE(176);
            if (lookahead == '>')
                ADVANCE(177);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(179);
            if (lookahead == '|')
                ADVANCE(180);
            LEX_ERROR();
        case 168:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 169:
            if (lookahead == '&')
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(170);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 170:
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 171:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 172:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 173:
            if (lookahead == '/')
                ADVANCE(22);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 174:
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 175:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 176:
            if (lookahead == '=')
                ADVANCE(36);
            LEX_ERROR();
        case 177:
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(178);
            ACCEPT_TOKEN(anon_sym_GT);
        case 178:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 179:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 180:
            if (lookahead == '|')
                ADVANCE(97);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(168);
            if (lookahead == '&')
                ADVANCE(169);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(171);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(172);
            if (lookahead == '/')
                ADVANCE(173);
            if (lookahead == '<')
                ADVANCE(174);
            if (lookahead == '=')
                ADVANCE(176);
            if (lookahead == '>')
                ADVANCE(177);
            if (lookahead == '^')
                ADVANCE(179);
            if (lookahead == '|')
                ADVANCE(180);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(184);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 185:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(185);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 186:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(186);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 187:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(187);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 188:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(188);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(190);
            if (lookahead == 't')
                ADVANCE(88);
            if (lookahead == 'v')
                ADVANCE(92);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 190:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == '%')
                ADVANCE(193);
            if (lookahead == '&')
                ADVANCE(194);
            if (lookahead == '*')
                ADVANCE(193);
            if (lookahead == '+')
                ADVANCE(193);
            if (lookahead == '-')
                ADVANCE(193);
            if (lookahead == '/')
                ADVANCE(195);
            if (lookahead == ':')
                ADVANCE(28);
            if (lookahead == '<')
                ADVANCE(196);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(197);
            if (lookahead == '^')
                ADVANCE(193);
            if (lookahead == '|')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 194:
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '^')
                ADVANCE(193);
            LEX_ERROR();
        case 195:
            if (lookahead == '/')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 196:
            if (lookahead == '<')
                ADVANCE(193);
            LEX_ERROR();
        case 197:
            if (lookahead == '>')
                ADVANCE(193);
            LEX_ERROR();
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(28);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(199);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '|')
                ADVANCE(96);
            LEX_ERROR();
        case 199:
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH);
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(168);
            if (lookahead == '&')
                ADVANCE(169);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(171);
            if (lookahead == '-')
                ADVANCE(172);
            if (lookahead == '/')
                ADVANCE(173);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(174);
            if (lookahead == '=')
                ADVANCE(176);
            if (lookahead == '>')
                ADVANCE(177);
            if (lookahead == '^')
                ADVANCE(179);
            if (lookahead == '|')
                ADVANCE(180);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(202);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(203);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(28);
            if (lookahead == '<')
                ADVANCE(204);
            if (lookahead == '=')
                ADVANCE(199);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '|')
                ADVANCE(96);
            LEX_ERROR();
        case 202:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 203:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 204:
            if (lookahead == '<')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 205:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(205);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(168);
            if (lookahead == '&')
                ADVANCE(169);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(171);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(172);
            if (lookahead == '/')
                ADVANCE(173);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(174);
            if (lookahead == '=')
                ADVANCE(176);
            if (lookahead == '>')
                ADVANCE(177);
            if (lookahead == '^')
                ADVANCE(179);
            if (lookahead == '|')
                ADVANCE(180);
            LEX_ERROR();
        case 206:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(206);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(207);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 207:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 208:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(208);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(207);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 209:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(209);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(207);
            LEX_ERROR();
        case 210:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(210);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(207);
            LEX_ERROR();
        case 211:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(211);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(207);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 212:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(212);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '=')
                ADVANCE(207);
            LEX_ERROR();
        case 213:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(213);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '=')
                ADVANCE(207);
            LEX_ERROR();
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(207);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 215:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(215);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 99,
    [1] = 108,
    [2] = 109,
    [3] = 132,
    [4] = 109,
    [5] = 109,
    [6] = 133,
    [7] = 133,
    [8] = 133,
    [9] = 134,
    [10] = 108,
    [11] = 135,
    [12] = 136,
    [13] = 136,
    [14] = 136,
    [15] = 136,
    [16] = 133,
    [17] = 137,
    [18] = 138,
    [19] = 133,
    [20] = 133,
    [21] = 143,
    [22] = 138,
    [23] = 144,
    [24] = 145,
    [25] = 145,
    [26] = 146,
    [27] = 138,
    [28] = 147,
    [29] = 152,
    [30] = 132,
    [31] = 133,
    [32] = 138,
    [33] = 133,
    [34] = 133,
    [35] = 138,
    [36] = 133,
    [37] = 138,
    [38] = 153,
    [39] = 153,
    [40] = 143,
    [41] = 138,
    [42] = 144,
    [43] = 145,
    [44] = 145,
    [45] = 146,
    [46] = 138,
    [47] = 147,
    [48] = 154,
    [49] = 132,
    [50] = 153,
    [51] = 138,
    [52] = 153,
    [53] = 153,
    [54] = 138,
    [55] = 153,
    [56] = 138,
    [57] = 153,
    [58] = 138,
    [59] = 153,
    [60] = 155,
    [61] = 133,
    [62] = 156,
    [63] = 153,
    [64] = 157,
    [65] = 158,
    [66] = 155,
    [67] = 137,
    [68] = 159,
    [69] = 159,
    [70] = 158,
    [71] = 160,
    [72] = 159,
    [73] = 159,
    [74] = 143,
    [75] = 138,
    [76] = 144,
    [77] = 145,
    [78] = 145,
    [79] = 146,
    [80] = 138,
    [81] = 147,
    [82] = 161,
    [83] = 132,
    [84] = 159,
    [85] = 138,
    [86] = 159,
    [87] = 159,
    [88] = 138,
    [89] = 159,
    [90] = 138,
    [91] = 153,
    [92] = 138,
    [93] = 159,
    [94] = 155,
    [95] = 156,
    [96] = 159,
    [97] = 159,
    [98] = 162,
    [99] = 138,
    [100] = 133,
    [101] = 156,
    [102] = 132,
    [103] = 159,
    [104] = 163,
    [105] = 133,
    [106] = 138,
    [107] = 132,
    [108] = 133,
    [109] = 164,
    [110] = 138,
    [111] = 165,
    [112] = 133,
    [113] = 159,
    [114] = 162,
    [115] = 156,
    [116] = 165,
    [117] = 143,
    [118] = 138,
    [119] = 144,
    [120] = 145,
    [121] = 145,
    [122] = 146,
    [123] = 138,
    [124] = 147,
    [125] = 166,
    [126] = 132,
    [127] = 165,
    [128] = 138,
    [129] = 165,
    [130] = 165,
    [131] = 138,
    [132] = 165,
    [133] = 138,
    [134] = 153,
    [135] = 138,
    [136] = 165,
    [137] = 155,
    [138] = 156,
    [139] = 165,
    [140] = 165,
    [141] = 162,
    [142] = 156,
    [143] = 165,
    [144] = 165,
    [145] = 167,
    [146] = 167,
    [147] = 167,
    [148] = 138,
    [149] = 167,
    [150] = 167,
    [151] = 165,
    [152] = 181,
    [153] = 181,
    [154] = 138,
    [155] = 181,
    [156] = 181,
    [157] = 181,
    [158] = 181,
    [159] = 167,
    [160] = 167,
    [161] = 167,
    [162] = 167,
    [163] = 167,
    [164] = 165,
    [165] = 182,
    [166] = 183,
    [167] = 183,
    [168] = 183,
    [169] = 183,
    [170] = 183,
    [171] = 182,
    [172] = 181,
    [173] = 181,
    [174] = 181,
    [175] = 181,
    [176] = 181,
    [177] = 181,
    [178] = 181,
    [179] = 183,
    [180] = 183,
    [181] = 183,
    [182] = 183,
    [183] = 183,
    [184] = 183,
    [185] = 182,
    [186] = 182,
    [187] = 183,
    [188] = 167,
    [189] = 165,
    [190] = 184,
    [191] = 137,
    [192] = 159,
    [193] = 184,
    [194] = 184,
    [195] = 132,
    [196] = 159,
    [197] = 160,
    [198] = 165,
    [199] = 137,
    [200] = 159,
    [201] = 165,
    [202] = 165,
    [203] = 167,
    [204] = 138,
    [205] = 159,
    [206] = 138,
    [207] = 159,
    [208] = 159,
    [209] = 185,
    [210] = 137,
    [211] = 159,
    [212] = 185,
    [213] = 185,
    [214] = 159,
    [215] = 137,
    [216] = 159,
    [217] = 159,
    [218] = 159,
    [219] = 158,
    [220] = 156,
    [221] = 133,
    [222] = 137,
    [223] = 159,
    [224] = 133,
    [225] = 133,
    [226] = 153,
    [227] = 162,
    [228] = 156,
    [229] = 153,
    [230] = 153,
    [231] = 167,
    [232] = 138,
    [233] = 153,
    [234] = 138,
    [235] = 153,
    [236] = 153,
    [237] = 186,
    [238] = 137,
    [239] = 159,
    [240] = 186,
    [241] = 186,
    [242] = 153,
    [243] = 137,
    [244] = 159,
    [245] = 153,
    [246] = 153,
    [247] = 138,
    [248] = 133,
    [249] = 155,
    [250] = 156,
    [251] = 133,
    [252] = 133,
    [253] = 162,
    [254] = 156,
    [255] = 133,
    [256] = 133,
    [257] = 167,
    [258] = 138,
    [259] = 133,
    [260] = 138,
    [261] = 133,
    [262] = 133,
    [263] = 158,
    [264] = 133,
    [265] = 133,
    [266] = 182,
    [267] = 133,
    [268] = 133,
    [269] = 137,
    [270] = 182,
    [271] = 132,
    [272] = 137,
    [273] = 143,
    [274] = 187,
    [275] = 137,
    [276] = 159,
    [277] = 187,
    [278] = 187,
    [279] = 188,
    [280] = 188,
    [281] = 133,
    [282] = 137,
    [283] = 143,
    [284] = 138,
    [285] = 144,
    [286] = 145,
    [287] = 189,
    [288] = 145,
    [289] = 146,
    [290] = 138,
    [291] = 147,
    [292] = 191,
    [293] = 132,
    [294] = 188,
    [295] = 138,
    [296] = 188,
    [297] = 188,
    [298] = 138,
    [299] = 188,
    [300] = 138,
    [301] = 153,
    [302] = 138,
    [303] = 188,
    [304] = 155,
    [305] = 156,
    [306] = 188,
    [307] = 188,
    [308] = 133,
    [309] = 192,
    [310] = 133,
    [311] = 198,
    [312] = 198,
    [313] = 198,
    [314] = 156,
    [315] = 133,
    [316] = 198,
    [317] = 198,
    [318] = 133,
    [319] = 192,
    [320] = 181,
    [321] = 181,
    [322] = 181,
    [323] = 181,
    [324] = 133,
    [325] = 133,
    [326] = 181,
    [327] = 181,
    [328] = 181,
    [329] = 181,
    [330] = 198,
    [331] = 198,
    [332] = 198,
    [333] = 198,
    [334] = 198,
    [335] = 200,
    [336] = 200,
    [337] = 200,
    [338] = 200,
    [339] = 200,
    [340] = 181,
    [341] = 181,
    [342] = 181,
    [343] = 181,
    [344] = 181,
    [345] = 181,
    [346] = 200,
    [347] = 200,
    [348] = 200,
    [349] = 200,
    [350] = 200,
    [351] = 182,
    [352] = 200,
    [353] = 201,
    [354] = 201,
    [355] = 201,
    [356] = 201,
    [357] = 201,
    [358] = 192,
    [359] = 181,
    [360] = 181,
    [361] = 181,
    [362] = 181,
    [363] = 181,
    [364] = 181,
    [365] = 201,
    [366] = 201,
    [367] = 201,
    [368] = 201,
    [369] = 201,
    [370] = 182,
    [371] = 201,
    [372] = 182,
    [373] = 198,
    [374] = 189,
    [375] = 156,
    [376] = 181,
    [377] = 181,
    [378] = 133,
    [379] = 205,
    [380] = 205,
    [381] = 205,
    [382] = 205,
    [383] = 205,
    [384] = 133,
    [385] = 181,
    [386] = 181,
    [387] = 181,
    [388] = 181,
    [389] = 181,
    [390] = 181,
    [391] = 181,
    [392] = 205,
    [393] = 205,
    [394] = 205,
    [395] = 205,
    [396] = 205,
    [397] = 205,
    [398] = 133,
    [399] = 182,
    [400] = 205,
    [401] = 133,
    [402] = 162,
    [403] = 156,
    [404] = 188,
    [405] = 188,
    [406] = 167,
    [407] = 138,
    [408] = 188,
    [409] = 138,
    [410] = 188,
    [411] = 188,
    [412] = 187,
    [413] = 188,
    [414] = 159,
    [415] = 188,
    [416] = 188,
    [417] = 133,
    [418] = 159,
    [419] = 132,
    [420] = 132,
    [421] = 143,
    [422] = 187,
    [423] = 188,
    [424] = 133,
    [425] = 133,
    [426] = 133,
    [427] = 206,
    [428] = 137,
    [429] = 208,
    [430] = 206,
    [431] = 132,
    [432] = 208,
    [433] = 206,
    [434] = 133,
    [435] = 182,
    [436] = 133,
    [437] = 133,
    [438] = 137,
    [439] = 182,
    [440] = 209,
    [441] = 209,
    [442] = 181,
    [443] = 143,
    [444] = 138,
    [445] = 144,
    [446] = 145,
    [447] = 145,
    [448] = 146,
    [449] = 138,
    [450] = 147,
    [451] = 210,
    [452] = 132,
    [453] = 209,
    [454] = 138,
    [455] = 209,
    [456] = 209,
    [457] = 138,
    [458] = 209,
    [459] = 138,
    [460] = 153,
    [461] = 138,
    [462] = 209,
    [463] = 155,
    [464] = 156,
    [465] = 209,
    [466] = 209,
    [467] = 162,
    [468] = 156,
    [469] = 209,
    [470] = 209,
    [471] = 167,
    [472] = 138,
    [473] = 209,
    [474] = 138,
    [475] = 209,
    [476] = 209,
    [477] = 211,
    [478] = 137,
    [479] = 159,
    [480] = 211,
    [481] = 211,
    [482] = 209,
    [483] = 137,
    [484] = 159,
    [485] = 209,
    [486] = 209,
    [487] = 133,
    [488] = 181,
    [489] = 133,
    [490] = 133,
    [491] = 206,
    [492] = 137,
    [493] = 133,
    [494] = 182,
    [495] = 133,
    [496] = 133,
    [497] = 137,
    [498] = 182,
    [499] = 212,
    [500] = 212,
    [501] = 181,
    [502] = 143,
    [503] = 138,
    [504] = 144,
    [505] = 145,
    [506] = 145,
    [507] = 146,
    [508] = 138,
    [509] = 147,
    [510] = 213,
    [511] = 132,
    [512] = 212,
    [513] = 138,
    [514] = 212,
    [515] = 212,
    [516] = 138,
    [517] = 212,
    [518] = 138,
    [519] = 153,
    [520] = 138,
    [521] = 212,
    [522] = 155,
    [523] = 156,
    [524] = 212,
    [525] = 212,
    [526] = 162,
    [527] = 156,
    [528] = 212,
    [529] = 212,
    [530] = 167,
    [531] = 138,
    [532] = 212,
    [533] = 138,
    [534] = 212,
    [535] = 212,
    [536] = 214,
    [537] = 137,
    [538] = 159,
    [539] = 214,
    [540] = 214,
    [541] = 212,
    [542] = 137,
    [543] = 159,
    [544] = 212,
    [545] = 212,
    [546] = 133,
    [547] = 181,
    [548] = 133,
    [549] = 109,
    [550] = 109,
    [551] = 215,
    [552] = 216,
    [553] = 109,
    [554] = 109,
    [555] = 133,
    [556] = 133,
    [557] = 182,
    [558] = 109,
    [559] = 216,
    [560] = 133,
    [561] = 109,
    [562] = 215,
    [563] = 182,
    [564] = 108,
    [565] = 134,
    [566] = 108,
    [567] = 134,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_source_file] = 2,
        [sym_package_clause] = 4,
        [anon_sym_package] = 6,
        [sym_comment] = 8,
    },
    [1] = {
        [ts_builtin_sym_end] = 10,
        [sym_comment] = 8,
    },
    [2] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat1] = 20,
        [aux_sym_source_file_repeat2] = 22,
        [ts_builtin_sym_end] = 24,
        [anon_sym_import] = 26,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [3] = {
        [sym_identifier] = 36,
        [sym_comment] = 8,
    },
    [4] = {
        [sym_import_declaration] = 38,
        [sym__top_level_declaration] = 38,
        [sym__declaration] = 38,
        [sym_const_declaration] = 38,
        [sym_var_declaration] = 38,
        [sym_function_declaration] = 38,
        [sym_method_declaration] = 38,
        [sym_type_declaration] = 38,
        [aux_sym_source_file_repeat1] = 38,
        [aux_sym_source_file_repeat2] = 38,
        [ts_builtin_sym_end] = 38,
        [anon_sym_import] = 38,
        [anon_sym_const] = 38,
        [anon_sym_var] = 38,
        [anon_sym_func] = 38,
        [anon_sym_type] = 38,
        [sym_comment] = 8,
    },
    [5] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 40,
        [sym__declaration] = 40,
        [sym_const_declaration] = 40,
        [sym_var_declaration] = 40,
        [sym_function_declaration] = 40,
        [sym_method_declaration] = 40,
        [sym_type_declaration] = 40,
        [aux_sym_source_file_repeat1] = 42,
        [aux_sym_source_file_repeat2] = 40,
        [ts_builtin_sym_end] = 40,
        [anon_sym_import] = 26,
        [anon_sym_const] = 40,
        [anon_sym_var] = 40,
        [anon_sym_func] = 40,
        [anon_sym_type] = 40,
        [sym_comment] = 8,
    },
    [6] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 44,
        [sym_comment] = 8,
    },
    [7] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 46,
        [sym_comment] = 8,
    },
    [8] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 48,
        [sym_comment] = 8,
    },
    [9] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 50,
        [ts_builtin_sym_end] = 52,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [10] = {
        [ts_builtin_sym_end] = 52,
        [sym_comment] = 8,
    },
    [11] = {
        [sym_import_spec] = 54,
        [sym__string_literal] = 56,
        [anon_sym_LPAREN] = 58,
        [anon_sym_DOT] = 60,
        [sym_identifier] = 60,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [12] = {
        [sym_const_spec] = 64,
        [sym_identifier_list] = 66,
        [anon_sym_LPAREN] = 68,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [13] = {
        [sym_var_spec] = 72,
        [sym_identifier_list] = 74,
        [anon_sym_LPAREN] = 76,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [14] = {
        [sym_parameters] = 78,
        [anon_sym_LPAREN] = 80,
        [sym_identifier] = 82,
        [sym_comment] = 8,
    },
    [15] = {
        [sym_type_spec] = 84,
        [anon_sym_LPAREN] = 86,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [16] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 90,
        [sym_comment] = 8,
    },
    [17] = {
        [sym_type_spec] = 92,
        [aux_sym_type_declaration_repeat1] = 94,
        [anon_sym_RPAREN] = 96,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [18] = {
        [sym__type] = 98,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [19] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 120,
        [sym_comment] = 8,
    },
    [20] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [sym_comment] = 8,
    },
    [21] = {
        [sym_parameters] = 124,
        [anon_sym_LPAREN] = 126,
        [sym_comment] = 8,
    },
    [22] = {
        [sym__type] = 128,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [23] = {
        [sym__expression] = 130,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_RBRACK] = 136,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_LBRACE] = 142,
        [sym_comment] = 8,
    },
    [25] = {
        [anon_sym_LBRACE] = 144,
        [sym_comment] = 8,
    },
    [26] = {
        [anon_sym_LBRACK] = 146,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__type] = 148,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 150,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [28] = {
        [anon_sym_chan] = 152,
        [sym_comment] = 8,
    },
    [29] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [anon_sym_DOT] = 154,
        [sym_comment] = 8,
    },
    [30] = {
        [sym_identifier] = 156,
        [sym_comment] = 8,
    },
    [31] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 158,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__type] = 160,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [33] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [sym_comment] = 8,
    },
    [34] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 164,
        [sym_comment] = 8,
    },
    [35] = {
        [sym__type] = 166,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [36] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__type] = 170,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [38] = {
        [anon_sym_RBRACK] = 192,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [40] = {
        [sym_parameters] = 194,
        [anon_sym_LPAREN] = 196,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__type] = 198,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [42] = {
        [sym__expression] = 200,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_RBRACK] = 202,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_LBRACE] = 204,
        [sym_comment] = 8,
    },
    [44] = {
        [anon_sym_LBRACE] = 206,
        [sym_comment] = 8,
    },
    [45] = {
        [anon_sym_LBRACK] = 208,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__type] = 210,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 212,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [47] = {
        [anon_sym_chan] = 214,
        [sym_comment] = 8,
    },
    [48] = {
        [anon_sym_DOT] = 216,
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [49] = {
        [sym_identifier] = 218,
        [sym_comment] = 8,
    },
    [50] = {
        [anon_sym_RBRACK] = 158,
        [sym_comment] = 8,
    },
    [51] = {
        [sym__type] = 220,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [52] = {
        [anon_sym_RBRACK] = 162,
        [sym_comment] = 8,
    },
    [53] = {
        [anon_sym_RBRACK] = 164,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__type] = 222,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RBRACK] = 168,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__type] = 224,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [57] = {
        [anon_sym_RBRACK] = 226,
        [sym_comment] = 8,
    },
    [58] = {
        [sym__type] = 228,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [59] = {
        [anon_sym_RBRACK] = 230,
        [sym_comment] = 8,
    },
    [60] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 234,
        [anon_sym_RBRACE] = 236,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [61] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 240,
        [sym_comment] = 8,
    },
    [62] = {
        [anon_sym_RBRACE] = 242,
        [sym_comment] = 8,
    },
    [63] = {
        [anon_sym_RBRACK] = 244,
        [sym_comment] = 8,
    },
    [64] = {
        [sym_parameters] = 246,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 240,
        [anon_sym_LPAREN] = 126,
        [sym_comment] = 8,
    },
    [65] = {
        [sym_parameters] = 248,
        [sym__type] = 248,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 250,
        [anon_sym_LPAREN] = 252,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [66] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 254,
        [anon_sym_RBRACE] = 256,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__parameter_list] = 258,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RPAREN] = 266,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [69] = {
        [anon_sym_RPAREN] = 270,
        [anon_sym_COMMA] = 270,
        [sym_comment] = 8,
    },
    [70] = {
        [sym_parameters] = 272,
        [sym__type] = 272,
        [sym_pointer_type] = 272,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_interface_type] = 272,
        [sym_map_type] = 272,
        [sym_channel_type] = 272,
        [sym_function_type] = 272,
        [sym_qualified_identifier] = 272,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_func] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_LBRACK] = 272,
        [anon_sym_struct] = 272,
        [anon_sym_interface] = 272,
        [anon_sym_map] = 272,
        [anon_sym_chan] = 272,
        [anon_sym_LT_DASH] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [71] = {
        [sym__type] = 274,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_RPAREN] = 270,
        [anon_sym_func] = 278,
        [anon_sym_COMMA] = 270,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [72] = {
        [anon_sym_RPAREN] = 296,
        [anon_sym_COMMA] = 296,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [74] = {
        [sym_parameters] = 298,
        [anon_sym_LPAREN] = 300,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__type] = 302,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_func] = 278,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__expression] = 304,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_RBRACK] = 306,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [77] = {
        [anon_sym_LBRACE] = 308,
        [sym_comment] = 8,
    },
    [78] = {
        [anon_sym_LBRACE] = 310,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_LBRACK] = 312,
        [sym_comment] = 8,
    },
    [80] = {
        [sym__type] = 314,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_func] = 278,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 316,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [81] = {
        [anon_sym_chan] = 318,
        [sym_comment] = 8,
    },
    [82] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_DOT] = 320,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [83] = {
        [sym_identifier] = 322,
        [sym_comment] = 8,
    },
    [84] = {
        [anon_sym_RPAREN] = 158,
        [anon_sym_COMMA] = 158,
        [sym_comment] = 8,
    },
    [85] = {
        [sym__type] = 324,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_func] = 278,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [86] = {
        [anon_sym_RPAREN] = 162,
        [anon_sym_COMMA] = 162,
        [sym_comment] = 8,
    },
    [87] = {
        [anon_sym_RPAREN] = 164,
        [anon_sym_COMMA] = 164,
        [sym_comment] = 8,
    },
    [88] = {
        [sym__type] = 326,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_func] = 278,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [89] = {
        [anon_sym_RPAREN] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 8,
    },
    [90] = {
        [sym__type] = 328,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [91] = {
        [anon_sym_RBRACK] = 330,
        [sym_comment] = 8,
    },
    [92] = {
        [sym__type] = 332,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_func] = 278,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [93] = {
        [anon_sym_RPAREN] = 230,
        [anon_sym_COMMA] = 230,
        [sym_comment] = 8,
    },
    [94] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 334,
        [anon_sym_RBRACE] = 336,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [95] = {
        [anon_sym_RBRACE] = 338,
        [sym_comment] = 8,
    },
    [96] = {
        [anon_sym_RPAREN] = 244,
        [anon_sym_COMMA] = 244,
        [sym_comment] = 8,
    },
    [97] = {
        [anon_sym_RPAREN] = 340,
        [anon_sym_COMMA] = 340,
        [sym_comment] = 8,
    },
    [98] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 346,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 350,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [99] = {
        [sym__type] = 354,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [100] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 376,
        [sym_comment] = 8,
    },
    [101] = {
        [anon_sym_RBRACE] = 378,
        [sym_comment] = 8,
    },
    [102] = {
        [sym_identifier] = 354,
        [sym_comment] = 8,
    },
    [103] = {
        [anon_sym_RPAREN] = 380,
        [anon_sym_COMMA] = 380,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__type] = 382,
        [sym_pointer_type] = 382,
        [sym_array_type] = 382,
        [sym_slice_type] = 382,
        [sym_struct_type] = 382,
        [sym_interface_type] = 382,
        [sym_map_type] = 382,
        [sym_channel_type] = 382,
        [sym_function_type] = 382,
        [sym_qualified_identifier] = 382,
        [sym__string_literal] = 384,
        [aux_sym_identifier_list_repeat1] = 386,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 388,
        [anon_sym_func] = 382,
        [anon_sym_COMMA] = 390,
        [anon_sym_STAR] = 382,
        [anon_sym_LBRACK] = 382,
        [anon_sym_struct] = 382,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 382,
        [anon_sym_LT_DASH] = 382,
        [sym_identifier] = 382,
        [sym_raw_string_literal] = 392,
        [sym_interpreted_string_literal] = 392,
        [sym_comment] = 8,
    },
    [105] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 394,
        [sym_comment] = 8,
    },
    [106] = {
        [sym__type] = 396,
        [sym_pointer_type] = 396,
        [sym_array_type] = 396,
        [sym_slice_type] = 396,
        [sym_struct_type] = 396,
        [sym_interface_type] = 396,
        [sym_map_type] = 396,
        [sym_channel_type] = 396,
        [sym_function_type] = 396,
        [sym_qualified_identifier] = 396,
        [anon_sym_func] = 396,
        [anon_sym_STAR] = 396,
        [anon_sym_LBRACK] = 396,
        [anon_sym_struct] = 396,
        [anon_sym_interface] = 396,
        [anon_sym_map] = 396,
        [anon_sym_chan] = 396,
        [anon_sym_LT_DASH] = 396,
        [sym_identifier] = 396,
        [sym_comment] = 8,
    },
    [107] = {
        [sym_identifier] = 398,
        [sym_comment] = 8,
    },
    [108] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 400,
        [sym_comment] = 8,
    },
    [109] = {
        [sym__type] = 402,
        [sym_pointer_type] = 402,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_interface_type] = 402,
        [sym_map_type] = 402,
        [sym_channel_type] = 402,
        [sym_function_type] = 402,
        [sym_qualified_identifier] = 402,
        [aux_sym_identifier_list_repeat1] = 404,
        [anon_sym_func] = 402,
        [anon_sym_COMMA] = 390,
        [anon_sym_STAR] = 402,
        [anon_sym_LBRACK] = 402,
        [anon_sym_struct] = 402,
        [anon_sym_interface] = 402,
        [anon_sym_map] = 402,
        [anon_sym_chan] = 402,
        [anon_sym_LT_DASH] = 402,
        [sym_identifier] = 402,
        [sym_comment] = 8,
    },
    [110] = {
        [sym__type] = 406,
        [sym_pointer_type] = 406,
        [sym_array_type] = 406,
        [sym_slice_type] = 406,
        [sym_struct_type] = 406,
        [sym_interface_type] = 406,
        [sym_map_type] = 406,
        [sym_channel_type] = 406,
        [sym_function_type] = 406,
        [sym_qualified_identifier] = 406,
        [anon_sym_func] = 406,
        [anon_sym_STAR] = 406,
        [anon_sym_LBRACK] = 406,
        [anon_sym_struct] = 406,
        [anon_sym_interface] = 406,
        [anon_sym_map] = 406,
        [anon_sym_chan] = 406,
        [anon_sym_LT_DASH] = 406,
        [sym_identifier] = 406,
        [sym_comment] = 8,
    },
    [111] = {
        [sym__string_literal] = 408,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 394,
        [sym_raw_string_literal] = 392,
        [sym_interpreted_string_literal] = 392,
        [sym_comment] = 8,
    },
    [112] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 410,
        [sym_comment] = 8,
    },
    [113] = {
        [anon_sym_RPAREN] = 412,
        [anon_sym_COMMA] = 412,
        [sym_comment] = 8,
    },
    [114] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 414,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 416,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [115] = {
        [anon_sym_RBRACE] = 418,
        [sym_comment] = 8,
    },
    [116] = {
        [sym__string_literal] = 122,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [sym_comment] = 8,
    },
    [117] = {
        [sym_parameters] = 420,
        [anon_sym_LPAREN] = 422,
        [sym_comment] = 8,
    },
    [118] = {
        [sym__type] = 424,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [119] = {
        [sym__expression] = 426,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_RBRACK] = 428,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [120] = {
        [anon_sym_LBRACE] = 430,
        [sym_comment] = 8,
    },
    [121] = {
        [anon_sym_LBRACE] = 432,
        [sym_comment] = 8,
    },
    [122] = {
        [anon_sym_LBRACK] = 434,
        [sym_comment] = 8,
    },
    [123] = {
        [sym__type] = 436,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 438,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [124] = {
        [anon_sym_chan] = 440,
        [sym_comment] = 8,
    },
    [125] = {
        [sym__string_literal] = 122,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [anon_sym_DOT] = 442,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [sym_comment] = 8,
    },
    [126] = {
        [sym_identifier] = 444,
        [sym_comment] = 8,
    },
    [127] = {
        [sym__string_literal] = 158,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 158,
        [sym_raw_string_literal] = 158,
        [sym_interpreted_string_literal] = 158,
        [sym_comment] = 8,
    },
    [128] = {
        [sym__type] = 446,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__string_literal] = 162,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [sym_raw_string_literal] = 162,
        [sym_interpreted_string_literal] = 162,
        [sym_comment] = 8,
    },
    [130] = {
        [sym__string_literal] = 164,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 164,
        [sym_raw_string_literal] = 164,
        [sym_interpreted_string_literal] = 164,
        [sym_comment] = 8,
    },
    [131] = {
        [sym__type] = 448,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__string_literal] = 168,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [sym_raw_string_literal] = 168,
        [sym_interpreted_string_literal] = 168,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__type] = 450,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [134] = {
        [anon_sym_RBRACK] = 452,
        [sym_comment] = 8,
    },
    [135] = {
        [sym__type] = 454,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [136] = {
        [sym__string_literal] = 230,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 230,
        [sym_raw_string_literal] = 230,
        [sym_interpreted_string_literal] = 230,
        [sym_comment] = 8,
    },
    [137] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 456,
        [anon_sym_RBRACE] = 458,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [138] = {
        [anon_sym_RBRACE] = 460,
        [sym_comment] = 8,
    },
    [139] = {
        [sym__string_literal] = 244,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 244,
        [sym_raw_string_literal] = 244,
        [sym_interpreted_string_literal] = 244,
        [sym_comment] = 8,
    },
    [140] = {
        [sym__string_literal] = 340,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 340,
        [sym_raw_string_literal] = 340,
        [sym_interpreted_string_literal] = 340,
        [sym_comment] = 8,
    },
    [141] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 462,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 464,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [142] = {
        [anon_sym_RBRACE] = 466,
        [sym_comment] = 8,
    },
    [143] = {
        [sym__string_literal] = 380,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 380,
        [sym_raw_string_literal] = 380,
        [sym_interpreted_string_literal] = 380,
        [sym_comment] = 8,
    },
    [144] = {
        [sym__string_literal] = 412,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 412,
        [sym_raw_string_literal] = 412,
        [sym_interpreted_string_literal] = 412,
        [sym_comment] = 8,
    },
    [145] = {
        [anon_sym_LPAREN] = 468,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 472,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [146] = {
        [anon_sym_LPAREN] = 482,
        [anon_sym_STAR] = 482,
        [anon_sym_RBRACK] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [147] = {
        [anon_sym_LPAREN] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_RBRACK] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [148] = {
        [sym__type] = 486,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [149] = {
        [anon_sym_LPAREN] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_RBRACK] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [150] = {
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [151] = {
        [sym__string_literal] = 490,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 490,
        [sym_raw_string_literal] = 490,
        [sym_interpreted_string_literal] = 490,
        [sym_comment] = 8,
    },
    [152] = {
        [sym_expression_list] = 492,
        [sym__expression] = 494,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [153] = {
        [sym__expression] = 504,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [154] = {
        [sym__type] = 506,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_comment] = 8,
    },
    [155] = {
        [sym__expression] = 508,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [156] = {
        [sym__expression] = 510,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [157] = {
        [sym__expression] = 512,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [158] = {
        [sym__expression] = 514,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [159] = {
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 516,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [160] = {
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 516,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [161] = {
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 516,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [162] = {
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 516,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [163] = {
        [anon_sym_LPAREN] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_RBRACK] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [164] = {
        [sym__string_literal] = 520,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 520,
        [sym_raw_string_literal] = 520,
        [sym_interpreted_string_literal] = 520,
        [sym_comment] = 8,
    },
    [165] = {
        [anon_sym_RPAREN] = 522,
        [sym_comment] = 8,
    },
    [166] = {
        [aux_sym_expression_list_repeat1] = 524,
        [anon_sym_LPAREN] = 526,
        [anon_sym_RPAREN] = 528,
        [anon_sym_COMMA] = 530,
        [anon_sym_STAR] = 532,
        [anon_sym_SLASH] = 532,
        [anon_sym_PERCENT] = 532,
        [anon_sym_LT_LT] = 532,
        [anon_sym_GT_GT] = 532,
        [anon_sym_AMP] = 532,
        [anon_sym_AMP_CARET] = 532,
        [anon_sym_PLUS] = 534,
        [anon_sym_DASH] = 534,
        [anon_sym_PIPE] = 534,
        [anon_sym_CARET] = 534,
        [anon_sym_EQ_EQ] = 536,
        [anon_sym_BANG_EQ] = 536,
        [anon_sym_LT] = 536,
        [anon_sym_LT_EQ] = 536,
        [anon_sym_GT] = 536,
        [anon_sym_GT_EQ] = 536,
        [anon_sym_AMP_AMP] = 538,
        [anon_sym_PIPE_PIPE] = 540,
        [sym_comment] = 8,
    },
    [167] = {
        [aux_sym_expression_list_repeat1] = 482,
        [anon_sym_LPAREN] = 482,
        [anon_sym_RPAREN] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_STAR] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [168] = {
        [aux_sym_expression_list_repeat1] = 484,
        [anon_sym_LPAREN] = 484,
        [anon_sym_RPAREN] = 484,
        [anon_sym_COMMA] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [169] = {
        [aux_sym_expression_list_repeat1] = 400,
        [anon_sym_LPAREN] = 400,
        [anon_sym_RPAREN] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [170] = {
        [aux_sym_expression_list_repeat1] = 488,
        [anon_sym_LPAREN] = 488,
        [anon_sym_RPAREN] = 488,
        [anon_sym_COMMA] = 488,
        [anon_sym_STAR] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [171] = {
        [anon_sym_RPAREN] = 542,
        [sym_comment] = 8,
    },
    [172] = {
        [sym_expression_list] = 544,
        [sym__expression] = 494,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [173] = {
        [sym__expression] = 546,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [174] = {
        [sym__expression] = 548,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [175] = {
        [sym__expression] = 550,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [176] = {
        [sym__expression] = 552,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [177] = {
        [sym__expression] = 554,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [178] = {
        [sym__expression] = 556,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [179] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_RPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 532,
        [anon_sym_SLASH] = 532,
        [anon_sym_PERCENT] = 532,
        [anon_sym_LT_LT] = 532,
        [anon_sym_GT_GT] = 532,
        [anon_sym_AMP] = 532,
        [anon_sym_AMP_CARET] = 532,
        [anon_sym_PLUS] = 534,
        [anon_sym_DASH] = 534,
        [anon_sym_PIPE] = 534,
        [anon_sym_CARET] = 534,
        [anon_sym_EQ_EQ] = 536,
        [anon_sym_BANG_EQ] = 536,
        [anon_sym_LT] = 536,
        [anon_sym_LT_EQ] = 536,
        [anon_sym_GT] = 536,
        [anon_sym_GT_EQ] = 536,
        [anon_sym_AMP_AMP] = 538,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [180] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_RPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 532,
        [anon_sym_SLASH] = 532,
        [anon_sym_PERCENT] = 532,
        [anon_sym_LT_LT] = 532,
        [anon_sym_GT_GT] = 532,
        [anon_sym_AMP] = 532,
        [anon_sym_AMP_CARET] = 532,
        [anon_sym_PLUS] = 534,
        [anon_sym_DASH] = 534,
        [anon_sym_PIPE] = 534,
        [anon_sym_CARET] = 534,
        [anon_sym_EQ_EQ] = 536,
        [anon_sym_BANG_EQ] = 536,
        [anon_sym_LT] = 536,
        [anon_sym_LT_EQ] = 536,
        [anon_sym_GT] = 536,
        [anon_sym_GT_EQ] = 536,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [181] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_RPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 532,
        [anon_sym_SLASH] = 532,
        [anon_sym_PERCENT] = 532,
        [anon_sym_LT_LT] = 532,
        [anon_sym_GT_GT] = 532,
        [anon_sym_AMP] = 532,
        [anon_sym_AMP_CARET] = 532,
        [anon_sym_PLUS] = 534,
        [anon_sym_DASH] = 534,
        [anon_sym_PIPE] = 534,
        [anon_sym_CARET] = 534,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [182] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_RPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 532,
        [anon_sym_SLASH] = 532,
        [anon_sym_PERCENT] = 532,
        [anon_sym_LT_LT] = 532,
        [anon_sym_GT_GT] = 532,
        [anon_sym_AMP] = 532,
        [anon_sym_AMP_CARET] = 532,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [183] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_RPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [184] = {
        [aux_sym_expression_list_repeat1] = 558,
        [anon_sym_LPAREN] = 526,
        [anon_sym_RPAREN] = 560,
        [anon_sym_COMMA] = 530,
        [anon_sym_STAR] = 532,
        [anon_sym_SLASH] = 532,
        [anon_sym_PERCENT] = 532,
        [anon_sym_LT_LT] = 532,
        [anon_sym_GT_GT] = 532,
        [anon_sym_AMP] = 532,
        [anon_sym_AMP_CARET] = 532,
        [anon_sym_PLUS] = 534,
        [anon_sym_DASH] = 534,
        [anon_sym_PIPE] = 534,
        [anon_sym_CARET] = 534,
        [anon_sym_EQ_EQ] = 536,
        [anon_sym_BANG_EQ] = 536,
        [anon_sym_LT] = 536,
        [anon_sym_LT_EQ] = 536,
        [anon_sym_GT] = 536,
        [anon_sym_GT_EQ] = 536,
        [anon_sym_AMP_AMP] = 538,
        [anon_sym_PIPE_PIPE] = 540,
        [sym_comment] = 8,
    },
    [185] = {
        [anon_sym_RPAREN] = 562,
        [sym_comment] = 8,
    },
    [186] = {
        [anon_sym_RPAREN] = 564,
        [sym_comment] = 8,
    },
    [187] = {
        [aux_sym_expression_list_repeat1] = 566,
        [anon_sym_LPAREN] = 566,
        [anon_sym_RPAREN] = 566,
        [anon_sym_COMMA] = 566,
        [anon_sym_STAR] = 566,
        [anon_sym_SLASH] = 566,
        [anon_sym_PERCENT] = 566,
        [anon_sym_LT_LT] = 566,
        [anon_sym_GT_GT] = 566,
        [anon_sym_AMP] = 566,
        [anon_sym_AMP_CARET] = 566,
        [anon_sym_PLUS] = 566,
        [anon_sym_DASH] = 566,
        [anon_sym_PIPE] = 566,
        [anon_sym_CARET] = 566,
        [anon_sym_EQ_EQ] = 566,
        [anon_sym_BANG_EQ] = 566,
        [anon_sym_LT] = 566,
        [anon_sym_LT_EQ] = 566,
        [anon_sym_GT] = 566,
        [anon_sym_GT_EQ] = 566,
        [anon_sym_AMP_AMP] = 566,
        [anon_sym_PIPE_PIPE] = 566,
        [sym_comment] = 8,
    },
    [188] = {
        [anon_sym_LPAREN] = 566,
        [anon_sym_STAR] = 566,
        [anon_sym_RBRACK] = 566,
        [anon_sym_SLASH] = 566,
        [anon_sym_PERCENT] = 566,
        [anon_sym_LT_LT] = 566,
        [anon_sym_GT_GT] = 566,
        [anon_sym_AMP] = 566,
        [anon_sym_AMP_CARET] = 566,
        [anon_sym_PLUS] = 566,
        [anon_sym_DASH] = 566,
        [anon_sym_PIPE] = 566,
        [anon_sym_CARET] = 566,
        [anon_sym_EQ_EQ] = 566,
        [anon_sym_BANG_EQ] = 566,
        [anon_sym_LT] = 566,
        [anon_sym_LT_EQ] = 566,
        [anon_sym_GT] = 566,
        [anon_sym_GT_EQ] = 566,
        [anon_sym_AMP_AMP] = 566,
        [anon_sym_PIPE_PIPE] = 566,
        [sym_comment] = 8,
    },
    [189] = {
        [sym__string_literal] = 568,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 568,
        [sym_raw_string_literal] = 568,
        [sym_interpreted_string_literal] = 568,
        [sym_comment] = 8,
    },
    [190] = {
        [sym_parameters] = 570,
        [sym__type] = 570,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_channel_type] = 356,
        [sym_function_type] = 356,
        [sym_qualified_identifier] = 356,
        [sym__string_literal] = 572,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 572,
        [anon_sym_LPAREN] = 574,
        [anon_sym_func] = 358,
        [anon_sym_STAR] = 360,
        [anon_sym_LBRACK] = 362,
        [anon_sym_struct] = 364,
        [anon_sym_interface] = 366,
        [anon_sym_map] = 368,
        [anon_sym_chan] = 370,
        [anon_sym_LT_DASH] = 372,
        [sym_identifier] = 374,
        [sym_raw_string_literal] = 572,
        [sym_interpreted_string_literal] = 572,
        [sym_comment] = 8,
    },
    [191] = {
        [sym__parameter_list] = 576,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 578,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [192] = {
        [anon_sym_RPAREN] = 580,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [193] = {
        [sym_parameters] = 272,
        [sym__type] = 272,
        [sym_pointer_type] = 272,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_interface_type] = 272,
        [sym_map_type] = 272,
        [sym_channel_type] = 272,
        [sym_function_type] = 272,
        [sym_qualified_identifier] = 272,
        [sym__string_literal] = 272,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_func] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_LBRACK] = 272,
        [anon_sym_struct] = 272,
        [anon_sym_interface] = 272,
        [anon_sym_map] = 272,
        [anon_sym_chan] = 272,
        [anon_sym_LT_DASH] = 272,
        [sym_identifier] = 272,
        [sym_raw_string_literal] = 272,
        [sym_interpreted_string_literal] = 272,
        [sym_comment] = 8,
    },
    [194] = {
        [sym_parameters] = 582,
        [sym__type] = 582,
        [sym_pointer_type] = 582,
        [sym_array_type] = 582,
        [sym_slice_type] = 582,
        [sym_struct_type] = 582,
        [sym_interface_type] = 582,
        [sym_map_type] = 582,
        [sym_channel_type] = 582,
        [sym_function_type] = 582,
        [sym_qualified_identifier] = 582,
        [sym__string_literal] = 582,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [anon_sym_LPAREN] = 582,
        [anon_sym_func] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 582,
        [anon_sym_map] = 582,
        [anon_sym_chan] = 582,
        [anon_sym_LT_DASH] = 582,
        [sym_identifier] = 582,
        [sym_raw_string_literal] = 582,
        [sym_interpreted_string_literal] = 582,
        [sym_comment] = 8,
    },
    [195] = {
        [sym_parameter_declaration] = 584,
        [sym_identifier] = 586,
        [sym_comment] = 8,
    },
    [196] = {
        [anon_sym_RPAREN] = 588,
        [anon_sym_COMMA] = 588,
        [sym_comment] = 8,
    },
    [197] = {
        [sym__type] = 274,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_RPAREN] = 588,
        [anon_sym_func] = 278,
        [anon_sym_COMMA] = 588,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [198] = {
        [sym__string_literal] = 590,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 590,
        [sym_raw_string_literal] = 590,
        [sym_interpreted_string_literal] = 590,
        [sym_comment] = 8,
    },
    [199] = {
        [sym__parameter_list] = 592,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 594,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [200] = {
        [anon_sym_RPAREN] = 596,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [201] = {
        [sym__string_literal] = 272,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [sym_raw_string_literal] = 272,
        [sym_interpreted_string_literal] = 272,
        [sym_comment] = 8,
    },
    [202] = {
        [sym__string_literal] = 582,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [sym_raw_string_literal] = 582,
        [sym_interpreted_string_literal] = 582,
        [sym_comment] = 8,
    },
    [203] = {
        [anon_sym_LPAREN] = 468,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 598,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [204] = {
        [sym__type] = 600,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_func] = 278,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [205] = {
        [anon_sym_RPAREN] = 490,
        [anon_sym_COMMA] = 490,
        [sym_comment] = 8,
    },
    [206] = {
        [sym__type] = 602,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_func] = 278,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [207] = {
        [anon_sym_RPAREN] = 520,
        [anon_sym_COMMA] = 520,
        [sym_comment] = 8,
    },
    [208] = {
        [anon_sym_RPAREN] = 568,
        [anon_sym_COMMA] = 568,
        [sym_comment] = 8,
    },
    [209] = {
        [sym_parameters] = 604,
        [sym__type] = 604,
        [sym_pointer_type] = 276,
        [sym_array_type] = 276,
        [sym_slice_type] = 276,
        [sym_struct_type] = 276,
        [sym_interface_type] = 276,
        [sym_map_type] = 276,
        [sym_channel_type] = 276,
        [sym_function_type] = 276,
        [sym_qualified_identifier] = 276,
        [anon_sym_LPAREN] = 606,
        [anon_sym_RPAREN] = 572,
        [anon_sym_func] = 278,
        [anon_sym_COMMA] = 572,
        [anon_sym_STAR] = 280,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 284,
        [anon_sym_interface] = 286,
        [anon_sym_map] = 288,
        [anon_sym_chan] = 290,
        [anon_sym_LT_DASH] = 292,
        [sym_identifier] = 294,
        [sym_comment] = 8,
    },
    [210] = {
        [sym__parameter_list] = 608,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 610,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [211] = {
        [anon_sym_RPAREN] = 612,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [212] = {
        [sym_parameters] = 272,
        [sym__type] = 272,
        [sym_pointer_type] = 272,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_interface_type] = 272,
        [sym_map_type] = 272,
        [sym_channel_type] = 272,
        [sym_function_type] = 272,
        [sym_qualified_identifier] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_RPAREN] = 272,
        [anon_sym_func] = 272,
        [anon_sym_COMMA] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_LBRACK] = 272,
        [anon_sym_struct] = 272,
        [anon_sym_interface] = 272,
        [anon_sym_map] = 272,
        [anon_sym_chan] = 272,
        [anon_sym_LT_DASH] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [213] = {
        [sym_parameters] = 582,
        [sym__type] = 582,
        [sym_pointer_type] = 582,
        [sym_array_type] = 582,
        [sym_slice_type] = 582,
        [sym_struct_type] = 582,
        [sym_interface_type] = 582,
        [sym_map_type] = 582,
        [sym_channel_type] = 582,
        [sym_function_type] = 582,
        [sym_qualified_identifier] = 582,
        [anon_sym_LPAREN] = 582,
        [anon_sym_RPAREN] = 582,
        [anon_sym_func] = 582,
        [anon_sym_COMMA] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 582,
        [anon_sym_map] = 582,
        [anon_sym_chan] = 582,
        [anon_sym_LT_DASH] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 8,
    },
    [214] = {
        [anon_sym_RPAREN] = 590,
        [anon_sym_COMMA] = 590,
        [sym_comment] = 8,
    },
    [215] = {
        [sym__parameter_list] = 614,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 616,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [216] = {
        [anon_sym_RPAREN] = 618,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [217] = {
        [anon_sym_RPAREN] = 272,
        [anon_sym_COMMA] = 272,
        [sym_comment] = 8,
    },
    [218] = {
        [anon_sym_RPAREN] = 582,
        [anon_sym_COMMA] = 582,
        [sym_comment] = 8,
    },
    [219] = {
        [sym_parameters] = 582,
        [sym__type] = 582,
        [sym_pointer_type] = 582,
        [sym_array_type] = 582,
        [sym_slice_type] = 582,
        [sym_struct_type] = 582,
        [sym_interface_type] = 582,
        [sym_map_type] = 582,
        [sym_channel_type] = 582,
        [sym_function_type] = 582,
        [sym_qualified_identifier] = 582,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [anon_sym_LPAREN] = 582,
        [anon_sym_func] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 582,
        [anon_sym_map] = 582,
        [anon_sym_chan] = 582,
        [anon_sym_LT_DASH] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 8,
    },
    [220] = {
        [anon_sym_RBRACE] = 620,
        [sym_comment] = 8,
    },
    [221] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 622,
        [sym_comment] = 8,
    },
    [222] = {
        [sym__parameter_list] = 624,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 626,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [223] = {
        [anon_sym_RPAREN] = 628,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [224] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [sym_comment] = 8,
    },
    [225] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [sym_comment] = 8,
    },
    [226] = {
        [anon_sym_RBRACK] = 340,
        [sym_comment] = 8,
    },
    [227] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 630,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 632,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [228] = {
        [anon_sym_RBRACE] = 634,
        [sym_comment] = 8,
    },
    [229] = {
        [anon_sym_RBRACK] = 380,
        [sym_comment] = 8,
    },
    [230] = {
        [anon_sym_RBRACK] = 412,
        [sym_comment] = 8,
    },
    [231] = {
        [anon_sym_LPAREN] = 468,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 636,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [232] = {
        [sym__type] = 638,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [233] = {
        [anon_sym_RBRACK] = 490,
        [sym_comment] = 8,
    },
    [234] = {
        [sym__type] = 640,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [235] = {
        [anon_sym_RBRACK] = 520,
        [sym_comment] = 8,
    },
    [236] = {
        [anon_sym_RBRACK] = 568,
        [sym_comment] = 8,
    },
    [237] = {
        [sym_parameters] = 642,
        [sym__type] = 642,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_LPAREN] = 644,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_RBRACK] = 572,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [238] = {
        [sym__parameter_list] = 646,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 648,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [239] = {
        [anon_sym_RPAREN] = 650,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [240] = {
        [sym_parameters] = 272,
        [sym__type] = 272,
        [sym_pointer_type] = 272,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_interface_type] = 272,
        [sym_map_type] = 272,
        [sym_channel_type] = 272,
        [sym_function_type] = 272,
        [sym_qualified_identifier] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_func] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_LBRACK] = 272,
        [anon_sym_RBRACK] = 272,
        [anon_sym_struct] = 272,
        [anon_sym_interface] = 272,
        [anon_sym_map] = 272,
        [anon_sym_chan] = 272,
        [anon_sym_LT_DASH] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [241] = {
        [sym_parameters] = 582,
        [sym__type] = 582,
        [sym_pointer_type] = 582,
        [sym_array_type] = 582,
        [sym_slice_type] = 582,
        [sym_struct_type] = 582,
        [sym_interface_type] = 582,
        [sym_map_type] = 582,
        [sym_channel_type] = 582,
        [sym_function_type] = 582,
        [sym_qualified_identifier] = 582,
        [anon_sym_LPAREN] = 582,
        [anon_sym_func] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_RBRACK] = 582,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 582,
        [anon_sym_map] = 582,
        [anon_sym_chan] = 582,
        [anon_sym_LT_DASH] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 8,
    },
    [242] = {
        [anon_sym_RBRACK] = 590,
        [sym_comment] = 8,
    },
    [243] = {
        [sym__parameter_list] = 652,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 654,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [244] = {
        [anon_sym_RPAREN] = 656,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [245] = {
        [anon_sym_RBRACK] = 272,
        [sym_comment] = 8,
    },
    [246] = {
        [anon_sym_RBRACK] = 582,
        [sym_comment] = 8,
    },
    [247] = {
        [sym__type] = 658,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [248] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 230,
        [sym_comment] = 8,
    },
    [249] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 660,
        [anon_sym_RBRACE] = 662,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [250] = {
        [anon_sym_RBRACE] = 664,
        [sym_comment] = 8,
    },
    [251] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 244,
        [sym_comment] = 8,
    },
    [252] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 340,
        [sym_comment] = 8,
    },
    [253] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 666,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 668,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [254] = {
        [anon_sym_RBRACE] = 670,
        [sym_comment] = 8,
    },
    [255] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 380,
        [sym_comment] = 8,
    },
    [256] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 412,
        [sym_comment] = 8,
    },
    [257] = {
        [anon_sym_LPAREN] = 468,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 672,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [258] = {
        [sym__type] = 674,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [259] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 490,
        [sym_comment] = 8,
    },
    [260] = {
        [sym__type] = 676,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [261] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 520,
        [sym_comment] = 8,
    },
    [262] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 568,
        [sym_comment] = 8,
    },
    [263] = {
        [sym_parameters] = 678,
        [sym__type] = 678,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 572,
        [anon_sym_LPAREN] = 252,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [264] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 590,
        [sym_comment] = 8,
    },
    [265] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 680,
        [sym_comment] = 8,
    },
    [266] = {
        [anon_sym_RPAREN] = 682,
        [sym_comment] = 8,
    },
    [267] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 684,
        [sym_comment] = 8,
    },
    [268] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 686,
        [sym_comment] = 8,
    },
    [269] = {
        [sym_type_spec] = 92,
        [aux_sym_type_declaration_repeat1] = 688,
        [anon_sym_RPAREN] = 690,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [270] = {
        [anon_sym_RPAREN] = 692,
        [sym_comment] = 8,
    },
    [271] = {
        [sym_identifier] = 694,
        [sym_comment] = 8,
    },
    [272] = {
        [sym__parameter_list] = 696,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 698,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [273] = {
        [sym_parameters] = 700,
        [anon_sym_LPAREN] = 702,
        [sym_comment] = 8,
    },
    [274] = {
        [sym_parameters] = 704,
        [sym__type] = 704,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_block] = 708,
        [sym_qualified_identifier] = 706,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 710,
        [anon_sym_LPAREN] = 712,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_LBRACE] = 722,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [275] = {
        [sym__parameter_list] = 734,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 736,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [276] = {
        [anon_sym_RPAREN] = 738,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [277] = {
        [sym_parameters] = 272,
        [sym__type] = 272,
        [sym_pointer_type] = 272,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_interface_type] = 272,
        [sym_map_type] = 272,
        [sym_channel_type] = 272,
        [sym_function_type] = 272,
        [sym_block] = 272,
        [sym_qualified_identifier] = 272,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_func] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_LBRACK] = 272,
        [anon_sym_struct] = 272,
        [anon_sym_LBRACE] = 272,
        [anon_sym_interface] = 272,
        [anon_sym_map] = 272,
        [anon_sym_chan] = 272,
        [anon_sym_LT_DASH] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [278] = {
        [sym_parameters] = 582,
        [sym__type] = 582,
        [sym_pointer_type] = 582,
        [sym_array_type] = 582,
        [sym_slice_type] = 582,
        [sym_struct_type] = 582,
        [sym_interface_type] = 582,
        [sym_map_type] = 582,
        [sym_channel_type] = 582,
        [sym_function_type] = 582,
        [sym_block] = 582,
        [sym_qualified_identifier] = 582,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [anon_sym_LPAREN] = 582,
        [anon_sym_func] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 582,
        [anon_sym_LBRACE] = 582,
        [anon_sym_interface] = 582,
        [anon_sym_map] = 582,
        [anon_sym_chan] = 582,
        [anon_sym_LT_DASH] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 8,
    },
    [279] = {
        [sym_block] = 740,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 742,
        [anon_sym_LBRACE] = 722,
        [sym_comment] = 8,
    },
    [280] = {
        [sym_block] = 122,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [281] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 742,
        [sym_comment] = 8,
    },
    [282] = {
        [sym__parameter_list] = 744,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 746,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [283] = {
        [sym_parameters] = 748,
        [anon_sym_LPAREN] = 702,
        [sym_comment] = 8,
    },
    [284] = {
        [sym__type] = 750,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_qualified_identifier] = 706,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [285] = {
        [sym__expression] = 752,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_RBRACK] = 754,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [286] = {
        [anon_sym_LBRACE] = 756,
        [sym_comment] = 8,
    },
    [287] = {
        [sym__declaration] = 758,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 760,
        [sym__statement] = 762,
        [sym_send_statement] = 758,
        [sym_inc_statement] = 758,
        [sym_dec_statement] = 758,
        [sym_assignment_statement] = 758,
        [sym_short_var_declaration] = 758,
        [sym__expression] = 764,
        [sym_call_expression] = 766,
        [sym_unary_expression] = 766,
        [sym_binary_expression] = 766,
        [sym__primary_expression] = 766,
        [sym__string_literal] = 768,
        [sym_int_literal] = 768,
        [sym_float_literal] = 768,
        [aux_sym_block_repeat1] = 770,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_type] = 34,
        [anon_sym_RBRACE] = 772,
        [sym_identifier] = 768,
        [sym_raw_string_literal] = 774,
        [sym_interpreted_string_literal] = 774,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 776,
        [sym_comment] = 8,
    },
    [288] = {
        [anon_sym_LBRACE] = 778,
        [sym_comment] = 8,
    },
    [289] = {
        [anon_sym_LBRACK] = 780,
        [sym_comment] = 8,
    },
    [290] = {
        [sym__type] = 782,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_qualified_identifier] = 706,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 784,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [291] = {
        [anon_sym_chan] = 786,
        [sym_comment] = 8,
    },
    [292] = {
        [sym_block] = 122,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [anon_sym_DOT] = 788,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [293] = {
        [sym_identifier] = 790,
        [sym_comment] = 8,
    },
    [294] = {
        [sym_block] = 158,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 158,
        [anon_sym_LBRACE] = 158,
        [sym_comment] = 8,
    },
    [295] = {
        [sym__type] = 792,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_qualified_identifier] = 706,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [296] = {
        [sym_block] = 162,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [anon_sym_LBRACE] = 162,
        [sym_comment] = 8,
    },
    [297] = {
        [sym_block] = 164,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 164,
        [anon_sym_LBRACE] = 164,
        [sym_comment] = 8,
    },
    [298] = {
        [sym__type] = 794,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_qualified_identifier] = 706,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [299] = {
        [sym_block] = 168,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [anon_sym_LBRACE] = 168,
        [sym_comment] = 8,
    },
    [300] = {
        [sym__type] = 796,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [301] = {
        [anon_sym_RBRACK] = 798,
        [sym_comment] = 8,
    },
    [302] = {
        [sym__type] = 800,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_qualified_identifier] = 706,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [303] = {
        [sym_block] = 230,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 230,
        [anon_sym_LBRACE] = 230,
        [sym_comment] = 8,
    },
    [304] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 802,
        [anon_sym_RBRACE] = 804,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [305] = {
        [anon_sym_RBRACE] = 806,
        [sym_comment] = 8,
    },
    [306] = {
        [sym_block] = 244,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 244,
        [anon_sym_LBRACE] = 244,
        [sym_comment] = 8,
    },
    [307] = {
        [sym_block] = 340,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 340,
        [anon_sym_LBRACE] = 340,
        [sym_comment] = 8,
    },
    [308] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 808,
        [sym_comment] = 8,
    },
    [309] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 810,
        [anon_sym_COLON_EQ] = 812,
        [sym_comment] = 8,
    },
    [310] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 814,
        [sym_comment] = 8,
    },
    [311] = {
        [aux_sym_expression_list_repeat1] = 816,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 808,
        [anon_sym_LPAREN] = 818,
        [anon_sym_COMMA] = 820,
        [anon_sym_STAR] = 822,
        [anon_sym_LT_DASH] = 824,
        [anon_sym_PLUS_PLUS] = 826,
        [anon_sym_DASH_DASH] = 828,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 528,
        [anon_sym_COLON_EQ] = 528,
        [anon_sym_SLASH] = 822,
        [anon_sym_PERCENT] = 822,
        [anon_sym_LT_LT] = 822,
        [anon_sym_GT_GT] = 822,
        [anon_sym_AMP] = 822,
        [anon_sym_AMP_CARET] = 822,
        [anon_sym_PLUS] = 830,
        [anon_sym_DASH] = 830,
        [anon_sym_PIPE] = 830,
        [anon_sym_CARET] = 830,
        [anon_sym_EQ_EQ] = 832,
        [anon_sym_BANG_EQ] = 832,
        [anon_sym_LT] = 832,
        [anon_sym_LT_EQ] = 832,
        [anon_sym_GT] = 832,
        [anon_sym_GT_EQ] = 832,
        [anon_sym_AMP_AMP] = 834,
        [anon_sym_PIPE_PIPE] = 836,
        [sym_comment] = 8,
    },
    [312] = {
        [aux_sym_expression_list_repeat1] = 482,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 482,
        [anon_sym_LPAREN] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_STAR] = 482,
        [anon_sym_LT_DASH] = 482,
        [anon_sym_PLUS_PLUS] = 482,
        [anon_sym_DASH_DASH] = 482,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 482,
        [anon_sym_COLON_EQ] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [313] = {
        [aux_sym_expression_list_repeat1] = 484,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 484,
        [anon_sym_LPAREN] = 484,
        [anon_sym_COMMA] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_LT_DASH] = 484,
        [anon_sym_PLUS_PLUS] = 484,
        [anon_sym_DASH_DASH] = 484,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 484,
        [anon_sym_COLON_EQ] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [314] = {
        [anon_sym_RBRACE] = 838,
        [sym_comment] = 8,
    },
    [315] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 840,
        [sym_comment] = 8,
    },
    [316] = {
        [aux_sym_expression_list_repeat1] = 400,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 400,
        [anon_sym_LPAREN] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_LT_DASH] = 400,
        [anon_sym_PLUS_PLUS] = 400,
        [anon_sym_DASH_DASH] = 400,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 400,
        [anon_sym_COLON_EQ] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [317] = {
        [aux_sym_expression_list_repeat1] = 488,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 488,
        [anon_sym_LPAREN] = 488,
        [anon_sym_COMMA] = 488,
        [anon_sym_STAR] = 488,
        [anon_sym_LT_DASH] = 488,
        [anon_sym_PLUS_PLUS] = 488,
        [anon_sym_DASH_DASH] = 488,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 488,
        [anon_sym_COLON_EQ] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [318] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 842,
        [sym_comment] = 8,
    },
    [319] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 542,
        [anon_sym_COLON_EQ] = 542,
        [sym_comment] = 8,
    },
    [320] = {
        [sym_expression_list] = 844,
        [sym__expression] = 494,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [321] = {
        [sym__expression] = 846,
        [sym_call_expression] = 848,
        [sym_unary_expression] = 848,
        [sym_binary_expression] = 848,
        [sym__primary_expression] = 848,
        [sym__string_literal] = 850,
        [sym_int_literal] = 850,
        [sym_float_literal] = 850,
        [sym_identifier] = 850,
        [sym_raw_string_literal] = 852,
        [sym_interpreted_string_literal] = 852,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 854,
        [sym_comment] = 8,
    },
    [322] = {
        [sym__expression] = 856,
        [sym_call_expression] = 766,
        [sym_unary_expression] = 766,
        [sym_binary_expression] = 766,
        [sym__primary_expression] = 766,
        [sym__string_literal] = 768,
        [sym_int_literal] = 768,
        [sym_float_literal] = 768,
        [sym_identifier] = 768,
        [sym_raw_string_literal] = 774,
        [sym_interpreted_string_literal] = 774,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 776,
        [sym_comment] = 8,
    },
    [323] = {
        [sym__expression] = 858,
        [sym_call_expression] = 860,
        [sym_unary_expression] = 860,
        [sym_binary_expression] = 860,
        [sym__primary_expression] = 860,
        [sym__string_literal] = 862,
        [sym_int_literal] = 862,
        [sym_float_literal] = 862,
        [sym_identifier] = 862,
        [sym_raw_string_literal] = 864,
        [sym_interpreted_string_literal] = 864,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 866,
        [sym_comment] = 8,
    },
    [324] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 868,
        [sym_comment] = 8,
    },
    [325] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 870,
        [sym_comment] = 8,
    },
    [326] = {
        [sym__expression] = 872,
        [sym_call_expression] = 766,
        [sym_unary_expression] = 766,
        [sym_binary_expression] = 766,
        [sym__primary_expression] = 766,
        [sym__string_literal] = 768,
        [sym_int_literal] = 768,
        [sym_float_literal] = 768,
        [sym_identifier] = 768,
        [sym_raw_string_literal] = 774,
        [sym_interpreted_string_literal] = 774,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 776,
        [sym_comment] = 8,
    },
    [327] = {
        [sym__expression] = 874,
        [sym_call_expression] = 766,
        [sym_unary_expression] = 766,
        [sym_binary_expression] = 766,
        [sym__primary_expression] = 766,
        [sym__string_literal] = 768,
        [sym_int_literal] = 768,
        [sym_float_literal] = 768,
        [sym_identifier] = 768,
        [sym_raw_string_literal] = 774,
        [sym_interpreted_string_literal] = 774,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 776,
        [sym_comment] = 8,
    },
    [328] = {
        [sym__expression] = 876,
        [sym_call_expression] = 766,
        [sym_unary_expression] = 766,
        [sym_binary_expression] = 766,
        [sym__primary_expression] = 766,
        [sym__string_literal] = 768,
        [sym_int_literal] = 768,
        [sym_float_literal] = 768,
        [sym_identifier] = 768,
        [sym_raw_string_literal] = 774,
        [sym_interpreted_string_literal] = 774,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 776,
        [sym_comment] = 8,
    },
    [329] = {
        [sym__expression] = 878,
        [sym_call_expression] = 766,
        [sym_unary_expression] = 766,
        [sym_binary_expression] = 766,
        [sym__primary_expression] = 766,
        [sym__string_literal] = 768,
        [sym_int_literal] = 768,
        [sym_float_literal] = 768,
        [sym_identifier] = 768,
        [sym_raw_string_literal] = 774,
        [sym_interpreted_string_literal] = 774,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 776,
        [sym_comment] = 8,
    },
    [330] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 822,
        [anon_sym_LT_DASH] = 516,
        [anon_sym_PLUS_PLUS] = 516,
        [anon_sym_DASH_DASH] = 516,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 822,
        [anon_sym_PERCENT] = 822,
        [anon_sym_LT_LT] = 822,
        [anon_sym_GT_GT] = 822,
        [anon_sym_AMP] = 822,
        [anon_sym_AMP_CARET] = 822,
        [anon_sym_PLUS] = 830,
        [anon_sym_DASH] = 830,
        [anon_sym_PIPE] = 830,
        [anon_sym_CARET] = 830,
        [anon_sym_EQ_EQ] = 832,
        [anon_sym_BANG_EQ] = 832,
        [anon_sym_LT] = 832,
        [anon_sym_LT_EQ] = 832,
        [anon_sym_GT] = 832,
        [anon_sym_GT_EQ] = 832,
        [anon_sym_AMP_AMP] = 834,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [331] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 822,
        [anon_sym_LT_DASH] = 516,
        [anon_sym_PLUS_PLUS] = 516,
        [anon_sym_DASH_DASH] = 516,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 822,
        [anon_sym_PERCENT] = 822,
        [anon_sym_LT_LT] = 822,
        [anon_sym_GT_GT] = 822,
        [anon_sym_AMP] = 822,
        [anon_sym_AMP_CARET] = 822,
        [anon_sym_PLUS] = 830,
        [anon_sym_DASH] = 830,
        [anon_sym_PIPE] = 830,
        [anon_sym_CARET] = 830,
        [anon_sym_EQ_EQ] = 832,
        [anon_sym_BANG_EQ] = 832,
        [anon_sym_LT] = 832,
        [anon_sym_LT_EQ] = 832,
        [anon_sym_GT] = 832,
        [anon_sym_GT_EQ] = 832,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [332] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 822,
        [anon_sym_LT_DASH] = 516,
        [anon_sym_PLUS_PLUS] = 516,
        [anon_sym_DASH_DASH] = 516,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 822,
        [anon_sym_PERCENT] = 822,
        [anon_sym_LT_LT] = 822,
        [anon_sym_GT_GT] = 822,
        [anon_sym_AMP] = 822,
        [anon_sym_AMP_CARET] = 822,
        [anon_sym_PLUS] = 830,
        [anon_sym_DASH] = 830,
        [anon_sym_PIPE] = 830,
        [anon_sym_CARET] = 830,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [333] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 822,
        [anon_sym_LT_DASH] = 516,
        [anon_sym_PLUS_PLUS] = 516,
        [anon_sym_DASH_DASH] = 516,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 822,
        [anon_sym_PERCENT] = 822,
        [anon_sym_LT_LT] = 822,
        [anon_sym_GT_GT] = 822,
        [anon_sym_AMP] = 822,
        [anon_sym_AMP_CARET] = 822,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [334] = {
        [aux_sym_expression_list_repeat1] = 518,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_LT_DASH] = 518,
        [anon_sym_PLUS_PLUS] = 518,
        [anon_sym_DASH_DASH] = 518,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 518,
        [anon_sym_COLON_EQ] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [335] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 880,
        [anon_sym_LPAREN] = 882,
        [anon_sym_STAR] = 884,
        [anon_sym_SLASH] = 884,
        [anon_sym_PERCENT] = 884,
        [anon_sym_LT_LT] = 884,
        [anon_sym_GT_GT] = 884,
        [anon_sym_AMP] = 884,
        [anon_sym_AMP_CARET] = 884,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 888,
        [anon_sym_BANG_EQ] = 888,
        [anon_sym_LT] = 888,
        [anon_sym_LT_EQ] = 888,
        [anon_sym_GT] = 888,
        [anon_sym_GT_EQ] = 888,
        [anon_sym_AMP_AMP] = 890,
        [anon_sym_PIPE_PIPE] = 892,
        [sym_comment] = 8,
    },
    [336] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 482,
        [anon_sym_LPAREN] = 482,
        [anon_sym_STAR] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [337] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 484,
        [anon_sym_LPAREN] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [338] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 400,
        [anon_sym_LPAREN] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [339] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 488,
        [anon_sym_LPAREN] = 488,
        [anon_sym_STAR] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [340] = {
        [sym_expression_list] = 894,
        [sym__expression] = 494,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [341] = {
        [sym__expression] = 896,
        [sym_call_expression] = 860,
        [sym_unary_expression] = 860,
        [sym_binary_expression] = 860,
        [sym__primary_expression] = 860,
        [sym__string_literal] = 862,
        [sym_int_literal] = 862,
        [sym_float_literal] = 862,
        [sym_identifier] = 862,
        [sym_raw_string_literal] = 864,
        [sym_interpreted_string_literal] = 864,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 866,
        [sym_comment] = 8,
    },
    [342] = {
        [sym__expression] = 898,
        [sym_call_expression] = 860,
        [sym_unary_expression] = 860,
        [sym_binary_expression] = 860,
        [sym__primary_expression] = 860,
        [sym__string_literal] = 862,
        [sym_int_literal] = 862,
        [sym_float_literal] = 862,
        [sym_identifier] = 862,
        [sym_raw_string_literal] = 864,
        [sym_interpreted_string_literal] = 864,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 866,
        [sym_comment] = 8,
    },
    [343] = {
        [sym__expression] = 900,
        [sym_call_expression] = 860,
        [sym_unary_expression] = 860,
        [sym_binary_expression] = 860,
        [sym__primary_expression] = 860,
        [sym__string_literal] = 862,
        [sym_int_literal] = 862,
        [sym_float_literal] = 862,
        [sym_identifier] = 862,
        [sym_raw_string_literal] = 864,
        [sym_interpreted_string_literal] = 864,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 866,
        [sym_comment] = 8,
    },
    [344] = {
        [sym__expression] = 902,
        [sym_call_expression] = 860,
        [sym_unary_expression] = 860,
        [sym_binary_expression] = 860,
        [sym__primary_expression] = 860,
        [sym__string_literal] = 862,
        [sym_int_literal] = 862,
        [sym_float_literal] = 862,
        [sym_identifier] = 862,
        [sym_raw_string_literal] = 864,
        [sym_interpreted_string_literal] = 864,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 866,
        [sym_comment] = 8,
    },
    [345] = {
        [sym__expression] = 904,
        [sym_call_expression] = 860,
        [sym_unary_expression] = 860,
        [sym_binary_expression] = 860,
        [sym__primary_expression] = 860,
        [sym__string_literal] = 862,
        [sym_int_literal] = 862,
        [sym_float_literal] = 862,
        [sym_identifier] = 862,
        [sym_raw_string_literal] = 864,
        [sym_interpreted_string_literal] = 864,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 866,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 866,
        [sym_comment] = 8,
    },
    [346] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 884,
        [anon_sym_SLASH] = 884,
        [anon_sym_PERCENT] = 884,
        [anon_sym_LT_LT] = 884,
        [anon_sym_GT_GT] = 884,
        [anon_sym_AMP] = 884,
        [anon_sym_AMP_CARET] = 884,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 888,
        [anon_sym_BANG_EQ] = 888,
        [anon_sym_LT] = 888,
        [anon_sym_LT_EQ] = 888,
        [anon_sym_GT] = 888,
        [anon_sym_GT_EQ] = 888,
        [anon_sym_AMP_AMP] = 890,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [347] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 884,
        [anon_sym_SLASH] = 884,
        [anon_sym_PERCENT] = 884,
        [anon_sym_LT_LT] = 884,
        [anon_sym_GT_GT] = 884,
        [anon_sym_AMP] = 884,
        [anon_sym_AMP_CARET] = 884,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 888,
        [anon_sym_BANG_EQ] = 888,
        [anon_sym_LT] = 888,
        [anon_sym_LT_EQ] = 888,
        [anon_sym_GT] = 888,
        [anon_sym_GT_EQ] = 888,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [348] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 884,
        [anon_sym_SLASH] = 884,
        [anon_sym_PERCENT] = 884,
        [anon_sym_LT_LT] = 884,
        [anon_sym_GT_GT] = 884,
        [anon_sym_AMP] = 884,
        [anon_sym_AMP_CARET] = 884,
        [anon_sym_PLUS] = 886,
        [anon_sym_DASH] = 886,
        [anon_sym_PIPE] = 886,
        [anon_sym_CARET] = 886,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [349] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_STAR] = 884,
        [anon_sym_SLASH] = 884,
        [anon_sym_PERCENT] = 884,
        [anon_sym_LT_LT] = 884,
        [anon_sym_GT_GT] = 884,
        [anon_sym_AMP] = 884,
        [anon_sym_AMP_CARET] = 884,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [350] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [351] = {
        [anon_sym_RPAREN] = 906,
        [sym_comment] = 8,
    },
    [352] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 566,
        [anon_sym_LPAREN] = 566,
        [anon_sym_STAR] = 566,
        [anon_sym_SLASH] = 566,
        [anon_sym_PERCENT] = 566,
        [anon_sym_LT_LT] = 566,
        [anon_sym_GT_GT] = 566,
        [anon_sym_AMP] = 566,
        [anon_sym_AMP_CARET] = 566,
        [anon_sym_PLUS] = 566,
        [anon_sym_DASH] = 566,
        [anon_sym_PIPE] = 566,
        [anon_sym_CARET] = 566,
        [anon_sym_EQ_EQ] = 566,
        [anon_sym_BANG_EQ] = 566,
        [anon_sym_LT] = 566,
        [anon_sym_LT_EQ] = 566,
        [anon_sym_GT] = 566,
        [anon_sym_GT_EQ] = 566,
        [anon_sym_AMP_AMP] = 566,
        [anon_sym_PIPE_PIPE] = 566,
        [sym_comment] = 8,
    },
    [353] = {
        [aux_sym_expression_list_repeat1] = 908,
        [anon_sym_LPAREN] = 910,
        [anon_sym_COMMA] = 820,
        [anon_sym_STAR] = 912,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 560,
        [anon_sym_COLON_EQ] = 560,
        [anon_sym_SLASH] = 912,
        [anon_sym_PERCENT] = 912,
        [anon_sym_LT_LT] = 912,
        [anon_sym_GT_GT] = 912,
        [anon_sym_AMP] = 912,
        [anon_sym_AMP_CARET] = 912,
        [anon_sym_PLUS] = 914,
        [anon_sym_DASH] = 914,
        [anon_sym_PIPE] = 914,
        [anon_sym_CARET] = 914,
        [anon_sym_EQ_EQ] = 916,
        [anon_sym_BANG_EQ] = 916,
        [anon_sym_LT] = 916,
        [anon_sym_LT_EQ] = 916,
        [anon_sym_GT] = 916,
        [anon_sym_GT_EQ] = 916,
        [anon_sym_AMP_AMP] = 918,
        [anon_sym_PIPE_PIPE] = 920,
        [sym_comment] = 8,
    },
    [354] = {
        [aux_sym_expression_list_repeat1] = 482,
        [anon_sym_LPAREN] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_STAR] = 482,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 482,
        [anon_sym_COLON_EQ] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [355] = {
        [aux_sym_expression_list_repeat1] = 484,
        [anon_sym_LPAREN] = 484,
        [anon_sym_COMMA] = 484,
        [anon_sym_STAR] = 484,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 484,
        [anon_sym_COLON_EQ] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [356] = {
        [aux_sym_expression_list_repeat1] = 400,
        [anon_sym_LPAREN] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_STAR] = 400,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 400,
        [anon_sym_COLON_EQ] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [357] = {
        [aux_sym_expression_list_repeat1] = 488,
        [anon_sym_LPAREN] = 488,
        [anon_sym_COMMA] = 488,
        [anon_sym_STAR] = 488,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 488,
        [anon_sym_COLON_EQ] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [358] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 562,
        [anon_sym_COLON_EQ] = 562,
        [sym_comment] = 8,
    },
    [359] = {
        [sym_expression_list] = 922,
        [sym__expression] = 494,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [360] = {
        [sym__expression] = 924,
        [sym_call_expression] = 848,
        [sym_unary_expression] = 848,
        [sym_binary_expression] = 848,
        [sym__primary_expression] = 848,
        [sym__string_literal] = 850,
        [sym_int_literal] = 850,
        [sym_float_literal] = 850,
        [sym_identifier] = 850,
        [sym_raw_string_literal] = 852,
        [sym_interpreted_string_literal] = 852,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 854,
        [sym_comment] = 8,
    },
    [361] = {
        [sym__expression] = 926,
        [sym_call_expression] = 848,
        [sym_unary_expression] = 848,
        [sym_binary_expression] = 848,
        [sym__primary_expression] = 848,
        [sym__string_literal] = 850,
        [sym_int_literal] = 850,
        [sym_float_literal] = 850,
        [sym_identifier] = 850,
        [sym_raw_string_literal] = 852,
        [sym_interpreted_string_literal] = 852,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 854,
        [sym_comment] = 8,
    },
    [362] = {
        [sym__expression] = 928,
        [sym_call_expression] = 848,
        [sym_unary_expression] = 848,
        [sym_binary_expression] = 848,
        [sym__primary_expression] = 848,
        [sym__string_literal] = 850,
        [sym_int_literal] = 850,
        [sym_float_literal] = 850,
        [sym_identifier] = 850,
        [sym_raw_string_literal] = 852,
        [sym_interpreted_string_literal] = 852,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 854,
        [sym_comment] = 8,
    },
    [363] = {
        [sym__expression] = 930,
        [sym_call_expression] = 848,
        [sym_unary_expression] = 848,
        [sym_binary_expression] = 848,
        [sym__primary_expression] = 848,
        [sym__string_literal] = 850,
        [sym_int_literal] = 850,
        [sym_float_literal] = 850,
        [sym_identifier] = 850,
        [sym_raw_string_literal] = 852,
        [sym_interpreted_string_literal] = 852,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 854,
        [sym_comment] = 8,
    },
    [364] = {
        [sym__expression] = 932,
        [sym_call_expression] = 848,
        [sym_unary_expression] = 848,
        [sym_binary_expression] = 848,
        [sym__primary_expression] = 848,
        [sym__string_literal] = 850,
        [sym_int_literal] = 850,
        [sym_float_literal] = 850,
        [sym_identifier] = 850,
        [sym_raw_string_literal] = 852,
        [sym_interpreted_string_literal] = 852,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 854,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 854,
        [sym_comment] = 8,
    },
    [365] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 912,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 912,
        [anon_sym_PERCENT] = 912,
        [anon_sym_LT_LT] = 912,
        [anon_sym_GT_GT] = 912,
        [anon_sym_AMP] = 912,
        [anon_sym_AMP_CARET] = 912,
        [anon_sym_PLUS] = 914,
        [anon_sym_DASH] = 914,
        [anon_sym_PIPE] = 914,
        [anon_sym_CARET] = 914,
        [anon_sym_EQ_EQ] = 916,
        [anon_sym_BANG_EQ] = 916,
        [anon_sym_LT] = 916,
        [anon_sym_LT_EQ] = 916,
        [anon_sym_GT] = 916,
        [anon_sym_GT_EQ] = 916,
        [anon_sym_AMP_AMP] = 918,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [366] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 912,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 912,
        [anon_sym_PERCENT] = 912,
        [anon_sym_LT_LT] = 912,
        [anon_sym_GT_GT] = 912,
        [anon_sym_AMP] = 912,
        [anon_sym_AMP_CARET] = 912,
        [anon_sym_PLUS] = 914,
        [anon_sym_DASH] = 914,
        [anon_sym_PIPE] = 914,
        [anon_sym_CARET] = 914,
        [anon_sym_EQ_EQ] = 916,
        [anon_sym_BANG_EQ] = 916,
        [anon_sym_LT] = 916,
        [anon_sym_LT_EQ] = 916,
        [anon_sym_GT] = 916,
        [anon_sym_GT_EQ] = 916,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [367] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 912,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 912,
        [anon_sym_PERCENT] = 912,
        [anon_sym_LT_LT] = 912,
        [anon_sym_GT_GT] = 912,
        [anon_sym_AMP] = 912,
        [anon_sym_AMP_CARET] = 912,
        [anon_sym_PLUS] = 914,
        [anon_sym_DASH] = 914,
        [anon_sym_PIPE] = 914,
        [anon_sym_CARET] = 914,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [368] = {
        [aux_sym_expression_list_repeat1] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 912,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 516,
        [anon_sym_COLON_EQ] = 516,
        [anon_sym_SLASH] = 912,
        [anon_sym_PERCENT] = 912,
        [anon_sym_LT_LT] = 912,
        [anon_sym_GT_GT] = 912,
        [anon_sym_AMP] = 912,
        [anon_sym_AMP_CARET] = 912,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [369] = {
        [aux_sym_expression_list_repeat1] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 518,
        [anon_sym_COLON_EQ] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [370] = {
        [anon_sym_RPAREN] = 934,
        [sym_comment] = 8,
    },
    [371] = {
        [aux_sym_expression_list_repeat1] = 566,
        [anon_sym_LPAREN] = 566,
        [anon_sym_COMMA] = 566,
        [anon_sym_STAR] = 566,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 566,
        [anon_sym_COLON_EQ] = 566,
        [anon_sym_SLASH] = 566,
        [anon_sym_PERCENT] = 566,
        [anon_sym_LT_LT] = 566,
        [anon_sym_GT_GT] = 566,
        [anon_sym_AMP] = 566,
        [anon_sym_AMP_CARET] = 566,
        [anon_sym_PLUS] = 566,
        [anon_sym_DASH] = 566,
        [anon_sym_PIPE] = 566,
        [anon_sym_CARET] = 566,
        [anon_sym_EQ_EQ] = 566,
        [anon_sym_BANG_EQ] = 566,
        [anon_sym_LT] = 566,
        [anon_sym_LT_EQ] = 566,
        [anon_sym_GT] = 566,
        [anon_sym_GT_EQ] = 566,
        [anon_sym_AMP_AMP] = 566,
        [anon_sym_PIPE_PIPE] = 566,
        [sym_comment] = 8,
    },
    [372] = {
        [anon_sym_RPAREN] = 936,
        [sym_comment] = 8,
    },
    [373] = {
        [aux_sym_expression_list_repeat1] = 566,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 566,
        [anon_sym_LPAREN] = 566,
        [anon_sym_COMMA] = 566,
        [anon_sym_STAR] = 566,
        [anon_sym_LT_DASH] = 566,
        [anon_sym_PLUS_PLUS] = 566,
        [anon_sym_DASH_DASH] = 566,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 566,
        [anon_sym_COLON_EQ] = 566,
        [anon_sym_SLASH] = 566,
        [anon_sym_PERCENT] = 566,
        [anon_sym_LT_LT] = 566,
        [anon_sym_GT_GT] = 566,
        [anon_sym_AMP] = 566,
        [anon_sym_AMP_CARET] = 566,
        [anon_sym_PLUS] = 566,
        [anon_sym_DASH] = 566,
        [anon_sym_PIPE] = 566,
        [anon_sym_CARET] = 566,
        [anon_sym_EQ_EQ] = 566,
        [anon_sym_BANG_EQ] = 566,
        [anon_sym_LT] = 566,
        [anon_sym_LT_EQ] = 566,
        [anon_sym_GT] = 566,
        [anon_sym_GT_EQ] = 566,
        [anon_sym_AMP_AMP] = 566,
        [anon_sym_PIPE_PIPE] = 566,
        [sym_comment] = 8,
    },
    [374] = {
        [sym__declaration] = 758,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 760,
        [sym__statement] = 762,
        [sym_send_statement] = 758,
        [sym_inc_statement] = 758,
        [sym_dec_statement] = 758,
        [sym_assignment_statement] = 758,
        [sym_short_var_declaration] = 758,
        [sym__expression] = 764,
        [sym_call_expression] = 766,
        [sym_unary_expression] = 766,
        [sym_binary_expression] = 766,
        [sym__primary_expression] = 766,
        [sym__string_literal] = 768,
        [sym_int_literal] = 768,
        [sym_float_literal] = 768,
        [aux_sym_block_repeat1] = 938,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_type] = 34,
        [anon_sym_RBRACE] = 940,
        [sym_identifier] = 768,
        [sym_raw_string_literal] = 774,
        [sym_interpreted_string_literal] = 774,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 776,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 776,
        [sym_comment] = 8,
    },
    [375] = {
        [anon_sym_RBRACE] = 942,
        [sym_comment] = 8,
    },
    [376] = {
        [sym_expression_list] = 944,
        [sym__expression] = 946,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [377] = {
        [sym_expression_list] = 956,
        [sym__expression] = 946,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [378] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 958,
        [sym_comment] = 8,
    },
    [379] = {
        [aux_sym_expression_list_repeat1] = 960,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 528,
        [anon_sym_LPAREN] = 962,
        [anon_sym_COMMA] = 964,
        [anon_sym_STAR] = 966,
        [anon_sym_SLASH] = 966,
        [anon_sym_PERCENT] = 966,
        [anon_sym_LT_LT] = 966,
        [anon_sym_GT_GT] = 966,
        [anon_sym_AMP] = 966,
        [anon_sym_AMP_CARET] = 966,
        [anon_sym_PLUS] = 968,
        [anon_sym_DASH] = 968,
        [anon_sym_PIPE] = 968,
        [anon_sym_CARET] = 968,
        [anon_sym_EQ_EQ] = 970,
        [anon_sym_BANG_EQ] = 970,
        [anon_sym_LT] = 970,
        [anon_sym_LT_EQ] = 970,
        [anon_sym_GT] = 970,
        [anon_sym_GT_EQ] = 970,
        [anon_sym_AMP_AMP] = 972,
        [anon_sym_PIPE_PIPE] = 974,
        [sym_comment] = 8,
    },
    [380] = {
        [aux_sym_expression_list_repeat1] = 482,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 482,
        [anon_sym_LPAREN] = 482,
        [anon_sym_COMMA] = 482,
        [anon_sym_STAR] = 482,
        [anon_sym_SLASH] = 482,
        [anon_sym_PERCENT] = 482,
        [anon_sym_LT_LT] = 482,
        [anon_sym_GT_GT] = 482,
        [anon_sym_AMP] = 482,
        [anon_sym_AMP_CARET] = 482,
        [anon_sym_PLUS] = 482,
        [anon_sym_DASH] = 482,
        [anon_sym_PIPE] = 482,
        [anon_sym_CARET] = 482,
        [anon_sym_EQ_EQ] = 482,
        [anon_sym_BANG_EQ] = 482,
        [anon_sym_LT] = 482,
        [anon_sym_LT_EQ] = 482,
        [anon_sym_GT] = 482,
        [anon_sym_GT_EQ] = 482,
        [anon_sym_AMP_AMP] = 482,
        [anon_sym_PIPE_PIPE] = 482,
        [sym_comment] = 8,
    },
    [381] = {
        [aux_sym_expression_list_repeat1] = 484,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 484,
        [anon_sym_LPAREN] = 484,
        [anon_sym_COMMA] = 484,
        [anon_sym_STAR] = 484,
        [anon_sym_SLASH] = 484,
        [anon_sym_PERCENT] = 484,
        [anon_sym_LT_LT] = 484,
        [anon_sym_GT_GT] = 484,
        [anon_sym_AMP] = 484,
        [anon_sym_AMP_CARET] = 484,
        [anon_sym_PLUS] = 484,
        [anon_sym_DASH] = 484,
        [anon_sym_PIPE] = 484,
        [anon_sym_CARET] = 484,
        [anon_sym_EQ_EQ] = 484,
        [anon_sym_BANG_EQ] = 484,
        [anon_sym_LT] = 484,
        [anon_sym_LT_EQ] = 484,
        [anon_sym_GT] = 484,
        [anon_sym_GT_EQ] = 484,
        [anon_sym_AMP_AMP] = 484,
        [anon_sym_PIPE_PIPE] = 484,
        [sym_comment] = 8,
    },
    [382] = {
        [aux_sym_expression_list_repeat1] = 400,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 400,
        [anon_sym_LPAREN] = 400,
        [anon_sym_COMMA] = 400,
        [anon_sym_STAR] = 400,
        [anon_sym_SLASH] = 400,
        [anon_sym_PERCENT] = 400,
        [anon_sym_LT_LT] = 400,
        [anon_sym_GT_GT] = 400,
        [anon_sym_AMP] = 400,
        [anon_sym_AMP_CARET] = 400,
        [anon_sym_PLUS] = 400,
        [anon_sym_DASH] = 400,
        [anon_sym_PIPE] = 400,
        [anon_sym_CARET] = 400,
        [anon_sym_EQ_EQ] = 400,
        [anon_sym_BANG_EQ] = 400,
        [anon_sym_LT] = 400,
        [anon_sym_LT_EQ] = 400,
        [anon_sym_GT] = 400,
        [anon_sym_GT_EQ] = 400,
        [anon_sym_AMP_AMP] = 400,
        [anon_sym_PIPE_PIPE] = 400,
        [sym_comment] = 8,
    },
    [383] = {
        [aux_sym_expression_list_repeat1] = 488,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 488,
        [anon_sym_LPAREN] = 488,
        [anon_sym_COMMA] = 488,
        [anon_sym_STAR] = 488,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 488,
        [anon_sym_DASH] = 488,
        [anon_sym_PIPE] = 488,
        [anon_sym_CARET] = 488,
        [anon_sym_EQ_EQ] = 488,
        [anon_sym_BANG_EQ] = 488,
        [anon_sym_LT] = 488,
        [anon_sym_LT_EQ] = 488,
        [anon_sym_GT] = 488,
        [anon_sym_GT_EQ] = 488,
        [anon_sym_AMP_AMP] = 488,
        [anon_sym_PIPE_PIPE] = 488,
        [sym_comment] = 8,
    },
    [384] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 542,
        [sym_comment] = 8,
    },
    [385] = {
        [sym_expression_list] = 976,
        [sym__expression] = 494,
        [sym_call_expression] = 496,
        [sym_unary_expression] = 496,
        [sym_binary_expression] = 496,
        [sym__primary_expression] = 496,
        [sym__string_literal] = 498,
        [sym_int_literal] = 498,
        [sym_float_literal] = 498,
        [sym_identifier] = 498,
        [sym_raw_string_literal] = 500,
        [sym_interpreted_string_literal] = 500,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 502,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 502,
        [sym_comment] = 8,
    },
    [386] = {
        [sym__expression] = 978,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [387] = {
        [sym__expression] = 980,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [388] = {
        [sym__expression] = 982,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [389] = {
        [sym__expression] = 984,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [390] = {
        [sym__expression] = 986,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [391] = {
        [sym__expression] = 988,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [392] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 966,
        [anon_sym_SLASH] = 966,
        [anon_sym_PERCENT] = 966,
        [anon_sym_LT_LT] = 966,
        [anon_sym_GT_GT] = 966,
        [anon_sym_AMP] = 966,
        [anon_sym_AMP_CARET] = 966,
        [anon_sym_PLUS] = 968,
        [anon_sym_DASH] = 968,
        [anon_sym_PIPE] = 968,
        [anon_sym_CARET] = 968,
        [anon_sym_EQ_EQ] = 970,
        [anon_sym_BANG_EQ] = 970,
        [anon_sym_LT] = 970,
        [anon_sym_LT_EQ] = 970,
        [anon_sym_GT] = 970,
        [anon_sym_GT_EQ] = 970,
        [anon_sym_AMP_AMP] = 972,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [393] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 966,
        [anon_sym_SLASH] = 966,
        [anon_sym_PERCENT] = 966,
        [anon_sym_LT_LT] = 966,
        [anon_sym_GT_GT] = 966,
        [anon_sym_AMP] = 966,
        [anon_sym_AMP_CARET] = 966,
        [anon_sym_PLUS] = 968,
        [anon_sym_DASH] = 968,
        [anon_sym_PIPE] = 968,
        [anon_sym_CARET] = 968,
        [anon_sym_EQ_EQ] = 970,
        [anon_sym_BANG_EQ] = 970,
        [anon_sym_LT] = 970,
        [anon_sym_LT_EQ] = 970,
        [anon_sym_GT] = 970,
        [anon_sym_GT_EQ] = 970,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [394] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 966,
        [anon_sym_SLASH] = 966,
        [anon_sym_PERCENT] = 966,
        [anon_sym_LT_LT] = 966,
        [anon_sym_GT_GT] = 966,
        [anon_sym_AMP] = 966,
        [anon_sym_AMP_CARET] = 966,
        [anon_sym_PLUS] = 968,
        [anon_sym_DASH] = 968,
        [anon_sym_PIPE] = 968,
        [anon_sym_CARET] = 968,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [395] = {
        [aux_sym_expression_list_repeat1] = 516,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 516,
        [anon_sym_LPAREN] = 516,
        [anon_sym_COMMA] = 516,
        [anon_sym_STAR] = 966,
        [anon_sym_SLASH] = 966,
        [anon_sym_PERCENT] = 966,
        [anon_sym_LT_LT] = 966,
        [anon_sym_GT_GT] = 966,
        [anon_sym_AMP] = 966,
        [anon_sym_AMP_CARET] = 966,
        [anon_sym_PLUS] = 516,
        [anon_sym_DASH] = 516,
        [anon_sym_PIPE] = 516,
        [anon_sym_CARET] = 516,
        [anon_sym_EQ_EQ] = 516,
        [anon_sym_BANG_EQ] = 516,
        [anon_sym_LT] = 516,
        [anon_sym_LT_EQ] = 516,
        [anon_sym_GT] = 516,
        [anon_sym_GT_EQ] = 516,
        [anon_sym_AMP_AMP] = 516,
        [anon_sym_PIPE_PIPE] = 516,
        [sym_comment] = 8,
    },
    [396] = {
        [aux_sym_expression_list_repeat1] = 518,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 518,
        [anon_sym_LPAREN] = 518,
        [anon_sym_COMMA] = 518,
        [anon_sym_STAR] = 518,
        [anon_sym_SLASH] = 518,
        [anon_sym_PERCENT] = 518,
        [anon_sym_LT_LT] = 518,
        [anon_sym_GT_GT] = 518,
        [anon_sym_AMP] = 518,
        [anon_sym_AMP_CARET] = 518,
        [anon_sym_PLUS] = 518,
        [anon_sym_DASH] = 518,
        [anon_sym_PIPE] = 518,
        [anon_sym_CARET] = 518,
        [anon_sym_EQ_EQ] = 518,
        [anon_sym_BANG_EQ] = 518,
        [anon_sym_LT] = 518,
        [anon_sym_LT_EQ] = 518,
        [anon_sym_GT] = 518,
        [anon_sym_GT_EQ] = 518,
        [anon_sym_AMP_AMP] = 518,
        [anon_sym_PIPE_PIPE] = 518,
        [sym_comment] = 8,
    },
    [397] = {
        [aux_sym_expression_list_repeat1] = 990,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 560,
        [anon_sym_LPAREN] = 962,
        [anon_sym_COMMA] = 964,
        [anon_sym_STAR] = 966,
        [anon_sym_SLASH] = 966,
        [anon_sym_PERCENT] = 966,
        [anon_sym_LT_LT] = 966,
        [anon_sym_GT_GT] = 966,
        [anon_sym_AMP] = 966,
        [anon_sym_AMP_CARET] = 966,
        [anon_sym_PLUS] = 968,
        [anon_sym_DASH] = 968,
        [anon_sym_PIPE] = 968,
        [anon_sym_CARET] = 968,
        [anon_sym_EQ_EQ] = 970,
        [anon_sym_BANG_EQ] = 970,
        [anon_sym_LT] = 970,
        [anon_sym_LT_EQ] = 970,
        [anon_sym_GT] = 970,
        [anon_sym_GT_EQ] = 970,
        [anon_sym_AMP_AMP] = 972,
        [anon_sym_PIPE_PIPE] = 974,
        [sym_comment] = 8,
    },
    [398] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 562,
        [sym_comment] = 8,
    },
    [399] = {
        [anon_sym_RPAREN] = 992,
        [sym_comment] = 8,
    },
    [400] = {
        [aux_sym_expression_list_repeat1] = 566,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 566,
        [anon_sym_LPAREN] = 566,
        [anon_sym_COMMA] = 566,
        [anon_sym_STAR] = 566,
        [anon_sym_SLASH] = 566,
        [anon_sym_PERCENT] = 566,
        [anon_sym_LT_LT] = 566,
        [anon_sym_GT_GT] = 566,
        [anon_sym_AMP] = 566,
        [anon_sym_AMP_CARET] = 566,
        [anon_sym_PLUS] = 566,
        [anon_sym_DASH] = 566,
        [anon_sym_PIPE] = 566,
        [anon_sym_CARET] = 566,
        [anon_sym_EQ_EQ] = 566,
        [anon_sym_BANG_EQ] = 566,
        [anon_sym_LT] = 566,
        [anon_sym_LT_EQ] = 566,
        [anon_sym_GT] = 566,
        [anon_sym_GT_EQ] = 566,
        [anon_sym_AMP_AMP] = 566,
        [anon_sym_PIPE_PIPE] = 566,
        [sym_comment] = 8,
    },
    [401] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 994,
        [sym_comment] = 8,
    },
    [402] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 996,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 998,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [403] = {
        [anon_sym_RBRACE] = 1000,
        [sym_comment] = 8,
    },
    [404] = {
        [sym_block] = 380,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 380,
        [anon_sym_LBRACE] = 380,
        [sym_comment] = 8,
    },
    [405] = {
        [sym_block] = 412,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 412,
        [anon_sym_LBRACE] = 412,
        [sym_comment] = 8,
    },
    [406] = {
        [anon_sym_LPAREN] = 468,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 1002,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [407] = {
        [sym__type] = 1004,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_qualified_identifier] = 706,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [408] = {
        [sym_block] = 490,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 490,
        [anon_sym_LBRACE] = 490,
        [sym_comment] = 8,
    },
    [409] = {
        [sym__type] = 1006,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_qualified_identifier] = 706,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [410] = {
        [sym_block] = 520,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 520,
        [anon_sym_LBRACE] = 520,
        [sym_comment] = 8,
    },
    [411] = {
        [sym_block] = 568,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 568,
        [anon_sym_LBRACE] = 568,
        [sym_comment] = 8,
    },
    [412] = {
        [sym_parameters] = 1008,
        [sym__type] = 1008,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_block] = 572,
        [sym_qualified_identifier] = 706,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 572,
        [anon_sym_LPAREN] = 712,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_LBRACE] = 572,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [413] = {
        [sym_block] = 590,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 590,
        [anon_sym_LBRACE] = 590,
        [sym_comment] = 8,
    },
    [414] = {
        [anon_sym_RPAREN] = 1010,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [415] = {
        [sym_block] = 272,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [anon_sym_LBRACE] = 272,
        [sym_comment] = 8,
    },
    [416] = {
        [sym_block] = 582,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [anon_sym_LBRACE] = 582,
        [sym_comment] = 8,
    },
    [417] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1012,
        [sym_comment] = 8,
    },
    [418] = {
        [anon_sym_RPAREN] = 1014,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [419] = {
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [420] = {
        [sym_identifier] = 582,
        [sym_comment] = 8,
    },
    [421] = {
        [sym_parameters] = 1016,
        [anon_sym_LPAREN] = 702,
        [sym_comment] = 8,
    },
    [422] = {
        [sym_parameters] = 1018,
        [sym__type] = 1018,
        [sym_pointer_type] = 706,
        [sym_array_type] = 706,
        [sym_slice_type] = 706,
        [sym_struct_type] = 706,
        [sym_interface_type] = 706,
        [sym_map_type] = 706,
        [sym_channel_type] = 706,
        [sym_function_type] = 706,
        [sym_block] = 1020,
        [sym_qualified_identifier] = 706,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1022,
        [anon_sym_LPAREN] = 712,
        [anon_sym_func] = 714,
        [anon_sym_STAR] = 716,
        [anon_sym_LBRACK] = 718,
        [anon_sym_struct] = 720,
        [anon_sym_LBRACE] = 722,
        [anon_sym_interface] = 724,
        [anon_sym_map] = 726,
        [anon_sym_chan] = 728,
        [anon_sym_LT_DASH] = 730,
        [sym_identifier] = 732,
        [sym_comment] = 8,
    },
    [423] = {
        [sym_block] = 1024,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1026,
        [anon_sym_LBRACE] = 722,
        [sym_comment] = 8,
    },
    [424] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1026,
        [sym_comment] = 8,
    },
    [425] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1028,
        [sym_comment] = 8,
    },
    [426] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1030,
        [sym_comment] = 8,
    },
    [427] = {
        [sym__type] = 1032,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_EQ] = 1036,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [428] = {
        [sym_var_spec] = 1056,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1058,
        [anon_sym_RPAREN] = 1060,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [429] = {
        [sym__type] = 382,
        [sym_pointer_type] = 382,
        [sym_array_type] = 382,
        [sym_slice_type] = 382,
        [sym_struct_type] = 382,
        [sym_interface_type] = 382,
        [sym_map_type] = 382,
        [sym_channel_type] = 382,
        [sym_function_type] = 382,
        [sym_qualified_identifier] = 382,
        [aux_sym_identifier_list_repeat1] = 1062,
        [anon_sym_EQ] = 382,
        [anon_sym_func] = 382,
        [anon_sym_COMMA] = 1064,
        [anon_sym_STAR] = 382,
        [anon_sym_LBRACK] = 382,
        [anon_sym_struct] = 382,
        [anon_sym_interface] = 382,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 382,
        [anon_sym_LT_DASH] = 382,
        [sym_identifier] = 382,
        [sym_comment] = 8,
    },
    [430] = {
        [sym__type] = 396,
        [sym_pointer_type] = 396,
        [sym_array_type] = 396,
        [sym_slice_type] = 396,
        [sym_struct_type] = 396,
        [sym_interface_type] = 396,
        [sym_map_type] = 396,
        [sym_channel_type] = 396,
        [sym_function_type] = 396,
        [sym_qualified_identifier] = 396,
        [anon_sym_EQ] = 396,
        [anon_sym_func] = 396,
        [anon_sym_STAR] = 396,
        [anon_sym_LBRACK] = 396,
        [anon_sym_struct] = 396,
        [anon_sym_interface] = 396,
        [anon_sym_map] = 396,
        [anon_sym_chan] = 396,
        [anon_sym_LT_DASH] = 396,
        [sym_identifier] = 396,
        [sym_comment] = 8,
    },
    [431] = {
        [sym_identifier] = 1066,
        [sym_comment] = 8,
    },
    [432] = {
        [sym__type] = 402,
        [sym_pointer_type] = 402,
        [sym_array_type] = 402,
        [sym_slice_type] = 402,
        [sym_struct_type] = 402,
        [sym_interface_type] = 402,
        [sym_map_type] = 402,
        [sym_channel_type] = 402,
        [sym_function_type] = 402,
        [sym_qualified_identifier] = 402,
        [aux_sym_identifier_list_repeat1] = 1068,
        [anon_sym_EQ] = 402,
        [anon_sym_func] = 402,
        [anon_sym_COMMA] = 1064,
        [anon_sym_STAR] = 402,
        [anon_sym_LBRACK] = 402,
        [anon_sym_struct] = 402,
        [anon_sym_interface] = 402,
        [anon_sym_map] = 402,
        [anon_sym_chan] = 402,
        [anon_sym_LT_DASH] = 402,
        [sym_identifier] = 402,
        [sym_comment] = 8,
    },
    [433] = {
        [sym__type] = 406,
        [sym_pointer_type] = 406,
        [sym_array_type] = 406,
        [sym_slice_type] = 406,
        [sym_struct_type] = 406,
        [sym_interface_type] = 406,
        [sym_map_type] = 406,
        [sym_channel_type] = 406,
        [sym_function_type] = 406,
        [sym_qualified_identifier] = 406,
        [anon_sym_EQ] = 406,
        [anon_sym_func] = 406,
        [anon_sym_STAR] = 406,
        [anon_sym_LBRACK] = 406,
        [anon_sym_struct] = 406,
        [anon_sym_interface] = 406,
        [anon_sym_map] = 406,
        [anon_sym_chan] = 406,
        [anon_sym_LT_DASH] = 406,
        [sym_identifier] = 406,
        [sym_comment] = 8,
    },
    [434] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1070,
        [sym_comment] = 8,
    },
    [435] = {
        [anon_sym_RPAREN] = 1072,
        [sym_comment] = 8,
    },
    [436] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1074,
        [sym_comment] = 8,
    },
    [437] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1076,
        [sym_comment] = 8,
    },
    [438] = {
        [sym_var_spec] = 1056,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1078,
        [anon_sym_RPAREN] = 1080,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [439] = {
        [anon_sym_RPAREN] = 1082,
        [sym_comment] = 8,
    },
    [440] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1084,
        [anon_sym_EQ] = 1086,
        [sym_comment] = 8,
    },
    [441] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [442] = {
        [sym_expression_list] = 1088,
        [sym__expression] = 946,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [443] = {
        [sym_parameters] = 1090,
        [anon_sym_LPAREN] = 1092,
        [sym_comment] = 8,
    },
    [444] = {
        [sym__type] = 1094,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [445] = {
        [sym__expression] = 1096,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_RBRACK] = 1098,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [446] = {
        [anon_sym_LBRACE] = 1100,
        [sym_comment] = 8,
    },
    [447] = {
        [anon_sym_LBRACE] = 1102,
        [sym_comment] = 8,
    },
    [448] = {
        [anon_sym_LBRACK] = 1104,
        [sym_comment] = 8,
    },
    [449] = {
        [sym__type] = 1106,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1108,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [450] = {
        [anon_sym_chan] = 1110,
        [sym_comment] = 8,
    },
    [451] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [anon_sym_DOT] = 1112,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [452] = {
        [sym_identifier] = 1114,
        [sym_comment] = 8,
    },
    [453] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 158,
        [anon_sym_EQ] = 158,
        [sym_comment] = 8,
    },
    [454] = {
        [sym__type] = 1116,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [455] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [anon_sym_EQ] = 162,
        [sym_comment] = 8,
    },
    [456] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 164,
        [anon_sym_EQ] = 164,
        [sym_comment] = 8,
    },
    [457] = {
        [sym__type] = 1118,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [458] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [anon_sym_EQ] = 168,
        [sym_comment] = 8,
    },
    [459] = {
        [sym__type] = 1120,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [460] = {
        [anon_sym_RBRACK] = 1122,
        [sym_comment] = 8,
    },
    [461] = {
        [sym__type] = 1124,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [462] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 230,
        [anon_sym_EQ] = 230,
        [sym_comment] = 8,
    },
    [463] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 1126,
        [anon_sym_RBRACE] = 1128,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [464] = {
        [anon_sym_RBRACE] = 1130,
        [sym_comment] = 8,
    },
    [465] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 244,
        [anon_sym_EQ] = 244,
        [sym_comment] = 8,
    },
    [466] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 340,
        [anon_sym_EQ] = 340,
        [sym_comment] = 8,
    },
    [467] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 1132,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 1134,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [468] = {
        [anon_sym_RBRACE] = 1136,
        [sym_comment] = 8,
    },
    [469] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 380,
        [anon_sym_EQ] = 380,
        [sym_comment] = 8,
    },
    [470] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 412,
        [anon_sym_EQ] = 412,
        [sym_comment] = 8,
    },
    [471] = {
        [anon_sym_LPAREN] = 468,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 1138,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [472] = {
        [sym__type] = 1140,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [473] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 490,
        [anon_sym_EQ] = 490,
        [sym_comment] = 8,
    },
    [474] = {
        [sym__type] = 1142,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [475] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 520,
        [anon_sym_EQ] = 520,
        [sym_comment] = 8,
    },
    [476] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 568,
        [anon_sym_EQ] = 568,
        [sym_comment] = 8,
    },
    [477] = {
        [sym_parameters] = 1144,
        [sym__type] = 1144,
        [sym_pointer_type] = 1034,
        [sym_array_type] = 1034,
        [sym_slice_type] = 1034,
        [sym_struct_type] = 1034,
        [sym_interface_type] = 1034,
        [sym_map_type] = 1034,
        [sym_channel_type] = 1034,
        [sym_function_type] = 1034,
        [sym_qualified_identifier] = 1034,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 572,
        [anon_sym_LPAREN] = 1146,
        [anon_sym_EQ] = 572,
        [anon_sym_func] = 1038,
        [anon_sym_STAR] = 1040,
        [anon_sym_LBRACK] = 1042,
        [anon_sym_struct] = 1044,
        [anon_sym_interface] = 1046,
        [anon_sym_map] = 1048,
        [anon_sym_chan] = 1050,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 1054,
        [sym_comment] = 8,
    },
    [478] = {
        [sym__parameter_list] = 1148,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 1150,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [479] = {
        [anon_sym_RPAREN] = 1152,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [480] = {
        [sym_parameters] = 272,
        [sym__type] = 272,
        [sym_pointer_type] = 272,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_interface_type] = 272,
        [sym_map_type] = 272,
        [sym_channel_type] = 272,
        [sym_function_type] = 272,
        [sym_qualified_identifier] = 272,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_EQ] = 272,
        [anon_sym_func] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_LBRACK] = 272,
        [anon_sym_struct] = 272,
        [anon_sym_interface] = 272,
        [anon_sym_map] = 272,
        [anon_sym_chan] = 272,
        [anon_sym_LT_DASH] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [481] = {
        [sym_parameters] = 582,
        [sym__type] = 582,
        [sym_pointer_type] = 582,
        [sym_array_type] = 582,
        [sym_slice_type] = 582,
        [sym_struct_type] = 582,
        [sym_interface_type] = 582,
        [sym_map_type] = 582,
        [sym_channel_type] = 582,
        [sym_function_type] = 582,
        [sym_qualified_identifier] = 582,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [anon_sym_LPAREN] = 582,
        [anon_sym_EQ] = 582,
        [anon_sym_func] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 582,
        [anon_sym_map] = 582,
        [anon_sym_chan] = 582,
        [anon_sym_LT_DASH] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 8,
    },
    [482] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 590,
        [anon_sym_EQ] = 590,
        [sym_comment] = 8,
    },
    [483] = {
        [sym__parameter_list] = 1154,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 1156,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [484] = {
        [anon_sym_RPAREN] = 1158,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [485] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 272,
        [anon_sym_EQ] = 272,
        [sym_comment] = 8,
    },
    [486] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 582,
        [anon_sym_EQ] = 582,
        [sym_comment] = 8,
    },
    [487] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1160,
        [sym_comment] = 8,
    },
    [488] = {
        [sym_expression_list] = 1162,
        [sym__expression] = 946,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [489] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1164,
        [sym_comment] = 8,
    },
    [490] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1166,
        [sym_comment] = 8,
    },
    [491] = {
        [sym__type] = 1168,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_EQ] = 1172,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [492] = {
        [sym_const_spec] = 1192,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1194,
        [anon_sym_RPAREN] = 1196,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [493] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1198,
        [sym_comment] = 8,
    },
    [494] = {
        [anon_sym_RPAREN] = 1200,
        [sym_comment] = 8,
    },
    [495] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1202,
        [sym_comment] = 8,
    },
    [496] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1204,
        [sym_comment] = 8,
    },
    [497] = {
        [sym_const_spec] = 1192,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1206,
        [anon_sym_RPAREN] = 1208,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [498] = {
        [anon_sym_RPAREN] = 1210,
        [sym_comment] = 8,
    },
    [499] = {
        [anon_sym_EQ] = 1212,
        [sym_comment] = 8,
    },
    [500] = {
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [501] = {
        [sym_expression_list] = 1214,
        [sym__expression] = 946,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [502] = {
        [sym_parameters] = 1216,
        [anon_sym_LPAREN] = 1218,
        [sym_comment] = 8,
    },
    [503] = {
        [sym__type] = 1220,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [504] = {
        [sym__expression] = 1222,
        [sym_call_expression] = 132,
        [sym_unary_expression] = 132,
        [sym_binary_expression] = 132,
        [sym__primary_expression] = 132,
        [sym__string_literal] = 134,
        [sym_int_literal] = 134,
        [sym_float_literal] = 134,
        [anon_sym_RBRACK] = 1224,
        [sym_identifier] = 134,
        [sym_raw_string_literal] = 138,
        [sym_interpreted_string_literal] = 138,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 140,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 140,
        [sym_comment] = 8,
    },
    [505] = {
        [anon_sym_LBRACE] = 1226,
        [sym_comment] = 8,
    },
    [506] = {
        [anon_sym_LBRACE] = 1228,
        [sym_comment] = 8,
    },
    [507] = {
        [anon_sym_LBRACK] = 1230,
        [sym_comment] = 8,
    },
    [508] = {
        [sym__type] = 1232,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1234,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [509] = {
        [anon_sym_chan] = 1236,
        [sym_comment] = 8,
    },
    [510] = {
        [anon_sym_DOT] = 1238,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [511] = {
        [sym_identifier] = 1240,
        [sym_comment] = 8,
    },
    [512] = {
        [anon_sym_EQ] = 158,
        [sym_comment] = 8,
    },
    [513] = {
        [sym__type] = 1242,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [514] = {
        [anon_sym_EQ] = 162,
        [sym_comment] = 8,
    },
    [515] = {
        [anon_sym_EQ] = 164,
        [sym_comment] = 8,
    },
    [516] = {
        [sym__type] = 1244,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [517] = {
        [anon_sym_EQ] = 168,
        [sym_comment] = 8,
    },
    [518] = {
        [sym__type] = 1246,
        [sym_pointer_type] = 172,
        [sym_array_type] = 172,
        [sym_slice_type] = 172,
        [sym_struct_type] = 172,
        [sym_interface_type] = 172,
        [sym_map_type] = 172,
        [sym_channel_type] = 172,
        [sym_function_type] = 172,
        [sym_qualified_identifier] = 172,
        [anon_sym_func] = 174,
        [anon_sym_STAR] = 176,
        [anon_sym_LBRACK] = 178,
        [anon_sym_struct] = 180,
        [anon_sym_interface] = 182,
        [anon_sym_map] = 184,
        [anon_sym_chan] = 186,
        [anon_sym_LT_DASH] = 188,
        [sym_identifier] = 190,
        [sym_comment] = 8,
    },
    [519] = {
        [anon_sym_RBRACK] = 1248,
        [sym_comment] = 8,
    },
    [520] = {
        [sym__type] = 1250,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [521] = {
        [anon_sym_EQ] = 230,
        [sym_comment] = 8,
    },
    [522] = {
        [sym_method_spec] = 232,
        [aux_sym_interface_type_repeat1] = 1252,
        [anon_sym_RBRACE] = 1254,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [523] = {
        [anon_sym_RBRACE] = 1256,
        [sym_comment] = 8,
    },
    [524] = {
        [anon_sym_EQ] = 244,
        [sym_comment] = 8,
    },
    [525] = {
        [anon_sym_EQ] = 340,
        [sym_comment] = 8,
    },
    [526] = {
        [sym_identifier_list] = 342,
        [sym_field_declaration] = 344,
        [aux_sym_struct_type_repeat1] = 1258,
        [anon_sym_STAR] = 348,
        [anon_sym_RBRACE] = 1260,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [527] = {
        [anon_sym_RBRACE] = 1262,
        [sym_comment] = 8,
    },
    [528] = {
        [anon_sym_EQ] = 380,
        [sym_comment] = 8,
    },
    [529] = {
        [anon_sym_EQ] = 412,
        [sym_comment] = 8,
    },
    [530] = {
        [anon_sym_LPAREN] = 468,
        [anon_sym_STAR] = 470,
        [anon_sym_RBRACK] = 1264,
        [anon_sym_SLASH] = 470,
        [anon_sym_PERCENT] = 470,
        [anon_sym_LT_LT] = 470,
        [anon_sym_GT_GT] = 470,
        [anon_sym_AMP] = 470,
        [anon_sym_AMP_CARET] = 470,
        [anon_sym_PLUS] = 474,
        [anon_sym_DASH] = 474,
        [anon_sym_PIPE] = 474,
        [anon_sym_CARET] = 474,
        [anon_sym_EQ_EQ] = 476,
        [anon_sym_BANG_EQ] = 476,
        [anon_sym_LT] = 476,
        [anon_sym_LT_EQ] = 476,
        [anon_sym_GT] = 476,
        [anon_sym_GT_EQ] = 476,
        [anon_sym_AMP_AMP] = 478,
        [anon_sym_PIPE_PIPE] = 480,
        [sym_comment] = 8,
    },
    [531] = {
        [sym__type] = 1266,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [532] = {
        [anon_sym_EQ] = 490,
        [sym_comment] = 8,
    },
    [533] = {
        [sym__type] = 1268,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [534] = {
        [anon_sym_EQ] = 520,
        [sym_comment] = 8,
    },
    [535] = {
        [anon_sym_EQ] = 568,
        [sym_comment] = 8,
    },
    [536] = {
        [sym_parameters] = 1270,
        [sym__type] = 1270,
        [sym_pointer_type] = 1170,
        [sym_array_type] = 1170,
        [sym_slice_type] = 1170,
        [sym_struct_type] = 1170,
        [sym_interface_type] = 1170,
        [sym_map_type] = 1170,
        [sym_channel_type] = 1170,
        [sym_function_type] = 1170,
        [sym_qualified_identifier] = 1170,
        [anon_sym_LPAREN] = 1272,
        [anon_sym_EQ] = 572,
        [anon_sym_func] = 1174,
        [anon_sym_STAR] = 1176,
        [anon_sym_LBRACK] = 1178,
        [anon_sym_struct] = 1180,
        [anon_sym_interface] = 1182,
        [anon_sym_map] = 1184,
        [anon_sym_chan] = 1186,
        [anon_sym_LT_DASH] = 1188,
        [sym_identifier] = 1190,
        [sym_comment] = 8,
    },
    [537] = {
        [sym__parameter_list] = 1274,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 1276,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [538] = {
        [anon_sym_RPAREN] = 1278,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [539] = {
        [sym_parameters] = 272,
        [sym__type] = 272,
        [sym_pointer_type] = 272,
        [sym_array_type] = 272,
        [sym_slice_type] = 272,
        [sym_struct_type] = 272,
        [sym_interface_type] = 272,
        [sym_map_type] = 272,
        [sym_channel_type] = 272,
        [sym_function_type] = 272,
        [sym_qualified_identifier] = 272,
        [anon_sym_LPAREN] = 272,
        [anon_sym_EQ] = 272,
        [anon_sym_func] = 272,
        [anon_sym_STAR] = 272,
        [anon_sym_LBRACK] = 272,
        [anon_sym_struct] = 272,
        [anon_sym_interface] = 272,
        [anon_sym_map] = 272,
        [anon_sym_chan] = 272,
        [anon_sym_LT_DASH] = 272,
        [sym_identifier] = 272,
        [sym_comment] = 8,
    },
    [540] = {
        [sym_parameters] = 582,
        [sym__type] = 582,
        [sym_pointer_type] = 582,
        [sym_array_type] = 582,
        [sym_slice_type] = 582,
        [sym_struct_type] = 582,
        [sym_interface_type] = 582,
        [sym_map_type] = 582,
        [sym_channel_type] = 582,
        [sym_function_type] = 582,
        [sym_qualified_identifier] = 582,
        [anon_sym_LPAREN] = 582,
        [anon_sym_EQ] = 582,
        [anon_sym_func] = 582,
        [anon_sym_STAR] = 582,
        [anon_sym_LBRACK] = 582,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 582,
        [anon_sym_map] = 582,
        [anon_sym_chan] = 582,
        [anon_sym_LT_DASH] = 582,
        [sym_identifier] = 582,
        [sym_comment] = 8,
    },
    [541] = {
        [anon_sym_EQ] = 590,
        [sym_comment] = 8,
    },
    [542] = {
        [sym__parameter_list] = 1280,
        [sym_parameter_declaration] = 260,
        [anon_sym_RPAREN] = 1282,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [543] = {
        [anon_sym_RPAREN] = 1284,
        [anon_sym_COMMA] = 268,
        [sym_comment] = 8,
    },
    [544] = {
        [anon_sym_EQ] = 272,
        [sym_comment] = 8,
    },
    [545] = {
        [anon_sym_EQ] = 582,
        [sym_comment] = 8,
    },
    [546] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1286,
        [sym_comment] = 8,
    },
    [547] = {
        [sym_expression_list] = 1288,
        [sym__expression] = 946,
        [sym_call_expression] = 948,
        [sym_unary_expression] = 948,
        [sym_binary_expression] = 948,
        [sym__primary_expression] = 948,
        [sym__string_literal] = 950,
        [sym_int_literal] = 950,
        [sym_float_literal] = 950,
        [sym_identifier] = 950,
        [sym_raw_string_literal] = 952,
        [sym_interpreted_string_literal] = 952,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 954,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 954,
        [sym_comment] = 8,
    },
    [548] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1290,
        [sym_comment] = 8,
    },
    [549] = {
        [sym_import_declaration] = 1292,
        [sym__top_level_declaration] = 1292,
        [sym__declaration] = 1292,
        [sym_const_declaration] = 1292,
        [sym_var_declaration] = 1292,
        [sym_function_declaration] = 1292,
        [sym_method_declaration] = 1292,
        [sym_type_declaration] = 1292,
        [aux_sym_source_file_repeat1] = 1292,
        [aux_sym_source_file_repeat2] = 1292,
        [ts_builtin_sym_end] = 1292,
        [anon_sym_import] = 1292,
        [anon_sym_const] = 1292,
        [anon_sym_var] = 1292,
        [anon_sym_func] = 1292,
        [anon_sym_type] = 1292,
        [sym_comment] = 8,
    },
    [550] = {
        [sym_import_declaration] = 1294,
        [sym__top_level_declaration] = 1294,
        [sym__declaration] = 1294,
        [sym_const_declaration] = 1294,
        [sym_var_declaration] = 1294,
        [sym_function_declaration] = 1294,
        [sym_method_declaration] = 1294,
        [sym_type_declaration] = 1294,
        [aux_sym_source_file_repeat1] = 1294,
        [aux_sym_source_file_repeat2] = 1294,
        [ts_builtin_sym_end] = 1294,
        [anon_sym_import] = 1294,
        [anon_sym_const] = 1294,
        [anon_sym_var] = 1294,
        [anon_sym_func] = 1294,
        [anon_sym_type] = 1294,
        [sym_comment] = 8,
    },
    [551] = {
        [sym_import_spec] = 1296,
        [sym__string_literal] = 1298,
        [aux_sym_import_declaration_repeat1] = 1300,
        [anon_sym_RPAREN] = 1302,
        [anon_sym_DOT] = 1304,
        [sym_identifier] = 1304,
        [sym_raw_string_literal] = 392,
        [sym_interpreted_string_literal] = 392,
        [sym_comment] = 8,
    },
    [552] = {
        [sym__string_literal] = 1306,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [553] = {
        [sym_import_declaration] = 400,
        [sym__top_level_declaration] = 400,
        [sym__declaration] = 400,
        [sym_const_declaration] = 400,
        [sym_var_declaration] = 400,
        [sym_function_declaration] = 400,
        [sym_method_declaration] = 400,
        [sym_type_declaration] = 400,
        [aux_sym_source_file_repeat1] = 400,
        [aux_sym_source_file_repeat2] = 400,
        [ts_builtin_sym_end] = 400,
        [anon_sym_import] = 400,
        [anon_sym_const] = 400,
        [anon_sym_var] = 400,
        [anon_sym_func] = 400,
        [anon_sym_type] = 400,
        [sym_comment] = 8,
    },
    [554] = {
        [sym_import_declaration] = 1308,
        [sym__top_level_declaration] = 1308,
        [sym__declaration] = 1308,
        [sym_const_declaration] = 1308,
        [sym_var_declaration] = 1308,
        [sym_function_declaration] = 1308,
        [sym_method_declaration] = 1308,
        [sym_type_declaration] = 1308,
        [aux_sym_source_file_repeat1] = 1308,
        [aux_sym_source_file_repeat2] = 1308,
        [ts_builtin_sym_end] = 1308,
        [anon_sym_import] = 1308,
        [anon_sym_const] = 1308,
        [anon_sym_var] = 1308,
        [anon_sym_func] = 1308,
        [anon_sym_type] = 1308,
        [sym_comment] = 8,
    },
    [555] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1310,
        [sym_comment] = 8,
    },
    [556] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1294,
        [sym_comment] = 8,
    },
    [557] = {
        [anon_sym_RPAREN] = 1312,
        [sym_comment] = 8,
    },
    [558] = {
        [sym_import_declaration] = 1314,
        [sym__top_level_declaration] = 1314,
        [sym__declaration] = 1314,
        [sym_const_declaration] = 1314,
        [sym_var_declaration] = 1314,
        [sym_function_declaration] = 1314,
        [sym_method_declaration] = 1314,
        [sym_type_declaration] = 1314,
        [aux_sym_source_file_repeat1] = 1314,
        [aux_sym_source_file_repeat2] = 1314,
        [ts_builtin_sym_end] = 1314,
        [anon_sym_import] = 1314,
        [anon_sym_const] = 1314,
        [anon_sym_var] = 1314,
        [anon_sym_func] = 1314,
        [anon_sym_type] = 1314,
        [sym_comment] = 8,
    },
    [559] = {
        [sym__string_literal] = 1316,
        [sym_raw_string_literal] = 392,
        [sym_interpreted_string_literal] = 392,
        [sym_comment] = 8,
    },
    [560] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1308,
        [sym_comment] = 8,
    },
    [561] = {
        [sym_import_declaration] = 1318,
        [sym__top_level_declaration] = 1318,
        [sym__declaration] = 1318,
        [sym_const_declaration] = 1318,
        [sym_var_declaration] = 1318,
        [sym_function_declaration] = 1318,
        [sym_method_declaration] = 1318,
        [sym_type_declaration] = 1318,
        [aux_sym_source_file_repeat1] = 1318,
        [aux_sym_source_file_repeat2] = 1318,
        [ts_builtin_sym_end] = 1318,
        [anon_sym_import] = 1318,
        [anon_sym_const] = 1318,
        [anon_sym_var] = 1318,
        [anon_sym_func] = 1318,
        [anon_sym_type] = 1318,
        [sym_comment] = 8,
    },
    [562] = {
        [sym_import_spec] = 1296,
        [sym__string_literal] = 1298,
        [aux_sym_import_declaration_repeat1] = 1320,
        [anon_sym_RPAREN] = 1322,
        [anon_sym_DOT] = 1304,
        [sym_identifier] = 1304,
        [sym_raw_string_literal] = 392,
        [sym_interpreted_string_literal] = 392,
        [sym_comment] = 8,
    },
    [563] = {
        [anon_sym_RPAREN] = 1324,
        [sym_comment] = 8,
    },
    [564] = {
        [ts_builtin_sym_end] = 1326,
        [sym_comment] = 8,
    },
    [565] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 1328,
        [ts_builtin_sym_end] = 1330,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [566] = {
        [ts_builtin_sym_end] = 1332,
        [sym_comment] = 8,
    },
    [567] = {
        [sym__top_level_declaration] = 1334,
        [sym__declaration] = 1334,
        [sym_const_declaration] = 1334,
        [sym_var_declaration] = 1334,
        [sym_function_declaration] = 1334,
        [sym_method_declaration] = 1334,
        [sym_type_declaration] = 1334,
        [aux_sym_source_file_repeat2] = 1334,
        [ts_builtin_sym_end] = 1334,
        [anon_sym_const] = 1334,
        [anon_sym_var] = 1334,
        [anon_sym_func] = 1334,
        [anon_sym_type] = 1334,
        [sym_comment] = 8,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 1}, ERROR(),
    [2] = {.count = 1}, SHIFT(1, 0),
    [4] = {.count = 1}, SHIFT(2, 0),
    [6] = {.count = 1}, SHIFT(3, 0),
    [8] = {.count = 1}, SHIFT_EXTRA(),
    [10] = {.count = 1}, ACCEPT_INPUT(),
    [12] = {.count = 1}, SHIFT(5, 0),
    [14] = {.count = 1}, SHIFT(6, 0),
    [16] = {.count = 1}, SHIFT(7, 0),
    [18] = {.count = 1}, SHIFT(8, 0),
    [20] = {.count = 1}, SHIFT(9, 0),
    [22] = {.count = 1}, SHIFT(10, 0),
    [24] = {.count = 1}, REDUCE(sym_source_file, 1, 0),
    [26] = {.count = 1}, SHIFT(11, 0),
    [28] = {.count = 1}, SHIFT(12, 0),
    [30] = {.count = 1}, SHIFT(13, 0),
    [32] = {.count = 1}, SHIFT(14, 0),
    [34] = {.count = 1}, SHIFT(15, 0),
    [36] = {.count = 1}, SHIFT(4, 0),
    [38] = {.count = 1}, REDUCE(sym_package_clause, 2, 0),
    [40] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 1, 0),
    [42] = {.count = 1}, SHIFT(567, 0),
    [44] = {.count = 1}, SHIFT(565, 0),
    [46] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [50] = {.count = 1}, SHIFT(564, 0),
    [52] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [54] = {.count = 1}, SHIFT(549, 0),
    [56] = {.count = 1}, SHIFT(550, 0),
    [58] = {.count = 1}, SHIFT(551, 0),
    [60] = {.count = 1}, SHIFT(552, 0),
    [62] = {.count = 1}, SHIFT(553, 0),
    [64] = {.count = 1}, SHIFT(490, 0),
    [66] = {.count = 1}, SHIFT(491, 0),
    [68] = {.count = 1}, SHIFT(492, 0),
    [70] = {.count = 1}, SHIFT(429, 0),
    [72] = {.count = 1}, SHIFT(426, 0),
    [74] = {.count = 1}, SHIFT(427, 0),
    [76] = {.count = 1}, SHIFT(428, 0),
    [78] = {.count = 1}, SHIFT(271, 0),
    [80] = {.count = 1}, SHIFT(272, 0),
    [82] = {.count = 1}, SHIFT(273, 0),
    [84] = {.count = 1}, SHIFT(16, 0),
    [86] = {.count = 1}, SHIFT(17, 0),
    [88] = {.count = 1}, SHIFT(18, 0),
    [90] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [92] = {.count = 1}, SHIFT(265, 0),
    [94] = {.count = 1}, SHIFT(266, 0),
    [96] = {.count = 1}, SHIFT(267, 0),
    [98] = {.count = 1}, SHIFT(19, 0),
    [100] = {.count = 1}, SHIFT(20, 0),
    [102] = {.count = 1}, SHIFT(21, 0),
    [104] = {.count = 1}, SHIFT(22, 0),
    [106] = {.count = 1}, SHIFT(23, 0),
    [108] = {.count = 1}, SHIFT(24, 0),
    [110] = {.count = 1}, SHIFT(25, 0),
    [112] = {.count = 1}, SHIFT(26, 0),
    [114] = {.count = 1}, SHIFT(27, 0),
    [116] = {.count = 1}, SHIFT(28, 0),
    [118] = {.count = 1}, SHIFT(29, 0),
    [120] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [122] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [124] = {.count = 1}, SHIFT(263, 0),
    [126] = {.count = 1}, SHIFT(67, 0),
    [128] = {.count = 1}, SHIFT(262, 0),
    [130] = {.count = 1}, SHIFT(257, 0),
    [132] = {.count = 1}, SHIFT(146, 0),
    [134] = {.count = 1}, SHIFT(147, 0),
    [136] = {.count = 1}, SHIFT(258, 0),
    [138] = {.count = 1}, SHIFT(149, 0),
    [140] = {.count = 1}, SHIFT(150, 0),
    [142] = {.count = 1}, SHIFT(253, 0),
    [144] = {.count = 1}, SHIFT(249, 0),
    [146] = {.count = 1}, SHIFT(37, 0),
    [148] = {.count = 1}, SHIFT(34, 0),
    [150] = {.count = 1}, SHIFT(35, 0),
    [152] = {.count = 1}, SHIFT(32, 0),
    [154] = {.count = 1}, SHIFT(30, 0),
    [156] = {.count = 1}, SHIFT(31, 0),
    [158] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [160] = {.count = 1}, SHIFT(33, 0),
    [162] = {.count = 1}, REDUCE(sym_channel_type, 3, FRAGILE),
    [164] = {.count = 1}, REDUCE(sym_channel_type, 2, 0),
    [166] = {.count = 1}, SHIFT(36, 0),
    [168] = {.count = 1}, REDUCE(sym_channel_type, 3, 0),
    [170] = {.count = 1}, SHIFT(38, 0),
    [172] = {.count = 1}, SHIFT(39, 0),
    [174] = {.count = 1}, SHIFT(40, 0),
    [176] = {.count = 1}, SHIFT(41, 0),
    [178] = {.count = 1}, SHIFT(42, 0),
    [180] = {.count = 1}, SHIFT(43, 0),
    [182] = {.count = 1}, SHIFT(44, 0),
    [184] = {.count = 1}, SHIFT(45, 0),
    [186] = {.count = 1}, SHIFT(46, 0),
    [188] = {.count = 1}, SHIFT(47, 0),
    [190] = {.count = 1}, SHIFT(48, 0),
    [192] = {.count = 1}, SHIFT(247, 0),
    [194] = {.count = 1}, SHIFT(237, 0),
    [196] = {.count = 1}, SHIFT(238, 0),
    [198] = {.count = 1}, SHIFT(236, 0),
    [200] = {.count = 1}, SHIFT(231, 0),
    [202] = {.count = 1}, SHIFT(232, 0),
    [204] = {.count = 1}, SHIFT(227, 0),
    [206] = {.count = 1}, SHIFT(60, 0),
    [208] = {.count = 1}, SHIFT(56, 0),
    [210] = {.count = 1}, SHIFT(53, 0),
    [212] = {.count = 1}, SHIFT(54, 0),
    [214] = {.count = 1}, SHIFT(51, 0),
    [216] = {.count = 1}, SHIFT(49, 0),
    [218] = {.count = 1}, SHIFT(50, 0),
    [220] = {.count = 1}, SHIFT(52, 0),
    [222] = {.count = 1}, SHIFT(55, 0),
    [224] = {.count = 1}, SHIFT(57, 0),
    [226] = {.count = 1}, SHIFT(58, 0),
    [228] = {.count = 1}, SHIFT(59, 0),
    [230] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [232] = {.count = 1}, SHIFT(61, 0),
    [234] = {.count = 1}, SHIFT(62, 0),
    [236] = {.count = 1}, SHIFT(63, 0),
    [238] = {.count = 1}, SHIFT(64, 0),
    [240] = {.count = 1}, SHIFT(66, 0),
    [242] = {.count = 1}, SHIFT(226, 0),
    [244] = {.count = 1}, REDUCE(sym_interface_type, 3, 0),
    [246] = {.count = 1}, SHIFT(65, 0),
    [248] = {.count = 1}, SHIFT(221, 0),
    [250] = {.count = 1}, REDUCE(sym_method_spec, 2, 0),
    [252] = {.count = 1}, SHIFT(222, 0),
    [254] = {.count = 1}, SHIFT(220, 0),
    [256] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 2, 0),
    [258] = {.count = 1}, SHIFT(68, 0),
    [260] = {.count = 1}, SHIFT(69, 0),
    [262] = {.count = 1}, SHIFT(70, 0),
    [264] = {.count = 1}, SHIFT(71, 0),
    [266] = {.count = 1}, SHIFT(219, 0),
    [268] = {.count = 1}, SHIFT(195, 0),
    [270] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [272] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [274] = {.count = 1}, SHIFT(72, 0),
    [276] = {.count = 1}, SHIFT(73, 0),
    [278] = {.count = 1}, SHIFT(74, 0),
    [280] = {.count = 1}, SHIFT(75, 0),
    [282] = {.count = 1}, SHIFT(76, 0),
    [284] = {.count = 1}, SHIFT(77, 0),
    [286] = {.count = 1}, SHIFT(78, 0),
    [288] = {.count = 1}, SHIFT(79, 0),
    [290] = {.count = 1}, SHIFT(80, 0),
    [292] = {.count = 1}, SHIFT(81, 0),
    [294] = {.count = 1}, SHIFT(82, 0),
    [296] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [298] = {.count = 1}, SHIFT(209, 0),
    [300] = {.count = 1}, SHIFT(210, 0),
    [302] = {.count = 1}, SHIFT(208, 0),
    [304] = {.count = 1}, SHIFT(203, 0),
    [306] = {.count = 1}, SHIFT(204, 0),
    [308] = {.count = 1}, SHIFT(98, 0),
    [310] = {.count = 1}, SHIFT(94, 0),
    [312] = {.count = 1}, SHIFT(90, 0),
    [314] = {.count = 1}, SHIFT(87, 0),
    [316] = {.count = 1}, SHIFT(88, 0),
    [318] = {.count = 1}, SHIFT(85, 0),
    [320] = {.count = 1}, SHIFT(83, 0),
    [322] = {.count = 1}, SHIFT(84, 0),
    [324] = {.count = 1}, SHIFT(86, 0),
    [326] = {.count = 1}, SHIFT(89, 0),
    [328] = {.count = 1}, SHIFT(91, 0),
    [330] = {.count = 1}, SHIFT(92, 0),
    [332] = {.count = 1}, SHIFT(93, 0),
    [334] = {.count = 1}, SHIFT(95, 0),
    [336] = {.count = 1}, SHIFT(96, 0),
    [338] = {.count = 1}, SHIFT(97, 0),
    [340] = {.count = 1}, REDUCE(sym_interface_type, 4, 0),
    [342] = {.count = 1}, SHIFT(99, 0),
    [344] = {.count = 1}, SHIFT(100, 0),
    [346] = {.count = 1}, SHIFT(101, 0),
    [348] = {.count = 1}, SHIFT(102, 0),
    [350] = {.count = 1}, SHIFT(103, 0),
    [352] = {.count = 1}, SHIFT(104, 0),
    [354] = {.count = 1}, SHIFT(111, 0),
    [356] = {.count = 1}, SHIFT(116, 0),
    [358] = {.count = 1}, SHIFT(117, 0),
    [360] = {.count = 1}, SHIFT(118, 0),
    [362] = {.count = 1}, SHIFT(119, 0),
    [364] = {.count = 1}, SHIFT(120, 0),
    [366] = {.count = 1}, SHIFT(121, 0),
    [368] = {.count = 1}, SHIFT(122, 0),
    [370] = {.count = 1}, SHIFT(123, 0),
    [372] = {.count = 1}, SHIFT(124, 0),
    [374] = {.count = 1}, SHIFT(125, 0),
    [376] = {.count = 1}, SHIFT(114, 0),
    [378] = {.count = 1}, SHIFT(113, 0),
    [380] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [382] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [384] = {.count = 1}, SHIFT(105, 0),
    [386] = {.count = 1}, SHIFT(106, 0),
    [388] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [390] = {.count = 1}, SHIFT(107, 0),
    [392] = {.count = 1}, SHIFT(108, 0),
    [394] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [396] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [398] = {.count = 1}, SHIFT(109, 0),
    [400] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [402] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [404] = {.count = 1}, SHIFT(110, 0),
    [406] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [408] = {.count = 1}, SHIFT(112, 0),
    [410] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [412] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [414] = {.count = 1}, SHIFT(115, 0),
    [416] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [418] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [420] = {.count = 1}, SHIFT(190, 0),
    [422] = {.count = 1}, SHIFT(191, 0),
    [424] = {.count = 1}, SHIFT(189, 0),
    [426] = {.count = 1}, SHIFT(145, 0),
    [428] = {.count = 1}, SHIFT(148, 0),
    [430] = {.count = 1}, SHIFT(141, 0),
    [432] = {.count = 1}, SHIFT(137, 0),
    [434] = {.count = 1}, SHIFT(133, 0),
    [436] = {.count = 1}, SHIFT(130, 0),
    [438] = {.count = 1}, SHIFT(131, 0),
    [440] = {.count = 1}, SHIFT(128, 0),
    [442] = {.count = 1}, SHIFT(126, 0),
    [444] = {.count = 1}, SHIFT(127, 0),
    [446] = {.count = 1}, SHIFT(129, 0),
    [448] = {.count = 1}, SHIFT(132, 0),
    [450] = {.count = 1}, SHIFT(134, 0),
    [452] = {.count = 1}, SHIFT(135, 0),
    [454] = {.count = 1}, SHIFT(136, 0),
    [456] = {.count = 1}, SHIFT(138, 0),
    [458] = {.count = 1}, SHIFT(139, 0),
    [460] = {.count = 1}, SHIFT(140, 0),
    [462] = {.count = 1}, SHIFT(142, 0),
    [464] = {.count = 1}, SHIFT(143, 0),
    [466] = {.count = 1}, SHIFT(144, 0),
    [468] = {.count = 1}, SHIFT(152, 0),
    [470] = {.count = 1}, SHIFT(153, 0),
    [472] = {.count = 1}, SHIFT(154, 0),
    [474] = {.count = 1}, SHIFT(155, 0),
    [476] = {.count = 1}, SHIFT(156, 0),
    [478] = {.count = 1}, SHIFT(157, 0),
    [480] = {.count = 1}, SHIFT(158, 0),
    [482] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [484] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [486] = {.count = 1}, SHIFT(151, 0),
    [488] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [490] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [492] = {.count = 1}, SHIFT(165, 0),
    [494] = {.count = 1}, SHIFT(166, 0),
    [496] = {.count = 1}, SHIFT(167, 0),
    [498] = {.count = 1}, SHIFT(168, 0),
    [500] = {.count = 1}, SHIFT(169, 0),
    [502] = {.count = 1}, SHIFT(170, 0),
    [504] = {.count = 1}, SHIFT(163, 0),
    [506] = {.count = 1}, SHIFT(164, 0),
    [508] = {.count = 1}, SHIFT(162, 0),
    [510] = {.count = 1}, SHIFT(161, 0),
    [512] = {.count = 1}, SHIFT(160, 0),
    [514] = {.count = 1}, SHIFT(159, 0),
    [516] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [518] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [520] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [522] = {.count = 1}, SHIFT(188, 0),
    [524] = {.count = 1}, SHIFT(171, 0),
    [526] = {.count = 1}, SHIFT(172, 0),
    [528] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [530] = {.count = 1}, SHIFT(173, 0),
    [532] = {.count = 1}, SHIFT(174, 0),
    [534] = {.count = 1}, SHIFT(175, 0),
    [536] = {.count = 1}, SHIFT(176, 0),
    [538] = {.count = 1}, SHIFT(177, 0),
    [540] = {.count = 1}, SHIFT(178, 0),
    [542] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [544] = {.count = 1}, SHIFT(186, 0),
    [546] = {.count = 1}, SHIFT(184, 0),
    [548] = {.count = 1}, SHIFT(183, 0),
    [550] = {.count = 1}, SHIFT(182, 0),
    [552] = {.count = 1}, SHIFT(181, 0),
    [554] = {.count = 1}, SHIFT(180, 0),
    [556] = {.count = 1}, SHIFT(179, 0),
    [558] = {.count = 1}, SHIFT(185, 0),
    [560] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [562] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [564] = {.count = 1}, SHIFT(187, 0),
    [566] = {.count = 1}, REDUCE(sym_call_expression, 4, 0),
    [568] = {.count = 1}, REDUCE(sym_pointer_type, 2, 0),
    [570] = {.count = 1}, SHIFT(198, 0),
    [572] = {.count = 1}, REDUCE(sym_function_type, 2, 0),
    [574] = {.count = 1}, SHIFT(199, 0),
    [576] = {.count = 1}, SHIFT(192, 0),
    [578] = {.count = 1}, SHIFT(193, 0),
    [580] = {.count = 1}, SHIFT(194, 0),
    [582] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [584] = {.count = 1}, SHIFT(196, 0),
    [586] = {.count = 1}, SHIFT(197, 0),
    [588] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [590] = {.count = 1}, REDUCE(sym_function_type, 3, 0),
    [592] = {.count = 1}, SHIFT(200, 0),
    [594] = {.count = 1}, SHIFT(201, 0),
    [596] = {.count = 1}, SHIFT(202, 0),
    [598] = {.count = 1}, SHIFT(206, 0),
    [600] = {.count = 1}, SHIFT(205, 0),
    [602] = {.count = 1}, SHIFT(207, 0),
    [604] = {.count = 1}, SHIFT(214, 0),
    [606] = {.count = 1}, SHIFT(215, 0),
    [608] = {.count = 1}, SHIFT(211, 0),
    [610] = {.count = 1}, SHIFT(212, 0),
    [612] = {.count = 1}, SHIFT(213, 0),
    [614] = {.count = 1}, SHIFT(216, 0),
    [616] = {.count = 1}, SHIFT(217, 0),
    [618] = {.count = 1}, SHIFT(218, 0),
    [620] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 3, 0),
    [622] = {.count = 1}, REDUCE(sym_method_spec, 3, 0),
    [624] = {.count = 1}, SHIFT(223, 0),
    [626] = {.count = 1}, SHIFT(224, 0),
    [628] = {.count = 1}, SHIFT(225, 0),
    [630] = {.count = 1}, SHIFT(228, 0),
    [632] = {.count = 1}, SHIFT(229, 0),
    [634] = {.count = 1}, SHIFT(230, 0),
    [636] = {.count = 1}, SHIFT(234, 0),
    [638] = {.count = 1}, SHIFT(233, 0),
    [640] = {.count = 1}, SHIFT(235, 0),
    [642] = {.count = 1}, SHIFT(242, 0),
    [644] = {.count = 1}, SHIFT(243, 0),
    [646] = {.count = 1}, SHIFT(239, 0),
    [648] = {.count = 1}, SHIFT(240, 0),
    [650] = {.count = 1}, SHIFT(241, 0),
    [652] = {.count = 1}, SHIFT(244, 0),
    [654] = {.count = 1}, SHIFT(245, 0),
    [656] = {.count = 1}, SHIFT(246, 0),
    [658] = {.count = 1}, SHIFT(248, 0),
    [660] = {.count = 1}, SHIFT(250, 0),
    [662] = {.count = 1}, SHIFT(251, 0),
    [664] = {.count = 1}, SHIFT(252, 0),
    [666] = {.count = 1}, SHIFT(254, 0),
    [668] = {.count = 1}, SHIFT(255, 0),
    [670] = {.count = 1}, SHIFT(256, 0),
    [672] = {.count = 1}, SHIFT(260, 0),
    [674] = {.count = 1}, SHIFT(259, 0),
    [676] = {.count = 1}, SHIFT(261, 0),
    [678] = {.count = 1}, SHIFT(264, 0),
    [680] = {.count = 1}, SHIFT(269, 0),
    [682] = {.count = 1}, SHIFT(268, 0),
    [684] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [686] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [688] = {.count = 1}, SHIFT(270, 0),
    [690] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [692] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [694] = {.count = 1}, SHIFT(421, 0),
    [696] = {.count = 1}, SHIFT(418, 0),
    [698] = {.count = 1}, SHIFT(419, 0),
    [700] = {.count = 1}, SHIFT(274, 0),
    [702] = {.count = 1}, SHIFT(275, 0),
    [704] = {.count = 1}, SHIFT(279, 0),
    [706] = {.count = 1}, SHIFT(280, 0),
    [708] = {.count = 1}, SHIFT(281, 0),
    [710] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [712] = {.count = 1}, SHIFT(282, 0),
    [714] = {.count = 1}, SHIFT(283, 0),
    [716] = {.count = 1}, SHIFT(284, 0),
    [718] = {.count = 1}, SHIFT(285, 0),
    [720] = {.count = 1}, SHIFT(286, 0),
    [722] = {.count = 1}, SHIFT(287, 0),
    [724] = {.count = 1}, SHIFT(288, 0),
    [726] = {.count = 1}, SHIFT(289, 0),
    [728] = {.count = 1}, SHIFT(290, 0),
    [730] = {.count = 1}, SHIFT(291, 0),
    [732] = {.count = 1}, SHIFT(292, 0),
    [734] = {.count = 1}, SHIFT(276, 0),
    [736] = {.count = 1}, SHIFT(277, 0),
    [738] = {.count = 1}, SHIFT(278, 0),
    [740] = {.count = 1}, SHIFT(417, 0),
    [742] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [744] = {.count = 1}, SHIFT(414, 0),
    [746] = {.count = 1}, SHIFT(415, 0),
    [748] = {.count = 1}, SHIFT(412, 0),
    [750] = {.count = 1}, SHIFT(411, 0),
    [752] = {.count = 1}, SHIFT(406, 0),
    [754] = {.count = 1}, SHIFT(407, 0),
    [756] = {.count = 1}, SHIFT(402, 0),
    [758] = {.count = 1}, SHIFT(308, 0),
    [760] = {.count = 1}, SHIFT(309, 0),
    [762] = {.count = 1}, SHIFT(310, 0),
    [764] = {.count = 1}, SHIFT(311, 0),
    [766] = {.count = 1}, SHIFT(312, 0),
    [768] = {.count = 1}, SHIFT(313, 0),
    [770] = {.count = 1}, SHIFT(314, 0),
    [772] = {.count = 1}, SHIFT(315, 0),
    [774] = {.count = 1}, SHIFT(316, 0),
    [776] = {.count = 1}, SHIFT(317, 0),
    [778] = {.count = 1}, SHIFT(304, 0),
    [780] = {.count = 1}, SHIFT(300, 0),
    [782] = {.count = 1}, SHIFT(297, 0),
    [784] = {.count = 1}, SHIFT(298, 0),
    [786] = {.count = 1}, SHIFT(295, 0),
    [788] = {.count = 1}, SHIFT(293, 0),
    [790] = {.count = 1}, SHIFT(294, 0),
    [792] = {.count = 1}, SHIFT(296, 0),
    [794] = {.count = 1}, SHIFT(299, 0),
    [796] = {.count = 1}, SHIFT(301, 0),
    [798] = {.count = 1}, SHIFT(302, 0),
    [800] = {.count = 1}, SHIFT(303, 0),
    [802] = {.count = 1}, SHIFT(305, 0),
    [804] = {.count = 1}, SHIFT(306, 0),
    [806] = {.count = 1}, SHIFT(307, 0),
    [808] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [810] = {.count = 1}, SHIFT(376, 0),
    [812] = {.count = 1}, SHIFT(377, 0),
    [814] = {.count = 1}, SHIFT(374, 0),
    [816] = {.count = 1}, SHIFT(319, 0),
    [818] = {.count = 1}, SHIFT(320, 0),
    [820] = {.count = 1}, SHIFT(321, 0),
    [822] = {.count = 1}, SHIFT(322, 0),
    [824] = {.count = 1}, SHIFT(323, 0),
    [826] = {.count = 1}, SHIFT(324, 0),
    [828] = {.count = 1}, SHIFT(325, 0),
    [830] = {.count = 1}, SHIFT(326, 0),
    [832] = {.count = 1}, SHIFT(327, 0),
    [834] = {.count = 1}, SHIFT(328, 0),
    [836] = {.count = 1}, SHIFT(329, 0),
    [838] = {.count = 1}, SHIFT(318, 0),
    [840] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [842] = {.count = 1}, REDUCE(sym_block, 3, 0),
    [844] = {.count = 1}, SHIFT(372, 0),
    [846] = {.count = 1}, SHIFT(353, 0),
    [848] = {.count = 1}, SHIFT(354, 0),
    [850] = {.count = 1}, SHIFT(355, 0),
    [852] = {.count = 1}, SHIFT(356, 0),
    [854] = {.count = 1}, SHIFT(357, 0),
    [856] = {.count = 1}, SHIFT(334, 0),
    [858] = {.count = 1}, SHIFT(335, 0),
    [860] = {.count = 1}, SHIFT(336, 0),
    [862] = {.count = 1}, SHIFT(337, 0),
    [864] = {.count = 1}, SHIFT(338, 0),
    [866] = {.count = 1}, SHIFT(339, 0),
    [868] = {.count = 1}, REDUCE(sym_inc_statement, 2, 0),
    [870] = {.count = 1}, REDUCE(sym_dec_statement, 2, 0),
    [872] = {.count = 1}, SHIFT(333, 0),
    [874] = {.count = 1}, SHIFT(332, 0),
    [876] = {.count = 1}, SHIFT(331, 0),
    [878] = {.count = 1}, SHIFT(330, 0),
    [880] = {.count = 1}, REDUCE(sym_send_statement, 3, 0),
    [882] = {.count = 1}, SHIFT(340, 0),
    [884] = {.count = 1}, SHIFT(341, 0),
    [886] = {.count = 1}, SHIFT(342, 0),
    [888] = {.count = 1}, SHIFT(343, 0),
    [890] = {.count = 1}, SHIFT(344, 0),
    [892] = {.count = 1}, SHIFT(345, 0),
    [894] = {.count = 1}, SHIFT(351, 0),
    [896] = {.count = 1}, SHIFT(350, 0),
    [898] = {.count = 1}, SHIFT(349, 0),
    [900] = {.count = 1}, SHIFT(348, 0),
    [902] = {.count = 1}, SHIFT(347, 0),
    [904] = {.count = 1}, SHIFT(346, 0),
    [906] = {.count = 1}, SHIFT(352, 0),
    [908] = {.count = 1}, SHIFT(358, 0),
    [910] = {.count = 1}, SHIFT(359, 0),
    [912] = {.count = 1}, SHIFT(360, 0),
    [914] = {.count = 1}, SHIFT(361, 0),
    [916] = {.count = 1}, SHIFT(362, 0),
    [918] = {.count = 1}, SHIFT(363, 0),
    [920] = {.count = 1}, SHIFT(364, 0),
    [922] = {.count = 1}, SHIFT(370, 0),
    [924] = {.count = 1}, SHIFT(369, 0),
    [926] = {.count = 1}, SHIFT(368, 0),
    [928] = {.count = 1}, SHIFT(367, 0),
    [930] = {.count = 1}, SHIFT(366, 0),
    [932] = {.count = 1}, SHIFT(365, 0),
    [934] = {.count = 1}, SHIFT(371, 0),
    [936] = {.count = 1}, SHIFT(373, 0),
    [938] = {.count = 1}, SHIFT(375, 0),
    [940] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 2, 0),
    [942] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 3, 0),
    [944] = {.count = 1}, SHIFT(401, 0),
    [946] = {.count = 1}, SHIFT(379, 0),
    [948] = {.count = 1}, SHIFT(380, 0),
    [950] = {.count = 1}, SHIFT(381, 0),
    [952] = {.count = 1}, SHIFT(382, 0),
    [954] = {.count = 1}, SHIFT(383, 0),
    [956] = {.count = 1}, SHIFT(378, 0),
    [958] = {.count = 1}, REDUCE(sym_short_var_declaration, 3, 0),
    [960] = {.count = 1}, SHIFT(384, 0),
    [962] = {.count = 1}, SHIFT(385, 0),
    [964] = {.count = 1}, SHIFT(386, 0),
    [966] = {.count = 1}, SHIFT(387, 0),
    [968] = {.count = 1}, SHIFT(388, 0),
    [970] = {.count = 1}, SHIFT(389, 0),
    [972] = {.count = 1}, SHIFT(390, 0),
    [974] = {.count = 1}, SHIFT(391, 0),
    [976] = {.count = 1}, SHIFT(399, 0),
    [978] = {.count = 1}, SHIFT(397, 0),
    [980] = {.count = 1}, SHIFT(396, 0),
    [982] = {.count = 1}, SHIFT(395, 0),
    [984] = {.count = 1}, SHIFT(394, 0),
    [986] = {.count = 1}, SHIFT(393, 0),
    [988] = {.count = 1}, SHIFT(392, 0),
    [990] = {.count = 1}, SHIFT(398, 0),
    [992] = {.count = 1}, SHIFT(400, 0),
    [994] = {.count = 1}, REDUCE(sym_assignment_statement, 3, 0),
    [996] = {.count = 1}, SHIFT(403, 0),
    [998] = {.count = 1}, SHIFT(404, 0),
    [1000] = {.count = 1}, SHIFT(405, 0),
    [1002] = {.count = 1}, SHIFT(409, 0),
    [1004] = {.count = 1}, SHIFT(408, 0),
    [1006] = {.count = 1}, SHIFT(410, 0),
    [1008] = {.count = 1}, SHIFT(413, 0),
    [1010] = {.count = 1}, SHIFT(416, 0),
    [1012] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [1014] = {.count = 1}, SHIFT(420, 0),
    [1016] = {.count = 1}, SHIFT(422, 0),
    [1018] = {.count = 1}, SHIFT(423, 0),
    [1020] = {.count = 1}, SHIFT(424, 0),
    [1022] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [1024] = {.count = 1}, SHIFT(425, 0),
    [1026] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [1028] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [1030] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [1032] = {.count = 1}, SHIFT(440, 0),
    [1034] = {.count = 1}, SHIFT(441, 0),
    [1036] = {.count = 1}, SHIFT(442, 0),
    [1038] = {.count = 1}, SHIFT(443, 0),
    [1040] = {.count = 1}, SHIFT(444, 0),
    [1042] = {.count = 1}, SHIFT(445, 0),
    [1044] = {.count = 1}, SHIFT(446, 0),
    [1046] = {.count = 1}, SHIFT(447, 0),
    [1048] = {.count = 1}, SHIFT(448, 0),
    [1050] = {.count = 1}, SHIFT(449, 0),
    [1052] = {.count = 1}, SHIFT(450, 0),
    [1054] = {.count = 1}, SHIFT(451, 0),
    [1056] = {.count = 1}, SHIFT(434, 0),
    [1058] = {.count = 1}, SHIFT(435, 0),
    [1060] = {.count = 1}, SHIFT(436, 0),
    [1062] = {.count = 1}, SHIFT(430, 0),
    [1064] = {.count = 1}, SHIFT(431, 0),
    [1066] = {.count = 1}, SHIFT(432, 0),
    [1068] = {.count = 1}, SHIFT(433, 0),
    [1070] = {.count = 1}, SHIFT(438, 0),
    [1072] = {.count = 1}, SHIFT(437, 0),
    [1074] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [1076] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [1078] = {.count = 1}, SHIFT(439, 0),
    [1080] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [1082] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [1084] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [1086] = {.count = 1}, SHIFT(488, 0),
    [1088] = {.count = 1}, SHIFT(487, 0),
    [1090] = {.count = 1}, SHIFT(477, 0),
    [1092] = {.count = 1}, SHIFT(478, 0),
    [1094] = {.count = 1}, SHIFT(476, 0),
    [1096] = {.count = 1}, SHIFT(471, 0),
    [1098] = {.count = 1}, SHIFT(472, 0),
    [1100] = {.count = 1}, SHIFT(467, 0),
    [1102] = {.count = 1}, SHIFT(463, 0),
    [1104] = {.count = 1}, SHIFT(459, 0),
    [1106] = {.count = 1}, SHIFT(456, 0),
    [1108] = {.count = 1}, SHIFT(457, 0),
    [1110] = {.count = 1}, SHIFT(454, 0),
    [1112] = {.count = 1}, SHIFT(452, 0),
    [1114] = {.count = 1}, SHIFT(453, 0),
    [1116] = {.count = 1}, SHIFT(455, 0),
    [1118] = {.count = 1}, SHIFT(458, 0),
    [1120] = {.count = 1}, SHIFT(460, 0),
    [1122] = {.count = 1}, SHIFT(461, 0),
    [1124] = {.count = 1}, SHIFT(462, 0),
    [1126] = {.count = 1}, SHIFT(464, 0),
    [1128] = {.count = 1}, SHIFT(465, 0),
    [1130] = {.count = 1}, SHIFT(466, 0),
    [1132] = {.count = 1}, SHIFT(468, 0),
    [1134] = {.count = 1}, SHIFT(469, 0),
    [1136] = {.count = 1}, SHIFT(470, 0),
    [1138] = {.count = 1}, SHIFT(474, 0),
    [1140] = {.count = 1}, SHIFT(473, 0),
    [1142] = {.count = 1}, SHIFT(475, 0),
    [1144] = {.count = 1}, SHIFT(482, 0),
    [1146] = {.count = 1}, SHIFT(483, 0),
    [1148] = {.count = 1}, SHIFT(479, 0),
    [1150] = {.count = 1}, SHIFT(480, 0),
    [1152] = {.count = 1}, SHIFT(481, 0),
    [1154] = {.count = 1}, SHIFT(484, 0),
    [1156] = {.count = 1}, SHIFT(485, 0),
    [1158] = {.count = 1}, SHIFT(486, 0),
    [1160] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [1162] = {.count = 1}, SHIFT(489, 0),
    [1164] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [1166] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [1168] = {.count = 1}, SHIFT(499, 0),
    [1170] = {.count = 1}, SHIFT(500, 0),
    [1172] = {.count = 1}, SHIFT(501, 0),
    [1174] = {.count = 1}, SHIFT(502, 0),
    [1176] = {.count = 1}, SHIFT(503, 0),
    [1178] = {.count = 1}, SHIFT(504, 0),
    [1180] = {.count = 1}, SHIFT(505, 0),
    [1182] = {.count = 1}, SHIFT(506, 0),
    [1184] = {.count = 1}, SHIFT(507, 0),
    [1186] = {.count = 1}, SHIFT(508, 0),
    [1188] = {.count = 1}, SHIFT(509, 0),
    [1190] = {.count = 1}, SHIFT(510, 0),
    [1192] = {.count = 1}, SHIFT(493, 0),
    [1194] = {.count = 1}, SHIFT(494, 0),
    [1196] = {.count = 1}, SHIFT(495, 0),
    [1198] = {.count = 1}, SHIFT(497, 0),
    [1200] = {.count = 1}, SHIFT(496, 0),
    [1202] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [1204] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [1206] = {.count = 1}, SHIFT(498, 0),
    [1208] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [1210] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [1212] = {.count = 1}, SHIFT(547, 0),
    [1214] = {.count = 1}, SHIFT(546, 0),
    [1216] = {.count = 1}, SHIFT(536, 0),
    [1218] = {.count = 1}, SHIFT(537, 0),
    [1220] = {.count = 1}, SHIFT(535, 0),
    [1222] = {.count = 1}, SHIFT(530, 0),
    [1224] = {.count = 1}, SHIFT(531, 0),
    [1226] = {.count = 1}, SHIFT(526, 0),
    [1228] = {.count = 1}, SHIFT(522, 0),
    [1230] = {.count = 1}, SHIFT(518, 0),
    [1232] = {.count = 1}, SHIFT(515, 0),
    [1234] = {.count = 1}, SHIFT(516, 0),
    [1236] = {.count = 1}, SHIFT(513, 0),
    [1238] = {.count = 1}, SHIFT(511, 0),
    [1240] = {.count = 1}, SHIFT(512, 0),
    [1242] = {.count = 1}, SHIFT(514, 0),
    [1244] = {.count = 1}, SHIFT(517, 0),
    [1246] = {.count = 1}, SHIFT(519, 0),
    [1248] = {.count = 1}, SHIFT(520, 0),
    [1250] = {.count = 1}, SHIFT(521, 0),
    [1252] = {.count = 1}, SHIFT(523, 0),
    [1254] = {.count = 1}, SHIFT(524, 0),
    [1256] = {.count = 1}, SHIFT(525, 0),
    [1258] = {.count = 1}, SHIFT(527, 0),
    [1260] = {.count = 1}, SHIFT(528, 0),
    [1262] = {.count = 1}, SHIFT(529, 0),
    [1264] = {.count = 1}, SHIFT(533, 0),
    [1266] = {.count = 1}, SHIFT(532, 0),
    [1268] = {.count = 1}, SHIFT(534, 0),
    [1270] = {.count = 1}, SHIFT(541, 0),
    [1272] = {.count = 1}, SHIFT(542, 0),
    [1274] = {.count = 1}, SHIFT(538, 0),
    [1276] = {.count = 1}, SHIFT(539, 0),
    [1278] = {.count = 1}, SHIFT(540, 0),
    [1280] = {.count = 1}, SHIFT(543, 0),
    [1282] = {.count = 1}, SHIFT(544, 0),
    [1284] = {.count = 1}, SHIFT(545, 0),
    [1286] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [1288] = {.count = 1}, SHIFT(548, 0),
    [1290] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [1292] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [1294] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [1296] = {.count = 1}, SHIFT(555, 0),
    [1298] = {.count = 1}, SHIFT(556, 0),
    [1300] = {.count = 1}, SHIFT(557, 0),
    [1302] = {.count = 1}, SHIFT(558, 0),
    [1304] = {.count = 1}, SHIFT(559, 0),
    [1306] = {.count = 1}, SHIFT(554, 0),
    [1308] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [1310] = {.count = 1}, SHIFT(562, 0),
    [1312] = {.count = 1}, SHIFT(561, 0),
    [1314] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [1316] = {.count = 1}, SHIFT(560, 0),
    [1318] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [1320] = {.count = 1}, SHIFT(563, 0),
    [1322] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [1324] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [1326] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [1328] = {.count = 1}, SHIFT(566, 0),
    [1330] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [1332] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 3, 0),
    [1334] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
