/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VOID = 258,
    MAIN = 259,
    ID = 260,
    INT = 261,
    FLOAT = 262,
    STRING = 263,
    TFLOAT = 264,
    TINT = 265,
    OR = 266,
    AND = 267,
    EQ = 268,
    NEQ = 269,
    GEQ = 270,
    LEQ = 271,
    PEQ = 272,
    REQ = 273,
    MEQ = 274,
    DEQ = 275,
    PP = 276,
    MM = 277,
    SHL = 278,
    SHR = 279,
    IF = 280,
    ELSE = 281,
    WHILE = 282,
    DO = 283,
    FOR = 284,
    CIN = 285,
    ENDL = 286,
    COUT = 287
  };
#endif
/* Tokens.  */
#define VOID 258
#define MAIN 259
#define ID 260
#define INT 261
#define FLOAT 262
#define STRING 263
#define TFLOAT 264
#define TINT 265
#define OR 266
#define AND 267
#define EQ 268
#define NEQ 269
#define GEQ 270
#define LEQ 271
#define PEQ 272
#define REQ 273
#define MEQ 274
#define DEQ 275
#define PP 276
#define MM 277
#define SHL 278
#define SHR 279
#define IF 280
#define ELSE 281
#define WHILE 282
#define DO 283
#define FOR 284
#define CIN 285
#define ENDL 286
#define COUT 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
