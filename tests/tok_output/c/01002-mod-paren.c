Line [Token]             Text
2    [TYPE]              int
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              a
2    [COMMA]             ,
2    [TYPE]              int
2    [WORD]              b
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [NOT]               !
4    [PAREN_OPEN]        (
4    [WORD]              a
4    [BOOL]              ||
4    [WORD]              b
4    [PAREN_CLOSE]       )
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [RETURN]            return
6    [NUMBER]            1
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [RETURN]            return
8    [NUMBER]            0
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [TYPE]              void
11   [FUNC_DEF]          fooo
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              enabled
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
13   [WORD]              value
13   [ASSIGN]            =
13   [NUMBER]            1
13   [SEMICOLON]         ;
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [WORD]              enabled
15   [BOOL]              &&
0    [PAREN_OPEN]        (
15   [WORD]              value
15   [COMPARE]           ==
15   [NUMBER]            100
0    [PAREN_CLOSE]       )
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [WORD]              value
19   [COMPARE]           ==
19   [NUMBER]            100
19   [SPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
23   [IF]                if
23   [SPAREN_OPEN]       (
0    [PAREN_OPEN]        (
23   [WORD]              value
23   [COMPARE]           ==
23   [NUMBER]            100
0    [PAREN_CLOSE]       )
23   [BOOL]              &&
0    [PAREN_OPEN]        (
23   [WORD]              i
23   [COMPARE]           <
23   [NUMBER]            15
0    [PAREN_CLOSE]       )
23   [BOOL]              ||
23   [WORD]              enabled
23   [SPAREN_CLOSE]      )
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [IF]                if
27   [SPAREN_OPEN]       (
27   [NOT]               !
27   [WORD]              failed
27   [BOOL]              &&
27   [PAREN_OPEN]        (
0    [PAREN_OPEN]        (
27   [WORD]              value
27   [COMPARE]           ==
27   [NUMBER]            100
0    [PAREN_CLOSE]       )
27   [BOOL]              &&
0    [PAREN_OPEN]        (
27   [WORD]              i
27   [COMPARE]           <
27   [NUMBER]            15
0    [PAREN_CLOSE]       )
27   [PAREN_CLOSE]       )
27   [BOOL]              ||
27   [WORD]              enabled
27   [SPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
33   [TYPE]              void
33   [FUNC_DEF]          foo3
33   [FPAREN_OPEN]       (
33   [FPAREN_CLOSE]      )
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [IF]                if
35   [SPAREN_OPEN]       (
0    [PAREN_OPEN]        (
35   [FUNC_CALL]         strcmp
35   [FPAREN_OPEN]       (
35   [WORD]              a
35   [COMMA]             ,
35   [WORD]              b
35   [FPAREN_CLOSE]      )
35   [COMPARE]           ==
35   [NUMBER]            0
0    [PAREN_CLOSE]       )
35   [BOOL]              &&
0    [PAREN_OPEN]        (
35   [WORD]              total
35   [COMPARE]           <
35   [NUMBER]            5
0    [PAREN_CLOSE]       )
35   [SPAREN_CLOSE]      )
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [FUNC_CALL]         add_item
37   [FPAREN_OPEN]       (
37   [WORD]              a
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [NEWLINE]           
40   [IF]                if
40   [SPAREN_OPEN]       (
40   [FUNC_CALL]         glob_add_path
40   [FPAREN_OPEN]       (
40   [WORD]              gd
40   [COMMA]             ,
40   [WORD]              gd
40   [MEMBER]            ->
40   [WORD]              dir
40   [COMMA]             ,
40   [WORD]              NULL
40   [COMMA]             ,
40   [NEWLINE]           
41   [PAREN_OPEN]        (
41   [WORD]              flags
41   [ARITH]             &
41   [WORD]              GLOB_MARK
41   [PAREN_CLOSE]       )
41   [BOOL]              &&
41   [FUNC_CALL]         S_ISDIR
41   [FPAREN_OPEN]       (
41   [WORD]              gd
41   [MEMBER]            ->
41   [WORD]              st
41   [MEMBER]            .
41   [WORD]              st_mode
41   [FPAREN_CLOSE]      )
41   [FPAREN_CLOSE]      )
41   [COMPARE]           !=
41   [NUMBER]            0
41   [SPAREN_CLOSE]      )
41   [NEWLINE]           
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [FUNC_CALL]         bar
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
45   [RETURN]            return
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
48   [TYPE]              int
48   [FUNC_DEF]          foo1
48   [FPAREN_OPEN]       (
48   [TYPE]              void
48   [FPAREN_CLOSE]      )
48   [NEWLINE]           
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [FUNC_CALL]         FOO_ERROR
50   [FPAREN_OPEN]       (
50   [STRING]            "connect: can only connected from state CLOSED"
50   [COMMA]             ,
50   [WORD]              pcb
50   [MEMBER]            ->
50   [WORD]              state
50   [COMPARE]           ==
50   [WORD]              CLOSED
50   [COMMA]             ,
50   [RETURN]            return
50   [WORD]              ERR_ISCONN
50   [FPAREN_CLOSE]      )
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [RETURN]            return
51   [WORD]              ERR_OK
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [BRACE_CLOSE]       }
52   [NEWLINE]           
54   [TYPE]              int
54   [FUNC_DEF]          foo2
54   [FPAREN_OPEN]       (
54   [TYPE]              void
54   [FPAREN_CLOSE]      )
54   [NEWLINE]           
55   [BRACE_OPEN]        {
55   [NEWLINE]           
57   [RETURN]            return
57   [NEG]               -
57   [NUMBER]            1
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
60   [TYPE]              void
60   [FUNC_DEF]          foo
60   [FPAREN_OPEN]       (
60   [TYPE]              void
60   [FPAREN_CLOSE]      )
60   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [IF]                if
62   [SPAREN_OPEN]       (
62   [NOT]               !
62   [WORD]              value
62   [NEWLINE]           
63   [PREPROC]           #
63   [PP_IF]             ifdef
63   [WORD]              OPTION
63   [NEWLINE]           
64   [BOOL]              ||
64   [WORD]              value
64   [COMPARE]           ==
64   [WORD]              SOMECONST
64   [NEWLINE]           
65   [PREPROC]           #
65   [PP_ENDIF]          endif
65   [COMMENT]           /* comment */
65   [NEWLINE]           
66   [SPAREN_CLOSE]      )
66   [NEWLINE]           
67   [BRACE_OPEN]        {
67   [NEWLINE]           
68   [BRACE_CLOSE]       }
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
71   [TYPE]              void
71   [FUNC_DEF]          foo3
71   [FPAREN_OPEN]       (
71   [TYPE]              void
71   [FPAREN_CLOSE]      )
71   [NEWLINE]           
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [IF]                if
73   [SPAREN_OPEN]       (
0    [PAREN_OPEN]        (
73   [DEREF]             *
73   [WORD]              p
73   [COMPARE]           ==
73   [STRING]            '-'
0    [PAREN_CLOSE]       )
73   [BOOL]              &&
0    [PAREN_OPEN]        (
73   [WORD]              p
73   [SQUARE_OPEN]       [
73   [NUMBER]            1
73   [SQUARE_CLOSE]      ]
73   [COMPARE]           !=
73   [STRING]            ']'
0    [PAREN_CLOSE]       )
73   [QUESTION]          ?
73   [NEWLINE]           
0    [PAREN_OPEN]        (
74   [DEREF]             *
74   [WORD]              text
74   [COMPARE]           <=
74   [DEREF]             *
74   [INCDEC_BEFORE]     ++
74   [WORD]              p
0    [PAREN_CLOSE]       )
74   [BOOL]              &&
0    [PAREN_OPEN]        (
74   [DEREF]             *
74   [WORD]              text
74   [COMPARE]           >=
74   [WORD]              last
0    [PAREN_CLOSE]       )
74   [COND_COLON]        :
0    [PAREN_OPEN]        (
74   [DEREF]             *
74   [WORD]              text
74   [COMPARE]           ==
74   [DEREF]             *
74   [WORD]              p
0    [PAREN_CLOSE]       )
74   [SPAREN_CLOSE]      )
74   [NEWLINE]           
75   [BRACE_OPEN]        {
75   [NEWLINE]           
76   [WORD]              matched
76   [ASSIGN]            =
76   [WORD]              TRUE
76   [SEMICOLON]         ;
76   [NEWLINE]           
77   [BRACE_CLOSE]       }
77   [NEWLINE]           
78   [BRACE_CLOSE]       }
78   [NEWLINE]           