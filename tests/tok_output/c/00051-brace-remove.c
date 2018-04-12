Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              void
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [TYPE]              void
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              a
4    [ASSIGN]            =
4    [NUMBER]            0
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [WHILE]             while
5    [SPAREN_OPEN]       (
5    [WORD]              a
5    [COMPARE]           <
5    [NUMBER]            3
5    [SPAREN_CLOSE]      )
6    [VBRACE_OPEN]       
6    [NEWLINE]           
7    [WORD]              a
7    [INCDEC_AFTER]      ++
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [VBRACE_CLOSE]      
8    [NEWLINE]           
10   [WHILE]             while
10   [SPAREN_OPEN]       (
10   [WORD]              b
10   [COMPARE]           <
10   [WORD]              a
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
10   [NEWLINE]           
11   [WORD]              b
11   [INCDEC_AFTER]      ++
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           
13   [DO]                do
14   [VBRACE_OPEN]       
14   [NEWLINE]           
15   [WORD]              a
15   [INCDEC_AFTER]      --
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [VBRACE_CLOSE]      
16   [WHILE_OF_DO]       while
16   [SPAREN_OPEN]       (
16   [WORD]              a
16   [COMPARE]           >
16   [NUMBER]            0
16   [SPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [FOR]               for
18   [SPAREN_OPEN]       (
18   [WORD]              a
18   [ASSIGN]            =
18   [NUMBER]            0
18   [SEMICOLON]         ;
18   [WORD]              a
18   [COMPARE]           <
18   [NUMBER]            10
18   [SEMICOLON]         ;
18   [WORD]              a
18   [INCDEC_AFTER]      ++
18   [SPAREN_CLOSE]      )
19   [VBRACE_OPEN]       
19   [NEWLINE]           
20   [FUNC_CALL]         printf
20   [FPAREN_OPEN]       (
20   [STRING]            "a=%d\n"
20   [COMMA]             ,
20   [WORD]              a
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [VBRACE_CLOSE]      
21   [NEWLINE]           
23   [IF]                if
23   [SPAREN_OPEN]       (
23   [WORD]              a
23   [COMPARE]           ==
23   [NUMBER]            10
23   [SPAREN_CLOSE]      )
24   [VBRACE_OPEN]       
24   [NEWLINE]           
25   [FUNC_CALL]         printf
25   [FPAREN_OPEN]       (
25   [STRING]            "a looks good\n"
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [VBRACE_CLOSE]      
26   [NEWLINE]           
28   [IF]                if
28   [SPAREN_OPEN]       (
28   [WORD]              state
28   [COMPARE]           ==
28   [WORD]              ST_RUN
28   [SPAREN_CLOSE]      )
29   [VBRACE_OPEN]       
29   [NEWLINE]           
30   [IF]                if
30   [SPAREN_OPEN]       (
30   [PAREN_OPEN]        (
30   [WORD]              foo
30   [COMPARE]           <
30   [WORD]              bar
30   [PAREN_CLOSE]       )
30   [BOOL]              &&
30   [NEWLINE]           
31   [PAREN_OPEN]        (
31   [WORD]              bar
31   [COMPARE]           >
31   [WORD]              foo2
31   [PAREN_CLOSE]       )
31   [SPAREN_CLOSE]      )
32   [VBRACE_OPEN]       
32   [NEWLINE]           
33   [IF]                if
33   [SPAREN_OPEN]       (
33   [WORD]              a
33   [COMPARE]           <
33   [NUMBER]            5
33   [SPAREN_CLOSE]      )
34   [VBRACE_OPEN]       
34   [NEWLINE]           
35   [WORD]              a
35   [ASSIGN]            *=
35   [WORD]              a
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [VBRACE_CLOSE]      
37   [VBRACE_CLOSE]      
38   [VBRACE_CLOSE]      
38   [NEWLINE]           
40   [WHILE]             while
40   [SPAREN_OPEN]       (
40   [DEREF]             *
40   [WORD]              ptr
40   [INCDEC_AFTER]      ++
40   [COMPARE]           !=
40   [STRING]            ','
40   [SPAREN_CLOSE]      )
40   [NEWLINE]           
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [NEWLINE]           
45   [COMMENT_CPP]       // mod_full_brace_for = remove should not remove the braces in this example:
45   [NEWLINE]           
46   [TYPE]              int
46   [FUNC_DEF]          main
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [BRACE_OPEN]        {
46   [NEWLINE]           
47   [IF]                if
47   [SPAREN_OPEN]       (
47   [WORD]              true
47   [SPAREN_CLOSE]      )
47   [VBRACE_OPEN]       
47   [COMMENT_CPP]       // indent=1
47   [NEWLINE]           
48   [FOR]               for
48   [SPAREN_OPEN]       (
48   [TYPE]              int
48   [WORD]              i
48   [ASSIGN]            =
48   [NUMBER]            0
48   [SEMICOLON]         ;
48   [WORD]              i
48   [COMPARE]           <
48   [NUMBER]            3
48   [SEMICOLON]         ;
48   [WORD]              i
48   [INCDEC_AFTER]      ++
48   [SPAREN_CLOSE]      )
48   [BRACE_OPEN]        {
48   [NEWLINE]           
49   [IF]                if
49   [SPAREN_OPEN]       (
49   [WORD]              false
49   [SPAREN_CLOSE]      )
49   [VBRACE_OPEN]       
49   [NEWLINE]           
50   [CONTINUE]          continue
50   [SEMICOLON]         ;
50   [VBRACE_CLOSE]      
50   [COMMENT_CPP]       // indent=4
50   [NEWLINE]           
51   [BRACE_CLOSE]       }
51   [VBRACE_CLOSE]      
51   [NEWLINE]           
52   [ELSE]              else
52   [VBRACE_OPEN]       
52   [NEWLINE]           
53   [RETURN]            return
53   [SEMICOLON]         ;
53   [VBRACE_CLOSE]      
53   [COMMENT_CPP]       // indent=2
53   [NEWLINE]           
54   [BRACE_CLOSE]       }
54   [NEWLINE]           
56   [COMMENT_CPP]       // mod_full_brace_if = remove should not remove the braces in this example:
56   [NEWLINE]           
57   [TYPE]              int
57   [FUNC_DEF]          main
57   [FPAREN_OPEN]       (
57   [FPAREN_CLOSE]      )
57   [BRACE_OPEN]        {
57   [NEWLINE]           
58   [IF]                if
58   [SPAREN_OPEN]       (
58   [WORD]              true
58   [SPAREN_CLOSE]      )
58   [BRACE_OPEN]        {
58   [NEWLINE]           
59   [FOR]               for
59   [SPAREN_OPEN]       (
59   [TYPE]              int
59   [WORD]              i
59   [ASSIGN]            =
59   [NUMBER]            0
59   [SEMICOLON]         ;
59   [WORD]              i
59   [COMPARE]           <
59   [NUMBER]            3
59   [SEMICOLON]         ;
59   [WORD]              i
59   [INCDEC_AFTER]      ++
59   [SPAREN_CLOSE]      )
59   [VBRACE_OPEN]       
59   [NEWLINE]           
60   [IF]                if
60   [SPAREN_OPEN]       (
60   [WORD]              false
60   [SPAREN_CLOSE]      )
60   [VBRACE_OPEN]       
60   [NEWLINE]           
61   [CONTINUE]          continue
61   [SEMICOLON]         ;
61   [VBRACE_CLOSE]      
61   [VBRACE_CLOSE]      
61   [COMMENT_CPP]       // indent=4
61   [NEWLINE]           
62   [BRACE_CLOSE]       }
62   [NEWLINE]           
63   [ELSE]              else
63   [VBRACE_OPEN]       
63   [NEWLINE]           
64   [RETURN]            return
64   [SEMICOLON]         ;
64   [VBRACE_CLOSE]      
64   [COMMENT_CPP]       // indent=2
64   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
67   [TYPE]              int
67   [FUNC_DEF]          main
67   [FPAREN_OPEN]       (
67   [FPAREN_CLOSE]      )
67   [NEWLINE]           
68   [BRACE_OPEN]        {
68   [NEWLINE]           
69   [WHILE]             while
69   [SPAREN_OPEN]       (
69   [NUMBER]            1
69   [SPAREN_CLOSE]      )
69   [BRACE_OPEN]        {
69   [NEWLINE]           
70   [IF]                if
70   [SPAREN_OPEN]       (
70   [NUMBER]            0
70   [SPAREN_CLOSE]      )
70   [VBRACE_OPEN]       
70   [NEWLINE]           
71   [BREAK]             break
71   [SEMICOLON]         ;
71   [VBRACE_CLOSE]      
71   [NEWLINE]           
72   [SWITCH]            switch
72   [SPAREN_OPEN]       (
72   [NUMBER]            1
72   [SPAREN_CLOSE]      )
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [CASE]              case
73   [NUMBER]            1
73   [CASE_COLON]        :
73   [NEWLINE]           
74   [BREAK]             break
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [BRACE_CLOSE]       }
75   [NEWLINE]           
76   [BRACE_CLOSE]       }
76   [NEWLINE]           
77   [RETURN]            return
77   [NUMBER]            0
77   [SEMICOLON]         ;
77   [NEWLINE]           
78   [BRACE_CLOSE]       }
78   [NEWLINE]           