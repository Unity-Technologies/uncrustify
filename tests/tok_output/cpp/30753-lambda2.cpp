Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          f1
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              auto
3    [WORD]              a
3    [ASSIGN]            =
3    [NEWLINE]           
4    [SQUARE_OPEN]       [
4    [ASSIGN]            =
4    [SQUARE_CLOSE]      ]
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [PTR_TYPE]          *
4    [WORD]              a
4    [COMMA]             ,
4    [TYPE]              Something
4    [BYREF]             &
4    [WORD]              b
4    [FPAREN_CLOSE]      )
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              std
6    [DC_MEMBER]         ::
6    [WORD]              cout
6    [ARITH]             <<
6    [STRING]            "blah: "
6    [ARITH]             <<
6    [DEREF]             *
6    [WORD]              a
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [TYPE]              void
10   [FUNC_DEF]          f1a
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              std
12   [DC_MEMBER]         ::
12   [FUNC_CALL]         for_each
12   [FPAREN_OPEN]       (
12   [WORD]              a
12   [COMMA]             ,
12   [WORD]              b
12   [COMMA]             ,
12   [NEWLINE]           
13   [SQUARE_OPEN]       [
13   [SQUARE_CLOSE]      ]
13   [FPAREN_OPEN]       (
13   [TYPE]              Something
13   [BYREF]             &
13   [WORD]              b
13   [FPAREN_CLOSE]      )
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [TYPE]              std
15   [DC_MEMBER]         ::
15   [WORD]              cout
15   [ARITH]             <<
15   [STRING]            "blah: "
15   [ARITH]             <<
15   [DEREF]             *
15   [WORD]              a
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
20   [TYPE]              void
20   [FUNC_DEF]          f1b
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [TYPE]              std
22   [DC_MEMBER]         ::
22   [FUNC_CALL]         for_each
22   [FPAREN_OPEN]       (
22   [WORD]              a
22   [COMMA]             ,
22   [WORD]              b
22   [COMMA]             ,
22   [NEWLINE]           
23   [SQUARE_OPEN]       [
23   [SQUARE_CLOSE]      ]
23   [FPAREN_OPEN]       (
23   [TYPE]              int
23   [BYREF]             &
23   [WORD]              b
23   [FPAREN_CLOSE]      )
23   [CPP_LAMBDA_RET]    ->
23   [TYPE]              foo
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [WORD]              b
25   [ASSIGN]            +=
25   [NUMBER]            3
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [RETURN]            return
26   [PAREN_OPEN]        (
26   [WORD]              b
26   [PAREN_CLOSE]       )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
31   [TYPE]              void
31   [FUNC_DEF]          f2
31   [FPAREN_OPEN]       (
31   [FPAREN_CLOSE]      )
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [FUNC_CALL]         Invoke
33   [FPAREN_OPEN]       (
33   [WORD]              a
33   [COMMA]             ,
33   [WORD]              b
33   [COMMA]             ,
33   [NEWLINE]           
34   [SQUARE_OPEN]       [
34   [ADDR]              &
34   [WORD]              one
34   [COMMA]             ,
34   [WORD]              two
34   [SQUARE_CLOSE]      ]
34   [FPAREN_OPEN]       (
34   [TYPE]              int
34   [PTR_TYPE]          *
34   [WORD]              a
34   [COMMA]             ,
34   [TYPE]              Something
34   [BYREF]             &
34   [WORD]              b
34   [FPAREN_CLOSE]      )
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [TYPE]              std
36   [DC_MEMBER]         ::
36   [WORD]              cout
36   [ARITH]             <<
36   [STRING]            "blah: "
36   [ARITH]             <<
36   [DEREF]             *
36   [WORD]              a
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [NEWLINE]           
41   [TYPE]              void
41   [FUNC_DEF]          f3a
41   [FPAREN_OPEN]       (
41   [FPAREN_CLOSE]      )
41   [NEWLINE]           
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [TYPE]              auto
43   [WORD]              a
43   [ASSIGN]            =
43   [SQUARE_OPEN]       [
43   [SQUARE_CLOSE]      ]
43   [BRACE_OPEN]        {
43   [BRACE_CLOSE]       }
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [TYPE]              auto
44   [WORD]              b
44   [ASSIGN]            =
44   [SQUARE_OPEN]       [
44   [SQUARE_CLOSE]      ]
44   [BRACE_OPEN]        {
44   [RETURN]            return
44   [PAREN_OPEN]        (
44   [WORD]              true
44   [PAREN_CLOSE]       )
44   [SEMICOLON]         ;
44   [BRACE_CLOSE]       }
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
47   [TYPE]              void
47   [FUNC_DEF]          f3b
47   [FPAREN_OPEN]       (
47   [FPAREN_CLOSE]      )
47   [NEWLINE]           
48   [BRACE_OPEN]        {
48   [NEWLINE]           
49   [FUNC_CALL]         Invoke
49   [FPAREN_OPEN]       (
49   [WORD]              a
49   [COMMA]             ,
49   [WORD]              b
49   [COMMA]             ,
49   [NEWLINE]           
50   [SQUARE_OPEN]       [
50   [ADDR]              &
50   [WORD]              one
50   [COMMA]             ,
50   [WORD]              two
50   [SQUARE_CLOSE]      ]
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [TYPE]              std
52   [DC_MEMBER]         ::
52   [WORD]              cout
52   [ARITH]             <<
52   [STRING]            "blah: "
52   [ARITH]             <<
52   [WORD]              one
52   [ARITH]             <<
52   [WORD]              two
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
54   [FPAREN_CLOSE]      )
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [NEWLINE]           
57   [TYPE]              void
57   [FUNC_DEF]          f3c
57   [FPAREN_OPEN]       (
57   [FPAREN_CLOSE]      )
57   [NEWLINE]           
58   [BRACE_OPEN]        {
58   [NEWLINE]           
59   [TYPE]              int
59   [WORD]              a
59   [TSQUARE]           []
59   [BRACE_OPEN]        {
59   [BRACE_CLOSE]       }
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [BRACE_CLOSE]       }
60   [NEWLINE]           
62   [TYPE]              void
62   [FUNC_DEF]          g1
62   [FPAREN_OPEN]       (
62   [FPAREN_CLOSE]      )
62   [NEWLINE]           
63   [BRACE_OPEN]        {
63   [NEWLINE]           
64   [TYPE]              auto
64   [WORD]              a
64   [ASSIGN]            =
64   [SQUARE_OPEN]       [
64   [ASSIGN]            =
64   [SQUARE_CLOSE]      ]
64   [FPAREN_OPEN]       (
64   [TYPE]              int
64   [PTR_TYPE]          *
64   [WORD]              a
64   [COMMA]             ,
64   [TYPE]              Something
64   [BYREF]             &
64   [WORD]              b
64   [FPAREN_CLOSE]      )
64   [BRACE_OPEN]        {
64   [TYPE]              std
64   [DC_MEMBER]         ::
64   [WORD]              cout
64   [ARITH]             <<
64   [STRING]            "blah: "
64   [ARITH]             <<
64   [DEREF]             *
64   [WORD]              a
64   [SEMICOLON]         ;
64   [BRACE_CLOSE]       }
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
67   [TYPE]              void
67   [FUNC_DEF]          g1a
67   [FPAREN_OPEN]       (
67   [FPAREN_CLOSE]      )
67   [NEWLINE]           
68   [BRACE_OPEN]        {
68   [NEWLINE]           
69   [TYPE]              std
69   [DC_MEMBER]         ::
69   [FUNC_CALL]         for_each
69   [FPAREN_OPEN]       (
69   [WORD]              a
69   [COMMA]             ,
69   [WORD]              b
69   [COMMA]             ,
69   [SQUARE_OPEN]       [
69   [SQUARE_CLOSE]      ]
69   [FPAREN_OPEN]       (
69   [TYPE]              Something
69   [BYREF]             &
69   [WORD]              b
69   [FPAREN_CLOSE]      )
69   [BRACE_OPEN]        {
69   [TYPE]              std
69   [DC_MEMBER]         ::
69   [WORD]              cout
69   [ARITH]             <<
69   [STRING]            "blah: "
69   [ARITH]             <<
69   [DEREF]             *
69   [WORD]              a
69   [SEMICOLON]         ;
69   [BRACE_CLOSE]       }
69   [FPAREN_CLOSE]      )
69   [SEMICOLON]         ;
69   [NEWLINE]           
70   [BRACE_CLOSE]       }
70   [NEWLINE]           
72   [TYPE]              void
72   [FUNC_DEF]          g1b
72   [FPAREN_OPEN]       (
72   [FPAREN_CLOSE]      )
72   [NEWLINE]           
73   [BRACE_OPEN]        {
73   [NEWLINE]           
74   [TYPE]              std
74   [DC_MEMBER]         ::
74   [FUNC_CALL]         for_each
74   [FPAREN_OPEN]       (
74   [WORD]              a
74   [COMMA]             ,
74   [WORD]              b
74   [COMMA]             ,
74   [SQUARE_OPEN]       [
74   [SQUARE_CLOSE]      ]
74   [FPAREN_OPEN]       (
74   [TYPE]              int
74   [BYREF]             &
74   [WORD]              b
74   [FPAREN_CLOSE]      )
74   [CPP_LAMBDA_RET]    ->
74   [TYPE]              foo
74   [BRACE_OPEN]        {
74   [WORD]              b
74   [ASSIGN]            +=
74   [NUMBER]            3
74   [SEMICOLON]         ;
74   [RETURN]            return
74   [PAREN_OPEN]        (
74   [WORD]              b
74   [PAREN_CLOSE]       )
74   [SEMICOLON]         ;
74   [BRACE_CLOSE]       }
74   [FPAREN_CLOSE]      )
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [BRACE_CLOSE]       }
75   [NEWLINE]           
77   [TYPE]              void
77   [FUNC_DEF]          g2
77   [FPAREN_OPEN]       (
77   [FPAREN_CLOSE]      )
77   [NEWLINE]           
78   [BRACE_OPEN]        {
78   [NEWLINE]           
79   [FUNC_CALL]         Invoke
79   [FPAREN_OPEN]       (
79   [WORD]              a
79   [COMMA]             ,
79   [WORD]              b
79   [COMMA]             ,
79   [NEWLINE]           
80   [SQUARE_OPEN]       [
80   [ADDR]              &
80   [WORD]              one
80   [COMMA]             ,
80   [WORD]              two
80   [SQUARE_CLOSE]      ]
80   [FPAREN_OPEN]       (
80   [TYPE]              int
80   [PTR_TYPE]          *
80   [WORD]              a
80   [COMMA]             ,
80   [TYPE]              Something
80   [BYREF]             &
80   [WORD]              b
80   [FPAREN_CLOSE]      )
80   [BRACE_OPEN]        {
80   [TYPE]              std
80   [DC_MEMBER]         ::
80   [WORD]              cout
80   [ARITH]             <<
80   [STRING]            "blah: "
80   [ARITH]             <<
80   [DEREF]             *
80   [WORD]              a
80   [SEMICOLON]         ;
80   [BRACE_CLOSE]       }
80   [FPAREN_CLOSE]      )
80   [SEMICOLON]         ;
80   [NEWLINE]           
82   [BRACE_CLOSE]       }
82   [NEWLINE]           