Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              bar
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [FOR]               for
4    [SPAREN_OPEN]       (
4    [SEMICOLON]         ;
4    [SEMICOLON]         ;
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [BREAK]             break
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              a
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [FUNC_CALL]         foo
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              b
13   [SPAREN_CLOSE]      )
13   [VBRACE_OPEN]       
13   [NEWLINE]           
14   [IF]                if
14   [SPAREN_OPEN]       (
14   [WORD]              c
14   [SPAREN_CLOSE]      )
14   [VBRACE_OPEN]       
14   [NEWLINE]           
15   [FUNC_CALL]         bar
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [VBRACE_CLOSE]      
15   [NEWLINE]           
16   [ELSE]              else
16   [VBRACE_OPEN]       
16   [NEWLINE]           
17   [SEMICOLON]         ;
17   [VBRACE_CLOSE]      
17   [VBRACE_CLOSE]      
17   [NEWLINE]           
19   [ELSE]              else
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [FUNC_CALL]         foo
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [SWITCH]            switch
23   [SPAREN_OPEN]       (
23   [WORD]              a
23   [SPAREN_CLOSE]      )
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [CASE]              case
25   [NUMBER]            1
25   [CASE_COLON]        :
25   [BREAK]             break
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [CASE]              case
26   [NUMBER]            2
26   [CASE_COLON]        :
26   [BREAK]             break
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [CASE]              default
27   [CASE_COLON]        :
27   [BREAK]             break
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
29   [WHILE]             while
29   [SPAREN_OPEN]       (
29   [WORD]              b
29   [INCDEC_AFTER]      --
29   [COMPARE]           >
29   [NUMBER]            0
29   [SPAREN_CLOSE]      )
29   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [FUNC_CALL]         bar
31   [FPAREN_OPEN]       (
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
33   [DO]                do
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [FUNC_CALL]         bar
35   [FPAREN_OPEN]       (
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [WHILE_OF_DO]       while
36   [SPAREN_OPEN]       (
36   [WORD]              b
36   [INCDEC_AFTER]      --
36   [COMPARE]           >
36   [NUMBER]            0
36   [SPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [ENUM]              enum
39   [TYPE]              FPP
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [WORD]              FPP_ONE
40   [ASSIGN]            =
40   [NUMBER]            1
40   [COMMA]             ,
40   [NEWLINE]           
41   [WORD]              FPP_TWO
41   [ASSIGN]            =
41   [NUMBER]            2
41   [COMMA]             ,
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [SEMICOLON]         ;
42   [NEWLINE]           
44   [STRUCT]            struct
44   [TYPE]              narg
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [TYPE]              int
45   [WORD]              abc
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [TYPE]              char
46   [WORD]              def
46   [SEMICOLON]         ;
47   [NEWLINE]           
48   [QUALIFIER]         const
48   [TYPE]              char
48   [PTR_TYPE]          *
48   [WORD]              ghi
48   [SEMICOLON]         ;
48   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [SEMICOLON]         ;
49   [NEWLINE]           
51   [TYPE]              void
51   [FUNC_DEF]          f2
51   [FPAREN_OPEN]       (
51   [TYPE]              void
51   [FPAREN_CLOSE]      )
51   [NEWLINE]           
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [BRACE_OPEN]        {
53   [WORD]              i
53   [INCDEC_AFTER]      ++
53   [SEMICOLON]         ;
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
55   [FOR]               for
55   [SPAREN_OPEN]       (
55   [SEMICOLON]         ;
55   [SEMICOLON]         ;
55   [SPAREN_CLOSE]      )
55   [VBRACE_OPEN]       
55   [SEMICOLON]         ;
55   [VBRACE_CLOSE]      
55   [NEWLINE]           
57   [FOR]               for
57   [SPAREN_OPEN]       (
57   [SEMICOLON]         ;
57   [SEMICOLON]         ;
57   [SPAREN_CLOSE]      )
57   [BRACE_OPEN]        {
57   [BRACE_CLOSE]       }
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
60   [TYPE]              int
60   [FUNC_DEF]          main
60   [FPAREN_OPEN]       (
60   [TYPE]              int
60   [WORD]              argc
60   [COMMA]             ,
60   [TYPE]              char
60   [PTR_TYPE]          *
60   [WORD]              argv
60   [TSQUARE]           []
60   [FPAREN_CLOSE]      )
60   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [IF]                if
62   [SPAREN_OPEN]       (
62   [WORD]              argc
62   [COMPARE]           ==
62   [NUMBER]            1
62   [SPAREN_CLOSE]      )
62   [NEWLINE]           
63   [BRACE_OPEN]        {
63   [NEWLINE]           
64   [FUNC_CALL]         printf
64   [FPAREN_OPEN]       (
64   [STRING]            "one"
64   [FPAREN_CLOSE]      )
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
66   [ELSE]              else
66   [ELSEIF]            if
66   [SPAREN_OPEN]       (
66   [WORD]              argc
66   [COMPARE]           ==
66   [NUMBER]            2
66   [SPAREN_CLOSE]      )
66   [NEWLINE]           
67   [BRACE_OPEN]        {
67   [NEWLINE]           
68   [FUNC_CALL]         printf
68   [FPAREN_OPEN]       (
68   [STRING]            "two"
68   [FPAREN_CLOSE]      )
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
70   [ELSE]              else
70   [NEWLINE]           
71   [BRACE_OPEN]        {
71   [NEWLINE]           
72   [FUNC_CALL]         printf
72   [FPAREN_OPEN]       (
72   [STRING]            "%d"
72   [COMMA]             ,
72   [WORD]              argc
72   [FPAREN_CLOSE]      )
72   [SEMICOLON]         ;
72   [NEWLINE]           
73   [BRACE_CLOSE]       }
73   [NEWLINE]           
74   [RETURN]            return
74   [NUMBER]            0
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [BRACE_CLOSE]       }
75   [NEWLINE]           