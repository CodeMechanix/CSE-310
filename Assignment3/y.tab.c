/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parsea.y" /* yacc.c:339  */

#include "SymbolTable.h"
#define YYSTYPE SymbolInfo*
#include <bits/stdc++.h>

using namespace std;
	
SymbolTable st;
stringstream ss;
int yyparse(void);
int yylex(void);
extern FILE *yyin;
extern int lineCount;
int tempCount = 0, labelCount = 0;
//set<string> datalist;
//set<string>::iterator dlist;
//class mypair{
//public:
//	string s;
//	int v;
//};

FILE *fp, *parseLog;

void yyerror(char *s)
{
	fprintf(stderr,"At Line %d, ERROR-> %s\n",lineCount,s);
	return;
}

bool declareZone = true;
bool inserted = false;
string varDec = "", codes = "";

ofstream icfile;

string getTemp(string type = "w")	//put type = "b" for byte
{
	stringstream ss;
	ss << "temp" << tempCount++;
	varDec+= ss.str()+" d"+type[0]+" 0\n";
	return ss.str();
}

string getLabel()	//put type = "b" for byte
{
	stringstream ss;
	ss << "label" << labelCount++;
	return ss.str();
}


#line 119 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    THEN = 259,
    REAL = 260,
    IF = 261,
    DO = 262,
    VAR = 263,
    NOT = 264,
    WHILE = 265,
    OF = 266,
    END = 267,
    FUNCTION = 268,
    ARRAY = 269,
    BEGINNING = 270,
    PROCEDURE = 271,
    WRITE = 272,
    ELSE = 273,
    INTEGER = 274,
    LETTER = 275,
    DIGIT = 276,
    UNDERSCORE = 277,
    NUM = 278,
    ILL_NUM = 279,
    ID = 280,
    ILL_ID = 281,
    VALID_STRING = 282,
    ILL_STRING = 283,
    INCOMPLETE_STRING = 284,
    VALID_COMMENT = 285,
    ILL_COMMENT = 286,
    INCOMPLETE_COMMENT = 287,
    RELOP = 288,
    ADDOP = 289,
    MULOP = 290,
    ASSIGNOP = 291,
    BRACKET1 = 292,
    BRACKET2 = 293,
    PAREN1 = 294,
    PAREN2 = 295,
    DOTDOT = 296,
    COMMA = 297,
    SEMICOLON = 298,
    COLON = 299,
    DOT = 300,
    UNRECO = 301,
    AND = 302,
    OR = 303,
    IFX = 304
  };
#endif
/* Tokens.  */
#define PROGRAM 258
#define THEN 259
#define REAL 260
#define IF 261
#define DO 262
#define VAR 263
#define NOT 264
#define WHILE 265
#define OF 266
#define END 267
#define FUNCTION 268
#define ARRAY 269
#define BEGINNING 270
#define PROCEDURE 271
#define WRITE 272
#define ELSE 273
#define INTEGER 274
#define LETTER 275
#define DIGIT 276
#define UNDERSCORE 277
#define NUM 278
#define ILL_NUM 279
#define ID 280
#define ILL_ID 281
#define VALID_STRING 282
#define ILL_STRING 283
#define INCOMPLETE_STRING 284
#define VALID_COMMENT 285
#define ILL_COMMENT 286
#define INCOMPLETE_COMMENT 287
#define RELOP 288
#define ADDOP 289
#define MULOP 290
#define ASSIGNOP 291
#define BRACKET1 292
#define BRACKET2 293
#define PAREN1 294
#define PAREN2 295
#define DOTDOT 296
#define COMMA 297
#define SEMICOLON 298
#define COLON 299
#define DOT 300
#define UNRECO 301
#define AND 302
#define OR 303
#define IFX 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 268 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   116

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    91,    99,   112,   119,   126,   132,   137,
     143,   150,   156,   161,   166,   171,   177,   181,   186,   191,
     196,   205,   209,   216,   223,   231,   247,   253,   259,   274,
     291,   309,   321,   327,   332,   338,   343,   349,   355,   362,
     417,   423,   441,   477,   483,   533,   539,   544,   550,   556
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "THEN", "REAL", "IF", "DO",
  "VAR", "NOT", "WHILE", "OF", "END", "FUNCTION", "ARRAY", "BEGINNING",
  "PROCEDURE", "WRITE", "ELSE", "INTEGER", "LETTER", "DIGIT", "UNDERSCORE",
  "NUM", "ILL_NUM", "ID", "ILL_ID", "VALID_STRING", "ILL_STRING",
  "INCOMPLETE_STRING", "VALID_COMMENT", "ILL_COMMENT",
  "INCOMPLETE_COMMENT", "RELOP", "ADDOP", "MULOP", "ASSIGNOP", "BRACKET1",
  "BRACKET2", "PAREN1", "PAREN2", "DOTDOT", "COMMA", "SEMICOLON", "COLON",
  "DOT", "UNRECO", "AND", "OR", "IFX", "$accept", "program",
  "identifier_list", "declarations", "type", "standard_type",
  "subprogram_declarations", "subprogram_declaration", "subprogram_head",
  "arguments", "parameter_list", "compound_statement",
  "optional_statements", "statement_list", "statement", "variable",
  "procedure_statement", "expression_list", "expression",
  "simple_expression", "term", "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -80

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-80)))

