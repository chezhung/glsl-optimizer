/* A Bison parser, made by GNU Bison 3.5.0.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         _mesa_glsl_parse
#define yylex           _mesa_glsl_lex
#define yyerror         _mesa_glsl_error
#define yydebug         _mesa_glsl_debug
#define yynerrs         _mesa_glsl_nerrs

/* First part of user prologue.  */
#line 1 "src/glsl/glsl_parser.yy"

/*
 * Copyright © 2008, 2009 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _MSC_VER
#include <strings.h>
#endif
#include <assert.h>

#include "ast.h"
#include "glsl_parser_extras.h"
#include "glsl_types.h"
#include "main/context.h"

#if defined(_MSC_VER)
#	pragma warning(disable: 4065) // warning C4065: switch statement contains 'default' but no 'case' labels
#	pragma warning(disable: 4244) // warning C4244: '=' : conversion from 'double' to 'float', possible loss of data
#endif // defined(_MSC_VER)

#undef yyerror

static void yyerror(YYLTYPE *loc, _mesa_glsl_parse_state *st, const char *msg)
{
   _mesa_glsl_error(loc, st, "%s", msg);
}

static int
_mesa_glsl_lex(YYSTYPE *val, YYLTYPE *loc, _mesa_glsl_parse_state *state)
{
   return _mesa_glsl_lexer_lex(val, loc, state->scanner);
}

static bool match_layout_qualifier(const char *s1, const char *s2,
                                   _mesa_glsl_parse_state *state)
{
   /* From the GLSL 1.50 spec, section 4.3.8 (Layout Qualifiers):
    *
    *     "The tokens in any layout-qualifier-id-list ... are not case
    *     sensitive, unless explicitly noted otherwise."
    *
    * The text "unless explicitly noted otherwise" appears to be
    * vacuous--no desktop GLSL spec (up through GLSL 4.40) notes
    * otherwise.
    *
    * However, the GLSL ES 3.00 spec says, in section 4.3.8 (Layout
    * Qualifiers):
    *
    *     "As for other identifiers, they are case sensitive."
    *
    * So we need to do a case-sensitive or a case-insensitive match,
    * depending on whether we are compiling for GLSL ES.
    */
   if (state->es_shader)
      return strcmp(s1, s2);
   else
      return strcasecmp(s1, s2);
}

#line 156 "src/glsl/glsl_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    EARLY_FRAGMENT_TESTS = 488,
    THEN = 489
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

#line 480 "src/glsl/glsl_parser.cpp"

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



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5480

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  259
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  108
/* YYNRULES -- Number of rules.  */
#define YYNRULES  389
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  544

