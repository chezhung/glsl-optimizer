/* A Bison parser, made by GNU Bison 3.5.0.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY__MESA_GLSL_SRC_GLSL_GLSL_PARSER_H_INCLUDED
# define YY__MESA_GLSL_SRC_GLSL_GLSL_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int _mesa_glsl_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ATTRIBUTE = 258,
    CONST_TOK = 259,
    BOOL_TOK = 260,
    FLOAT_TOK = 261,
    INT_TOK = 262,
    UINT_TOK = 263,
    BREAK = 264,
    CONTINUE = 265,
    DO = 266,
    ELSE = 267,
    FOR = 268,
    IF = 269,
    DISCARD = 270,
    RETURN = 271,
    SWITCH = 272,
    CASE = 273,
    DEFAULT = 274,
    BVEC2 = 275,
    BVEC3 = 276,
    BVEC4 = 277,
    IVEC2 = 278,
    IVEC3 = 279,
    IVEC4 = 280,
    UVEC2 = 281,
    UVEC3 = 282,
    UVEC4 = 283,
    VEC2 = 284,
    VEC3 = 285,
    VEC4 = 286,
    CENTROID = 287,
    IN_TOK = 288,
    OUT_TOK = 289,
    INOUT_TOK = 290,
    BUFFER = 291,
    UNIFORM = 292,
    VARYING = 293,
    SAMPLE = 294,
    NOPERSPECTIVE = 295,
    FLAT = 296,
    SMOOTH = 297,
    MAT2X2 = 298,
    MAT2X3 = 299,
    MAT2X4 = 300,
    MAT3X2 = 301,
    MAT3X3 = 302,
    MAT3X4 = 303,
    MAT4X2 = 304,
    MAT4X3 = 305,
    MAT4X4 = 306,
    SAMPLER1D = 307,
    SAMPLER2D = 308,
    SAMPLER3D = 309,
    SAMPLERCUBE = 310,
    SAMPLER1DSHADOW = 311,
    SAMPLER2DSHADOW = 312,
    SAMPLERCUBESHADOW = 313,
    SAMPLER1DARRAY = 314,
    SAMPLER2DARRAY = 315,
    SAMPLER1DARRAYSHADOW = 316,
    SAMPLER2DARRAYSHADOW = 317,
    SAMPLERCUBEARRAY = 318,
    SAMPLERCUBEARRAYSHADOW = 319,
    ISAMPLER1D = 320,
    ISAMPLER2D = 321,
    ISAMPLER3D = 322,
    ISAMPLERCUBE = 323,
    ISAMPLER1DARRAY = 324,
    ISAMPLER2DARRAY = 325,
    ISAMPLERCUBEARRAY = 326,
    USAMPLER1D = 327,
    USAMPLER2D = 328,
    USAMPLER3D = 329,
    USAMPLERCUBE = 330,
    USAMPLER1DARRAY = 331,
    USAMPLER2DARRAY = 332,
    USAMPLERCUBEARRAY = 333,
    SAMPLER2DRECT = 334,
    ISAMPLER2DRECT = 335,
    USAMPLER2DRECT = 336,
    SAMPLER2DRECTSHADOW = 337,
    SAMPLERBUFFER = 338,
    ISAMPLERBUFFER = 339,
    USAMPLERBUFFER = 340,
    SAMPLER2DMS = 341,
    ISAMPLER2DMS = 342,
    USAMPLER2DMS = 343,
    SAMPLER2DMSARRAY = 344,
    ISAMPLER2DMSARRAY = 345,
    USAMPLER2DMSARRAY = 346,
    SAMPLEREXTERNALOES = 347,
    IMAGE1D = 348,
    IMAGE2D = 349,
    IMAGE3D = 350,
    IMAGE2DRECT = 351,
    IMAGECUBE = 352,
    IMAGEBUFFER = 353,
    IMAGE1DARRAY = 354,
    IMAGE2DARRAY = 355,
    IMAGECUBEARRAY = 356,
    IMAGE2DMS = 357,
    IMAGE2DMSARRAY = 358,
    IIMAGE1D = 359,
    IIMAGE2D = 360,
    IIMAGE3D = 361,
    IIMAGE2DRECT = 362,
    IIMAGECUBE = 363,
    IIMAGEBUFFER = 364,
    IIMAGE1DARRAY = 365,
    IIMAGE2DARRAY = 366,
    IIMAGECUBEARRAY = 367,
    IIMAGE2DMS = 368,
    IIMAGE2DMSARRAY = 369,
    UIMAGE1D = 370,
    UIMAGE2D = 371,
    UIMAGE3D = 372,
    UIMAGE2DRECT = 373,
    UIMAGECUBE = 374,
    UIMAGEBUFFER = 375,
    UIMAGE1DARRAY = 376,
    UIMAGE2DARRAY = 377,
    UIMAGECUBEARRAY = 378,
    UIMAGE2DMS = 379,
    UIMAGE2DMSARRAY = 380,
    IMAGE1DSHADOW = 381,
    IMAGE2DSHADOW = 382,
    IMAGE1DARRAYSHADOW = 383,
    IMAGE2DARRAYSHADOW = 384,
    COHERENT = 385,
    VOLATILE = 386,
    RESTRICT = 387,
    READONLY = 388,
    WRITEONLY = 389,
    ATOMIC_UINT = 390,
    STRUCT = 391,
    VOID_TOK = 392,
    WHILE = 393,
    IDENTIFIER = 394,
    TYPE_IDENTIFIER = 395,
    NEW_IDENTIFIER = 396,
    FLOATCONSTANT = 397,
    INTCONSTANT = 398,
    UINTCONSTANT = 399,
    BOOLCONSTANT = 400,
    FIELD_SELECTION = 401,
    LEFT_OP = 402,
    RIGHT_OP = 403,
    INC_OP = 404,
    DEC_OP = 405,
    LE_OP = 406,
    GE_OP = 407,
    EQ_OP = 408,
    NE_OP = 409,
    AND_OP = 410,
    OR_OP = 411,
    XOR_OP = 412,
    MUL_ASSIGN = 413,
    DIV_ASSIGN = 414,
    ADD_ASSIGN = 415,
    MOD_ASSIGN = 416,
    LEFT_ASSIGN = 417,
    RIGHT_ASSIGN = 418,
    AND_ASSIGN = 419,
    XOR_ASSIGN = 420,
    OR_ASSIGN = 421,
    SUB_ASSIGN = 422,
    INVARIANT = 423,
    PRECISE = 424,
    LOWP = 425,
    MEDIUMP = 426,
    HIGHP = 427,
    SUPERP = 428,
    PRECISION = 429,
    VERSION_TOK = 430,
    EXTENSION = 431,
    LINE = 432,
    COLON = 433,
    EOL = 434,
    INTERFACE = 435,
    OUTPUT = 436,
    PRAGMA_DEBUG_ON = 437,
    PRAGMA_DEBUG_OFF = 438,
    PRAGMA_OPTIMIZE_ON = 439,
    PRAGMA_OPTIMIZE_OFF = 440,
    PRAGMA_INVARIANT_ALL = 441,
    LAYOUT_TOK = 442,
    ASM = 443,
    CLASS = 444,
    UNION = 445,
    ENUM = 446,
    TYPEDEF = 447,
    TEMPLATE = 448,
    THIS = 449,
    PACKED_TOK = 450,
    GOTO = 451,
    INLINE_TOK = 452,
    NOINLINE = 453,
    PUBLIC_TOK = 454,
    STATIC = 455,
    EXTERN = 456,
    EXTERNAL = 457,
    LONG_TOK = 458,
    SHORT_TOK = 459,
    DOUBLE_TOK = 460,
    HALF = 461,
    FIXED_TOK = 462,
    UNSIGNED = 463,
    INPUT_TOK = 464,
    HVEC2 = 465,
    HVEC3 = 466,
    HVEC4 = 467,
    DVEC2 = 468,
    DVEC3 = 469,
    DVEC4 = 470,
    FVEC2 = 471,
    FVEC3 = 472,
    FVEC4 = 473,
    SAMPLER3DRECT = 474,
    SIZEOF = 475,
    CAST = 476,
    NAMESPACE = 477,
    USING = 478,
    RESOURCE = 479,
    PATCH = 480,
    SUBROUTINE = 481,
    ERROR_TOK = 482,
    COMMON = 483,
    PARTITION = 484,
    ACTIVE = 485,
    FILTER = 486,
    ROW_MAJOR = 487,
    THEN = 488
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 99 "src/glsl/glsl_parser.yy"

   int n;
   float real;
   const char *identifier;

   struct ast_type_qualifier type_qualifier;

   ast_node *node;
   ast_type_specifier *type_specifier;
   ast_array_specifier *array_specifier;
   ast_fully_specified_type *fully_specified_type;
   ast_function *function;
   ast_parameter_declarator *parameter_declarator;
   ast_function_definition *function_definition;
   ast_compound_statement *compound_statement;
   ast_expression *expression;
   ast_declarator_list *declarator_list;
   ast_struct_specifier *struct_specifier;
   ast_declaration *declaration;
   ast_switch_body *switch_body;
   ast_case_label *case_label;
   ast_case_label_list *case_label_list;
   ast_case_statement *case_statement;
   ast_case_statement_list *case_statement_list;
   ast_interface_block *interface_block;

   struct {
      ast_node *cond;
      ast_expression *rest;
   } for_rest_statement;

   struct {
      ast_node *then_statement;
      ast_node *else_statement;
   } selection_rest_statement;

#line 328 "src/glsl/glsl_parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int _mesa_glsl_parse (struct _mesa_glsl_parse_state *state);

#endif /* !YY__MESA_GLSL_SRC_GLSL_GLSL_PARSER_H_INCLUDED  */
