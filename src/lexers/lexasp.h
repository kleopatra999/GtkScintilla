/* 
 *
 * This file is auto-generated, do not edit. 
 *
 * lexasp.h - GScintilla ASP Lexer
 *
 */

#ifndef GSCI_LEXER_ASP_H
#define GSCI_LEXER_ASP_H

G_BEGIN_DECLS

/* Lexer states */
#define GTK_SCINTILLA_LEXER_ASP_STYLE_DEFAULT 0
#define GTK_SCINTILLA_LEXER_ASP_STYLE_TAG 1
#define GTK_SCINTILLA_LEXER_ASP_STYLE_TAGUNKNOWN 2
#define GTK_SCINTILLA_LEXER_ASP_STYLE_ATTRIBUTE 3
#define GTK_SCINTILLA_LEXER_ASP_STYLE_ATTRIBUTEUNKNOWN 4
#define GTK_SCINTILLA_LEXER_ASP_STYLE_NUMBER 5
#define GTK_SCINTILLA_LEXER_ASP_STYLE_DOUBLESTRING 6
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SINGLESTRING 7
#define GTK_SCINTILLA_LEXER_ASP_STYLE_OTHER 8
#define GTK_SCINTILLA_LEXER_ASP_STYLE_COMMENT 9
#define GTK_SCINTILLA_LEXER_ASP_STYLE_ENTITY 10
#define GTK_SCINTILLA_LEXER_ASP_STYLE_TAGEND 11
#define GTK_SCINTILLA_LEXER_ASP_STYLE_XMLSTART 12
#define GTK_SCINTILLA_LEXER_ASP_STYLE_XMLEND 13
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SCRIPT 14
#define GTK_SCINTILLA_LEXER_ASP_STYLE_ASP 15
#define GTK_SCINTILLA_LEXER_ASP_STYLE_ASPAT 16
#define GTK_SCINTILLA_LEXER_ASP_STYLE_CDATA 17
#define GTK_SCINTILLA_LEXER_ASP_STYLE_QUESTION 18
#define GTK_SCINTILLA_LEXER_ASP_STYLE_VALUE 19
#define GTK_SCINTILLA_LEXER_ASP_STYLE_XCCOMMENT 20
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_DEFAULT 21
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_COMMAND 22
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_1ST_PARAM 23
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_DOUBLESTRING 24
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_SIMPLESTRING 25
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_ERROR 26
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_SPECIAL 27
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_ENTITY 28
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_COMMENT 29
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_1ST_PARAM_COMMENT 30
#define GTK_SCINTILLA_LEXER_ASP_STYLE_SGML_BLOCK_DEFAULT 31
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_START 40
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_DEFAULT 41
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_COMMENT 42
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_COMMENTLINE 43
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_COMMENTDOC 44
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_NUMBER 45
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_WORD 46
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_KEYWORD 47
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_DOUBLESTRING 48
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_SINGLESTRING 49
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_SYMBOLS 50
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_STRINGEOL 51
#define GTK_SCINTILLA_LEXER_ASP_STYLE_J_REGEX 52
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_START 55
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_DEFAULT 56
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_COMMENT 57
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_COMMENTLINE 58
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_COMMENTDOC 59
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_NUMBER 60
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_WORD 61
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_KEYWORD 62
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_DOUBLESTRING 63
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_SINGLESTRING 64
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_SYMBOLS 65
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_STRINGEOL 66
#define GTK_SCINTILLA_LEXER_ASP_STYLE_JA_REGEX 67
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_START 70
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_DEFAULT 71
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_COMMENTLINE 72
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_NUMBER 73
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_WORD 74
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_STRING 75
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_IDENTIFIER 76
#define GTK_SCINTILLA_LEXER_ASP_STYLE_B_STRINGEOL 77
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_START 80
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_DEFAULT 81
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_COMMENTLINE 82
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_NUMBER 83
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_WORD 84
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_STRING 85
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_IDENTIFIER 86
#define GTK_SCINTILLA_LEXER_ASP_STYLE_BA_STRINGEOL 87
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_START 90
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_DEFAULT 91
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_COMMENTLINE 92
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_NUMBER 93
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_STRING 94
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_CHARACTER 95
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_WORD 96
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_TRIPLE 97
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_TRIPLEDOUBLE 98
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_CLASSNAME 99
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_DEFNAME 100
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_OPERATOR 101
#define GTK_SCINTILLA_LEXER_ASP_STYLE_P_IDENTIFIER 102
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_COMPLEX_VARIABLE 104
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_START 105
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_DEFAULT 106
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_COMMENTLINE 107
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_NUMBER 108
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_STRING 109
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_CHARACTER 110
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_WORD 111
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_TRIPLE 112
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_TRIPLEDOUBLE 113
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_CLASSNAME 114
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_DEFNAME 115
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_OPERATOR 116
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PA_IDENTIFIER 117
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_DEFAULT 118
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_HSTRING 119
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_SIMPLESTRING 120
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_WORD 121
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_NUMBER 122
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_VARIABLE 123
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_COMMENT 124
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_COMMENTLINE 125
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_HSTRING_VARIABLE 126
#define GTK_SCINTILLA_LEXER_ASP_STYLE_PHP_OPERATOR 127
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_DEFAULT 0
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_IDENTIFIER 1
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_KEYWORD 2
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_NUMBER 3
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_STRING 4
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_CHARACTER 5
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_CLASS 6
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_MODULE 7
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_CAPITAL 8
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_DATA 9
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_IMPORT 10
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_OPERATOR 11
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_INSTANCE 12
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_COMMENTLINE 13
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_COMMENTBLOCK 14
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_COMMENTBLOCK2 15
#define GTK_SCINTILLA_LEXER_ASP_STYLE_A_COMMENTBLOCK3 16

		
G_END_DECLS

#endif /* ifndef GSCI_ASP_H */
