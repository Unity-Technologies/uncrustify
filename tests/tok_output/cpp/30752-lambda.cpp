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
4    [NEWLINE]           
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
13   [NEWLINE]           
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
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [TYPE]              void
19   [FUNC_DEF]          f1b
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [TYPE]              std
21   [DC_MEMBER]         ::
21   [FUNC_CALL]         for_each
21   [FPAREN_OPEN]       (
21   [WORD]              a
21   [COMMA]             ,
21   [WORD]              b
21   [COMMA]             ,
21   [NEWLINE]           
22   [SQUARE_OPEN]       [
22   [SQUARE_CLOSE]      ]
22   [FPAREN_OPEN]       (
22   [TYPE]              int
22   [BYREF]             &
22   [WORD]              b
22   [FPAREN_CLOSE]      )
22   [CPP_LAMBDA_RET]    ->
22   [TYPE]              foo
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [WORD]              b
24   [ASSIGN]            +=
24   [NUMBER]            3
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [RETURN]            return
25   [PAREN_OPEN]        (
25   [WORD]              b
25   [PAREN_CLOSE]       )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [TYPE]              void
29   [FUNC_DEF]          f2
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [FUNC_CALL]         Invoke
31   [FPAREN_OPEN]       (
31   [WORD]              a
31   [COMMA]             ,
31   [WORD]              b
31   [COMMA]             ,
31   [NEWLINE]           
32   [SQUARE_OPEN]       [
32   [ADDR]              &
32   [WORD]              one
32   [COMMA]             ,
32   [WORD]              two
32   [SQUARE_CLOSE]      ]
32   [FPAREN_OPEN]       (
32   [TYPE]              int
32   [PTR_TYPE]          *
32   [WORD]              a
32   [COMMA]             ,
32   [TYPE]              Something
32   [BYREF]             &
32   [WORD]              b
32   [FPAREN_CLOSE]      )
32   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [TYPE]              std
34   [DC_MEMBER]         ::
34   [WORD]              cout
34   [ARITH]             <<
34   [STRING]            "blah: "
34   [ARITH]             <<
34   [DEREF]             *
34   [WORD]              a
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
38   [TYPE]              void
38   [FUNC_DEF]          f3a
38   [FPAREN_OPEN]       (
38   [FPAREN_CLOSE]      )
38   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [TYPE]              auto
40   [WORD]              a
40   [ASSIGN]            =
40   [SQUARE_OPEN]       [
40   [SQUARE_CLOSE]      ]
40   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [TYPE]              auto
41   [WORD]              b
41   [ASSIGN]            =
41   [SQUARE_OPEN]       [
41   [SQUARE_CLOSE]      ]
41   [NEWLINE]           
41   [BRACE_OPEN]        {
41   [NEWLINE]           
41   [RETURN]            return
41   [PAREN_OPEN]        (
41   [WORD]              true
41   [PAREN_CLOSE]       )
41   [SEMICOLON]         ;
41   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
44   [TYPE]              void
44   [FUNC_DEF]          f3b
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [NEWLINE]           
45   [BRACE_OPEN]        {
45   [NEWLINE]           
46   [FUNC_CALL]         Invoke
46   [FPAREN_OPEN]       (
46   [WORD]              a
46   [COMMA]             ,
46   [WORD]              b
46   [COMMA]             ,
46   [NEWLINE]           
47   [SQUARE_OPEN]       [
47   [ADDR]              &
47   [WORD]              one
47   [COMMA]             ,
47   [WORD]              two
47   [SQUARE_CLOSE]      ]
47   [NEWLINE]           
48   [BRACE_OPEN]        {
48   [NEWLINE]           
49   [TYPE]              std
49   [DC_MEMBER]         ::
49   [WORD]              cout
49   [ARITH]             <<
49   [STRING]            "blah: "
49   [ARITH]             <<
49   [WORD]              one
49   [ARITH]             <<
49   [WORD]              two
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [NEWLINE]           
50   [FPAREN_CLOSE]      )
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [BRACE_CLOSE]       }
51   [NEWLINE]           
53   [TYPE]              void
53   [FUNC_DEF]          f3c
53   [FPAREN_OPEN]       (
53   [FPAREN_CLOSE]      )
53   [NEWLINE]           
54   [BRACE_OPEN]        {
54   [NEWLINE]           
55   [TYPE]              int
55   [WORD]              a
55   [TSQUARE]           []
55   [BRACE_OPEN]        {
55   [BRACE_CLOSE]       }
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
58   [TYPE]              void
58   [FUNC_DEF]          g1
58   [FPAREN_OPEN]       (
58   [FPAREN_CLOSE]      )
58   [NEWLINE]           
59   [BRACE_OPEN]        {
59   [NEWLINE]           
60   [TYPE]              auto
60   [WORD]              a
60   [ASSIGN]            =
60   [SQUARE_OPEN]       [
60   [ASSIGN]            =
60   [SQUARE_CLOSE]      ]
60   [FPAREN_OPEN]       (
60   [TYPE]              int
60   [PTR_TYPE]          *
60   [WORD]              a
60   [COMMA]             ,
60   [TYPE]              Something
60   [BYREF]             &
60   [WORD]              b
60   [FPAREN_CLOSE]      )
60   [NEWLINE]           
60   [BRACE_OPEN]        {
60   [NEWLINE]           
60   [TYPE]              std
60   [DC_MEMBER]         ::
60   [WORD]              cout
60   [ARITH]             <<
60   [STRING]            "blah: "
60   [ARITH]             <<
60   [DEREF]             *
60   [WORD]              a
60   [SEMICOLON]         ;
60   [NEWLINE]           
60   [BRACE_CLOSE]       }
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [BRACE_CLOSE]       }
61   [NEWLINE]           
63   [TYPE]              void
63   [FUNC_DEF]          g1a
63   [FPAREN_OPEN]       (
63   [FPAREN_CLOSE]      )
63   [NEWLINE]           
64   [BRACE_OPEN]        {
64   [NEWLINE]           
65   [TYPE]              std
65   [DC_MEMBER]         ::
65   [FUNC_CALL]         for_each
65   [FPAREN_OPEN]       (
65   [WORD]              a
65   [COMMA]             ,
65   [WORD]              b
65   [COMMA]             ,
65   [SQUARE_OPEN]       [
65   [SQUARE_CLOSE]      ]
65   [FPAREN_OPEN]       (
65   [TYPE]              Something
65   [BYREF]             &
65   [WORD]              b
65   [FPAREN_CLOSE]      )
65   [NEWLINE]           
65   [BRACE_OPEN]        {
65   [NEWLINE]           
65   [TYPE]              std
65   [DC_MEMBER]         ::
65   [WORD]              cout
65   [ARITH]             <<
65   [STRING]            "blah: "
65   [ARITH]             <<
65   [DEREF]             *
65   [WORD]              a
65   [SEMICOLON]         ;
65   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
65   [FPAREN_CLOSE]      )
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [BRACE_CLOSE]       }
66   [NEWLINE]           
68   [TYPE]              void
68   [FUNC_DEF]          g1b
68   [FPAREN_OPEN]       (
68   [FPAREN_CLOSE]      )
68   [NEWLINE]           
69   [BRACE_OPEN]        {
69   [NEWLINE]           
70   [TYPE]              std
70   [DC_MEMBER]         ::
70   [FUNC_CALL]         for_each
70   [FPAREN_OPEN]       (
70   [WORD]              a
70   [COMMA]             ,
70   [WORD]              b
70   [COMMA]             ,
70   [SQUARE_OPEN]       [
70   [SQUARE_CLOSE]      ]
70   [FPAREN_OPEN]       (
70   [TYPE]              int
70   [BYREF]             &
70   [WORD]              b
70   [FPAREN_CLOSE]      )
70   [CPP_LAMBDA_RET]    ->
70   [TYPE]              foo
70   [NEWLINE]           
70   [BRACE_OPEN]        {
70   [NEWLINE]           
70   [WORD]              b
70   [ASSIGN]            +=
70   [NUMBER]            3
70   [SEMICOLON]         ;
70   [NEWLINE]           
70   [RETURN]            return
70   [PAREN_OPEN]        (
70   [WORD]              b
70   [PAREN_CLOSE]       )
70   [SEMICOLON]         ;
70   [NEWLINE]           
70   [BRACE_CLOSE]       }
70   [NEWLINE]           
70   [FPAREN_CLOSE]      )
70   [SEMICOLON]         ;
70   [NEWLINE]           
71   [BRACE_CLOSE]       }
71   [NEWLINE]           
73   [TYPE]              void
73   [FUNC_DEF]          g2
73   [FPAREN_OPEN]       (
73   [FPAREN_CLOSE]      )
73   [NEWLINE]           
74   [BRACE_OPEN]        {
74   [NEWLINE]           
75   [FUNC_CALL]         Invoke
75   [FPAREN_OPEN]       (
75   [WORD]              a
75   [COMMA]             ,
75   [WORD]              b
75   [COMMA]             ,
75   [NEWLINE]           
76   [SQUARE_OPEN]       [
76   [ADDR]              &
76   [WORD]              one
76   [COMMA]             ,
76   [WORD]              two
76   [SQUARE_CLOSE]      ]
76   [FPAREN_OPEN]       (
76   [TYPE]              int
76   [PTR_TYPE]          *
76   [WORD]              a
76   [COMMA]             ,
76   [TYPE]              Something
76   [BYREF]             &
76   [WORD]              b
76   [FPAREN_CLOSE]      )
76   [NEWLINE]           
76   [BRACE_OPEN]        {
76   [NEWLINE]           
76   [TYPE]              std
76   [DC_MEMBER]         ::
76   [WORD]              cout
76   [ARITH]             <<
76   [STRING]            "blah: "
76   [ARITH]             <<
76   [DEREF]             *
76   [WORD]              a
76   [SEMICOLON]         ;
76   [NEWLINE]           
76   [BRACE_CLOSE]       }
76   [NEWLINE]           
76   [FPAREN_CLOSE]      )
76   [SEMICOLON]         ;
76   [NEWLINE]           
77   [BRACE_CLOSE]       }
77   [NEWLINE]           