#define YYTABLE_NINF -33

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      18,     1,    29,    30,   -80,    43,   -80,    15,    27,    46,
     -80,   -80,    32,    43,    38,   -26,    47,    35,    48,    34,
     -80,   -80,    28,    36,     0,     0,    39,     7,   -80,    67,
      37,   -80,    45,   -80,    36,   -80,     2,   -80,    49,   -80,
      40,   -80,    43,    41,    -3,   -80,    50,    -3,     0,    78,
      33,    52,   -80,    77,    63,     0,     0,   -80,    35,     0,
      51,   -80,    68,   -80,    14,   -29,     8,   -80,     0,    52,
      53,    35,     0,    -3,    -3,    35,    55,    54,    19,   -80,
     -80,   -80,   -80,    56,    28,   -80,    43,    57,    22,   -80,
      72,    62,    52,   -80,   -80,   -80,   -80,   -80,     0,    75,
     -80,    21,   -80,   -80,    35,   -80,    61,    28,   -80,    90,
     -80,     8,   -80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,     0,     0,
       5,     4,    11,     0,     0,     0,     0,    21,     0,     0,
       5,     2,     0,    16,     0,     0,     0,    34,    27,     0,
      22,    23,     0,    26,    16,    12,     0,    10,     0,     9,
       0,     7,     0,     0,     0,    47,    45,     0,     0,     0,
      38,    40,    43,     0,     0,     0,     0,    20,     0,     0,
       0,    13,     0,     6,     0,     0,     0,    49,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      24,    25,    15,     0,     0,    17,     0,     0,     0,    48,
      28,    39,    42,    44,    30,    31,    33,    35,     0,     0,
      18,     0,    14,    46,     0,    37,     0,     0,    29,     0,
      19,     0,     8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,   -10,    82,   -79,   -62,   -80,   -80,   -80,    69,
     -80,    -6,   -80,   -80,   -56,   -80,   -80,    42,   -24,    44,
     -35,   -37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    12,    40,    41,    14,    19,    20,    43,
      65,    28,    29,    30,    31,    32,    33,    78,    79,    50,
      51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      49,    53,    80,    15,    87,   100,    44,    67,    21,    44,
      13,    85,    69,    37,    86,    90,     9,    17,    22,    94,
      45,     1,    46,    45,    70,    46,     3,    39,   110,     4,
      61,    77,    64,    37,    47,    81,    48,    93,    92,    48,
      13,    24,    38,   -32,    55,    25,    56,    39,   108,   112,
      17,    16,    26,    17,    18,     8,     9,     9,    84,    97,
      27,    98,   103,     9,    98,   107,    72,    73,     6,     5,
      10,    11,    23,    34,   105,    42,   101,    35,    54,    57,
      58,    59,    71,    63,    75,    66,    62,    74,    76,    68,
     104,    83,    96,    89,    82,    95,    73,    99,   106,   109,
     102,   111,    36,    60,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,    91
};