#define YYUNDEFTOK  2
#define YYMAXUTOK   489


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   243,     2,     2,     2,   247,   250,     2,
     235,   236,   245,   241,   240,   242,   239,   246,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   254,   256,
     248,   255,   249,   253,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   237,     2,   238,   251,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   257,   252,   258,   244,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   303,   303,   302,   314,   316,   323,   333,   334,   335,
     336,   337,   350,   352,   356,   357,   358,   362,   371,   379,
     387,   398,   399,   403,   410,   417,   424,   431,   438,   445,
     446,   452,   456,   463,   469,   478,   482,   486,   487,   496,
     497,   501,   502,   506,   512,   524,   528,   534,   542,   553,
     554,   558,   559,   563,   569,   581,   593,   594,   600,   606,
     616,   617,   618,   619,   623,   624,   630,   636,   645,   646,
     652,   661,   662,   668,   677,   678,   684,   690,   696,   705,
     706,   712,   721,   722,   731,   732,   741,   742,   751,   752,
     761,   762,   771,   772,   781,   782,   791,   792,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   815,
     819,   835,   839,   844,   848,   853,   860,   864,   865,   869,
     874,   882,   896,   906,   920,   925,   939,   943,   951,   959,
     971,   984,   990,   996,  1006,  1011,  1012,  1022,  1032,  1042,
    1056,  1063,  1073,  1083,  1093,  1103,  1115,  1130,  1137,  1148,
    1155,  1156,  1166,  1167,  1171,  1361,  1501,  1527,  1533,  1542,
    1548,  1554,  1564,  1570,  1575,  1576,  1577,  1578,  1579,  1598,
    1606,  1618,  1642,  1659,  1675,  1695,  1709,  1715,  1723,  1729,
    1735,  1741,  1747,  1753,  1774,  1780,  1785,  1790,  1795,  1801,
    1806,  1814,  1820,  1826,  1840,  1855,  1856,  1864,  1870,  1876,
    1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,
    1895,  1896,  1897,  1898,  1899,  1900,  1901,  1902,  1903,  1904,
    1905,  1906,  1907,  1908,  1909,  1910,  1911,  1912,  1913,  1914,
    1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,
    1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,  1933,  1934,
    1935,  1936,  1937,  1938,  1939,  1940,  1941,  1942,  1943,  1944,
    1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,  1953,  1954,
    1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,  1964,
    1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,  1973,  1974,
    1975,  1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,
    1985,  1989,  1994,  1999,  2007,  2014,  2023,  2028,  2036,  2055,
    2060,  2068,  2074,  2083,  2084,  2088,  2095,  2102,  2109,  2115,
    2116,  2120,  2121,  2122,  2123,  2124,  2125,  2129,  2136,  2135,
    2149,  2150,  2154,  2160,  2169,  2179,  2191,  2197,  2206,  2215,
    2220,  2228,  2232,  2250,  2258,  2263,  2271,  2276,  2284,  2292,
    2300,  2308,  2316,  2324,  2332,  2339,  2346,  2356,  2357,  2361,
    2363,  2369,  2374,  2383,  2389,  2395,  2401,  2407,  2416,  2417,
    2418,  2419,  2423,  2437,  2441,  2464,  2579,  2585,  2591,  2597,
    2606,  2610,  2616,  2625,  2630,  2638,  2662,  2669,  2677,  2685
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ATTRIBUTE", "CONST_TOK", "BOOL_TOK",
  "FLOAT_TOK", "INT_TOK", "UINT_TOK", "BREAK", "CONTINUE", "DO", "ELSE",
  "FOR", "IF", "DISCARD", "RETURN", "SWITCH", "CASE", "DEFAULT", "BVEC2",
  "BVEC3", "BVEC4", "IVEC2", "IVEC3", "IVEC4", "UVEC2", "UVEC3", "UVEC4",
  "VEC2", "VEC3", "VEC4", "CENTROID", "IN_TOK", "OUT_TOK", "INOUT_TOK",
  "BUFFER", "UNIFORM", "VARYING", "SAMPLE", "NOPERSPECTIVE", "FLAT",
  "SMOOTH", "MAT2X2", "MAT2X3", "MAT2X4", "MAT3X2", "MAT3X3", "MAT3X4",
  "MAT4X2", "MAT4X3", "MAT4X4", "SAMPLER1D", "SAMPLER2D", "SAMPLER3D",
  "SAMPLERCUBE", "SAMPLER1DSHADOW", "SAMPLER2DSHADOW", "SAMPLERCUBESHADOW",
  "SAMPLER1DARRAY", "SAMPLER2DARRAY", "SAMPLER1DARRAYSHADOW",
  "SAMPLER2DARRAYSHADOW", "SAMPLERCUBEARRAY", "SAMPLERCUBEARRAYSHADOW",
  "ISAMPLER1D", "ISAMPLER2D", "ISAMPLER3D", "ISAMPLERCUBE",
  "ISAMPLER1DARRAY", "ISAMPLER2DARRAY", "ISAMPLERCUBEARRAY", "USAMPLER1D",
  "USAMPLER2D", "USAMPLER3D", "USAMPLERCUBE", "USAMPLER1DARRAY",
  "USAMPLER2DARRAY", "USAMPLERCUBEARRAY", "SAMPLER2DRECT",
  "ISAMPLER2DRECT", "USAMPLER2DRECT", "SAMPLER2DRECTSHADOW",
  "SAMPLERBUFFER", "ISAMPLERBUFFER", "USAMPLERBUFFER", "SAMPLER2DMS",
  "ISAMPLER2DMS", "USAMPLER2DMS", "SAMPLER2DMSARRAY", "ISAMPLER2DMSARRAY",
  "USAMPLER2DMSARRAY", "SAMPLEREXTERNALOES", "IMAGE1D", "IMAGE2D",
  "IMAGE3D", "IMAGE2DRECT", "IMAGECUBE", "IMAGEBUFFER", "IMAGE1DARRAY",
  "IMAGE2DARRAY", "IMAGECUBEARRAY", "IMAGE2DMS", "IMAGE2DMSARRAY",
  "IIMAGE1D", "IIMAGE2D", "IIMAGE3D", "IIMAGE2DRECT", "IIMAGECUBE",
  "IIMAGEBUFFER", "IIMAGE1DARRAY", "IIMAGE2DARRAY", "IIMAGECUBEARRAY",
  "IIMAGE2DMS", "IIMAGE2DMSARRAY", "UIMAGE1D", "UIMAGE2D", "UIMAGE3D",
  "UIMAGE2DRECT", "UIMAGECUBE", "UIMAGEBUFFER", "UIMAGE1DARRAY",
  "UIMAGE2DARRAY", "UIMAGECUBEARRAY", "UIMAGE2DMS", "UIMAGE2DMSARRAY",
  "IMAGE1DSHADOW", "IMAGE2DSHADOW", "IMAGE1DARRAYSHADOW",
  "IMAGE2DARRAYSHADOW", "COHERENT", "VOLATILE", "RESTRICT", "READONLY",
  "WRITEONLY", "ATOMIC_UINT", "STRUCT", "VOID_TOK", "WHILE", "IDENTIFIER",
  "TYPE_IDENTIFIER", "NEW_IDENTIFIER", "FLOATCONSTANT", "INTCONSTANT",
  "UINTCONSTANT", "BOOLCONSTANT", "FIELD_SELECTION", "LEFT_OP", "RIGHT_OP",
  "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "XOR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN",
  "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "SUB_ASSIGN", "INVARIANT", "PRECISE", "LOWP", "MEDIUMP",
  "HIGHP", "SUPERP", "PRECISION", "VERSION_TOK", "EXTENSION", "LINE",
  "COLON", "EOL", "INTERFACE", "OUTPUT", "PRAGMA_DEBUG_ON",
  "PRAGMA_DEBUG_OFF", "PRAGMA_OPTIMIZE_ON", "PRAGMA_OPTIMIZE_OFF",
  "PRAGMA_INVARIANT_ALL", "LAYOUT_TOK", "ASM", "CLASS", "UNION", "ENUM",
  "TYPEDEF", "TEMPLATE", "THIS", "PACKED_TOK", "GOTO", "INLINE_TOK",
  "NOINLINE", "PUBLIC_TOK", "STATIC", "EXTERN", "EXTERNAL", "LONG_TOK",
  "SHORT_TOK", "DOUBLE_TOK", "HALF", "FIXED_TOK", "UNSIGNED", "INPUT_TOK",
  "HVEC2", "HVEC3", "HVEC4", "DVEC2", "DVEC3", "DVEC4", "FVEC2", "FVEC3",
  "FVEC4", "SAMPLER3DRECT", "SIZEOF", "CAST", "NAMESPACE", "USING",
  "RESOURCE", "PATCH", "SUBROUTINE", "ERROR_TOK", "COMMON", "PARTITION",
  "ACTIVE", "FILTER", "ROW_MAJOR", "EARLY_FRAGMENT_TESTS", "THEN", "'('",
  "')'", "'['", "']'", "'.'", "','", "'+'", "'-'", "'!'", "'~'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "translation_unit", "$@1",
  "version_statement", "pragma_statement", "extension_statement_list",
  "any_identifier", "extension_statement", "external_declaration_list",
  "variable_identifier", "primary_expression", "postfix_expression",
  "integer_expression", "function_call", "function_call_or_method",
  "function_call_generic", "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "method_call_generic",
  "method_call_header_no_parameters", "method_call_header_with_parameters",
  "method_call_header", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "function_prototype",
  "function_declarator", "function_header_with_parameters",
  "function_header", "parameter_declarator", "parameter_declaration",
  "parameter_qualifier", "parameter_direction_qualifier",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "layout_qualifier", "layout_qualifier_id_list",
  "integer_constant", "layout_qualifier_id",
  "interface_block_layout_qualifier", "interpolation_qualifier",
  "type_qualifier", "auxiliary_storage_qualifier", "storage_qualifier",
  "array_specifier", "type_specifier", "type_specifier_nonarray",
  "basic_type_specifier_nonarray", "precision_qualifier",
  "struct_specifier", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "$@2",
  "statement_no_new_scope", "compound_statement_no_new_scope",
  "statement_list", "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement",
  "switch_body", "case_label", "case_label_list", "case_statement",
  "case_statement_list", "iteration_statement", "for_init_statement",
  "conditionopt", "for_rest_statement", "jump_statement",
  "external_declaration", "function_definition", "interface_block",
  "basic_interface_block", "interface_qualifier", "instance_name_opt",
  "member_list", "member_declaration", "layout_defaults", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,    40,    41,    91,    93,    46,
      44,    43,    45,    33,   126,    42,    47,    37,    60,    62,
      38,    94,   124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF (-412)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-380)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -151,  -107,    33,  -412,   -59,  -412,   -72,  -412,  -412,  -412,
    -412,   -95,   -12,  4872,  -412,  -412,   -69,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,   -19,   -10,  -412,    25,
      27,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -118,  -412,  -412,   268,   268,
    -412,  -412,  -412,    34,     3,    17,    19,    28,    42,   -50,
    -412,  4687,  -412,  -167,   -60,   -28,    31,  -170,  -412,    20,
     318,  5167,  5340,  5167,  5167,  -412,   -14,  -412,  5167,  -412,
    -412,  -412,  -412,  -412,    84,  -412,   -12,  5044,   -30,  -412,
    -412,  -412,  -412,  -412,  -412,  5167,  5167,  -412,  5167,  -412,
    -412,  -412,  5340,  -412,  -412,  -412,  -412,  -412,   -78,  -412,
    -412,  -412,   529,  -412,  -412,    39,    39,  -412,  -412,  -412,
      39,  -412,  5340,    39,    39,   -12,  -412,    -2,     2,  -199,
       7,  -123,  -115,  -114,  -110,  -412,  -412,  -412,  -412,  -412,
    -412,  3654,    10,  -412,    -7,    52,   -12,  1283,  -412,  5044,
       1,  -412,  -412,     5,  -195,  -412,  -412,     9,    12,  2023,
      18,    23,    13,  3210,    26,    35,  -412,  -412,  -412,  -412,
    -412,  4058,  4058,  4058,  -412,  -412,  -412,  -412,  -412,     4,
    -412,    38,  -412,   -92,  -412,  -412,  -412,    30,  -192,  4260,
      40,   226,  4058,   -17,   -26,   -29,  -105,    65,    24,    32,
      29,   121,   120,  -116,  -412,  -412,  -148,  -412,    22,  5187,
      47,  -412,  -412,  -412,  -412,   785,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,   -12,  -412,  -412,  -188,
    2985,  -187,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
      46,  -412,  3856,  5044,  -412,   -14,  -146,  -412,  -412,  -412,
    1522,  -412,    96,  -412,   -78,  -412,  -412,   149,  2520,  4058,
    -412,  -412,  -145,  4058,  3452,  -412,  -412,  -149,  -412,  2023,
    -412,  -412,  4058,    20,  -412,  -412,  4058,    54,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  4058,  -412,  4058,  4058,  4058,  4058,  4058,  4058,  4058,
    4058,  4058,  4058,  4058,  4058,  4058,  4058,  4058,  4058,  4058,
    4058,  4058,  4058,  4058,  -412,  -412,  -412,   -14,  2985,  -162,
    2985,  -412,  -412,  2985,  -412,  -412,    50,   -12,    37,  5044,
      10,   -12,  -412,  -412,  -412,  -412,  -412,  -412,    56,  -412,
    -412,  3452,  -124,  -412,   -62,    53,   -12,    60,  -412,  1041,
      61,    53,  -412,    63,  -412,    75,   -53,  4462,  -412,  -412,
    -412,  -412,  -412,   -17,   -17,   -26,   -26,   -29,   -29,   -29,
     -29,  -105,  -105,    65,    24,    32,    29,   121,   120,  -201,
    -412,    10,  -412,  2985,  -412,  -157,  -412,  -412,  -142,   171,
    -412,  -412,  4058,  -412,    57,    80,  2023,    62,    68,  2278,
    -412,  -412,  -412,  -412,  -412,  4058,    81,  -412,  4058,  -412,
    2760,  -412,  -412,   -14,    69,   -48,  4058,  2278,   306,  -412,
      -6,  -412,  2985,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
      10,  -412,    70,    53,  -412,  2023,  4058,    74,  -412,  -412,
    1768,  2023,    -4,  -412,  -412,  -412,  -155,  -412,  -412,  -412,
    -412,  -412,  2023,  -412
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,     0,     0,    12,     0,     1,     2,    14,    15,    16,
       5,     0,     0,     0,    13,     6,     0,   179,   178,   204,
     201,   202,   203,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   205,   206,   207,   176,   181,   182,   183,   185,
     184,   180,   177,   161,   160,   159,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   229,   230,   232,
     233,   235,   236,   237,   238,   239,   241,   242,   243,   244,
     246,   247,   248,   249,   251,   252,   253,   255,   256,   257,
     258,   260,   228,   245,   254,   234,   240,   250,   259,   261,
     262,   263,   264,   265,   266,   231,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   186,
     187,   188,   189,   190,   300,     0,   200,   199,   162,   163,
     303,   302,   301,     0,     0,     0,     0,     0,     0,     0,
     370,     3,   369,     0,     0,   118,   126,     0,   135,   140,
     167,   166,     0,   164,   165,   147,   195,   197,   168,   198,
      18,   368,   115,   373,     0,   371,     0,     0,     0,   181,
     182,   185,   184,    21,    22,   162,   163,   145,   167,   170,
     146,   169,     0,     7,     8,     9,    10,    11,     0,    20,
      19,   112,     0,   372,   116,   126,   126,   131,   132,   133,
     126,   119,     0,   126,   126,     0,   113,    14,    16,   141,
       0,   181,   182,   185,   184,   172,   374,   171,   148,   173,
     174,     0,   196,   175,     0,     0,     0,     0,   306,     0,
       0,   158,   157,   154,     0,   150,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    24,    25,    27,
      48,     0,     0,     0,    60,    61,    62,    63,   336,   328,
     332,    23,    29,    56,    31,    36,    37,     0,     0,    42,
       0,    64,     0,    68,    71,    74,    79,    82,    84,    86,
      88,    90,    92,    94,    96,   109,     0,   318,     0,   167,
     147,   321,   334,   320,   319,     0,   322,   323,   324,   325,
     326,   120,   127,   128,   124,   125,   134,   129,   130,   136,
       0,   142,   121,   388,   389,   387,   386,   191,    64,   111,
       0,    46,     0,     0,    17,   311,     0,   309,   305,   307,
       0,   114,     0,   149,     0,   364,   363,     0,     0,     0,
     367,   365,     0,     0,     0,    57,    58,     0,   327,     0,
      33,    34,     0,     0,    40,    39,     0,   200,    43,    45,
      99,   100,   102,   101,   104,   105,   106,   107,   108,   103,
      98,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,   333,   335,   122,     0,   137,
       0,   313,   144,     0,   192,   193,     0,     0,     0,   383,
     312,     0,   308,   304,   152,   153,   155,   151,     0,   358,
     357,   360,     0,   366,     0,   341,     0,     0,    28,     0,
       0,    35,    32,     0,    38,     0,     0,    52,    44,    97,
      65,    66,    67,    69,    70,    72,    73,    77,    78,    75,
      76,    80,    81,    83,    85,    87,    89,    91,    93,     0,
     110,   123,   139,     0,   316,     0,   143,   194,     0,   380,
     384,   310,     0,   359,     0,     0,     0,     0,     0,     0,
     329,    30,    55,    50,    49,     0,   200,    53,     0,   138,
       0,   314,   385,   381,     0,     0,   361,     0,   340,   338,
       0,   343,     0,   331,   354,   330,    54,    95,   315,   317,
     382,   375,     0,   362,   356,     0,     0,     0,   344,   348,
       0,   352,     0,   342,   355,   339,     0,   347,   350,   349,
     351,   345,   353,   346
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -412,  -412,  -412,  -412,  -412,  -412,    -1,   173,  -412,  -131,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,   -18,  -412,  -141,  -140,  -240,  -139,
     -67,   -66,   -68,   -65,   -64,   -63,  -412,  -206,  -278,  -412,
    -247,     0,    -3,     6,  -412,  -412,  -412,  -412,   128,   -33,
    -412,  -412,  -412,  -412,  -168,   -11,  -412,  -412,    -5,  -412,
    -412,  -109,  -412,  -412,  -214,   -13,  -412,  -412,   -43,  -412,
     101,  -217,   -75,   -77,  -376,  -412,    15,  -245,  -411,  -412,
    -412,  -160,   192,    36,    16,  -412,  -412,   -82,  -412,  -412,
    -169,  -412,  -138,  -412,  -412,  -412,  -412,  -412,  -412,   245,
    -412,  -412,  -143,  -412,  -412,   -22,  -412,  -412
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    13,     3,   150,     6,   335,    14,   151,   271,
     272,   273,   440,   274,   275,   276,   277,   278,   279,   280,
     444,   445,   446,   447,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   381,
     296,   330,   297,   298,   154,   155,   156,   314,   211,   212,
     213,   315,   157,   158,   159,   188,   244,   426,   245,   246,
     161,   162,   163,   164,   232,   331,   166,   167,   168,   169,
     237,   238,   336,   337,   412,   475,   301,   302,   303,   304,
     359,   514,   515,   305,   306,   307,   509,   437,   308,   511,
     529,   530,   531,   532,   309,   431,   484,   485,   310,   170,
     171,   172,   173,   174,   504,   418,   419,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     165,   368,   160,    11,   347,   321,   352,   187,   190,   236,
     152,    16,   526,   527,   526,   527,   357,   226,  -376,   153,
     339,     7,     8,     9,     1,   329,  -377,  -379,   220,   189,
     191,  -378,   472,     5,   474,   206,     4,   476,   231,   403,
     401,   343,   411,   206,   365,   344,   390,   391,   366,   231,
     332,   225,   227,   498,   229,   230,   320,   360,   361,   233,
     406,     7,     8,     9,   207,   208,   209,   408,   413,   236,
     215,   236,   207,   208,   209,   332,   189,   191,   513,   225,
       7,     8,     9,   500,    15,   403,   216,   438,   448,   201,
     202,   403,   403,   473,   421,   403,   513,   499,   421,   543,
     192,   501,   432,   449,    12,   409,   434,   435,   404,   176,
     422,   433,   486,   214,   502,   441,   403,   241,   388,   389,
      10,   420,  -376,   339,   519,   470,   329,     7,     8,     9,
     411,  -377,   411,   323,   178,   411,   533,   402,   165,   177,
     160,   324,   325,   392,   393,   362,   326,   363,   152,   228,
     457,   458,   459,   460,   242,   469,   226,   153,   219,   217,
       8,   218,   214,   214,   165,   417,  -379,   214,  -378,   497,
     214,   214,   236,   312,   487,   235,   204,   313,   403,   240,
     317,   318,   193,   494,   435,   198,   436,   495,   522,   300,
     225,   299,   403,   471,   406,   411,   194,   243,   195,   316,
     210,   140,   141,   142,   140,   141,   142,   196,   210,   140,
     141,   142,   205,   328,   319,   386,   387,   516,   394,   395,
     517,   197,   411,   231,   165,   234,   165,   239,   383,   384,
     385,   334,   443,   -21,   411,   505,   300,   -22,   299,   424,
     425,   508,   322,   355,   356,   453,   454,   332,   455,   456,
     333,   417,   528,   348,   541,   461,   462,   341,   349,   523,
     342,   353,   358,   436,   382,   345,   364,  -117,   346,   350,
     354,    17,    18,   -47,   396,   369,   399,   400,   201,   536,
     535,   398,   -46,   397,   414,   538,   540,   428,   477,   520,
     -41,   482,   300,   403,   299,   479,   489,   540,   492,   491,
      35,   179,   180,    38,   181,   182,    41,    42,    43,    44,
      45,   493,   503,   506,   328,   407,   507,   -51,   525,   510,
     165,    17,    18,   512,   199,   521,   534,   165,   537,   463,
     465,   464,   416,   311,   466,   300,   467,   299,   468,   427,
     340,   300,   478,   243,   481,   203,   300,   524,   299,   483,
      35,   221,   222,    38,   223,   224,    41,    42,    43,    44,
      45,   539,   442,   429,   430,   450,   451,   452,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   542,   439,   200,   480,   129,   130,
     131,   132,   133,     0,     0,     0,   165,   183,     0,   184,
       0,     0,     0,     0,     0,     0,     0,     0,   300,     0,
       0,     0,     0,     0,     0,     0,   300,     0,   299,     0,
       0,     0,     0,     0,     0,   488,   185,   186,   140,   141,
     142,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   300,     0,   299,   300,     0,   299,     0,
       0,   380,     0,     0,     0,     0,   185,   186,   140,   141,
     142,     0,     0,     0,   300,     0,   299,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
       0,     0,   300,     0,   299,     0,     0,   300,   300,   299,
     299,     0,     0,     0,     0,     0,     0,     0,     0,   300,
       0,   299,    17,    18,    19,    20,    21,    22,   247,   248,
     249,     0,   250,   251,   252,   253,   254,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   255,   183,   137,
     184,   256,   257,   258,   259,   260,     0,     0,   261,   262,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,   139,   140,
     141,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
     264,   265,   266,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   269,   270,    17,    18,
      19,    20,    21,    22,   247,   248,   249,     0,   250,   251,
     252,   253,   254,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   255,   183,   137,   184,   256,   257,   258,
     259,   260,     0,     0,   261,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   140,   141,   142,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     263,     0,     0,     0,     0,     0,   264,   265,   266,   267,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,   269,   405,    17,    18,    19,    20,    21,    22,
     247,   248,   249,     0,   250,   251,   252,   253,   254,     0,
       0,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   135,   136,   255,
     183,   137,   184,   256,   257,   258,   259,   260,     0,     0,
     261,   262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   140,   141,   142,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   263,     0,     0,     0,
       0,     0,   264,   265,   266,   267,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,   268,   269,   490,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   179,   180,    38,   181,
     182,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,     0,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,   186,   140,   141,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   179,   180,    38,   181,   182,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
       0,     0,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   186,   140,   141,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    19,    20,    21,    22,   247,   248,   249,
     423,   250,   251,   252,   253,   254,   526,   527,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   255,   183,   137,   184,
     256,   257,   258,   259,   260,     0,     0,   261,   262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,     0,     0,     0,     0,     0,   264,
     265,   266,   267,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,   269,    17,    18,    19,    20,
      21,    22,   247,   248,   249,     0,   250,   251,   252,   253,
     254,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   255,   183,   137,   184,   256,   257,   258,   259,   260,
       0,     0,   261,   262,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   139,   140,   141,   142,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   263,     0,
       0,     0,     0,     0,   264,   265,   266,   267,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
     269,    17,    18,    19,    20,    21,    22,   247,   248,   249,
       0,   250,   251,   252,   253,   254,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   255,   183,   137,   184,
     256,   257,   258,   259,   260,     0,     0,   261,   262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   139,   140,   141,
     142,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,     0,     0,     0,     0,     0,   264,
     265,   266,   267,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,   268,   202,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   183,
     137,   184,   256,   257,   258,   259,   260,     0,     0,   261,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
     140,   141,   142,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,     0,     0,     0,
       0,   264,   265,   266,   267,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,   268,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,   135,   136,     0,   183,
     137,   184,   256,   257,   258,   259,   260,     0,     0,   261,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,    22,     0,   263,     0,     0,     0,     0,
       0,   264,   265,   266,   267,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   410,   518,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,   135,   136,     0,   183,   137,   184,   256,   257,   258,
     259,   260,     0,     0,   261,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    20,    21,    22,     0,
     263,     0,     0,     0,     0,     0,   264,   265,   266,   267,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   410,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,   135,   136,     0,   183,
     137,   184,   256,   257,   258,   259,   260,     0,     0,   261,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,     0,     0,     0,
       0,   264,   265,   266,   267,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,   351,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   179,   180,    38,   181,   182,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
       0,   183,   137,   184,   256,   257,   258,   259,   260,     0,
       0,   261,   262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   186,   140,   141,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     0,   263,     0,     0,
       0,     0,     0,   264,   265,   266,   267,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
     135,   136,     0,   183,   137,   184,   256,   257,   258,   259,
     260,     0,     0,   261,   262,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,   263,
       0,     0,   327,     0,     0,   264,   265,   266,   267,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,     0,   183,   137,   184,   256,   257,
     258,   259,   260,     0,     0,   261,   262,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,   263,     0,     0,   415,     0,     0,   264,   265,   266,
     267,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   135,   136,     0,   183,   137,   184,
     256,   257,   258,   259,   260,     0,     0,   261,   262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,   263,     0,     0,     0,     0,     0,   264,
     265,   266,   267,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,   135,   367,     0,   183,
     137,   184,   256,   257,   258,   259,   260,     0,     0,   261,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     0,   263,     0,     0,     0,     0,
       0,   264,   265,   266,   267,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,   496,
       0,   183,   137,   184,   256,   257,   258,   259,   260,     0,
       0,   261,   262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,     0,   263,     0,     0,
       0,     0,     0,   264,   265,   266,   267,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,     0,     0,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   139,   140,   141,   142,
       0,   143,     0,    12,     0,     0,     0,     0,     0,   144,
     145,   146,   147,   148,   149,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
       0,     0,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,   140,   141,   142,     0,   143,    17,    18,    19,
      20,    21,    22,     0,   144,   145,   146,   147,   148,   149,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   179,   180,    38,
     181,   182,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      17,    18,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,     0,     0,   137,     0,     0,     0,     0,     0,
      17,    18,     0,     0,     0,     0,     0,     0,     0,    35,
     179,   180,    38,   181,   182,    41,    42,    43,    44,    45,
       0,     0,   185,   186,   140,   141,   142,     0,     0,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,   186,   140,   141,   142,
       0,     0,     0,     0,     0,    19,    20,    21,    22,     0,
       0,     0,     0,     0,   149,   185,   186,   140,   141,   142,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,   135,   136,     0,     0,
     137
};

