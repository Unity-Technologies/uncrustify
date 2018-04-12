Line [Token]             Text
1    [COMMENT_CPP]       // Uncrustify does not process the intention of an using alias,
1    [NEWLINE]           
2    [COMMENT_CPP]       // unknown_kw will therefore no be parsed as known keyword
2    [NEWLINE]           
3    [USING]             using
3    [WORD]              unknown_kw
3    [ASSIGN]            =
3    [TYPE]              int
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              int
5    [FUNC_DEF]          main
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [COMMENT_CPP]       // 'int' is a known c++ keyword
7    [NEWLINE]           
8    [TYPE]              auto
8    [WORD]              a0
8    [ASSIGN]            =
8    [TYPE]              int
8    [BRACE_OPEN]        {
8    [NUMBER]            1
8    [BRACE_CLOSE]       }
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              auto
9    [WORD]              b0
9    [ASSIGN]            =
9    [WORD]              unknown_kw
9    [BRACE_OPEN]        {
9    [NUMBER]            2
9    [BRACE_CLOSE]       }
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPE]              auto
10   [WORD]              c0
10   [ASSIGN]            =
10   [DC_MEMBER]         ::
10   [WORD]              unknown_kw
10   [BRACE_OPEN]        {
10   [NUMBER]            3
10   [BRACE_CLOSE]       }
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPE]              auto
11   [WORD]              d0
11   [ASSIGN]            =
11   [PAREN_OPEN]        (
11   [TYPE]              int
11   [PAREN_CLOSE]       )
11   [WORD]              unknown_kw
11   [BRACE_OPEN]        {
11   [NUMBER]            4
11   [BRACE_CLOSE]       }
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              auto
12   [WORD]              e0
12   [ASSIGN]            =
12   [PAREN_OPEN]        (
12   [TYPE]              int
12   [PAREN_CLOSE]       )
12   [DC_MEMBER]         ::
12   [WORD]              unknown_kw
12   [BRACE_OPEN]        {
12   [NUMBER]            5
12   [BRACE_CLOSE]       }
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              auto
13   [WORD]              f0
13   [ASSIGN]            =
13   [TYPE_CAST]         static_cast
13   [ANGLE_OPEN]        <
13   [TYPE]              int
13   [ANGLE_CLOSE]       >
13   [PAREN_OPEN]        (
13   [WORD]              unknown_kw
13   [BRACE_OPEN]        {
13   [NUMBER]            6
13   [BRACE_CLOSE]       }
13   [PAREN_CLOSE]       )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              auto
14   [WORD]              g0
14   [ASSIGN]            =
14   [TYPE_CAST]         static_cast
14   [ANGLE_OPEN]        <
14   [TYPE]              int
14   [ANGLE_CLOSE]       >
14   [PAREN_OPEN]        (
14   [DC_MEMBER]         ::
14   [WORD]              unknown_kw
14   [BRACE_OPEN]        {
14   [NUMBER]            7
14   [BRACE_CLOSE]       }
14   [PAREN_CLOSE]       )
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [TYPE]              auto
16   [WORD]              a1
16   [ASSIGN]            =
16   [TYPE]              int
16   [BRACE_OPEN]        {
16   [NUMBER]            1
16   [BRACE_CLOSE]       }
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              auto
17   [WORD]              b1
17   [ASSIGN]            =
17   [WORD]              unknown_kw
17   [BRACE_OPEN]        {
17   [NUMBER]            2
17   [BRACE_CLOSE]       }
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [TYPE]              auto
18   [WORD]              c1
18   [ASSIGN]            =
18   [DC_MEMBER]         ::
18   [WORD]              unknown_kw
18   [BRACE_OPEN]        {
18   [NUMBER]            3
18   [BRACE_CLOSE]       }
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [TYPE]              auto
19   [WORD]              d1
19   [ASSIGN]            =
19   [PAREN_OPEN]        (
19   [TYPE]              int
19   [PAREN_CLOSE]       )
19   [WORD]              unknown_kw
19   [BRACE_OPEN]        {
19   [NUMBER]            4
19   [BRACE_CLOSE]       }
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              auto
20   [WORD]              e1
20   [ASSIGN]            =
20   [PAREN_OPEN]        (
20   [TYPE]              int
20   [PAREN_CLOSE]       )
20   [DC_MEMBER]         ::
20   [WORD]              unknown_kw
20   [BRACE_OPEN]        {
20   [NUMBER]            5
20   [BRACE_CLOSE]       }
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              auto
21   [WORD]              f1
21   [ASSIGN]            =
21   [TYPE_CAST]         static_cast
21   [ANGLE_OPEN]        <
21   [TYPE]              int
21   [ANGLE_CLOSE]       >
21   [PAREN_OPEN]        (
21   [WORD]              unknown_kw
21   [BRACE_OPEN]        {
21   [NUMBER]            6
21   [BRACE_CLOSE]       }
21   [PAREN_CLOSE]       )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              auto
22   [WORD]              g1
22   [ASSIGN]            =
22   [TYPE_CAST]         static_cast
22   [ANGLE_OPEN]        <
22   [TYPE]              int
22   [ANGLE_CLOSE]       >
22   [PAREN_OPEN]        (
22   [DC_MEMBER]         ::
22   [WORD]              unknown_kw
22   [BRACE_OPEN]        {
22   [NUMBER]            7
22   [BRACE_CLOSE]       }
22   [PAREN_CLOSE]       )
22   [SEMICOLON]         ;
22   [NEWLINE]           
26   [TYPE]              auto
26   [WORD]              a2
26   [ASSIGN]            =
26   [TYPE]              int
26   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NUMBER]            1
28   [BRACE_CLOSE]       }
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [TYPE]              auto
29   [WORD]              b2
29   [ASSIGN]            =
29   [WORD]              unknown_kw
29   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NUMBER]            2
31   [BRACE_CLOSE]       }
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [TYPE]              auto
32   [WORD]              c2
32   [ASSIGN]            =
32   [DC_MEMBER]         ::
32   [WORD]              unknown_kw
32   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NUMBER]            3
34   [BRACE_CLOSE]       }
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [TYPE]              auto
35   [WORD]              d2
35   [ASSIGN]            =
35   [PAREN_OPEN]        (
35   [TYPE]              int
35   [PAREN_CLOSE]       )
35   [WORD]              unknown_kw
35   [NEWLINE]           
37   [BRACE_OPEN]        {
37   [NUMBER]            4
37   [BRACE_CLOSE]       }
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [TYPE]              auto
38   [WORD]              e2
38   [ASSIGN]            =
38   [PAREN_OPEN]        (
38   [TYPE]              int
38   [PAREN_CLOSE]       )
38   [DC_MEMBER]         ::
38   [WORD]              unknown_kw
38   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NUMBER]            5
40   [BRACE_CLOSE]       }
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [TYPE]              auto
41   [WORD]              f2
41   [ASSIGN]            =
41   [TYPE_CAST]         static_cast
41   [ANGLE_OPEN]        <
41   [TYPE]              int
41   [ANGLE_CLOSE]       >
41   [PAREN_OPEN]        (
41   [WORD]              unknown_kw
41   [NEWLINE]           
43   [BRACE_OPEN]        {
43   [NUMBER]            6
43   [BRACE_CLOSE]       }
43   [PAREN_CLOSE]       )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [TYPE]              auto
44   [WORD]              g2
44   [ASSIGN]            =
44   [TYPE_CAST]         static_cast
44   [ANGLE_OPEN]        <
44   [TYPE]              int
44   [ANGLE_CLOSE]       >
44   [PAREN_OPEN]        (
44   [DC_MEMBER]         ::
44   [WORD]              unknown_kw
44   [NEWLINE]           
46   [BRACE_OPEN]        {
46   [NUMBER]            7
46   [BRACE_CLOSE]       }
46   [PAREN_CLOSE]       )
46   [SEMICOLON]         ;
46   [NEWLINE]           
50   [TYPE]              auto
50   [WORD]              a1
50   [ASSIGN]            =
50   [TYPE]              int
50   [BRACE_OPEN]        {
50   [NEWLINE]           
52   [NUMBER]            1
54   [BRACE_CLOSE]       }
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [TYPE]              auto
55   [WORD]              b1
55   [ASSIGN]            =
55   [WORD]              unknown_kw
55   [BRACE_OPEN]        {
55   [NEWLINE]           
57   [NUMBER]            2
59   [BRACE_CLOSE]       }
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [TYPE]              auto
60   [WORD]              c1
60   [ASSIGN]            =
60   [DC_MEMBER]         ::
60   [WORD]              unknown_kw
60   [BRACE_OPEN]        {
60   [NEWLINE]           
62   [NUMBER]            3
64   [BRACE_CLOSE]       }
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [TYPE]              auto
65   [WORD]              d1
65   [ASSIGN]            =
65   [PAREN_OPEN]        (
65   [TYPE]              int
65   [PAREN_CLOSE]       )
65   [WORD]              unknown_kw
65   [BRACE_OPEN]        {
65   [NEWLINE]           
67   [NUMBER]            4
69   [BRACE_CLOSE]       }
69   [SEMICOLON]         ;
69   [NEWLINE]           
70   [TYPE]              auto
70   [WORD]              e1
70   [ASSIGN]            =
70   [PAREN_OPEN]        (
70   [TYPE]              int
70   [PAREN_CLOSE]       )
70   [DC_MEMBER]         ::
70   [WORD]              unknown_kw
70   [BRACE_OPEN]        {
70   [NEWLINE]           
72   [NUMBER]            5
74   [BRACE_CLOSE]       }
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [TYPE]              auto
75   [WORD]              f1
75   [ASSIGN]            =
75   [TYPE_CAST]         static_cast
75   [ANGLE_OPEN]        <
75   [TYPE]              int
75   [ANGLE_CLOSE]       >
75   [PAREN_OPEN]        (
75   [WORD]              unknown_kw
75   [BRACE_OPEN]        {
75   [NEWLINE]           
77   [NUMBER]            6
79   [BRACE_CLOSE]       }
79   [PAREN_CLOSE]       )
79   [SEMICOLON]         ;
79   [NEWLINE]           
80   [TYPE]              auto
80   [WORD]              g1
80   [ASSIGN]            =
80   [TYPE_CAST]         static_cast
80   [ANGLE_OPEN]        <
80   [TYPE]              int
80   [ANGLE_CLOSE]       >
80   [PAREN_OPEN]        (
80   [DC_MEMBER]         ::
80   [WORD]              unknown_kw
80   [BRACE_OPEN]        {
80   [NEWLINE]           
82   [NUMBER]            7
84   [BRACE_CLOSE]       }
84   [PAREN_CLOSE]       )
84   [SEMICOLON]         ;
84   [NEWLINE]           
86   [RETURN]            return
86   [NUMBER]            1
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [BRACE_CLOSE]       }