static const yytype_int8 yycheck[] =
{
      24,    25,    58,    13,    66,    84,     9,    44,    14,     9,
       8,    40,    47,     5,    43,    71,    42,    15,    44,    75,
      23,     3,    25,    23,    48,    25,    25,    19,   107,     0,
      36,    55,    42,     5,    34,    59,    39,    74,    73,    39,
       8,     6,    14,    36,    37,    10,    39,    19,   104,   111,
      15,    13,    17,    15,    16,    40,    42,    42,    44,    40,
      25,    42,    40,    42,    42,    44,    33,    34,    25,    39,
      43,    25,    25,    25,    98,    39,    86,    43,    39,    12,
      43,    36,     4,    43,     7,    44,    37,    35,    25,    39,
      18,    23,    38,    40,    43,    40,    34,    41,    23,    38,
      43,    11,    20,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    51,    25,     0,    39,    25,    52,    40,    42,
      43,    25,    53,     8,    56,    52,    13,    15,    16,    57,
      58,    61,    44,    25,     6,    10,    17,    25,    61,    62,
      63,    64,    65,    66,    25,    43,    53,     5,    14,    19,
      54,    55,    39,    59,     9,    23,    25,    34,    39,    68,
      69,    70,    71,    68,    39,    37,    39,    12,    43,    36,
      59,    61,    37,    43,    52,    60,    44,    71,    39,    70,
      68,     4,    33,    34,    35,     7,    25,    68,    67,    68,
      64,    68,    43,    23,    44,    40,    43,    55,    67,    40,
      64,    69,    70,    71,    64,    40,    38,    40,    42,    41,
      54,    52,    43,    40,    18,    68,    23,    44,    64,    38,
      54,    11,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    58,    58,    59,    59,    60,    60,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    71,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     1,     3,     0,     6,     1,     8,     1,
       1,     0,     3,     3,     6,     4,     0,     3,     3,     5,
       3,     0,     1,     1,     3,     3,     1,     1,     4,     6,
       4,     4,     1,     4,     1,     4,     1,     3,     1,     3,
       1,     2,     3,     1,     3,     1,     4,     1,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 69 "parsea.y" /* yacc.c:1646  */
    {
            	
            	fprintf ( parseLog, "program → PROGRAM ID '(' identifier_list ')' SEMICOLON declarations subprogram_declarations compound_statement\n");
            	codes = ".MODEL SMALL\n\n.STACK 100H\n";
            	getTemp();
            	getTemp();
            	icfile << codes<< "\n";
            	icfile << varDec;
            	icfile << "\n.CODE\n\nMAIN PROC\nMOV AX,@DATA\nMOV DS,AX\n";
            	
            	icfile << (yyvsp[0])->code << "\n";
            	icfile << "\t\nmain endp\n";
            	icfile << "\n\n;PRINT FUNC\n";
            	icfile << "print proc  \n\tmov bp, sp\n\tmov ax, [bp+2]\n\tcmp ax, 0\n\tje return_print\n\t\n\tmov dx, 0\n\tmov bx, 10\n\tdiv bx\n\t\n\t;recalling\n\tpush dx\n\tpush ax\n\tcall print\n\t\n\t;printing\n\tpop dx\n\tadd dl, '0'\n\tmov ah, 2h\n\tint 21h\n\t\n\treturn_print:\n\t\tret 2\t\nprint endp\n";
//            	icfile << "\nEND MAIN\n";
            }
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 92 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "identifier_list → ID\n");
//            	SymbolInfo *id("temp", "ASM", 0);
           		if ( declareZone )
           			varDec+= (yyvsp[0])->symbol+" dw 0\n";
            }
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "parsea.y" /* yacc.c:1646  */
    {
	            fprintf ( parseLog, "identifier_list → identifier_list COMMA ID\n");
	            if ( declareZone)	{
	            	varDec+= (yyvsp[0])->symbol+" dw 0\n";
	            }
//	            cout << $1->symbol << " " << $3->symbol << "\n";
            }
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "declaration → ε\n");
            	declareZone = true;
            	varDec.clear();
            	varDec = ".data\n";
            }
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 120 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "declarations → declarations VAR identifier_list COLON type SEMICOLON\n");
//            	string pp = $1->code + ", "+$3->code;
//            	cout << $2->symbol << endl;
            }
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 127 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "type → standard_type\n");
           		(yyval) = (yyvsp[0]);
            }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 133 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "type → ARRAY '[' NUM DOTDOT NUM ']' OF standard_type\n");
            }
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 138 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "standard_type → INTEGER\n");
           		(yyval) = (yyvsp[0]);
            }
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "standard_type → REAL\n");
           		(yyval) = (yyvsp[0]);
            }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "subprogram_declarations → ε");
            	declareZone = false;
