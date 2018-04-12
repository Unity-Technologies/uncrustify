Line [Token]             Text
1    [NEWLINE]           
2    [COMMENT]           /* Not detected as a prototype? Spacing wrong. */
2    [NEWLINE]           
3    [QUALIFIER]         static
3    [STRUCT]            struct
3    [TYPE]              my_entry
3    [PTR_TYPE]          *
3    [FUNC_PROTO]        get_first_entry
3    [FPAREN_OPEN]       (
3    [QUALIFIER]         const
3    [TYPE]              CHAR
3    [PTR_TYPE]          *
3    [WORD]              blah
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [QUALIFIER]         static
4    [TYPE]              CFooo
4    [DC_MEMBER]         ::
4    [TYPE]              entry
4    [PTR_TYPE]          *
4    [FUNC_PROTO]        get_next_entry
4    [FPAREN_OPEN]       (
4    [QUALIFIER]         const
4    [TYPE]              CHAR
4    [PTR_TYPE]          *
4    [WORD]              blah
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [QUALIFIER]         static
5    [STRUCT]            struct
5    [TYPE]              my_entry
5    [PTR_TYPE]          *
5    [FUNC_PROTO]        get_next_entry
5    [FPAREN_OPEN]       (
5    [QUALIFIER]         const
5    [TYPE]              CHAR
5    [PTR_TYPE]          *
5    [WORD]              blah
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [COMMENT]           /* Not handling prototype params: */
7    [NEWLINE]           
8    [TYPEDEF]           typedef
8    [TYPE]              void
8    [TPAREN_OPEN]       (
8    [PTR_TYPE]          *
8    [TYPE]              function_name
8    [TPAREN_CLOSE]      )
8    [FPAREN_OPEN]       (
8    [TYPE]              my_t
8    [PTR_TYPE]          *
8    [WORD]              p_my
8    [COMMA]             ,
8    [TYPE]              int
8    [WORD]              foo
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPEDEF]           typedef
9    [TYPE]              void
9    [TPAREN_OPEN]       (
9    [PTR_TYPE]          *
9    [TYPE]              function_name
9    [TPAREN_CLOSE]      )
9    [FPAREN_OPEN]       (
9    [TYPE]              my_t
9    [PTR_TYPE]          *
9    [COMMA]             ,
9    [TYPE]              int
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [TYPEDEF]           typedef
11   [ENUM]              enum
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [WORD]              one
13   [ASSIGN]            =
13   [NUMBER]            1
13   [COMMA]             ,
13   [NEWLINE]           
14   [WORD]              three
14   [ASSIGN]            =
14   [NUMBER]            3
14   [COMMA]             ,
14   [NEWLINE]           
15   [WORD]              five_hundred
15   [ASSIGN]            =
15   [NUMBER]            5
15   [COMMA]             ,
15   [NEWLINE]           
16   [WORD]              a_really_really_big_number
16   [ASSIGN]            =
16   [NUMBER]            6
16   [COMMA]             ,
16   [NEWLINE]           
17   [WORD]              two
17   [ASSIGN]            =
17   [NUMBER]            7
17   [COMMA]             ,
17   [NEWLINE]           
18   [WORD]              a_really_really_really_big_number
18   [ASSIGN]            =
18   [NUMBER]            8
18   [COMMA]             ,
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [TYPE]              yuck_t
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [QUALIFIER]         const
21   [TYPE]              char
21   [PTR_TYPE]          *
21   [WORD]              names
21   [TSQUARE]           []
21   [ASSIGN]            =
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [WORD]              one
23   [ASSIGN]            =
23   [STRING]            "one"
23   [COMMA]             ,
23   [NEWLINE]           
24   [WORD]              three
24   [ASSIGN]            =
24   [STRING]            "three"
24   [COMMA]             ,
24   [NEWLINE]           
25   [WORD]              five_hundred
25   [ASSIGN]            =
25   [STRING]            "five_hundred"
25   [COMMA]             ,
25   [NEWLINE]           
26   [WORD]              a_really_really_big_number
26   [ASSIGN]            =
26   [STRING]            "a_really_really_big_number"
26   [COMMA]             ,
26   [NEWLINE]           
27   [WORD]              two
27   [ASSIGN]            =
27   [STRING]            "two"
27   [COMMA]             ,
27   [NEWLINE]           
28   [WORD]              a_really_really_really_big_number
28   [ASSIGN]            =
28   [STRING]            "a_really_really_really_big_number"
28   [COMMA]             ,
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [TYPE]              bool
31   [FUNC_DEF]          foo
31   [FPAREN_OPEN]       (
31   [TYPE]              char
31   [WORD]              c
31   [FPAREN_CLOSE]      )
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [TYPE]              xWindow
33   [PTR_TYPE]          *
33   [WORD]              pWindow
33   [ASSIGN]            =
33   [DC_MEMBER]         ::
33   [FUNC_CALL]         RelatedWindow
33   [FPAREN_OPEN]       (
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
35   [COMMENT]           /* space between ] and ( */
35   [NEWLINE]           
36   [WORD]              function_list
36   [SQUARE_OPEN]       [
36   [WORD]              idx
36   [SQUARE_CLOSE]      ]
36   [FPAREN_OPEN]       (
36   [WORD]              param
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [NEWLINE]           
38   [COMMENT]           /* Indenting with multiple members: */
38   [NEWLINE]           
39   [TYPE]              sass
39   [MEMBER]            .
39   [TYPE]              asdfvas
39   [MEMBER]            ->
39   [WORD]              asdfasd
39   [SQUARE_OPEN]       [
39   [WORD]              asdfasdf
39   [SQUARE_CLOSE]      ]
39   [MEMBER]            .
39   [NEWLINE]           
40   [WORD]              asdfasdf
40   [ASSIGN]            =
40   [NUMBER]            5
40   [SEMICOLON]         ;
40   [NEWLINE]           
42   [DC_MEMBER]         ::
42   [TYPE]              asdasda
42   [DC_MEMBER]         ::
42   [TYPE]              adasd
42   [DC_MEMBER]         ::
42   [NEWLINE]           
43   [WORD]              asdfasdf
43   [ASSIGN]            =
43   [NUMBER]            5
43   [SEMICOLON]         ;
43   [NEWLINE]           
45   [TYPE]              dookie
45   [DC_MEMBER]         ::
45   [WORD]              wookie
45   [ARITH]             <<
45   [STRING]            "asd"
45   [NEWLINE]           
46   [ARITH]             <<
46   [STRING]            "bag"
46   [NEWLINE]           
47   [ARITH]             <<
47   [STRING]            "sag"
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [WORD]              sp_sign
49   [ASSIGN]            =
49   [NUMBER]            4
49   [ARITH]             -
49   [NEG]               -
49   [NUMBER]            5
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [WORD]              sp_sign
50   [ASSIGN]            =
50   [NEG]               -
50   [WORD]              sp_sign
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [WORD]              sp_sign
51   [ASSIGN]            =
51   [NUMBER]            4
51   [ARITH]             +
51   [POS]               +
51   [NUMBER]            7
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [WORD]              sp_sign
52   [ASSIGN]            =
52   [POS]               +
52   [WORD]              sp_sign
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [WORD]              sp_sign
53   [ASSIGN]            =
53   [NUMBER]            4
53   [ARITH]             +
53   [POS]               +
53   [WORD]              sp_sign
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [BRACE_CLOSE]       }
54   [NEWLINE]           
56   [PREPROC]           #
56   [PP_IF]             ifndef
56   [WORD]              abc
56   [NEWLINE]           
58   [PREPROC]           #
58   [PP_DEFINE]         define
58   [MACRO]             abc
58   [NUMBER]            123
58   [COMMENT]           /* some comment */
58   [NEWLINE]           
60   [PREPROC]           #
60   [PP_ENDIF]          endif
60   [COMMENT_MULTI]     /* another comment␤