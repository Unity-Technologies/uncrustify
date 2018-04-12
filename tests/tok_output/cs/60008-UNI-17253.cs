Line [Token]             Text
1    [COMMENT_CPP]       // Extra test cases for  # 1257
1    [NEWLINE]           
2    [SWITCH]            switch
2    [SPAREN_OPEN]       (
2    [WORD]              sometext
2    [SPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [CASE]              case
4    [STRING]            "a"
4    [CASE_COLON]        :
4    [NEWLINE]           
5    [RETURN]            return
5    [NUMBER]            0
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [CASE]              case
6    [STRING]            "b"
6    [CASE_COLON]        :
6    [NEWLINE]           
7    [TYPE]              Console
7    [MEMBER]            .
7    [FUNC_CALL]         WrieLine
7    [FPAREN_OPEN]       (
7    [STRING]            "hello world\n"
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [RETURN]            return
8    [NUMBER]            0
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [CASE]              case
9    [STRING]            "c"
9    [CASE_COLON]        :
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [TYPE]              Console
11   [MEMBER]            .
11   [FUNC_CALL]         WrieLine
11   [FPAREN_OPEN]       (
11   [STRING]            "hello world\n"
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [RETURN]            return
12   [NUMBER]            0
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [CASE]              case
14   [STRING]            "d"
14   [CASE_COLON]        :
14   [NEWLINE]           
15   [TYPE]              Console
15   [MEMBER]            .
15   [FUNC_CALL]         WrieLine
15   [FPAREN_OPEN]       (
15   [STRING]            "hello world\n"
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [IF]                if
17   [SPAREN_OPEN]       (
17   [WORD]              hello
17   [SPAREN_CLOSE]      )
17   [VBRACE_OPEN]       
17   [NEWLINE]           
18   [RETURN]            return
18   [NUMBER]            0
18   [SEMICOLON]         ;
18   [VBRACE_CLOSE]      
18   [NEWLINE]           
19   [ELSE]              else
19   [VBRACE_OPEN]       
19   [NEWLINE]           
20   [RETURN]            return
20   [NUMBER]            1
20   [SEMICOLON]         ;
20   [VBRACE_CLOSE]      
20   [NEWLINE]           
22   [CASE]              case
22   [STRING]            "e"
22   [CASE_COLON]        :
22   [NEWLINE]           
23   [TYPE]              Console
23   [MEMBER]            .
23   [FUNC_CALL]         WrieLine
23   [FPAREN_OPEN]       (
23   [STRING]            "hello world\n"
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [NEWLINE]           
25   [IF]                if
25   [SPAREN_OPEN]       (
25   [WORD]              hello
25   [SPAREN_CLOSE]      )
25   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [TYPE]              int
27   [WORD]              a
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [TYPE]              int
28   [WORD]              b
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [RETURN]            return
29   [NUMBER]            0
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
32   [CASE]              case
32   [STRING]            "f"
32   [CASE_COLON]        :
32   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [RETURN]            return
34   [NUMBER]            0
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
36   [CASE]              case
36   [STRING]            "g"
36   [CASE_COLON]        :
36   [NEWLINE]           
38   [RETURN]            return
38   [NUMBER]            0
38   [SEMICOLON]         ;
38   [NEWLINE]           
40   [CASE]              case
40   [STRING]            "h"
40   [CASE_COLON]        :
40   [NEWLINE]           
41   [FOR]               for
41   [SPAREN_OPEN]       (
41   [WORD]              i
41   [ASSIGN]            =
41   [NUMBER]            0
41   [SEMICOLON]         ;
41   [WORD]              i
41   [COMPARE]           <
41   [NUMBER]            10
41   [WORD]              i
41   [INCDEC_AFTER]      ++
41   [SPAREN_CLOSE]      )
41   [NEWLINE]           
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [WORD]              a
43   [ASSIGN]            +=
43   [WORD]              i
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [RETURN]            return
44   [NUMBER]            0
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
46   [CASE]              case
46   [STRING]            "i"
46   [CASE_COLON]        :
46   [NEWLINE]           
48   [IF]                if
48   [SPAREN_OPEN]       (
48   [WORD]              hello
48   [SPAREN_CLOSE]      )
48   [NEWLINE]           
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [TYPE]              int
50   [WORD]              a
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [TYPE]              int
51   [WORD]              b
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [RETURN]            return
52   [NUMBER]            0
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
55   [RETURN]            return
55   [NUMBER]            1
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           