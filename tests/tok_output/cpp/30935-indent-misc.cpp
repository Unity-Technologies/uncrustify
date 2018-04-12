Line [Token]             Text
1    [STRUCT]            struct
1    [TYPE]              S
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              one
3    [COMMA]             ,
3    [WORD]              two
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [FUNC_CLASS_DEF]    S
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [WORD]              i
4    [ASSIGN]            =
4    [NUMBER]            1
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [WORD]              one
6    [ASSIGN]            =
6    [WORD]              i
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [WORD]              two
7    [ASSIGN]            =
7    [WORD]              i
7    [ARITH]             +
7    [WORD]              i
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [TYPE]              bool
9    [FUNC_DEF]          check
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [QUALIFIER]         const
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [RETURN]            return
11   [PAREN_OPEN]        (
11   [WORD]              one
11   [COMPARE]           ==
11   [NUMBER]            1
11   [PAREN_CLOSE]       )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [STRUCT]            struct
15   [TYPE]              S
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [ENUM]              enum
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [WORD]              twentythree
18   [ASSIGN]            =
18   [NUMBER]            23
18   [COMMA]             ,
18   [NEWLINE]           
19   [WORD]              fortytwoseven
19   [ASSIGN]            =
19   [NUMBER]            427
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              int
21   [WORD]              one
21   [COMMA]             ,
21   [WORD]              two
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [FUNC_CLASS_DEF]    S
22   [FPAREN_OPEN]       (
22   [TYPE]              int
22   [WORD]              i
22   [ASSIGN]            =
22   [NUMBER]            1
22   [FPAREN_CLOSE]      )
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [WORD]              one
24   [ASSIGN]            =
24   [WORD]              i
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [WORD]              two
25   [ASSIGN]            =
25   [WORD]              i
25   [ARITH]             +
25   [WORD]              i
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [TYPE]              bool
27   [FUNC_DEF]          check
27   [FPAREN_OPEN]       (
27   [FPAREN_CLOSE]      )
27   [QUALIFIER]         const
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [RETURN]            return
29   [PAREN_OPEN]        (
29   [WORD]              one
29   [COMPARE]           ==
29   [NUMBER]            1
29   [PAREN_CLOSE]       )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [SEMICOLON]         ;
31   [NEWLINE]           
33   [QUALIFIER]         static
33   [TYPE]              uint
33   [FUNC_DEF]          jhash
33   [FPAREN_OPEN]       (
33   [TYPE]              K
33   [WORD]              x
33   [FPAREN_CLOSE]      )
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [TYPE]              ubyte
35   [PTR_TYPE]          *
35   [WORD]              k
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [TYPE]              uint
36   [WORD]              a
36   [COMMA]             ,
36   [NEWLINE]           
37   [WORD]              b
37   [COMMA]             ,
37   [NEWLINE]           
38   [WORD]              c
38   [SEMICOLON]         ;
38   [NEWLINE]           
40   [TYPE]              uint
40   [NEWLINE]           
41   [WORD]              a
41   [COMMA]             ,
41   [NEWLINE]           
42   [WORD]              b
42   [COMMA]             ,
42   [NEWLINE]           
43   [WORD]              c
43   [SEMICOLON]         ;
43   [NEWLINE]           
45   [WORD]              len
45   [ASSIGN]            =
45   [WORD]              x
45   [MEMBER]            .
45   [WORD]              length
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
48   [QUALIFIER]         const
48   [TYPE]              char
48   [PTR_TYPE]          *
48   [WORD]              token_names
48   [TSQUARE]           []
48   [ASSIGN]            =
48   [NEWLINE]           
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [SQUARE_OPEN]       [
50   [WORD]              CT_POUND
50   [SQUARE_CLOSE]      ]
50   [ASSIGN]            =
50   [STRING]            "POUND"
50   [COMMA]             ,
50   [NEWLINE]           
51   [SQUARE_OPEN]       [
51   [WORD]              CT_PREPROC
51   [SQUARE_CLOSE]      ]
51   [ASSIGN]            =
51   [STRING]            "PREPROC"
51   [COMMA]             ,
51   [NEWLINE]           
52   [BRACE_CLOSE]       }
52   [SEMICOLON]         ;
52   [NEWLINE]           
54   [STRUCT]            struct
54   [TYPE]              whoopee
54   [PTR_TYPE]          *
54   [NEWLINE]           
55   [FUNC_PROTO]        foo4
55   [FPAREN_OPEN]       (
55   [NEWLINE]           
56   [TYPE]              int
56   [WORD]              param1
56   [COMMA]             ,
56   [NEWLINE]           
57   [TYPE]              int
57   [WORD]              param2
57   [COMMA]             ,
57   [NEWLINE]           
58   [TYPE]              char
58   [PTR_TYPE]          *
58   [WORD]              param2
58   [NEWLINE]           
59   [FPAREN_CLOSE]      )
59   [SEMICOLON]         ;
59   [NEWLINE]           