static const yytype_int16 yycheck[] =
{
      13,   279,    13,     4,   249,   219,   253,   138,   139,   177,
      13,    12,    18,    19,    18,    19,   263,   160,   141,    13,
     237,   139,   140,   141,   175,   231,   141,   141,   159,   138,
     139,   141,   408,     0,   410,     4,   143,   413,   237,   240,
     156,   236,   320,     4,   236,   240,   151,   152,   240,   237,
     237,   160,   161,   254,   163,   164,   255,   149,   150,   168,
     305,   139,   140,   141,    33,    34,    35,   255,   255,   237,
     240,   239,    33,    34,    35,   237,   185,   186,   489,   188,
     139,   140,   141,   240,   179,   240,   256,   236,   366,   256,
     257,   240,   240,   255,   240,   240,   507,   473,   240,   254,
     143,   258,   349,   381,   176,   319,   353,   354,   256,   178,
     256,   256,   236,   156,   256,   362,   240,   195,   147,   148,
     179,   335,   141,   340,   500,   403,   332,   139,   140,   141,
     408,   141,   410,   256,   135,   413,   512,   253,   151,   257,
     151,   256,   256,   248,   249,   237,   256,   239,   151,   162,
     390,   391,   392,   393,   232,   402,   299,   151,   159,   139,
     140,   141,   205,   206,   177,   333,   141,   210,   141,   447,
     213,   214,   340,   206,   236,   176,   236,   210,   240,   192,
     213,   214,   179,   236,   431,   235,   354,   240,   236,   202,
     299,   202,   240,   407,   439,   473,   179,   198,   179,   212,
     169,   170,   171,   172,   170,   171,   172,   179,   169,   170,
     171,   172,   240,   231,   215,   241,   242,   495,   153,   154,
     498,   179,   500,   237,   237,   141,   239,   257,   245,   246,
     247,   179,   363,   235,   512,   482,   249,   235,   249,   143,
     144,   486,   235,   261,   262,   386,   387,   237,   388,   389,
     257,   419,   258,   235,   258,   394,   395,   256,   235,   506,
     255,   235,   258,   431,   282,   256,   236,   236,   256,   256,
     235,     3,     4,   235,   250,   235,   155,   157,   256,   526,
     525,   252,   235,   251,   238,   530,   531,   138,   238,   503,
     236,   235,   305,   240,   305,   258,   236,   542,   235,   238,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   236,   141,   256,   332,   316,   236,   236,    12,   257,
     333,     3,     4,   255,   151,   256,   256,   340,   254,   396,
     398,   397,   332,   205,   399,   348,   400,   348,   401,   344,
     239,   354,   417,   344,   421,   153,   359,   507,   359,   431,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   530,   363,   348,   348,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   532,   359,   151,   419,   130,   131,
     132,   133,   134,    -1,    -1,    -1,   419,   139,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   439,    -1,   439,    -1,
      -1,    -1,    -1,    -1,    -1,   436,   168,   169,   170,   171,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   486,    -1,   486,   489,    -1,   489,    -1,
      -1,   255,    -1,    -1,    -1,    -1,   168,   169,   170,   171,
     172,    -1,    -1,    -1,   507,    -1,   507,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,   525,    -1,   525,    -1,    -1,   530,   531,   530,
     531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   542,
      -1,   542,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,   169,   170,
     171,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,
     241,   242,   243,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,   257,   258,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   168,   169,   170,   171,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,   257,   258,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,    -1,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
     169,   170,   171,   172,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,    -1,   241,   242,   243,   244,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,   256,   257,   258,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,   169,   170,   171,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   258,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,   169,   170,   171,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     258,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,   169,   170,   171,
     172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,   241,
     242,   243,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   256,   257,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,   169,   170,   171,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,    -1,    -1,   241,   242,   243,   244,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
     257,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,   169,   170,   171,
     172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,   241,
     242,   243,   244,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,   256,   257,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,   169,
     170,   171,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,   241,   242,   243,   244,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,   235,    -1,    -1,    -1,    -1,
      -1,   241,   242,   243,   244,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   257,   258,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
     235,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,   244,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,   241,   242,   243,   244,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,   169,   170,   171,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,   235,    -1,    -1,
      -1,    -1,    -1,   241,   242,   243,   244,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,   235,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,   235,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,   235,    -1,    -1,    -1,    -1,    -1,   241,
     242,   243,   244,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   235,    -1,    -1,    -1,    -1,
      -1,   241,   242,   243,   244,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,   235,    -1,    -1,
      -1,    -1,    -1,   241,   242,   243,   244,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,   169,   170,   171,   172,
      -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,   182,
     183,   184,   185,   186,   187,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,   169,   170,   171,   172,    -1,   174,     3,     4,     5,
       6,     7,     8,    -1,   182,   183,   184,   185,   186,   187,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
       3,     4,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,   168,   169,   170,   171,   172,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,   169,   170,   171,   172,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,   187,   168,   169,   170,   171,   172,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
     140
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   175,   260,   262,   143,     0,   264,   139,   140,   141,
     179,   265,   176,   261,   266,   179,   265,     3,     4,     5,
       6,     7,     8,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   130,
     131,   132,   133,   134,   135,   136,   137,   140,   168,   169,
     170,   171,   172,   174,   182,   183,   184,   185,   186,   187,
     263,   267,   301,   302,   303,   304,   305,   311,   312,   313,
     314,   319,   320,   321,   322,   324,   325,   326,   327,   328,
     358,   359,   360,   361,   362,   366,   178,   257,   265,    33,
      34,    36,    37,   139,   141,   168,   169,   268,   314,   320,
     268,   320,   327,   179,   179,   179,   179,   179,   235,   266,
     358,   256,   257,   341,   236,   240,     4,    33,    34,    35,
     169,   307,   308,   309,   327,   240,   256,   139,   141,   265,
     268,    33,    34,    36,    37,   320,   361,   320,   324,   320,
     320,   237,   323,   320,   141,   265,   313,   329,   330,   257,
     324,   195,   232,   265,   315,   317,   318,     9,    10,    11,
      13,    14,    15,    16,    17,   138,   142,   143,   144,   145,
     146,   149,   150,   235,   241,   242,   243,   244,   256,   257,
     258,   268,   269,   270,   272,   273,   274,   275,   276,   277,
     278,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   299,   301,   302,   314,
     324,   335,   336,   337,   338,   342,   343,   344,   347,   353,
     357,   307,   308,   308,   306,   310,   324,   308,   308,   265,
     255,   323,   235,   256,   256,   256,   256,   238,   283,   296,
     300,   324,   237,   257,   179,   265,   331,   332,   258,   330,
     329,   256,   255,   236,   240,   256,   256,   336,   235,   235,
     256,   256,   299,   235,   235,   283,   283,   299,   258,   339,
     149,   150,   237,   239,   236,   236,   240,   137,   297,   235,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     255,   298,   283,   245,   246,   247,   241,   242,   147,   148,
     151,   152,   248,   249,   153,   154,   250,   251,   252,   155,
     157,   156,   253,   240,   256,   258,   336,   265,   255,   323,
     257,   297,   333,   255,   238,   238,   300,   313,   364,   365,
     323,   240,   256,   258,   143,   144,   316,   317,   138,   335,
     343,   354,   299,   256,   299,   299,   313,   346,   236,   342,
     271,   299,   265,   268,   279,   280,   281,   282,   297,   297,
     283,   283,   283,   285,   285,   286,   286,   287,   287,   287,
     287,   288,   288,   289,   290,   291,   292,   293,   294,   299,
     297,   323,   333,   255,   333,   334,   333,   238,   331,   258,
     364,   332,   235,   346,   355,   356,   236,   236,   265,   236,
     258,   238,   235,   236,   236,   240,   137,   297,   254,   333,
     240,   258,   256,   141,   363,   299,   256,   236,   336,   345,
     257,   348,   255,   337,   340,   341,   297,   297,   258,   333,
     323,   256,   236,   299,   340,    12,    18,    19,   258,   349,
     350,   351,   352,   333,   256,   336,   299,   254,   336,   349,
     336,   258,   351,   254
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   259,   261,   260,   262,   262,   262,   263,   263,   263,
     263,   263,   264,   264,   265,   265,   265,   266,   267,   267,
     267,   268,   268,   269,   269,   269,   269,   269,   269,   270,
     270,   270,   270,   270,   270,   271,   272,   273,   273,   274,
     274,   275,   275,   276,   276,   277,   278,   278,   278,   279,
     279,   280,   280,   281,   281,   282,   283,   283,   283,   283,
     284,   284,   284,   284,   285,   285,   285,   285,   286,   286,
     286,   287,   287,   287,   288,   288,   288,   288,   288,   289,
     289,   289,   290,   290,   291,   291,   292,   292,   293,   293,
     294,   294,   295,   295,   296,   296,   297,   297,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   299,
     299,   300,   301,   301,   301,   301,   302,   303,   303,   304,
     304,   305,   306,   306,   307,   307,   308,   308,   308,   308,
     308,   309,   309,   309,   310,   311,   311,   311,   311,   311,
     312,   312,   312,   312,   312,   312,   312,   313,   313,   314,
     315,   315,   316,   316,   317,   317,   317,   318,   318,   319,
     319,   319,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   321,   321,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   323,   323,   323,   323,   324,   324,   325,   325,   325,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   327,   327,   327,   328,   328,   329,   329,   330,   331,
     331,   332,   332,   333,   333,   333,   334,   334,   335,   336,
     336,   337,   337,   337,   337,   337,   337,   338,   339,   338,
     340,   340,   341,   341,   342,   342,   343,   343,   344,   345,
     345,   346,   346,   347,   348,   348,   349,   349,   350,   350,
     351,   351,   352,   352,   353,   353,   353,   354,   354,   355,
     355,   356,   356,   357,   357,   357,   357,   357,   358,   358,
     358,   358,   359,   360,   360,   361,   362,   362,   362,   362,
     363,   363,   363,   364,   364,   365,   366,   366,   366,   366
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     4,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     5,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     1,     3,     2,     2,     1,     1,     1,     3,     2,
       2,     2,     1,     2,     3,     2,     1,     1,     1,     2,
       2,     2,     1,     2,     3,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     2,     4,     1,     2,     1,     1,     2,
       3,     3,     2,     3,     2,     2,     0,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     4,     6,     5,
       1,     2,     3,     5,     4,     2,     2,     1,     2,     4,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     4,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     1,     2,     3,     1,
       3,     1,     2,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     4,
       1,     1,     2,     3,     1,     2,     1,     2,     5,     3,
       1,     1,     4,     5,     2,     3,     3,     2,     1,     2,
       2,     2,     1,     2,     5,     7,     6,     1,     1,     1,
       0,     2,     3,     2,     2,     2,     3,     2,     1,     1,
       1,     1,     2,     1,     2,     7,     1,     1,     1,     1,
       0,     1,     2,     1,     2,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, state, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, state); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (state);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, state);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, struct _mesa_glsl_parse_state *state)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , state);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, state); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct _mesa_glsl_parse_state *state)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (state);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (struct _mesa_glsl_parse_state *state)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 88 "src/glsl/glsl_parser.yy"
{
   yylloc.first_line = 1;
   yylloc.first_column = 1;
   yylloc.last_line = 1;
   yylloc.last_column = 1;
   yylloc.source = 0;
}

#line 3101 "src/glsl/glsl_parser.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, state);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 303 "src/glsl/glsl_parser.yy"
   {
      _mesa_glsl_initialize_types(state);
   }
#line 3302 "src/glsl/glsl_parser.cpp"
    break;

  case 3:
#line 307 "src/glsl/glsl_parser.yy"
   {
      delete state->symbols;
      state->symbols = new(ralloc_parent(state)) glsl_symbol_table;
      _mesa_glsl_initialize_types(state);
   }
#line 3312 "src/glsl/glsl_parser.cpp"
    break;

  case 5:
#line 317 "src/glsl/glsl_parser.yy"
   {
      state->process_version_directive(&(yylsp[-1]), (yyvsp[-1].n), NULL);
      if (state->error) {
         YYERROR;
      }
   }
#line 3323 "src/glsl/glsl_parser.cpp"
    break;

  case 6:
#line 324 "src/glsl/glsl_parser.yy"
   {
      state->process_version_directive(&(yylsp[-2]), (yyvsp[-2].n), (yyvsp[-1].identifier));
      if (state->error) {
         YYERROR;
      }
   }
#line 3334 "src/glsl/glsl_parser.cpp"
    break;

  case 11:
#line 338 "src/glsl/glsl_parser.yy"
   {
      if (!state->is_version(120, 100)) {
         _mesa_glsl_warning(& (yylsp[-1]), state,
                            "pragma `invariant(all)' not supported in %s "
                            "(GLSL ES 1.00 or GLSL 1.20 required)",
                            state->get_version_string());
      } else {
         state->all_invariant = true;
      }
   }
#line 3349 "src/glsl/glsl_parser.cpp"
    break;

  case 17:
#line 363 "src/glsl/glsl_parser.yy"
   {
      if (!_mesa_glsl_process_extension((yyvsp[-3].identifier), & (yylsp[-3]), (yyvsp[-1].identifier), & (yylsp[-1]), state)) {
         YYERROR;
      }
   }
#line 3359 "src/glsl/glsl_parser.cpp"
    break;

  case 18:
#line 372 "src/glsl/glsl_parser.yy"
   {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[0].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[0].node)->link);
   }
#line 3371 "src/glsl/glsl_parser.cpp"
    break;

  case 19:
#line 380 "src/glsl/glsl_parser.yy"
   {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[0].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[0].node)->link);
   }
#line 3383 "src/glsl/glsl_parser.cpp"
    break;

  case 20:
#line 387 "src/glsl/glsl_parser.yy"
                                                   {
      if (!state->allow_extension_directive_midshader) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "#extension directive is not allowed "
                          "in the middle of a shader");
         YYERROR;
      }
   }
#line 3396 "src/glsl/glsl_parser.cpp"
    break;

  case 23:
#line 404 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_identifier, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[0].identifier);
   }
#line 3407 "src/glsl/glsl_parser.cpp"
    break;

  case 24:
#line 411 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_int_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.int_constant = (yyvsp[0].n);
   }
#line 3418 "src/glsl/glsl_parser.cpp"
    break;

  case 25:
#line 418 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_uint_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.uint_constant = (yyvsp[0].n);
   }
#line 3429 "src/glsl/glsl_parser.cpp"
    break;

  case 26:
#line 425 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_float_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.float_constant = (yyvsp[0].real);
   }
#line 3440 "src/glsl/glsl_parser.cpp"
    break;

  case 27:
#line 432 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_bool_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.bool_constant = (yyvsp[0].n);
   }
#line 3451 "src/glsl/glsl_parser.cpp"
    break;

  case 28:
#line 439 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
   }
#line 3459 "src/glsl/glsl_parser.cpp"
    break;

  case 30:
#line 447 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_array_index, (yyvsp[-3].expression), (yyvsp[-1].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-3]), (yylsp[0]));
   }
#line 3469 "src/glsl/glsl_parser.cpp"
    break;

  case 31:
#line 453 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[0].expression);
   }
#line 3477 "src/glsl/glsl_parser.cpp"
    break;

  case 32:
#line 457 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[-2].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[0].identifier);
   }
#line 3488 "src/glsl/glsl_parser.cpp"
    break;

  case 33:
#line 464 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_post_inc, (yyvsp[-1].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3498 "src/glsl/glsl_parser.cpp"
    break;

  case 34:
#line 470 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_post_dec, (yyvsp[-1].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3508 "src/glsl/glsl_parser.cpp"
    break;

  case 38:
#line 488 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[-2].expression), (yyvsp[0].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3518 "src/glsl/glsl_parser.cpp"
    break;

  case 43:
#line 507 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
      (yyval.expression)->set_location((yylsp[-1]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3528 "src/glsl/glsl_parser.cpp"
    break;

  case 44:
#line 513 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
      (yyval.expression)->set_location((yylsp[-2]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3538 "src/glsl/glsl_parser.cpp"
    break;

  case 46:
#line 529 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_function_expression((yyvsp[0].type_specifier));
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3548 "src/glsl/glsl_parser.cpp"
    break;

  case 47:
#line 535 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_expression *callee = new(ctx) ast_expression((yyvsp[0].identifier));
      callee->set_location((yylsp[0]));
      (yyval.expression) = new(ctx) ast_function_expression(callee);
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3560 "src/glsl/glsl_parser.cpp"
    break;

  case 48:
#line 543 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_expression *callee = new(ctx) ast_expression((yyvsp[0].identifier));
      callee->set_location((yylsp[0]));
      (yyval.expression) = new(ctx) ast_function_expression(callee);
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3572 "src/glsl/glsl_parser.cpp"
    break;

  case 53:
#line 564 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
      (yyval.expression)->set_location((yylsp[-1]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3582 "src/glsl/glsl_parser.cpp"
    break;

  case 54:
#line 570 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
      (yyval.expression)->set_location((yylsp[-2]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3592 "src/glsl/glsl_parser.cpp"
    break;

  case 55:
#line 582 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_expression *callee = new(ctx) ast_expression((yyvsp[-1].identifier));
      callee->set_location((yylsp[-1]));
      (yyval.expression) = new(ctx) ast_function_expression(callee);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3604 "src/glsl/glsl_parser.cpp"
    break;

  case 57:
#line 595 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_inc, (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3614 "src/glsl/glsl_parser.cpp"
    break;

  case 58:
#line 601 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_dec, (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3624 "src/glsl/glsl_parser.cpp"
    break;

  case 59:
#line 607 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[-1].n), (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3634 "src/glsl/glsl_parser.cpp"
    break;

  case 60:
#line 616 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_plus; }
#line 3640 "src/glsl/glsl_parser.cpp"
    break;

  case 61:
#line 617 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_neg; }
#line 3646 "src/glsl/glsl_parser.cpp"
    break;

  case 62:
#line 618 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_logic_not; }
#line 3652 "src/glsl/glsl_parser.cpp"
    break;

  case 63:
#line 619 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_bit_not; }
#line 3658 "src/glsl/glsl_parser.cpp"
    break;

  case 65:
#line 625 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mul, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3668 "src/glsl/glsl_parser.cpp"
    break;

  case 66:
#line 631 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_div, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3678 "src/glsl/glsl_parser.cpp"
    break;

  case 67:
#line 637 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mod, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3688 "src/glsl/glsl_parser.cpp"
    break;

  case 69:
#line 647 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_add, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3698 "src/glsl/glsl_parser.cpp"
    break;

  case 70:
#line 653 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_sub, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3708 "src/glsl/glsl_parser.cpp"
    break;

  case 72:
#line 663 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lshift, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3718 "src/glsl/glsl_parser.cpp"
    break;

  case 73:
#line 669 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_rshift, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3728 "src/glsl/glsl_parser.cpp"
    break;

  case 75:
#line 679 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_less, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3738 "src/glsl/glsl_parser.cpp"
    break;

  case 76:
#line 685 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_greater, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3748 "src/glsl/glsl_parser.cpp"
    break;

  case 77:
#line 691 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3758 "src/glsl/glsl_parser.cpp"
    break;

  case 78:
#line 697 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_gequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3768 "src/glsl/glsl_parser.cpp"
    break;

  case 80:
#line 707 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_equal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3778 "src/glsl/glsl_parser.cpp"
    break;

  case 81:
#line 713 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_nequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3788 "src/glsl/glsl_parser.cpp"
    break;

  case 83:
#line 723 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_and, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3798 "src/glsl/glsl_parser.cpp"
    break;

  case 85:
#line 733 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_xor, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3808 "src/glsl/glsl_parser.cpp"
    break;

  case 87:
#line 743 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_or, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3818 "src/glsl/glsl_parser.cpp"
    break;

  case 89:
#line 753 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_and, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3828 "src/glsl/glsl_parser.cpp"
    break;

  case 91:
#line 763 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_xor, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3838 "src/glsl/glsl_parser.cpp"
    break;

  case 93:
#line 773 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_or, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3848 "src/glsl/glsl_parser.cpp"
    break;

  case 95:
#line 783 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_conditional, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 3858 "src/glsl/glsl_parser.cpp"
    break;

  case 97:
#line 793 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[-1].n), (yyvsp[-2].expression), (yyvsp[0].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3868 "src/glsl/glsl_parser.cpp"
    break;

  case 98:
#line 801 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_assign; }
#line 3874 "src/glsl/glsl_parser.cpp"
    break;

  case 99:
#line 802 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_mul_assign; }
#line 3880 "src/glsl/glsl_parser.cpp"
    break;

  case 100:
#line 803 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_div_assign; }
#line 3886 "src/glsl/glsl_parser.cpp"
    break;

  case 101:
#line 804 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_mod_assign; }
#line 3892 "src/glsl/glsl_parser.cpp"
    break;

  case 102:
#line 805 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_add_assign; }
#line 3898 "src/glsl/glsl_parser.cpp"
    break;

  case 103:
#line 806 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_sub_assign; }
#line 3904 "src/glsl/glsl_parser.cpp"
    break;

  case 104:
#line 807 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_ls_assign; }
#line 3910 "src/glsl/glsl_parser.cpp"
    break;

  case 105:
#line 808 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_rs_assign; }
#line 3916 "src/glsl/glsl_parser.cpp"
    break;

  case 106:
#line 809 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_and_assign; }
#line 3922 "src/glsl/glsl_parser.cpp"
    break;

  case 107:
#line 810 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_xor_assign; }
#line 3928 "src/glsl/glsl_parser.cpp"
    break;

  case 108:
#line 811 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_or_assign; }
#line 3934 "src/glsl/glsl_parser.cpp"
    break;

  case 109:
#line 816 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[0].expression);
   }
#line 3942 "src/glsl/glsl_parser.cpp"
    break;

  case 110:
#line 820 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      if ((yyvsp[-2].expression)->oper != ast_sequence) {
         (yyval.expression) = new(ctx) ast_expression(ast_sequence, NULL, NULL, NULL);
         (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
         (yyval.expression)->expressions.push_tail(& (yyvsp[-2].expression)->link);
      } else {
         (yyval.expression) = (yyvsp[-2].expression);
      }

      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3959 "src/glsl/glsl_parser.cpp"
    break;

  case 112:
#line 840 "src/glsl/glsl_parser.yy"
   {
      state->symbols->pop_scope();
      (yyval.node) = (yyvsp[-1].function);
   }
#line 3968 "src/glsl/glsl_parser.cpp"
    break;

  case 113:
#line 845 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[-1].declarator_list);
   }
#line 3976 "src/glsl/glsl_parser.cpp"
    break;

  case 114:
#line 849 "src/glsl/glsl_parser.yy"
   {
      (yyvsp[-1].type_specifier)->default_precision = (yyvsp[-2].n);
      (yyval.node) = (yyvsp[-1].type_specifier);
   }
#line 3985 "src/glsl/glsl_parser.cpp"
    break;

  case 115:
#line 854 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[0].node);
   }
#line 3993 "src/glsl/glsl_parser.cpp"
    break;

  case 119:
#line 870 "src/glsl/glsl_parser.yy"
   {
      (yyval.function) = (yyvsp[-1].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[0].parameter_declarator)->link);
   }
#line 4002 "src/glsl/glsl_parser.cpp"
    break;

  case 120:
#line 875 "src/glsl/glsl_parser.yy"
   {
      (yyval.function) = (yyvsp[-2].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[0].parameter_declarator)->link);
   }
#line 4011 "src/glsl/glsl_parser.cpp"
    break;

  case 121:
#line 883 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.function) = new(ctx) ast_function();
      (yyval.function)->set_location((yylsp[-1]));
      (yyval.function)->return_type = (yyvsp[-2].fully_specified_type);
      (yyval.function)->identifier = (yyvsp[-1].identifier);

      state->symbols->add_function(new(state) ir_function((yyvsp[-1].identifier)));
      state->symbols->push_scope();
   }
#line 4026 "src/glsl/glsl_parser.cpp"
    break;

  case 122:
#line 897 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[-1]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[-1].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[0].identifier);
   }
#line 4040 "src/glsl/glsl_parser.cpp"
    break;

  case 123:
#line 907 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[-2]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[-2].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[-1].identifier);
      (yyval.parameter_declarator)->array_specifier = (yyvsp[0].array_specifier);
   }
#line 4055 "src/glsl/glsl_parser.cpp"
    break;

  case 124:
#line 921 "src/glsl/glsl_parser.yy"
   {
      (yyval.parameter_declarator) = (yyvsp[0].parameter_declarator);
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[-1].type_qualifier);
   }
#line 4064 "src/glsl/glsl_parser.cpp"
    break;

  case 125:
#line 926 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location((yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[-1].type_qualifier);
      (yyval.parameter_declarator)->type->specifier = (yyvsp[0].type_specifier);
   }
#line 4078 "src/glsl/glsl_parser.cpp"
    break;

  case 126:
#line 939 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
   }
#line 4087 "src/glsl/glsl_parser.cpp"
    break;

  case 127:
#line 944 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate const qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.constant = 1;
   }
#line 4099 "src/glsl/glsl_parser.cpp"
    break;

  case 128:
#line 952 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precise qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4111 "src/glsl/glsl_parser.cpp"
    break;

  case 129:
#line 960 "src/glsl/glsl_parser.yy"
   {
      if (((yyvsp[-1].type_qualifier).flags.q.in || (yyvsp[-1].type_qualifier).flags.q.out) && ((yyvsp[0].type_qualifier).flags.q.in || (yyvsp[0].type_qualifier).flags.q.out))
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate in/out/inout qualifier");

      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[-1]), state, "in/out/inout must come after const "
                                      "or precise");

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4127 "src/glsl/glsl_parser.cpp"
    break;

  case 130:
#line 972 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precision qualifier");

      if (!state->has_420pack_or_es31() && (yyvsp[0].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[-1]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[-1].n);
   }
#line 4142 "src/glsl/glsl_parser.cpp"
    break;

  case 131:
#line 985 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 4152 "src/glsl/glsl_parser.cpp"
    break;

  case 132:
#line 991 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 4162 "src/glsl/glsl_parser.cpp"
    break;

  case 133:
#line 997 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 4173 "src/glsl/glsl_parser.cpp"
    break;

  case 136:
#line 1013 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = (yyvsp[-2].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[0].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4187 "src/glsl/glsl_parser.cpp"
    break;

  case 137:
#line 1023 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      decl->set_location_range((yylsp[-1]), (yylsp[0]));

      (yyval.declarator_list) = (yyvsp[-3].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-1].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4201 "src/glsl/glsl_parser.cpp"
    break;

  case 138:
#line 1033 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-3].identifier), (yyvsp[-2].array_specifier), (yyvsp[0].expression));
      decl->set_location_range((yylsp[-3]), (yylsp[-2]));

      (yyval.declarator_list) = (yyvsp[-5].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-3].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4215 "src/glsl/glsl_parser.cpp"
    break;

  case 139:
#line 1043 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      decl->set_location((yylsp[-2]));

      (yyval.declarator_list) = (yyvsp[-4].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-2].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4229 "src/glsl/glsl_parser.cpp"
    break;

  case 140:
#line 1057 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      /* Empty declaration list is valid. */
      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[0].fully_specified_type));
      (yyval.declarator_list)->set_location((yylsp[0]));
   }
#line 4240 "src/glsl/glsl_parser.cpp"
    break;

  case 141:
#line 1064 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-1].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4254 "src/glsl/glsl_parser.cpp"
    break;

  case 142:
#line 1074 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      decl->set_location_range((yylsp[-1]), (yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-2].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4268 "src/glsl/glsl_parser.cpp"
    break;

  case 143:
#line 1084 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-3].identifier), (yyvsp[-2].array_specifier), (yyvsp[0].expression));
      decl->set_location_range((yylsp[-3]), (yylsp[-2]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-4].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-4]), (yylsp[-2]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4282 "src/glsl/glsl_parser.cpp"
    break;

  case 144:
#line 1094 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      decl->set_location((yylsp[-2]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-3].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-3]), (yylsp[-2]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4296 "src/glsl/glsl_parser.cpp"
    break;

  case 145:
#line 1104 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->invariant = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4312 "src/glsl/glsl_parser.cpp"
    break;

  case 146:
#line 1116 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->precise = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4328 "src/glsl/glsl_parser.cpp"
    break;

  case 147:
#line 1131 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location((yylsp[0]));
      (yyval.fully_specified_type)->specifier = (yyvsp[0].type_specifier);
   }
#line 4339 "src/glsl/glsl_parser.cpp"
    break;

  case 148:
#line 1138 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.fully_specified_type)->qualifier = (yyvsp[-1].type_qualifier);
      (yyval.fully_specified_type)->specifier = (yyvsp[0].type_specifier);
   }
#line 4351 "src/glsl/glsl_parser.cpp"
    break;

  case 149:
#line 1149 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
   }
#line 4359 "src/glsl/glsl_parser.cpp"
    break;

  case 151:
#line 1157 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-2].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[0]), state, (yyvsp[0].type_qualifier))) {
         YYERROR;
      }
   }
#line 4370 "src/glsl/glsl_parser.cpp"
    break;

  case 152:
#line 1166 "src/glsl/glsl_parser.yy"
               { (yyval.n) = (yyvsp[0].n); }
#line 4376 "src/glsl/glsl_parser.cpp"
    break;

  case 153:
#line 1167 "src/glsl/glsl_parser.yy"
                  { (yyval.n) = (yyvsp[0].n); }
#line 4382 "src/glsl/glsl_parser.cpp"
    break;

  case 154:
#line 1172 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;

      /* Layout qualifiers for ARB_fragment_coord_conventions. */
      if (!(yyval.type_qualifier).flags.i && (state->ARB_fragment_coord_conventions_enable ||
                          state->is_version(150, 0))) {
         if (match_layout_qualifier((yyvsp[0].identifier), "origin_upper_left", state) == 0) {
            (yyval.type_qualifier).flags.q.origin_upper_left = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "pixel_center_integer",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.pixel_center_integer = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_fragment_coord_conventions_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_ARB_fragment_coord_conventions layout "
                               "identifier `%s' used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for AMD/ARB_conservative_depth. */
      if (!(yyval.type_qualifier).flags.i &&
          (state->AMD_conservative_depth_enable ||
           state->ARB_conservative_depth_enable)) {
         if (match_layout_qualifier((yyvsp[0].identifier), "depth_any", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_any = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_greater", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_greater = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_less", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_less = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_unchanged",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.depth_unchanged = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->AMD_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_AMD_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
         if ((yyval.type_qualifier).flags.i && state->ARB_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_ARB_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
      }

      /* See also interface_block_layout_qualifier. */
      if (!(yyval.type_qualifier).flags.i && state->has_uniform_buffer_objects()) {
         if (match_layout_qualifier((yyvsp[0].identifier), "std140", state) == 0) {
            (yyval.type_qualifier).flags.q.std140 = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "shared", state) == 0) {
            (yyval.type_qualifier).flags.q.shared = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "std430", state) == 0) {
            (yyval.type_qualifier).flags.q.std430 = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "column_major", state) == 0) {
            (yyval.type_qualifier).flags.q.column_major = 1;
         /* "row_major" is a reserved word in GLSL 1.30+. Its token is parsed
          * below in the interface_block_layout_qualifier rule.
          *
          * It is not a reserved word in GLSL ES 3.00, so it's handled here as
          * an identifier.
          *
          * Also, this takes care of alternate capitalizations of
          * "row_major" (which is necessary because layout qualifiers
          * are case-insensitive in desktop GLSL).
          */
         } else if (match_layout_qualifier((yyvsp[0].identifier), "row_major", state) == 0) {
            (yyval.type_qualifier).flags.q.row_major = 1;
         /* "packed" is a reserved word in GLSL, and its token is
          * parsed below in the interface_block_layout_qualifier rule.
          * However, we must take care of alternate capitalizations of
          * "packed", because layout qualifiers are case-insensitive
          * in desktop GLSL.
          */
         } else if (match_layout_qualifier((yyvsp[0].identifier), "packed", state) == 0) {
           (yyval.type_qualifier).flags.q.packed = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "early_fragment_tests", state) == 0) {
           (yyval.type_qualifier).flags.q.early_fragment_tests = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_uniform_buffer_object_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "#version 140 / GL_ARB_uniform_buffer_object "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for GLSL 1.50 geometry shaders. */
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            GLenum e;
         } map[] = {
                 { "points", GL_POINTS },
                 { "lines", GL_LINES },
                 { "lines_adjacency", GL_LINES_ADJACENCY },
                 { "line_strip", GL_LINE_STRIP },
                 { "triangles", GL_TRIANGLES },
                 { "triangles_adjacency", GL_TRIANGLES_ADJACENCY },
                 { "triangle_strip", GL_TRIANGLE_STRIP },
         };
         for (unsigned i = 0; i < Elements(map); i++) {
            if (match_layout_qualifier((yyvsp[0].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.prim_type = 1;
               (yyval.type_qualifier).prim_type = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->is_version(150, 0)) {
            _mesa_glsl_error(& (yylsp[0]), state, "#version 150 layout "
                             "qualifier `%s' used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for ARB_shader_image_load_store. */
      if (state->ARB_shader_image_load_store_enable ||
          state->is_version(420, 0)) {
         if (!(yyval.type_qualifier).flags.i) {
            static const struct {
               const char *name;
               GLenum format;
               glsl_base_type base_type;
            } map[] = {
               { "rgba32f", GL_RGBA32F, GLSL_TYPE_FLOAT },
               { "rgba16f", GL_RGBA16F, GLSL_TYPE_FLOAT },
               { "rg32f", GL_RG32F, GLSL_TYPE_FLOAT },
               { "rg16f", GL_RG16F, GLSL_TYPE_FLOAT },
               { "r11f_g11f_b10f", GL_R11F_G11F_B10F, GLSL_TYPE_FLOAT },
               { "r32f", GL_R32F, GLSL_TYPE_FLOAT },
               { "r16f", GL_R16F, GLSL_TYPE_FLOAT },
               { "rgba32ui", GL_RGBA32UI, GLSL_TYPE_UINT },
               { "rgba16ui", GL_RGBA16UI, GLSL_TYPE_UINT },
               { "rgb10_a2ui", GL_RGB10_A2UI, GLSL_TYPE_UINT },
               { "rgba8ui", GL_RGBA8UI, GLSL_TYPE_UINT },
               { "rg32ui", GL_RG32UI, GLSL_TYPE_UINT },
               { "rg16ui", GL_RG16UI, GLSL_TYPE_UINT },
               { "rg8ui", GL_RG8UI, GLSL_TYPE_UINT },
               { "r32ui", GL_R32UI, GLSL_TYPE_UINT },
               { "r16ui", GL_R16UI, GLSL_TYPE_UINT },
               { "r8ui", GL_R8UI, GLSL_TYPE_UINT },
               { "rgba32i", GL_RGBA32I, GLSL_TYPE_INT },
               { "rgba16i", GL_RGBA16I, GLSL_TYPE_INT },
               { "rgba8i", GL_RGBA8I, GLSL_TYPE_INT },
               { "rg32i", GL_RG32I, GLSL_TYPE_INT },
               { "rg16i", GL_RG16I, GLSL_TYPE_INT },
               { "rg8i", GL_RG8I, GLSL_TYPE_INT },
               { "r32i", GL_R32I, GLSL_TYPE_INT },
               { "r16i", GL_R16I, GLSL_TYPE_INT },
               { "r8i", GL_R8I, GLSL_TYPE_INT },
               { "rgba16", GL_RGBA16, GLSL_TYPE_FLOAT },
               { "rgb10_a2", GL_RGB10_A2, GLSL_TYPE_FLOAT },
               { "rgba8", GL_RGBA8, GLSL_TYPE_FLOAT },
               { "rg16", GL_RG16, GLSL_TYPE_FLOAT },
               { "rg8", GL_RG8, GLSL_TYPE_FLOAT },
               { "r16", GL_R16, GLSL_TYPE_FLOAT },
               { "r8", GL_R8, GLSL_TYPE_FLOAT },
               { "rgba16_snorm", GL_RGBA16_SNORM, GLSL_TYPE_FLOAT },
               { "rgba8_snorm", GL_RGBA8_SNORM, GLSL_TYPE_FLOAT },
               { "rg16_snorm", GL_RG16_SNORM, GLSL_TYPE_FLOAT },
               { "rg8_snorm", GL_RG8_SNORM, GLSL_TYPE_FLOAT },
               { "r16_snorm", GL_R16_SNORM, GLSL_TYPE_FLOAT },
               { "r8_snorm", GL_R8_SNORM, GLSL_TYPE_FLOAT }
            };

            for (unsigned i = 0; i < Elements(map); i++) {
               if (match_layout_qualifier((yyvsp[0].identifier), map[i].name, state) == 0) {
                  (yyval.type_qualifier).flags.q.explicit_image_format = 1;
                  (yyval.type_qualifier).image_format = map[i].format;
                  (yyval.type_qualifier).image_base_type = map[i].base_type;
                  break;
               }
            }
         }

         if (!(yyval.type_qualifier).flags.i &&
             match_layout_qualifier((yyvsp[0].identifier), "early_fragment_tests", state) == 0) {
            (yyval.type_qualifier).flags.q.early_fragment_tests = 1;
         }
      }

      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[0]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[0].identifier));
         YYERROR;
      }
   }
#line 4576 "src/glsl/glsl_parser.cpp"
    break;

  case 155:
#line 1362 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;

      if (match_layout_qualifier("location", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_location = 1;

         if ((yyval.type_qualifier).flags.q.attribute == 1 &&
             state->ARB_explicit_attrib_location_warn) {
            _mesa_glsl_warning(& (yylsp[-2]), state,
                               "GL_ARB_explicit_attrib_location layout "
                               "identifier `%s' used", (yyvsp[-2].identifier));
         }

         if ((yyvsp[0].n) >= 0) {
            (yyval.type_qualifier).location = (yyvsp[0].n);
         } else {
             _mesa_glsl_error(& (yylsp[0]), state, "invalid location %d specified", (yyvsp[0].n));
             YYERROR;
         }
      }

      if (match_layout_qualifier("index", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_index = 1;

         if ((yyvsp[0].n) >= 0) {
            (yyval.type_qualifier).index = (yyvsp[0].n);
         } else {
            _mesa_glsl_error(& (yylsp[0]), state, "invalid index %d specified", (yyvsp[0].n));
            YYERROR;
         }
      }

      if ((state->has_420pack_or_es31() ||
           state->ARB_shader_atomic_counters_enable) &&
          match_layout_qualifier("binding", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_binding = 1;
         (yyval.type_qualifier).binding = (yyvsp[0].n);
      }

      if (state->ARB_shader_atomic_counters_enable &&
          match_layout_qualifier("offset", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_offset = 1;
         (yyval.type_qualifier).offset = (yyvsp[0].n);
      }

      if (match_layout_qualifier("max_vertices", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.max_vertices = 1;

         if ((yyvsp[0].n) < 0) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "invalid max_vertices %d specified", (yyvsp[0].n));
            YYERROR;
         } else {
            (yyval.type_qualifier).max_vertices = (yyvsp[0].n);
            if (!state->is_version(150, 0)) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "#version 150 max_vertices qualifier "
                                "specified", (yyvsp[0].n));
            }
         }
      }

      if (state->stage == MESA_SHADER_GEOMETRY) {
         if (match_layout_qualifier("stream", (yyvsp[-2].identifier), state) == 0 &&
             state->check_explicit_attrib_stream_allowed(& (yylsp[0]))) {
            (yyval.type_qualifier).flags.q.stream = 1;

            if ((yyvsp[0].n) < 0) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "invalid stream %d specified", (yyvsp[0].n));
               YYERROR;
            } else {
               (yyval.type_qualifier).flags.q.explicit_stream = 1;
               (yyval.type_qualifier).stream = (yyvsp[0].n);
            }
         }
      }

      static const char * const local_size_qualifiers[3] = {
         "local_size_x",
         "local_size_y",
         "local_size_z",
      };
      for (int i = 0; i < 3; i++) {
         if (match_layout_qualifier(local_size_qualifiers[i], (yyvsp[-2].identifier),
                                    state) == 0) {
            if ((yyvsp[0].n) <= 0) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "invalid %s of %d specified",
                                local_size_qualifiers[i], (yyvsp[0].n));
               YYERROR;
            } else if (!state->is_version(430, 0) &&
                       !state->ARB_compute_shader_enable) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "%s qualifier requires GLSL 4.30 or "
                                "ARB_compute_shader",
                                local_size_qualifiers[i]);
               YYERROR;
            } else {
               (yyval.type_qualifier).flags.q.local_size |= (1 << i);
               (yyval.type_qualifier).local_size[i] = (yyvsp[0].n);
            }
            break;
         }
      }

      if (match_layout_qualifier("invocations", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.invocations = 1;

         if ((yyvsp[0].n) <= 0) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "invalid invocations %d specified", (yyvsp[0].n));
            YYERROR;
         } else if ((yyvsp[0].n) > MAX_GEOMETRY_SHADER_INVOCATIONS) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "invocations (%d) exceeds "
                             "GL_MAX_GEOMETRY_SHADER_INVOCATIONS", (yyvsp[0].n));
            YYERROR;
         } else {
            (yyval.type_qualifier).invocations = (yyvsp[0].n);
            if (!state->is_version(400, 0) &&
                !state->ARB_gpu_shader5_enable) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "GL_ARB_gpu_shader5 invocations "
                                "qualifier specified", (yyvsp[0].n));
            }
         }
      }

      /* If the identifier didn't match any known layout identifiers,
       * emit an error.
       */
      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[-2]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[-2].identifier));
         YYERROR;
      }
   }
#line 4720 "src/glsl/glsl_parser.cpp"
    break;

  case 156:
#line 1502 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      /* Layout qualifiers for ARB_uniform_buffer_object. */
      if ((yyval.type_qualifier).flags.q.uniform && !state->has_uniform_buffer_objects()) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "#version 140 / GL_ARB_uniform_buffer_object "
                          "layout qualifier `%s' is used", (yyvsp[0].type_qualifier));
      } else if ((yyval.type_qualifier).flags.q.uniform && state->ARB_uniform_buffer_object_warn) {
         _mesa_glsl_warning(& (yylsp[0]), state,
                            "#version 140 / GL_ARB_uniform_buffer_object "
                            "layout qualifier `%s' is used", (yyvsp[0].type_qualifier));
      }
   }
#line 4738 "src/glsl/glsl_parser.cpp"
    break;

  case 157:
#line 1528 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.row_major = 1;
   }
#line 4748 "src/glsl/glsl_parser.cpp"
    break;

  case 158:
#line 1534 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.packed = 1;
   }
#line 4758 "src/glsl/glsl_parser.cpp"
    break;

  case 159:
#line 1543 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.smooth = 1;
   }
#line 4768 "src/glsl/glsl_parser.cpp"
    break;

  case 160:
#line 1549 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.flat = 1;
   }
#line 4778 "src/glsl/glsl_parser.cpp"
    break;

  case 161:
#line 1555 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.noperspective = 1;
   }
#line 4788 "src/glsl/glsl_parser.cpp"
    break;

  case 162:
#line 1565 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.invariant = 1;
   }
#line 4798 "src/glsl/glsl_parser.cpp"
    break;

  case 163:
#line 1571 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4807 "src/glsl/glsl_parser.cpp"
    break;

  case 168:
#line 1580 "src/glsl/glsl_parser.yy"
   {
      memset(&(yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).precision = (yyvsp[0].n);
   }
#line 4817 "src/glsl/glsl_parser.cpp"
    break;

  case 169:
#line 1599 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate \"precise\" qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4829 "src/glsl/glsl_parser.cpp"
    break;

  case 170:
#line 1607 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.invariant)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate \"invariant\" qualifier");

      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state,
                          "\"invariant\" must come after \"precise\"");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.invariant = 1;
   }
#line 4845 "src/glsl/glsl_parser.cpp"
    break;

  case 171:
#line 1619 "src/glsl/glsl_parser.yy"
   {
      /* Section 4.3 of the GLSL 1.40 specification states:
       * "...qualified with one of these interpolation qualifiers"
       *
       * GLSL 1.30 claims to allow "one or more", but insists that:
       * "These interpolation qualifiers may only precede the qualifiers in,
       *  centroid in, out, or centroid out in a declaration."
       *
       * ...which means that e.g. smooth can't precede smooth, so there can be
       * only one after all, and the 1.40 text is a clarification, not a change.
       */
      if ((yyvsp[0].type_qualifier).has_interpolation())
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate interpolation qualifier");

      if (!state->ARB_shading_language_420pack_enable &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant)) {
         _mesa_glsl_error(&(yylsp[-1]), state, "interpolation qualifiers must come "
                          "after \"precise\" or \"invariant\"");
      }

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4873 "src/glsl/glsl_parser.cpp"
    break;

  case 172:
#line 1643 "src/glsl/glsl_parser.yy"
   {
      /* In the absence of ARB_shading_language_420pack, layout qualifiers may
       * appear no later than auxiliary storage qualifiers. There is no
       * particularly clear spec language mandating this, but in all examples
       * the layout qualifier precedes the storage qualifier.
       *
       * We allow combinations of layout with interpolation, invariant or
       * precise qualifiers since these are useful in ARB_separate_shader_objects.
       * There is no clear spec guidance on this either.
       */
      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).has_layout())
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate layout(...) qualifiers");

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4894 "src/glsl/glsl_parser.cpp"
    break;

  case 173:
#line 1660 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).has_auxiliary_storage()) {
         _mesa_glsl_error(&(yylsp[-1]), state,
                          "duplicate auxiliary storage qualifier (centroid or sample)");
      }

      if (!state->ARB_shading_language_420pack_enable &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant ||
           (yyvsp[0].type_qualifier).has_interpolation() || (yyvsp[0].type_qualifier).has_layout())) {
         _mesa_glsl_error(&(yylsp[-1]), state, "auxiliary storage qualifiers must come "
                          "just before storage qualifiers");
      }
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4914 "src/glsl/glsl_parser.cpp"
    break;

  case 174:
#line 1676 "src/glsl/glsl_parser.yy"
   {
      /* Section 4.3 of the GLSL 1.20 specification states:
       * "Variable declarations may have a storage qualifier specified..."
       *  1.30 clarifies this to "may have one storage qualifier".
       */
      if ((yyvsp[0].type_qualifier).has_storage())
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate storage qualifier");

      if (!state->ARB_shading_language_420pack_enable &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant || (yyvsp[0].type_qualifier).has_interpolation() ||
           (yyvsp[0].type_qualifier).has_layout() || (yyvsp[0].type_qualifier).has_auxiliary_storage())) {
         _mesa_glsl_error(&(yylsp[-1]), state, "storage qualifiers must come after "
                          "precise, invariant, interpolation, layout and auxiliary "
                          "storage qualifiers");
      }

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4938 "src/glsl/glsl_parser.cpp"
    break;

  case 175:
#line 1696 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precision qualifier");

      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[-1]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[-1].n);
   }
#line 4953 "src/glsl/glsl_parser.cpp"
    break;

  case 176:
#line 1710 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.centroid = 1;
   }
#line 4963 "src/glsl/glsl_parser.cpp"
    break;

  case 177:
#line 1716 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.sample = 1;
   }
#line 4972 "src/glsl/glsl_parser.cpp"
    break;

  case 178:
#line 1724 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.constant = 1;
   }
#line 4982 "src/glsl/glsl_parser.cpp"
    break;

  case 179:
#line 1730 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.attribute = 1;
   }
#line 4992 "src/glsl/glsl_parser.cpp"
    break;

  case 180:
#line 1736 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.varying = 1;
   }
#line 5002 "src/glsl/glsl_parser.cpp"
    break;

  case 181:
#line 1742 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 5012 "src/glsl/glsl_parser.cpp"
    break;

  case 182:
#line 1748 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 5022 "src/glsl/glsl_parser.cpp"
    break;

  case 183:
#line 1754 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;

      if (state->stage == MESA_SHADER_GEOMETRY &&
          state->has_explicit_attrib_stream()) {
         /* Section 4.3.8.2 (Output Layout Qualifiers) of the GLSL 4.00
          * spec says:
          *
          *     "If the block or variable is declared with the stream
          *     identifier, it is associated with the specified stream;
          *     otherwise, it is associated with the current default stream."
          */
          (yyval.type_qualifier).flags.q.stream = 1;
          (yyval.type_qualifier).flags.q.explicit_stream = 0;
          (yyval.type_qualifier).stream = state->out_qualifier->stream;
      }
   }
#line 5047 "src/glsl/glsl_parser.cpp"
    break;

  case 184:
#line 1775 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.uniform = 1;
   }
#line 5057 "src/glsl/glsl_parser.cpp"
    break;

  case 185:
#line 1781 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.buffer = 1;
   }
#line 5066 "src/glsl/glsl_parser.cpp"
    break;

  case 186:
#line 1786 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.coherent = 1;
   }
#line 5075 "src/glsl/glsl_parser.cpp"
    break;

  case 187:
#line 1791 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q._volatile = 1;
   }
#line 5084 "src/glsl/glsl_parser.cpp"
    break;

  case 188:
#line 1796 "src/glsl/glsl_parser.yy"
   {
      STATIC_ASSERT(sizeof((yyval.type_qualifier).flags.q) <= sizeof((yyval.type_qualifier).flags.i));
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.restrict_flag = 1;
   }
#line 5094 "src/glsl/glsl_parser.cpp"
    break;

  case 189:
#line 1802 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.read_only = 1;
   }
#line 5103 "src/glsl/glsl_parser.cpp"
    break;

  case 190:
#line 1807 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.write_only = 1;
   }
#line 5112 "src/glsl/glsl_parser.cpp"
    break;

  case 191:
#line 1815 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[-1]));
      (yyval.array_specifier)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5122 "src/glsl/glsl_parser.cpp"
    break;

  case 192:
#line 1821 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[-2]), (yyvsp[-1].expression));
      (yyval.array_specifier)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5132 "src/glsl/glsl_parser.cpp"
    break;

  case 193:
#line 1827 "src/glsl/glsl_parser.yy"
   {
      (yyval.array_specifier) = (yyvsp[-2].array_specifier);

      if (!state->ARB_arrays_of_arrays_enable) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "GL_ARB_arrays_of_arrays "
                          "required for defining arrays of arrays");
      } else {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "only the outermost array dimension can "
                          "be unsized");
      }
   }
#line 5150 "src/glsl/glsl_parser.cpp"
    break;

  case 194:
#line 1841 "src/glsl/glsl_parser.yy"
   {
      (yyval.array_specifier) = (yyvsp[-3].array_specifier);

      if (!state->ARB_arrays_of_arrays_enable) {
         _mesa_glsl_error(& (yylsp[-3]), state,
                          "GL_ARB_arrays_of_arrays "
                          "required for defining arrays of arrays");
      }

      (yyval.array_specifier)->add_dimension((yyvsp[-1].expression));
   }
#line 5166 "src/glsl/glsl_parser.cpp"
    break;

  case 196:
#line 1857 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_specifier) = (yyvsp[-1].type_specifier);
      (yyval.type_specifier)->array_specifier = (yyvsp[0].array_specifier);
   }
#line 5175 "src/glsl/glsl_parser.cpp"
    break;

  case 197:
#line 1865 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].identifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5185 "src/glsl/glsl_parser.cpp"
    break;

  case 198:
#line 1871 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].struct_specifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5195 "src/glsl/glsl_parser.cpp"
    break;

  case 199:
#line 1877 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].identifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5205 "src/glsl/glsl_parser.cpp"
    break;

  case 200:
#line 1885 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "void"; }
#line 5211 "src/glsl/glsl_parser.cpp"
    break;

  case 201:
#line 1886 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "float"; }
#line 5217 "src/glsl/glsl_parser.cpp"
    break;

  case 202:
#line 1887 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "int"; }
#line 5223 "src/glsl/glsl_parser.cpp"
    break;

  case 203:
#line 1888 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uint"; }
#line 5229 "src/glsl/glsl_parser.cpp"
    break;

  case 204:
#line 1889 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bool"; }
#line 5235 "src/glsl/glsl_parser.cpp"
    break;

  case 205:
#line 1890 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "vec2"; }
#line 5241 "src/glsl/glsl_parser.cpp"
    break;

  case 206:
#line 1891 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "vec3"; }
#line 5247 "src/glsl/glsl_parser.cpp"
    break;

  case 207:
#line 1892 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "vec4"; }
#line 5253 "src/glsl/glsl_parser.cpp"
    break;

  case 208:
#line 1893 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bvec2"; }
#line 5259 "src/glsl/glsl_parser.cpp"
    break;

  case 209:
#line 1894 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bvec3"; }
#line 5265 "src/glsl/glsl_parser.cpp"
    break;

  case 210:
#line 1895 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bvec4"; }
#line 5271 "src/glsl/glsl_parser.cpp"
    break;

  case 211:
#line 1896 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "ivec2"; }
#line 5277 "src/glsl/glsl_parser.cpp"
    break;

  case 212:
#line 1897 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "ivec3"; }
#line 5283 "src/glsl/glsl_parser.cpp"
    break;

  case 213:
#line 1898 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "ivec4"; }
#line 5289 "src/glsl/glsl_parser.cpp"
    break;

  case 214:
#line 1899 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uvec2"; }
#line 5295 "src/glsl/glsl_parser.cpp"
    break;

  case 215:
#line 1900 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uvec3"; }
#line 5301 "src/glsl/glsl_parser.cpp"
    break;

  case 216:
#line 1901 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uvec4"; }
#line 5307 "src/glsl/glsl_parser.cpp"
    break;

  case 217:
#line 1902 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat2"; }
#line 5313 "src/glsl/glsl_parser.cpp"
    break;

  case 218:
#line 1903 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat2x3"; }
#line 5319 "src/glsl/glsl_parser.cpp"
    break;

  case 219:
#line 1904 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat2x4"; }
#line 5325 "src/glsl/glsl_parser.cpp"
    break;

  case 220:
#line 1905 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat3x2"; }
#line 5331 "src/glsl/glsl_parser.cpp"
    break;

  case 221:
#line 1906 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat3"; }
#line 5337 "src/glsl/glsl_parser.cpp"
    break;

  case 222:
#line 1907 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat3x4"; }
#line 5343 "src/glsl/glsl_parser.cpp"
    break;

  case 223:
#line 1908 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat4x2"; }
#line 5349 "src/glsl/glsl_parser.cpp"
    break;

  case 224:
#line 1909 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat4x3"; }
#line 5355 "src/glsl/glsl_parser.cpp"
    break;

  case 225:
#line 1910 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat4"; }
#line 5361 "src/glsl/glsl_parser.cpp"
    break;

  case 226:
#line 1911 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1D"; }
#line 5367 "src/glsl/glsl_parser.cpp"
    break;

  case 227:
#line 1912 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2D"; }
#line 5373 "src/glsl/glsl_parser.cpp"
    break;

  case 228:
#line 1913 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DRect"; }
#line 5379 "src/glsl/glsl_parser.cpp"
    break;

  case 229:
#line 1914 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler3D"; }
#line 5385 "src/glsl/glsl_parser.cpp"
    break;

  case 230:
#line 1915 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCube"; }
#line 5391 "src/glsl/glsl_parser.cpp"
    break;

  case 231:
#line 1916 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerExternalOES"; }
#line 5397 "src/glsl/glsl_parser.cpp"
    break;

  case 232:
#line 1917 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1DShadow"; }
#line 5403 "src/glsl/glsl_parser.cpp"
    break;

  case 233:
#line 1918 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DShadow"; }
#line 5409 "src/glsl/glsl_parser.cpp"
    break;

  case 234:
#line 1919 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DRectShadow"; }
#line 5415 "src/glsl/glsl_parser.cpp"
    break;

  case 235:
#line 1920 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCubeShadow"; }
#line 5421 "src/glsl/glsl_parser.cpp"
    break;

  case 236:
#line 1921 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1DArray"; }
#line 5427 "src/glsl/glsl_parser.cpp"
    break;

  case 237:
#line 1922 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DArray"; }
#line 5433 "src/glsl/glsl_parser.cpp"
    break;

  case 238:
#line 1923 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1DArrayShadow"; }
#line 5439 "src/glsl/glsl_parser.cpp"
    break;

  case 239:
#line 1924 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DArrayShadow"; }
#line 5445 "src/glsl/glsl_parser.cpp"
    break;

  case 240:
#line 1925 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerBuffer"; }
#line 5451 "src/glsl/glsl_parser.cpp"
    break;

  case 241:
#line 1926 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCubeArray"; }
#line 5457 "src/glsl/glsl_parser.cpp"
    break;

  case 242:
#line 1927 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCubeArrayShadow"; }
#line 5463 "src/glsl/glsl_parser.cpp"
    break;

  case 243:
#line 1928 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler1D"; }
#line 5469 "src/glsl/glsl_parser.cpp"
    break;

  case 244:
#line 1929 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2D"; }
#line 5475 "src/glsl/glsl_parser.cpp"
    break;

  case 245:
#line 1930 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DRect"; }
#line 5481 "src/glsl/glsl_parser.cpp"
    break;

  case 246:
#line 1931 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler3D"; }
#line 5487 "src/glsl/glsl_parser.cpp"
    break;

  case 247:
#line 1932 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isamplerCube"; }
#line 5493 "src/glsl/glsl_parser.cpp"
    break;

  case 248:
#line 1933 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler1DArray"; }
#line 5499 "src/glsl/glsl_parser.cpp"
    break;

  case 249:
#line 1934 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DArray"; }
#line 5505 "src/glsl/glsl_parser.cpp"
    break;

  case 250:
#line 1935 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isamplerBuffer"; }
#line 5511 "src/glsl/glsl_parser.cpp"
    break;

  case 251:
#line 1936 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isamplerCubeArray"; }
#line 5517 "src/glsl/glsl_parser.cpp"
    break;

  case 252:
#line 1937 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler1D"; }
#line 5523 "src/glsl/glsl_parser.cpp"
    break;

  case 253:
#line 1938 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2D"; }
#line 5529 "src/glsl/glsl_parser.cpp"
    break;

  case 254:
#line 1939 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DRect"; }
#line 5535 "src/glsl/glsl_parser.cpp"
    break;

  case 255:
#line 1940 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler3D"; }
#line 5541 "src/glsl/glsl_parser.cpp"
    break;

  case 256:
#line 1941 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usamplerCube"; }
#line 5547 "src/glsl/glsl_parser.cpp"
    break;

  case 257:
#line 1942 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler1DArray"; }
#line 5553 "src/glsl/glsl_parser.cpp"
    break;

  case 258:
#line 1943 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DArray"; }
#line 5559 "src/glsl/glsl_parser.cpp"
    break;

  case 259:
#line 1944 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usamplerBuffer"; }
#line 5565 "src/glsl/glsl_parser.cpp"
    break;

  case 260:
#line 1945 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usamplerCubeArray"; }
#line 5571 "src/glsl/glsl_parser.cpp"
    break;

  case 261:
#line 1946 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DMS"; }
#line 5577 "src/glsl/glsl_parser.cpp"
    break;

  case 262:
#line 1947 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DMS"; }
#line 5583 "src/glsl/glsl_parser.cpp"
    break;

  case 263:
#line 1948 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DMS"; }
#line 5589 "src/glsl/glsl_parser.cpp"
    break;

  case 264:
#line 1949 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DMSArray"; }
#line 5595 "src/glsl/glsl_parser.cpp"
    break;

  case 265:
#line 1950 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DMSArray"; }
#line 5601 "src/glsl/glsl_parser.cpp"
    break;

  case 266:
#line 1951 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DMSArray"; }
#line 5607 "src/glsl/glsl_parser.cpp"
    break;

  case 267:
#line 1952 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image1D"; }
#line 5613 "src/glsl/glsl_parser.cpp"
    break;

  case 268:
#line 1953 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2D"; }
#line 5619 "src/glsl/glsl_parser.cpp"
    break;

  case 269:
#line 1954 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image3D"; }
#line 5625 "src/glsl/glsl_parser.cpp"
    break;

  case 270:
#line 1955 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DRect"; }
#line 5631 "src/glsl/glsl_parser.cpp"
    break;

  case 271:
#line 1956 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "imageCube"; }
#line 5637 "src/glsl/glsl_parser.cpp"
    break;

  case 272:
#line 1957 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "imageBuffer"; }
#line 5643 "src/glsl/glsl_parser.cpp"
    break;

  case 273:
#line 1958 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image1DArray"; }
#line 5649 "src/glsl/glsl_parser.cpp"
    break;

  case 274:
#line 1959 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DArray"; }
#line 5655 "src/glsl/glsl_parser.cpp"
    break;

  case 275:
#line 1960 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "imageCubeArray"; }
#line 5661 "src/glsl/glsl_parser.cpp"
    break;

  case 276:
#line 1961 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DMS"; }
#line 5667 "src/glsl/glsl_parser.cpp"
    break;

  case 277:
#line 1962 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DMSArray"; }
#line 5673 "src/glsl/glsl_parser.cpp"
    break;

  case 278:
#line 1963 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage1D"; }
#line 5679 "src/glsl/glsl_parser.cpp"
    break;

  case 279:
#line 1964 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2D"; }
#line 5685 "src/glsl/glsl_parser.cpp"
    break;

  case 280:
#line 1965 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage3D"; }
#line 5691 "src/glsl/glsl_parser.cpp"
    break;

  case 281:
#line 1966 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DRect"; }
#line 5697 "src/glsl/glsl_parser.cpp"
    break;

  case 282:
#line 1967 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimageCube"; }
#line 5703 "src/glsl/glsl_parser.cpp"
    break;

  case 283:
#line 1968 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimageBuffer"; }
#line 5709 "src/glsl/glsl_parser.cpp"
    break;

  case 284:
#line 1969 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage1DArray"; }
#line 5715 "src/glsl/glsl_parser.cpp"
    break;

  case 285:
#line 1970 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DArray"; }
#line 5721 "src/glsl/glsl_parser.cpp"
    break;

  case 286:
#line 1971 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimageCubeArray"; }
#line 5727 "src/glsl/glsl_parser.cpp"
    break;

  case 287:
#line 1972 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DMS"; }
#line 5733 "src/glsl/glsl_parser.cpp"
    break;

  case 288:
#line 1973 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DMSArray"; }
#line 5739 "src/glsl/glsl_parser.cpp"
    break;

  case 289:
#line 1974 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage1D"; }
#line 5745 "src/glsl/glsl_parser.cpp"
    break;

  case 290:
#line 1975 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2D"; }
#line 5751 "src/glsl/glsl_parser.cpp"
    break;

  case 291:
#line 1976 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage3D"; }
#line 5757 "src/glsl/glsl_parser.cpp"
    break;

  case 292:
#line 1977 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DRect"; }
#line 5763 "src/glsl/glsl_parser.cpp"
    break;

  case 293:
#line 1978 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimageCube"; }
#line 5769 "src/glsl/glsl_parser.cpp"
    break;

  case 294:
#line 1979 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimageBuffer"; }
#line 5775 "src/glsl/glsl_parser.cpp"
    break;

  case 295:
#line 1980 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage1DArray"; }
#line 5781 "src/glsl/glsl_parser.cpp"
    break;

  case 296:
#line 1981 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DArray"; }
#line 5787 "src/glsl/glsl_parser.cpp"
    break;

  case 297:
#line 1982 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimageCubeArray"; }
#line 5793 "src/glsl/glsl_parser.cpp"
    break;

  case 298:
#line 1983 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DMS"; }
#line 5799 "src/glsl/glsl_parser.cpp"
    break;

  case 299:
#line 1984 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DMSArray"; }
#line 5805 "src/glsl/glsl_parser.cpp"
    break;

  case 300:
#line 1985 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "atomic_uint"; }
#line 5811 "src/glsl/glsl_parser.cpp"
    break;

  case 301:
#line 1990 "src/glsl/glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_high;
   }
#line 5820 "src/glsl/glsl_parser.cpp"
    break;

  case 302:
#line 1995 "src/glsl/glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_medium;
   }
#line 5829 "src/glsl/glsl_parser.cpp"
    break;

  case 303:
#line 2000 "src/glsl/glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_low;
   }
#line 5838 "src/glsl/glsl_parser.cpp"
    break;

  case 304:
#line 2008 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier((yyvsp[-3].identifier), (yyvsp[-1].declarator_list));
      (yyval.struct_specifier)->set_location_range((yylsp[-3]), (yylsp[0]));
      state->symbols->add_type((yyvsp[-3].identifier), glsl_type::void_type);
   }
#line 5849 "src/glsl/glsl_parser.cpp"
    break;

  case 305:
#line 2015 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier(NULL, (yyvsp[-1].declarator_list));
      (yyval.struct_specifier)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5859 "src/glsl/glsl_parser.cpp"
    break;

  case 306:
#line 2024 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[0].declarator_list);
      (yyvsp[0].declarator_list)->link.self_link();
   }
#line 5868 "src/glsl/glsl_parser.cpp"
    break;

  case 307:
#line 2029 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[-1].declarator_list);
      (yyval.declarator_list)->link.insert_before(& (yyvsp[0].declarator_list)->link);
   }
#line 5877 "src/glsl/glsl_parser.cpp"
    break;

  case 308:
#line 2037 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_fully_specified_type *const type = (yyvsp[-2].fully_specified_type);
      type->set_location((yylsp[-2]));

      if (type->qualifier.flags.i != 0)
         _mesa_glsl_error(&(yylsp[-2]), state,
			  "only precision qualifiers may be applied to "
			  "structure members");

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[-1]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[-1].declaration)->link);
   }
#line 5897 "src/glsl/glsl_parser.cpp"
    break;

  case 309:
#line 2056 "src/glsl/glsl_parser.yy"
   {
      (yyval.declaration) = (yyvsp[0].declaration);
      (yyvsp[0].declaration)->link.self_link();
   }
#line 5906 "src/glsl/glsl_parser.cpp"
    break;

  case 310:
#line 2061 "src/glsl/glsl_parser.yy"
   {
      (yyval.declaration) = (yyvsp[-2].declaration);
      (yyval.declaration)->link.insert_before(& (yyvsp[0].declaration)->link);
   }
#line 5915 "src/glsl/glsl_parser.cpp"
    break;

  case 311:
#line 2069 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      (yyval.declaration)->set_location((yylsp[0]));
   }
#line 5925 "src/glsl/glsl_parser.cpp"
    break;

  case 312:
#line 2075 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      (yyval.declaration)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5935 "src/glsl/glsl_parser.cpp"
    break;

  case 314:
#line 2085 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
   }
#line 5943 "src/glsl/glsl_parser.cpp"
    break;

  case 315:
#line 2089 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
   }
#line 5951 "src/glsl/glsl_parser.cpp"
    break;

  case 316:
#line 2096 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_aggregate_initializer();
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 5962 "src/glsl/glsl_parser.cpp"
    break;

  case 317:
#line 2103 "src/glsl/glsl_parser.yy"
   {
      (yyvsp[-2].expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 5970 "src/glsl/glsl_parser.cpp"
    break;

  case 319:
#line 2115 "src/glsl/glsl_parser.yy"
                             { (yyval.node) = (ast_node *) (yyvsp[0].compound_statement); }
#line 5976 "src/glsl/glsl_parser.cpp"
    break;

  case 327:
#line 2130 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5986 "src/glsl/glsl_parser.cpp"
    break;

  case 328:
#line 2136 "src/glsl/glsl_parser.yy"
   {
      state->symbols->push_scope();
   }
#line 5994 "src/glsl/glsl_parser.cpp"
    break;

  case 329:
#line 2140 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, (yyvsp[-1].node));
      (yyval.compound_statement)->set_location_range((yylsp[-3]), (yylsp[0]));
      state->symbols->pop_scope();
   }
#line 6005 "src/glsl/glsl_parser.cpp"
    break;

  case 330:
#line 2149 "src/glsl/glsl_parser.yy"
                                   { (yyval.node) = (ast_node *) (yyvsp[0].compound_statement); }
#line 6011 "src/glsl/glsl_parser.cpp"
    break;

  case 332:
#line 2155 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6021 "src/glsl/glsl_parser.cpp"
    break;

  case 333:
#line 2161 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, (yyvsp[-1].node));
      (yyval.compound_statement)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 6031 "src/glsl/glsl_parser.cpp"
    break;

  case 334:
#line 2170 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].node) == NULL) {
         _mesa_glsl_error(& (yylsp[0]), state, "<nil> statement");
         assert((yyvsp[0].node) != NULL);
      }

      (yyval.node) = (yyvsp[0].node);
      (yyval.node)->link.self_link();
   }
#line 6045 "src/glsl/glsl_parser.cpp"
    break;

  case 335:
#line 2180 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].node) == NULL) {
         _mesa_glsl_error(& (yylsp[0]), state, "<nil> statement");
         assert((yyvsp[0].node) != NULL);
      }
      (yyval.node) = (yyvsp[-1].node);
      (yyval.node)->link.insert_before(& (yyvsp[0].node)->link);
   }
#line 6058 "src/glsl/glsl_parser.cpp"
    break;

  case 336:
#line 2192 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_expression_statement(NULL);
      (yyval.node)->set_location((yylsp[0]));
   }
#line 6068 "src/glsl/glsl_parser.cpp"
    break;

  case 337:
#line 2198 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_expression_statement((yyvsp[-1].expression));
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6078 "src/glsl/glsl_parser.cpp"
    break;

  case 338:
#line 2207 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = new(state) ast_selection_statement((yyvsp[-2].expression), (yyvsp[0].selection_rest_statement).then_statement,
                                              (yyvsp[0].selection_rest_statement).else_statement);
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 6088 "src/glsl/glsl_parser.cpp"
    break;

  case 339:
#line 2216 "src/glsl/glsl_parser.yy"
   {
      (yyval.selection_rest_statement).then_statement = (yyvsp[-2].node);
      (yyval.selection_rest_statement).else_statement = (yyvsp[0].node);
   }
#line 6097 "src/glsl/glsl_parser.cpp"
    break;

  case 340:
#line 2221 "src/glsl/glsl_parser.yy"
   {
      (yyval.selection_rest_statement).then_statement = (yyvsp[0].node);
      (yyval.selection_rest_statement).else_statement = NULL;
   }
#line 6106 "src/glsl/glsl_parser.cpp"
    break;

  case 341:
#line 2229 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (ast_node *) (yyvsp[0].expression);
   }
#line 6114 "src/glsl/glsl_parser.cpp"
    break;

  case 342:
#line 2233 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      ast_declarator_list *declarator = new(ctx) ast_declarator_list((yyvsp[-3].fully_specified_type));
      decl->set_location_range((yylsp[-2]), (yylsp[0]));
      declarator->set_location((yylsp[-3]));

      declarator->declarations.push_tail(&decl->link);
      (yyval.node) = declarator;
   }
#line 6129 "src/glsl/glsl_parser.cpp"
    break;

  case 343:
#line 2251 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = new(state) ast_switch_statement((yyvsp[-2].expression), (yyvsp[0].switch_body));
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 6138 "src/glsl/glsl_parser.cpp"
    break;

  case 344:
#line 2259 "src/glsl/glsl_parser.yy"
   {
      (yyval.switch_body) = new(state) ast_switch_body(NULL);
      (yyval.switch_body)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6147 "src/glsl/glsl_parser.cpp"
    break;

  case 345:
#line 2264 "src/glsl/glsl_parser.yy"
   {
      (yyval.switch_body) = new(state) ast_switch_body((yyvsp[-1].case_statement_list));
      (yyval.switch_body)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 6156 "src/glsl/glsl_parser.cpp"
    break;

  case 346:
#line 2272 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_label) = new(state) ast_case_label((yyvsp[-1].expression));
      (yyval.case_label)->set_location((yylsp[-1]));
   }
#line 6165 "src/glsl/glsl_parser.cpp"
    break;

  case 347:
#line 2277 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_label) = new(state) ast_case_label(NULL);
      (yyval.case_label)->set_location((yylsp[0]));
   }
#line 6174 "src/glsl/glsl_parser.cpp"
    break;

  case 348:
#line 2285 "src/glsl/glsl_parser.yy"
   {
      ast_case_label_list *labels = new(state) ast_case_label_list();

      labels->labels.push_tail(& (yyvsp[0].case_label)->link);
      (yyval.case_label_list) = labels;
      (yyval.case_label_list)->set_location((yylsp[0]));
   }
#line 6186 "src/glsl/glsl_parser.cpp"
    break;

  case 349:
#line 2293 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_label_list) = (yyvsp[-1].case_label_list);
      (yyval.case_label_list)->labels.push_tail(& (yyvsp[0].case_label)->link);
   }