//            	cout << varDec << endl;
            }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 157 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "subprogram_declarations → subprogram_declarations subprogram_declaration SEMICOLON\n");
            }
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 162 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "subprogram_declaration → subprogram_head declarations compound_statement\n");
            }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 167 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "subprogram_head → FUNCTION ID arguments COLON standard_type SEMICOLON\n");
            }
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 172 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "subprogram_head → PROCEDURE ID arguments SEMICOLON\n");
            }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 177 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "arguments → ε\n");
            }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 182 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "arguments → '(' parameter_list ')'\n");
            }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 187 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "parameter_list → identifier_list COLON type\n");
            }
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 192 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "parameter_list → parameter_list SEMICOLON identifier_list COLON type\n");
            }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 197 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "compound_statement → BEGIN optional_statements END\n");
            	(yyval) = (yyvsp[-1]);
//            	$$->code = "\n"+$2->code;
//            	fprintf ( parseLog, "-----qwpoiiouioert\n%s\n\n------nlkmnvklsjfh\n", $$->code.c_str());
            }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 205 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "optional_statements → ε\n");
            }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "optional_statements → statement_list\n" );
           		(yyval) = (yyvsp[0]);	//dekhte hobe
//           		cout << "statement_list:==>\n"<< $1->code << "\n ENDED"<<endl;
            }
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 217 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "statement_list → statement\n");
            	(yyval) = (yyvsp[0]);
//           		$$->code = $1->code;
            }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 224 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "statement_list → statement_list SEMICOLON statement\n");
            	(yyval)->code+= "\n"+(yyvsp[0])->code;
//            	$$->code+= $1->code+"\n"+$3->code+"\n";
//            	$$->code = $3->code;
            }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 232 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "statement → variable ASSIGNOP expression\n");
            	if ((yyvsp[0])->type=="NUM")	(yyvsp[-2])->value = (yyvsp[0])->value;
            	fprintf ( parseLog, "Assign on line: %d\n", lineCount);
            	
            	SymbolInfo *siTemp = new SymbolInfo("Instr", "ASM");
            	siTemp->code = (yyvsp[0])->code;
            	siTemp->code+= "MOV ax, "+(yyvsp[0])->symbol+"\nmov " + (yyvsp[-2])->symbol + ", ax\n";
