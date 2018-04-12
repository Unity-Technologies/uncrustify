Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [WORD]              bar
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [SWITCH]            switch
3    [SPAREN_OPEN]       (
3    [WORD]              bar
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [CASE]              case
5    [NUMBER]            0
5    [CASE_COLON]        :
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [FUNC_CALL]         showit
6    [FPAREN_OPEN]       (
6    [NUMBER]            0
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [WORD]              c
8    [INCDEC_AFTER]      ++
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BREAK]             break
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [CASE]              case
11   [NUMBER]            1
11   [CASE_COLON]        :
11   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [FUNC_CALL]         showit
12   [FPAREN_OPEN]       (
12   [WORD]              bar
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BREAK]             break
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
16   [CASE]              case
16   [NUMBER]            2
16   [CASE_COLON]        :
16   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
17   [BREAK]             break
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [CASE]              case
19   [NUMBER]            3
19   [CASE_COLON]        :
19   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [TYPE]              int
20   [WORD]              a
20   [ASSIGN]            =
20   [WORD]              bar
20   [ARITH]             *
20   [NUMBER]            3
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [FUNC_CALL]         showit
21   [FPAREN_OPEN]       (
21   [WORD]              a
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [WORD]              c
23   [INCDEC_AFTER]      ++
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BREAK]             break
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [CASE]              case
25   [NUMBER]            4
25   [CASE_COLON]        :
25   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [FUNC_CALL]         foo
26   [FPAREN_OPEN]       (
26   [WORD]              bar
26   [ARITH]             -
26   [NUMBER]            1
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [FUNC_CALL]         showit
28   [FPAREN_OPEN]       (
28   [NUMBER]            0
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
30   [CASE]              case
30   [NUMBER]            10
30   [CASE_COLON]        :
30   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [SWITCH]            switch
31   [SPAREN_OPEN]       (
31   [WORD]              gl_bug
31   [SPAREN_CLOSE]      )
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [CASE]              case
33   [STRING]            'a'
33   [CASE_COLON]        :
33   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [WORD]              gl_foo
34   [ASSIGN]            =
34   [WORD]              true
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BREAK]             break
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
38   [CASE]              case
38   [STRING]            'b'
38   [CASE_COLON]        :
38   [NEWLINE]           
39   [CASE]              case
39   [STRING]            'c'
39   [CASE_COLON]        :
39   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [WORD]              gl_foo
40   [ASSIGN]            =
40   [WORD]              false
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [BREAK]             break
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
43   [CASE]              default
43   [CASE_COLON]        :
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [COMMENT_CPP]       // nothing
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
47   [BREAK]             break
47   [SEMICOLON]         ;
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [NEWLINE]           
49   [BREAK]             break
49   [SEMICOLON]         ;
49   [NEWLINE]           
51   [CASE]              default
51   [CASE_COLON]        :
51   [NEWLINE]           
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
54   [BREAK]             break
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [NEWLINE]           
56   [RETURN]            return
56   [PAREN_OPEN]        (
56   [NEG]               -
56   [NUMBER]            1
56   [PAREN_CLOSE]       )
56   [SEMICOLON]         ;
56   [NEWLINE]           
57   [BRACE_CLOSE]       }
57   [NEWLINE]           