#line 6195 "src/glsl/glsl_parser.cpp"
    break;

  case 350:
#line 2301 "src/glsl/glsl_parser.yy"
   {
      ast_case_statement *stmts = new(state) ast_case_statement((yyvsp[-1].case_label_list));
      stmts->set_location((yylsp[0]));

      stmts->stmts.push_tail(& (yyvsp[0].node)->link);
      (yyval.case_statement) = stmts;
   }
#line 6207 "src/glsl/glsl_parser.cpp"
    break;

  case 351:
#line 2309 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_statement) = (yyvsp[-1].case_statement);
      (yyval.case_statement)->stmts.push_tail(& (yyvsp[0].node)->link);
   }
#line 6216 "src/glsl/glsl_parser.cpp"
    break;

  case 352:
#line 2317 "src/glsl/glsl_parser.yy"
   {
      ast_case_statement_list *cases= new(state) ast_case_statement_list();
      cases->set_location((yylsp[0]));

      cases->cases.push_tail(& (yyvsp[0].case_statement)->link);
      (yyval.case_statement_list) = cases;
   }
#line 6228 "src/glsl/glsl_parser.cpp"
    break;

  case 353:
#line 2325 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_statement_list) = (yyvsp[-1].case_statement_list);
      (yyval.case_statement_list)->cases.push_tail(& (yyvsp[0].case_statement)->link);
   }
#line 6237 "src/glsl/glsl_parser.cpp"
    break;

  case 354:
#line 2333 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_while,
                                            NULL, (yyvsp[-2].node), NULL, (yyvsp[0].node));
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[-1]));
   }
#line 6248 "src/glsl/glsl_parser.cpp"
    break;

  case 355:
#line 2340 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_do_while,
                                            NULL, (yyvsp[-2].expression), NULL, (yyvsp[-5].node));
      (yyval.node)->set_location_range((yylsp[-6]), (yylsp[-1]));
   }
#line 6259 "src/glsl/glsl_parser.cpp"
    break;

  case 356:
#line 2347 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_for,
                                            (yyvsp[-3].node), (yyvsp[-2].for_rest_statement).cond, (yyvsp[-2].for_rest_statement).rest, (yyvsp[0].node));
      (yyval.node)->set_location_range((yylsp[-5]), (yylsp[0]));
   }
#line 6270 "src/glsl/glsl_parser.cpp"
    break;

  case 360:
#line 2363 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = NULL;
   }
#line 6278 "src/glsl/glsl_parser.cpp"
    break;

  case 361:
#line 2370 "src/glsl/glsl_parser.yy"
   {
      (yyval.for_rest_statement).cond = (yyvsp[-1].node);
      (yyval.for_rest_statement).rest = NULL;
   }
#line 6287 "src/glsl/glsl_parser.cpp"
    break;

  case 362:
#line 2375 "src/glsl/glsl_parser.yy"
   {
      (yyval.for_rest_statement).cond = (yyvsp[-2].node);
      (yyval.for_rest_statement).rest = (yyvsp[0].expression);
   }
#line 6296 "src/glsl/glsl_parser.cpp"
    break;

  case 363:
#line 2384 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_continue, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6306 "src/glsl/glsl_parser.cpp"
    break;

  case 364:
#line 2390 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_break, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6316 "src/glsl/glsl_parser.cpp"
    break;

  case 365:
#line 2396 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6326 "src/glsl/glsl_parser.cpp"
    break;

  case 366:
#line 2402 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, (yyvsp[-1].expression));
      (yyval.node)->set_location_range((yylsp[-2]), (yylsp[-1]));
   }
#line 6336 "src/glsl/glsl_parser.cpp"
    break;

  case 367:
#line 2408 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_discard, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6346 "src/glsl/glsl_parser.cpp"
    break;

  case 368:
#line 2416 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].function_definition); }
#line 6352 "src/glsl/glsl_parser.cpp"
    break;

  case 369:
#line 2417 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].node); }
#line 6358 "src/glsl/glsl_parser.cpp"
    break;

  case 370:
#line 2418 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = NULL; }
#line 6364 "src/glsl/glsl_parser.cpp"
    break;

  case 371:
#line 2419 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].node); }
#line 6370 "src/glsl/glsl_parser.cpp"
    break;

  case 372:
#line 2424 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.function_definition) = new(ctx) ast_function_definition();
      (yyval.function_definition)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.function_definition)->prototype = (yyvsp[-1].function);
      (yyval.function_definition)->body = (yyvsp[0].compound_statement);

      state->symbols->pop_scope();
   }
#line 6384 "src/glsl/glsl_parser.cpp"
    break;

  case 373:
#line 2438 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[0].interface_block);
   }
#line 6392 "src/glsl/glsl_parser.cpp"
    break;

  case 374:
#line 2442 "src/glsl/glsl_parser.yy"
   {
      ast_interface_block *block = (yyvsp[0].interface_block);
      if (!block->layout.merge_qualifier(& (yylsp[-1]), state, (yyvsp[-1].type_qualifier))) {
         YYERROR;
      }

      foreach_list_typed (ast_declarator_list, member, link, &block->declarations) {
         ast_type_qualifier& qualifier = member->type->qualifier;
         if (qualifier.flags.q.stream && qualifier.stream != block->layout.stream) {
               _mesa_glsl_error(& (yylsp[-1]), state,
                             "stream layout qualifier on "
                             "interface block member does not match "
                             "the interface block (%d vs %d)",
                             qualifier.stream, block->layout.stream);
               YYERROR;
         }
      }
      (yyval.node) = block;
   }
#line 6416 "src/glsl/glsl_parser.cpp"
    break;

  case 375:
#line 2465 "src/glsl/glsl_parser.yy"
   {
      ast_interface_block *const block = (yyvsp[-1].interface_block);

      block->block_name = (yyvsp[-5].identifier);
      block->declarations.push_degenerate_list_at_head(& (yyvsp[-3].declarator_list)->link);

      if ((yyvsp[-6].type_qualifier).flags.q.uniform) {
         if (!state->has_uniform_buffer_objects()) {
            _mesa_glsl_error(& (yylsp[-6]), state,
                             "#version 140 / GL_ARB_uniform_buffer_object "
                             "required for defining uniform blocks");
         } else if (state->ARB_uniform_buffer_object_warn) {
            _mesa_glsl_warning(& (yylsp[-6]), state,
                               "#version 140 / GL_ARB_uniform_buffer_object "
                               "required for defining uniform blocks");
         }
      } else if ((yyvsp[-6].type_qualifier).flags.q.buffer) {
         if (state->es_shader && state->language_version < 310) {
             _mesa_glsl_error(& (yylsp[-6]), state,
                              "#version 310 required for using "
                              "interface blocks");
         } else if (!state->es_shader && state->language_version < 150) {
             _mesa_glsl_error(& (yylsp[-6]), state,
                              "#version 150 required for using "
                              "interface blocks");
         }
      } else {
         if (state->es_shader || state->language_version < 150) {
            _mesa_glsl_error(& (yylsp[-6]), state,
                             "#version 150 required for using "
                             "interface blocks");
         }
      }

      /* From the GLSL 1.50.11 spec, section 4.3.7 ("Interface Blocks"):
       * "It is illegal to have an input block in a vertex shader
       *  or an output block in a fragment shader"
       */
      if ((state->stage == MESA_SHADER_VERTEX) && (yyvsp[-6].type_qualifier).flags.q.in) {
         _mesa_glsl_error(& (yylsp[-6]), state,
                          "`in' interface block is not allowed for "
                          "a vertex shader");
      } else if ((state->stage == MESA_SHADER_FRAGMENT) && (yyvsp[-6].type_qualifier).flags.q.out) {
         _mesa_glsl_error(& (yylsp[-6]), state,
                          "`out' interface block is not allowed for "
                          "a fragment shader");
      }

      /* Since block arrays require names, and both features are added in
       * the same language versions, we don't have to explicitly
       * version-check both things.
       */
      if (block->instance_name != NULL) {
         state->check_version(150, 300, & (yylsp[-6]), "interface blocks with "
                               "an instance name are not allowed");
      }

      uint64_t interface_type_mask;
      struct ast_type_qualifier temp_type_qualifier;

      /* Get a bitmask containing only the in/out/uniform flags, allowing us
       * to ignore other irrelevant flags like interpolation qualifiers.
       */
      temp_type_qualifier.flags.i = 0;
      temp_type_qualifier.flags.q.uniform = true;
      temp_type_qualifier.flags.q.in = true;
      temp_type_qualifier.flags.q.out = true;
      interface_type_mask = temp_type_qualifier.flags.i;

      /* Get the block's interface qualifier.  The interface_qualifier
       * production rule guarantees that only one bit will be set (and
       * it will be in/out/uniform).
       */
      uint64_t block_interface_qualifier = (yyvsp[-6].type_qualifier).flags.i;

      block->layout.flags.i |= block_interface_qualifier;

      if (state->stage == MESA_SHADER_GEOMETRY &&
          state->has_explicit_attrib_stream()) {
         /* Assign global layout's stream value. */
         block->layout.flags.q.stream = 1;
         block->layout.flags.q.explicit_stream = 0;
         block->layout.stream = state->out_qualifier->stream;
      }

      foreach_list_typed (ast_declarator_list, member, link, &block->declarations) {
         ast_type_qualifier& qualifier = member->type->qualifier;
         if ((qualifier.flags.i & interface_type_mask) == 0) {
            /* GLSLangSpec.1.50.11, 4.3.7 (Interface Blocks):
             * "If no optional qualifier is used in a member declaration, the
             *  qualifier of the variable is just in, out, or uniform as declared
             *  by interface-qualifier."
             */
            qualifier.flags.i |= block_interface_qualifier;
         } else if ((qualifier.flags.i & interface_type_mask) !=
                    block_interface_qualifier) {
            /* GLSLangSpec.1.50.11, 4.3.7 (Interface Blocks):
             * "If optional qualifiers are used, they can include interpolation
             *  and storage qualifiers and they must declare an input, output,
             *  or uniform variable consistent with the interface qualifier of
             *  the block."
             */
            _mesa_glsl_error(& (yylsp[-6]), state,
                             "uniform/in/out qualifier on "
                             "interface block member does not match "
                             "the interface block");
         }
      }

      (yyval.interface_block) = block;
   }
#line 6532 "src/glsl/glsl_parser.cpp"
    break;

  case 376:
#line 2580 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 6542 "src/glsl/glsl_parser.cpp"
    break;

  case 377:
#line 2586 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 6552 "src/glsl/glsl_parser.cpp"
    break;

  case 378:
#line 2592 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.uniform = 1;
   }
#line 6562 "src/glsl/glsl_parser.cpp"
    break;

  case 379:
#line 2598 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.buffer = 1;
   }
#line 6571 "src/glsl/glsl_parser.cpp"
    break;

  case 380:
#line 2606 "src/glsl/glsl_parser.yy"
   {
      (yyval.interface_block) = new(state) ast_interface_block(*state->default_uniform_qualifier,
                                          NULL, NULL);
   }
#line 6580 "src/glsl/glsl_parser.cpp"
    break;

  case 381:
#line 2611 "src/glsl/glsl_parser.yy"
   {
      (yyval.interface_block) = new(state) ast_interface_block(*state->default_uniform_qualifier,
                                          (yyvsp[0].identifier), NULL);
      (yyval.interface_block)->set_location((yylsp[0]));
   }
#line 6590 "src/glsl/glsl_parser.cpp"
    break;

  case 382:
#line 2617 "src/glsl/glsl_parser.yy"
   {
      (yyval.interface_block) = new(state) ast_interface_block(*state->default_uniform_qualifier,
                                          (yyvsp[-1].identifier), (yyvsp[0].array_specifier));
      (yyval.interface_block)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6600 "src/glsl/glsl_parser.cpp"
    break;

  case 383:
#line 2626 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[0].declarator_list);
      (yyvsp[0].declarator_list)->link.self_link();
   }
#line 6609 "src/glsl/glsl_parser.cpp"
    break;

  case 384:
#line 2631 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[-1].declarator_list);
      (yyvsp[0].declarator_list)->link.insert_before(& (yyval.declarator_list)->link);
   }
#line 6618 "src/glsl/glsl_parser.cpp"
    break;

  case 385:
#line 2639 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_fully_specified_type *type = (yyvsp[-2].fully_specified_type);
      type->set_location((yylsp[-2]));

      if (type->qualifier.flags.q.attribute) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "keyword 'attribute' cannot be used with "
                          "interface block member");
      } else if (type->qualifier.flags.q.varying) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "keyword 'varying' cannot be used with "
                          "interface block member");
      }

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[-1]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[-1].declaration)->link);
   }
#line 6643 "src/glsl/glsl_parser.cpp"
    break;

  case 386:
#line 2663 "src/glsl/glsl_parser.yy"
   {
      if (!state->default_uniform_qualifier->merge_qualifier(& (yylsp[-2]), state, (yyvsp[-2].type_qualifier))) {
         YYERROR;
      }
      (yyval.node) = NULL;
   }
#line 6654 "src/glsl/glsl_parser.cpp"
    break;

  case 387:
#line 2670 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = NULL;
      if (!state->default_shader_storage_qualifier->merge_qualifier(& (yylsp[-2]), state, (yyvsp[-2].type_qualifier))) {
         YYERROR;
      }
   }
#line 6665 "src/glsl/glsl_parser.cpp"
    break;

  case 388:
#line 2678 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = NULL;
      if (!state->in_qualifier->merge_in_qualifier(& (yylsp[-2]), state, (yyvsp[-2].type_qualifier), (yyval.node))) {
         YYERROR;
      }
   }
#line 6676 "src/glsl/glsl_parser.cpp"
    break;

  case 389:
#line 2686 "src/glsl/glsl_parser.yy"
   {
      if (state->stage != MESA_SHADER_GEOMETRY) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "out layout qualifiers only valid in "
                          "geometry shaders");
      } else {
         if ((yyvsp[-2].type_qualifier).flags.q.prim_type) {
            /* Make sure this is a valid output primitive type. */
            switch ((yyvsp[-2].type_qualifier).prim_type) {
            case GL_POINTS:
            case GL_LINE_STRIP:
            case GL_TRIANGLE_STRIP:
               break;
            default:
               _mesa_glsl_error(&(yylsp[-2]), state, "invalid geometry shader output "
                                "primitive type");
               break;
            }
         }
         if (!state->out_qualifier->merge_qualifier(& (yylsp[-2]), state, (yyvsp[-2].type_qualifier)))
            YYERROR;

         /* Allow future assigments of global out's stream id value */
         state->out_qualifier->flags.q.explicit_stream = 0;
      }
      (yyval.node) = NULL;
   }
#line 6708 "src/glsl/glsl_parser.cpp"
    break;


#line 6712 "src/glsl/glsl_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, state, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, state, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, state);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, state, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, state);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, state);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