//            	ss.clear();
//            	ss << "MOV ax, " << $3->symbol << "\nmov " << $1->symbol << ", ax" << "\n";
//            	siTemp->code = ss.str();
            	(yyval) = siTemp;
            	st.dump(parseLog);
            }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 248 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "statement → procedure_statement\n");
           		(yyval) = (yyvsp[0]);
            }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 254 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "statement → compound_statement\n");
           		(yyval) = (yyvsp[0]);
            }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 260 "parsea.y" /* yacc.c:1646  */
    {
	            fprintf ( parseLog, "statement → IF expression THEN statement\n");
	            string tempLabel = getLabel();
            	SymbolInfo *tmpsi = new SymbolInfo(tempLabel, "ASM_Label");
            	string &tempCode = tmpsi->code;
//            	tempCode = "\n;IF exp THEN stat\n";
            	tempCode+= (yyvsp[-2])->code;//+"\n"+$3->code;
            	tempCode+= "jmp "+tempLabel+"\n";
            	tempCode+= (yyvsp[-2])->labelTrue+":\n";
            	tempCode+= (yyvsp[0])->code;
            	tempCode+= tempLabel+":\n";
            	(yyval) = tmpsi;
            }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 275 "parsea.y" /* yacc.c:1646  */
    {
	            fprintf ( parseLog, "statement → IF expression THEN statement ELSE statement\n");
	            string tempLabel = getLabel();
            	SymbolInfo *tmpsi = new SymbolInfo(tempLabel, "ASM_Label");
            	string &tempCode = tmpsi->code;
//            	tempCode = "\n;IF exp THEN stat\n";
            	tempCode+= (yyvsp[-4])->code;//+"\n"+$3->code;
            	tempCode+= (yyvsp[0])->code;
            	tempCode+= "jmp "+tempLabel+"\n";
            	tempCode+= (yyvsp[-4])->labelTrue+":\n";
            	tempCode+= (yyvsp[-2])->code;
//            	cout << "oiwuoiuwert\n" << $4->code << "\noiuweoruiwe\n";
            	tempCode+= tempLabel+":\n";
            	(yyval) = tmpsi;
            }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 292 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "statement → WHILE expression DO statement\n");
            	string loopLabel = getLabel();
            	string endLoop = getLabel();
            	SymbolInfo *tmpsi = new SymbolInfo(loopLabel, "ASM_Label");
            	string &tempCode = tmpsi->code;
            	
            	tempCode = loopLabel+": \n";
            	tempCode+= (yyvsp[-2])->code+"\n";
            	tempCode+= "jmp "+endLoop+":\n";
            	tempCode+= (yyvsp[-2])->labelTrue+":\n";
            	tempCode+= (yyvsp[0])->code+"\n";
            	tempCode+= "jmp "+loopLabel+"\n";
            	tempCode+= endLoop+":\n";
            	(yyval) = tmpsi;
            }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 310 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "statement → write '(' ID ')'\n");
            	string tempLabel = getLabel();
            	SymbolInfo *tmpsi = new SymbolInfo(tempLabel, "ASM_Label");
            	string &tempCode = tmpsi->code;
            	
            	tempCode = "\n;PRINTING\nPUSH "+ (yyvsp[-1])->symbol +"\n";
            	tempCode+= "CALL PRINT\n";
            	(yyval) = tmpsi;
            }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 322 "parsea.y" /* yacc.c:1646  */
    {
	            fprintf ( parseLog, "variable → ID\n");
           		(yyval) = (yyvsp[0]);
            }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 328 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "variable → ID '[' expression ']'\n");
            }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 333 "parsea.y" /* yacc.c:1646  */
    {
           		fprintf ( parseLog, "procedure_statement → ID\n" );
           		(yyval) = (yyvsp[0]);
            }
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 339 "parsea.y" /* yacc.c:1646  */
    {
           		fprintf ( parseLog, "procedure_statement → ID '(' expression_list ')'\n" );            	
            }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 344 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "expression_list → expression\n");
            	(yyval) = (yyvsp[0]);
            }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 350 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "expression_list → expression_list COMMA expression\n");
            	(yyval)->code+= (yyvsp[-2])->code;
            }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 356 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "expression → simple_expression\n");
            	(yyval) = (yyvsp[0]);
