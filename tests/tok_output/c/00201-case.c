Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [SWITCH]            switch
3    [SPAREN_OPEN]       (
3    [WORD]              ch
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [COMMENT_CPP]       // handle 'a'
5    [NEWLINE]           
6    [CASE]              case
6    [STRING]            'a'
6    [CASE_COLON]        :
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [FUNC_CALL]         handle_a
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [FUNC_CALL]         multiline
9    [FPAREN_OPEN]       (
9    [NUMBER]            123
9    [COMMA]             ,
9    [NEWLINE]           
10   [NUMBER]            345
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BREAK]             break
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
14   [COMMENT_CPP]       // handle 'b'
14   [NEWLINE]           
15   [CASE]              case
15   [STRING]            'b'
15   [CASE_COLON]        :
15   [NEWLINE]           
16   [FUNC_CALL]         handle_b
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [FUNC_CALL]         multiline
17   [FPAREN_OPEN]       (
17   [NUMBER]            123
17   [COMMA]             ,
17   [NEWLINE]           
18   [NUMBER]            345
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BREAK]             break
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [COMMENT_CPP]       // handle 'c' and 'd'
21   [NEWLINE]           
22   [CASE]              case
22   [STRING]            'c'
22   [CASE_COLON]        :
22   [NEWLINE]           
23   [CASE]              case
23   [STRING]            'd'
23   [CASE_COLON]        :
23   [NEWLINE]           
24   [COMMENT_CPP]       // c and d are really the same thing
24   [NEWLINE]           
25   [FUNC_CALL]         handle_cd
25   [FPAREN_OPEN]       (
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [FUNC_CALL]         multiline
26   [FPAREN_OPEN]       (
26   [NUMBER]            123
26   [COMMA]             ,
26   [NEWLINE]           
27   [NUMBER]            345
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BREAK]             break
28   [SEMICOLON]         ;
28   [NEWLINE]           
30   [CASE]              case
30   [STRING]            'e'
30   [CASE_COLON]        :
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [FUNC_CALL]         handle_a
32   [FPAREN_OPEN]       (
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [FUNC_CALL]         multiline
33   [FPAREN_OPEN]       (
33   [NUMBER]            123
33   [COMMA]             ,
33   [NEWLINE]           
34   [NUMBER]            345
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
36   [BREAK]             break
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [COMMENT_CPP]       // case1
37   [NEWLINE]           
38   [CASE]              case
38   [PAREN_OPEN]        (
38   [WORD]              case1
38   [PAREN_CLOSE]       )
38   [CASE_COLON]        :
38   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [COMMENT_CPP]       //do stuff
40   [NEWLINE]           
41   [BREAK]             break
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
43   [CASE]              case
43   [PAREN_OPEN]        (
43   [WORD]              case2
43   [PAREN_CLOSE]       )
43   [CASE_COLON]        :
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [COMMENT_CPP]       //do stuff
45   [NEWLINE]           
46   [BREAK]             break
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [CASE]              case
48   [PAREN_OPEN]        (
48   [WORD]              case3
48   [PAREN_CLOSE]       )
48   [CASE_COLON]        :
48   [NEWLINE]           
50   [COMMENT]           /*do stuff*/
50   [NEWLINE]           
51   [BREAK]             break
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [CASE]              case
52   [PAREN_OPEN]        (
52   [WORD]              case3
52   [PAREN_CLOSE]       )
52   [CASE_COLON]        :
52   [NEWLINE]           
53   [FUNC_CALL]         statement
53   [FPAREN_OPEN]       (
53   [FPAREN_CLOSE]      )
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [BRACE_OPEN]        {
54   [NEWLINE]           
55   [FUNC_CALL]         another_statement
55   [FPAREN_OPEN]       (
55   [FPAREN_CLOSE]      )
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
57   [BREAK]             break
57   [SEMICOLON]         ;
57   [NEWLINE]           
59   [COMMENT_CPP]       // really should not get here
59   [NEWLINE]           
60   [CASE]              default
60   [CASE_COLON]        :
60   [NEWLINE]           
61   [FUNC_CALL]         handle_default
61   [FPAREN_OPEN]       (
61   [FPAREN_CLOSE]      )
61   [SEMICOLON]         ;
61   [NEWLINE]           
62   [FUNC_CALL]         multiline
62   [FPAREN_OPEN]       (
62   [NUMBER]            123
62   [COMMA]             ,
62   [NEWLINE]           
63   [NUMBER]            345
63   [FPAREN_CLOSE]      )
63   [SEMICOLON]         ;
63   [NEWLINE]           
64   [BREAK]             break
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
66   [FUNC_CALL]         multiline
66   [FPAREN_OPEN]       (
66   [NUMBER]            123
66   [COMMA]             ,
66   [NEWLINE]           
67   [NUMBER]            345
67   [FPAREN_CLOSE]      )
67   [SEMICOLON]         ;
67   [NEWLINE]           
68   [BRACE_CLOSE]       }
68   [NEWLINE]           