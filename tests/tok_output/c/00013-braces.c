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
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [WORD]              a
7    [INCDEC_AFTER]      ++
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [WHILE]             while
10   [SPAREN_OPEN]       (
10   [WORD]              b
10   [COMPARE]           <
10   [WORD]              a
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
10   [COMMENT_CPP]       // trailing C++ comment
10   [NEWLINE]           
11   [WORD]              b
11   [INCDEC_AFTER]      ++
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           
13   [DO]                do
13   [COMMENT_CPP]       // trailing C++ comment
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [WORD]              a
15   [INCDEC_AFTER]      --
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
16   [WHILE_OF_DO]       while
16   [SPAREN_OPEN]       (
16   [WORD]              a
16   [COMPARE]           >
16   [NUMBER]            0
16   [SPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [DO]                do
18   [VBRACE_OPEN]       
18   [NEWLINE]           
19   [WORD]              a
19   [INCDEC_AFTER]      --
19   [SEMICOLON]         ;
19   [VBRACE_CLOSE]      
19   [NEWLINE]           
20   [WHILE_OF_DO]       while
20   [SPAREN_OPEN]       (
20   [WORD]              a
20   [COMPARE]           >
20   [NUMBER]            0
20   [SPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
22   [FOR]               for
22   [SPAREN_OPEN]       (
22   [WORD]              a
22   [ASSIGN]            =
22   [NUMBER]            0
22   [SEMICOLON]         ;
22   [WORD]              a
22   [COMPARE]           <
22   [NUMBER]            10
22   [SEMICOLON]         ;
22   [WORD]              a
22   [INCDEC_AFTER]      ++
22   [SPAREN_CLOSE]      )
22   [COMMENT_CPP]       // trailing C++ comment
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [FUNC_CALL]         printf
24   [FPAREN_OPEN]       (
24   [STRING]            "a=%d\n"
24   [COMMA]             ,
24   [WORD]              a
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [IF]                if
27   [SPAREN_OPEN]       (
27   [WORD]              a
27   [COMPARE]           ==
27   [NUMBER]            10
27   [SPAREN_CLOSE]      )
27   [COMMENT_CPP]       // trailing C++ comment
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [FUNC_CALL]         printf
29   [FPAREN_OPEN]       (
29   [STRING]            "a looks good\n"
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [ELSE]              else
31   [COMMENT_CPP]       // trailing C++ comment
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [FUNC_CALL]         printf
33   [FPAREN_OPEN]       (
33   [STRING]            "not so good\n"
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
36   [IF]                if
36   [SPAREN_OPEN]       (
36   [WORD]              state
36   [COMPARE]           ==
36   [WORD]              ST_RUN
36   [SPAREN_CLOSE]      )
36   [NEWLINE]           
37   [BRACE_OPEN]        {
37   [NEWLINE]           
38   [IF]                if
38   [SPAREN_OPEN]       (
38   [PAREN_OPEN]        (
38   [WORD]              foo
38   [COMPARE]           <
38   [WORD]              bar
38   [PAREN_CLOSE]       )
38   [BOOL]              &&
38   [NEWLINE]           
39   [PAREN_OPEN]        (
39   [WORD]              bar
39   [COMPARE]           >
39   [WORD]              foo2
39   [PAREN_CLOSE]       )
39   [SPAREN_CLOSE]      )
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [IF]                if
41   [SPAREN_OPEN]       (
41   [WORD]              a
41   [COMPARE]           <
41   [NUMBER]            5
41   [SPAREN_CLOSE]      )
41   [NEWLINE]           
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [WORD]              a
43   [ASSIGN]            *=
43   [WORD]              a
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
45   [ELSE]              else
45   [ELSEIF]            if
45   [SPAREN_OPEN]       (
45   [WORD]              b
45   [COMPARE]           !=
45   [NUMBER]            0
45   [SPAREN_CLOSE]      )
45   [VBRACE_OPEN]       
45   [NEWLINE]           
46   [WORD]              a
46   [ASSIGN]            /=
46   [WORD]              b
46   [SEMICOLON]         ;
46   [VBRACE_CLOSE]      
46   [NEWLINE]           
47   [ELSE]              else
47   [VBRACE_OPEN]       
47   [COMMENT_CPP]       // trailing C++ comment
47   [NEWLINE]           
48   [WORD]              a
48   [ASSIGN]            +=
48   [WORD]              b
48   [SEMICOLON]         ;
48   [VBRACE_CLOSE]      
48   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [NEWLINE]           
52   [FUNC_CALL]         list_for_each
52   [FPAREN_OPEN]       (
52   [WORD]              k
52   [FPAREN_CLOSE]      )
52   [NEWLINE]           
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [IF]                if
53   [SPAREN_OPEN]       (
53   [WORD]              a
53   [SPAREN_CLOSE]      )
53   [VBRACE_OPEN]       
53   [NEWLINE]           
54   [IF]                if
54   [SPAREN_OPEN]       (
54   [WORD]              b
54   [SPAREN_CLOSE]      )
54   [NEWLINE]           
55   [BRACE_OPEN]        {
55   [NEWLINE]           
56   [WORD]              c
56   [INCDEC_AFTER]      ++
56   [SEMICOLON]         ;
56   [NEWLINE]           
57   [BRACE_CLOSE]       }
57   [VBRACE_CLOSE]      
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
61   [WHILE]             while
61   [SPAREN_OPEN]       (
61   [NUMBER]            1
61   [SPAREN_CLOSE]      )
61   [VBRACE_OPEN]       
61   [NEWLINE]           
62   [SEMICOLON]         ;
62   [VBRACE_CLOSE]      
62   [COMMENT]           /* hang forever */
62   [NEWLINE]           
63   [BRACE_CLOSE]       }
63   [NEWLINE]           
65   [TYPE]              void
65   [FUNC_DEF]          f
65   [FPAREN_OPEN]       (
65   [FPAREN_CLOSE]      )
65   [NEWLINE]           
65   [BRACE_OPEN]        {
65   [NEWLINE]           
66   [IF]                if
66   [SPAREN_OPEN]       (
66   [WORD]              buf
66   [SQUARE_OPEN]       [
66   [NUMBER]            0
66   [SQUARE_CLOSE]      ]
66   [COMPARE]           ==
66   [STRING]            '~'
66   [BOOL]              &&
66   [FUNC_CALL]         strchr
66   [FPAREN_OPEN]       (
66   [WORD]              tmp
66   [COMMA]             ,
66   [STRING]            '/'
66   [FPAREN_CLOSE]      )
66   [COMPARE]           ==
66   [WORD]              NULL
66   [SPAREN_CLOSE]      )
66   [NEWLINE]           
66   [BRACE_OPEN]        {
66   [NEWLINE]           
67   [WORD]              buf
67   [ASSIGN]            =
67   [FUNC_CALL]         mallocstrcpy
67   [FPAREN_OPEN]       (
67   [WORD]              buf
67   [COMMA]             ,
67   [WORD]              tmp
67   [FPAREN_CLOSE]      )
67   [SEMICOLON]         ;
67   [NEWLINE]           
68   [WORD]              matches
68   [ASSIGN]            =
68   [FUNC_CALL]         username_tab_completion
68   [FPAREN_OPEN]       (
68   [WORD]              tmp
68   [COMMA]             ,
68   [ADDR]              &
68   [WORD]              num_matches
68   [FPAREN_CLOSE]      )
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
70   [COMMENT_MULTI]     /* If we're in the middle of the original line, copy the string␤  only up to the cursor position into buf, so tab completion␤  will result in buf's containing only the tab-completed␤  path/filename. */
73   [NEWLINE]           
74   [ELSE]              else
74   [ELSEIF]            if
74   [SPAREN_OPEN]       (
74   [FUNC_CALL]         strlen
74   [FPAREN_OPEN]       (
74   [WORD]              buf
74   [FPAREN_CLOSE]      )
74   [COMPARE]           >
74   [FUNC_CALL]         strlen
74   [FPAREN_OPEN]       (
74   [WORD]              tmp
74   [FPAREN_CLOSE]      )
74   [SPAREN_CLOSE]      )
74   [VBRACE_OPEN]       
74   [NEWLINE]           
75   [WORD]              buf
75   [ASSIGN]            =
75   [FUNC_CALL]         mallocstrcpy
75   [FPAREN_OPEN]       (
75   [WORD]              buf
75   [COMMA]             ,
75   [WORD]              tmp
75   [FPAREN_CLOSE]      )
75   [SEMICOLON]         ;
75   [VBRACE_CLOSE]      
75   [NEWLINE]           
76   [BRACE_CLOSE]       }
76   [NEWLINE]           
78   [TYPE]              void
78   [FUNC_DEF]          f
78   [FPAREN_OPEN]       (
78   [FPAREN_CLOSE]      )
78   [NEWLINE]           
78   [BRACE_OPEN]        {
78   [NEWLINE]           
78   [BRACE_CLOSE]       }
78   [NEWLINE]           
78   [TYPE]              void
78   [FUNC_DEF]          g
78   [FPAREN_OPEN]       (
78   [FPAREN_CLOSE]      )
78   [NEWLINE]           
78   [BRACE_OPEN]        {
78   [NEWLINE]           
78   [BRACE_CLOSE]       }
78   [NEWLINE]           