//            	cout << "POIQRET:\n" << $1->code << "\nopioriweutert\n";
            }
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 363 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "expression → simple_expression RELOP simple_expression\n");
            	string tempVal = getLabel();
            	SymbolInfo *tmpsi = new SymbolInfo(tempVal, "ASM");
            	tmpsi->code = (yyvsp[-2])->code+"\n"+(yyvsp[0])->code;
            	string &tempCode = tmpsi->code;
            	
            	tmpsi->labelTrue = getLabel();
            	tmpsi->labelFalse = getLabel();
            	
            	if ( (yyvsp[-1])->symbol == "<" )	{
            		tempCode+= "\n;Less than relation operator\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
	            	tempCode+= "CMP ax, bx\n";
	            	tempCode+= "jl "+tmpsi->labelTrue+"\n";
	            	tempCode+= tmpsi->labelFalse+":\n";
            	}
            	else if ( (yyvsp[-1])->symbol == ">" )	{
            		tempCode+= "\n;Less than relation operator\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
	            	tempCode+= "CMP ax, bx\n";
	            	tempCode+= "jg "+tmpsi->labelTrue+"\n";
	            	tempCode+= tmpsi->labelFalse+":\n";
            	}
            	else if ( (yyvsp[-1])->symbol == ">=" )	{
            		tempCode+= "\n;Less than relation operator\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
	            	tempCode+= "CMP ax, bx\n";
	            	tempCode+= "jge "+tmpsi->labelTrue+"\n";
	            	tempCode+= tmpsi->labelFalse+":\n";
            	}
            	else if ( (yyvsp[-1])->symbol == "<=" )	{
            		tempCode+= "\n;Less than relation operator\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
	            	tempCode+= "CMP ax, bx\n";
	            	tempCode+= "jle "+tmpsi->labelTrue+"\n";
	            	tempCode+= tmpsi->labelFalse+":\n";
            	}
            	else	{
            		tempCode+= "\n;Less than relation operator\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
	            	tempCode+= "CMP ax, bx\n";
	            	tempCode+= "jne "+tmpsi->labelTrue+"\n";
	            	tempCode+= tmpsi->labelFalse+":\n";
            	}
//            	tempCode+= "MOV "+ tempVal+", ax\n\n";
            	(yyval) = tmpsi;
            }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 418 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "simple_expression → term\n");
            	(yyval) = (yyvsp[0]);
            }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 424 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "simple_expression → sign term\n");
            	if ( (yyvsp[-1])->symbol != "+" && (yyvsp[-1])->symbol != "-" )	yyerror(" only '+' or '-' sign can be used here.");
            	string tempVal = getTemp();
            	SymbolInfo *tmpsi = new SymbolInfo(tempVal, "ASM");
            	tmpsi->code = "\n"+ (yyvsp[0])->code;
            	string &tempCode = tmpsi->code;
            	
            	if ( (yyvsp[-1])->symbol == "-")	{
            		tempCode+= "\nmov ax, "+(yyvsp[0])->symbol + "\nneg ax\n";
            		tempCode+= "MOV "+(yyvsp[0])->symbol+", ax\n\n";
            		(yyvsp[0])->value*= -1;
            	}
//            	cout << "mmoiwer\n" << $2->code << "\noiuwroi\n";
            	(yyval) = tmpsi;
            }
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 442 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "simple_expression → simple_expression ADDOP term\n");
            	string tempVal = getTemp();
            	SymbolInfo *tmpsi = new SymbolInfo(tempVal, "ASM");
            	tmpsi->code = (yyvsp[-2])->code+"\n"+(yyvsp[0])->code;
            	string &tempCode = tmpsi->code;
            	
            	
            	if ( (yyvsp[-1])->symbol == "+" )	{
            		tempCode+= "\n;Adding\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
            		tmpsi->value = (yyvsp[-2])->value+(yyvsp[0])->value;
            		tempCode+= "ADD ax, bx\n";
            	}
            	else if ( (yyvsp[-1])->symbol == "-")	{
            		tempCode+= "\n;SUBTRACTING\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
            		tmpsi->value = (yyvsp[-2])->value-(yyvsp[0])->value;
            		tempCode+= "SUB ax, bx\n";
            	}
            	else	{
            		tempCode+= "\n;BITWISE OR\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
            		tmpsi->value = ((int)(yyvsp[-2])->value)|((int)(yyvsp[0])->value);
            		tempCode+= "OR ax, bx\n";
            	}
            	tempCode+= "MOV "+ tempVal+", ax\n\n";
            	(yyval) = tmpsi;
//            	cout << "----ADDDDDDDDING\n" << $$->code << "\n___ADDING ENDED" << endl;
//            	$$->print();
            }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 478 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "term → factor\n");
            	(yyval) = (yyvsp[0]);
            }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 484 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "term → term MULOP factor\n");
            	string tempVal = getTemp();
            	SymbolInfo *tmpsi = new SymbolInfo(tempVal, "ASM");
            	tmpsi->code = (yyvsp[-2])->code+"\n"+(yyvsp[0])->code;
            	string &tempCode = tmpsi->code;
            	
            	
            	if ( (yyvsp[-1])->symbol == "*" )	{
//            		if ( $1->symbol == "(")	{
//            			cout << "oiwueroiuweriot::==>\t\t";
//            			 $1->print();
//            			 cout << endl;
//            		}
            		tempCode+= "\n;MULTIPLYING\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
            		tmpsi->value = (yyvsp[-2])->value * (yyvsp[0])->value;
            		tempCode+= "MUL bx\n";
            		tempCode+= "MOV "+tempVal+", ax\n";
            	}
            	else if ( (yyvsp[-1])->symbol == "/")	{
            		tempCode+= "\n;DIVIDING\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
            		tmpsi->value = (yyvsp[-2])->value / (yyvsp[0])->value;
            		tempCode+= "MOV dx, 0\nDIV bx\n";
            		tempCode+= "MOV "+tempVal+", ax\n";
            	}
            	else if ( (yyvsp[-1])->symbol == "mod")	{
            		tempCode+= "\n;REMINDER\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
            		tmpsi->value = (int)(yyvsp[-2])->value % (int)(yyvsp[0])->value;
            		tempCode+= "MOV dx, 0\nDIV bx\n";
            		tempCode+= "MOV "+tempVal+", dx\n";
            	}
            	else	{
            		tempCode+= "\n;BITWISE AND\n";
		        	tempCode+= "MOV ax, "+(yyvsp[-2])->symbol+"\n";
	            	tempCode+= "MOV bx, "+(yyvsp[0])->symbol+"\n";
            		tmpsi->value = ((int)(yyvsp[-2])->value)&((int)(yyvsp[0])->value);
            		tempCode+= "AND ax, bx\n";
		        	tempCode+= "MOV "+ tempVal+", ax\n";
            	}
            	tempCode+= "\n";
            	(yyval) = tmpsi;
            }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 534 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "factor → ID\n");
            	(yyval) = (yyvsp[0]);
            }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 540 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "factor → ID '(' expression_list ')'\n");
            }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 545 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "factor → NUM\n");
            	(yyval) = (yyvsp[0]);
            }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 551 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "factor → '(' expression ')'\n");
            	(yyval) = (yyvsp[-1]);
            }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 557 "parsea.y" /* yacc.c:1646  */
    {
            	fprintf ( parseLog, "factor → NOT factor\n");
            }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2052 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 564 "parsea.y" /* yacc.c:1906  */

int main(int argc,char *argv[])
{

	if(argc!=2)
	{
		printf("Usage: ./<programname> <input_file>\n");
		printf("Try Again\n");
		exit(1);
	}
	parseLog = fopen("parseLog", "w");
	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		exit(1);
	}
	
	yyin=fp;
	icfile.open("icfile.asm");
	yyparse();
	fclose(fp);
	fclose(parseLog);
	return 0;
}

