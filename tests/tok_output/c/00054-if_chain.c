Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              cond_a
3    [SPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [FUNC_CALL]         fcn_a
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [FUNC_CALL]         fcn_b
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [ELSE]              else
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL]         fcn_c
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              cond_b
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
10   [NEWLINE]           
11   [FUNC_CALL]         fcn_d
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [VBRACE_CLOSE]      
12   [ELSE]              else
12   [VBRACE_OPEN]       
12   [NEWLINE]           
13   [FUNC_CALL]         fcn_e
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [VBRACE_CLOSE]      
14   [NEWLINE]           
16   [IF]                if
16   [SPAREN_OPEN]       (
16   [WORD]              cond_c
16   [SPAREN_CLOSE]      )
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [FUNC_CALL]         fcn_f
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [FUNC_CALL]         fcn_g
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [ELSE]              else
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [FUNC_CALL]         fcn_h
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
22   [IF]                if
22   [SPAREN_OPEN]       (
22   [WORD]              cond_d
22   [SPAREN_CLOSE]      )
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [FUNC_CALL]         fcn_i
23   [FPAREN_OPEN]       (
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [NEWLINE]           
23   [BRACE_CLOSE]       }
24   [ELSE]              else
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [FUNC_CALL]         fcn_j
25   [FPAREN_OPEN]       (
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [FUNC_CALL]         fcn_k
26   [FPAREN_OPEN]       (
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [IF]                if
29   [SPAREN_OPEN]       (
29   [WORD]              cond_e
29   [SPAREN_CLOSE]      )
29   [VBRACE_OPEN]       
29   [NEWLINE]           
30   [FUNC_CALL]         fcn_l
30   [FPAREN_OPEN]       (
30   [FPAREN_CLOSE]      )
30   [SEMICOLON]         ;
30   [VBRACE_CLOSE]      
30   [NEWLINE]           
31   [ELSE]              else
31   [VBRACE_OPEN]       
31   [NEWLINE]           
32   [FUNC_CALL]         fcn_m
32   [FPAREN_OPEN]       (
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [VBRACE_CLOSE]      
32   [NEWLINE]           
34   [IF]                if
34   [SPAREN_OPEN]       (
34   [WORD]              cond_f
34   [SPAREN_CLOSE]      )
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [FUNC_CALL]         fcn_n
35   [FPAREN_OPEN]       (
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
35   [BRACE_CLOSE]       }
36   [ELSE]              else
36   [ELSEIF]            if
36   [SPAREN_OPEN]       (
36   [WORD]              cond_g
36   [SPAREN_CLOSE]      )
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [FUNC_CALL]         fcn_o
37   [FPAREN_OPEN]       (
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [WHILE]             while
38   [SPAREN_OPEN]       (
38   [WORD]              cond_g
38   [SPAREN_CLOSE]      )
38   [VBRACE_OPEN]       
38   [NEWLINE]           
39   [FUNC_CALL]         fcn_p
39   [FPAREN_OPEN]       (
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [VBRACE_CLOSE]      
41   [BRACE_CLOSE]       }
41   [ELSE]              else
41   [ELSEIF]            if
41   [SPAREN_OPEN]       (
41   [WORD]              cond_h
41   [SPAREN_CLOSE]      )
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [WHILE]             while
42   [SPAREN_OPEN]       (
42   [WORD]              cond_i
42   [SPAREN_CLOSE]      )
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [FUNC_CALL]         fcn_q
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [FUNC_CALL]         fcn_r
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
45   [BRACE_CLOSE]       }
46   [ELSE]              else
46   [BRACE_OPEN]        {
46   [NEWLINE]           
47   [FUNC_CALL]         fcn_s
47   [FPAREN_OPEN]       (
47   [FPAREN_CLOSE]      )
47   [SEMICOLON]         ;
47   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
50   [COMMENT_MULTI]     /* this next bit test whether vbraces can be successfully converted␤ * when the closing brace is in an #ifdef.␤ * Note that the author should have braced the code to begin with.␤ */
53   [NEWLINE]           
54   [TYPE]              void
54   [FUNC_DEF]          bar
54   [FPAREN_OPEN]       (
54   [TYPE]              void
54   [FPAREN_CLOSE]      )
54   [NEWLINE]           
55   [BRACE_OPEN]        {
55   [NEWLINE]           
56   [IF]                if
56   [SPAREN_OPEN]       (
56   [WORD]              jiffies
56   [COMPARE]           >=
56   [WORD]              hw_priv
56   [MEMBER]            ->
56   [WORD]              Counter
56   [SQUARE_OPEN]       [
56   [WORD]              port
56   [SQUARE_CLOSE]      ]
56   [MEMBER]            .
56   [WORD]              time
56   [SPAREN_CLOSE]      )
56   [BRACE_OPEN]        {
56   [NEWLINE]           
57   [TYPE]              hw_priv
57   [MEMBER]            ->
57   [WORD]              Counter
57   [SQUARE_OPEN]       [
57   [WORD]              port
57   [SQUARE_CLOSE]      ]
57   [MEMBER]            .
57   [WORD]              fRead
57   [ASSIGN]            =
57   [NUMBER]            1
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [IF]                if
58   [SPAREN_OPEN]       (
58   [WORD]              port
58   [COMPARE]           ==
58   [WORD]              MAIN_PORT
58   [SPAREN_CLOSE]      )
58   [VBRACE_OPEN]       
58   [NEWLINE]           
59   [TYPE]              hw_priv
59   [MEMBER]            ->
59   [WORD]              Counter
59   [SQUARE_OPEN]       [
59   [WORD]              MAIN_PORT
59   [SQUARE_CLOSE]      ]
59   [MEMBER]            .
59   [WORD]              time
59   [ASSIGN]            =
59   [WORD]              jiffies
59   [ARITH]             +
59   [WORD]              HZ
59   [ARITH]             *
59   [NUMBER]            6
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [VBRACE_CLOSE]      
60   [ELSE]              else
60   [VBRACE_OPEN]       
60   [NEWLINE]           
61   [TYPE]              hw_priv
61   [MEMBER]            ->
61   [WORD]              Counter
61   [SQUARE_OPEN]       [
61   [WORD]              port
61   [SQUARE_CLOSE]      ]
61   [MEMBER]            .
61   [WORD]              time
61   [ASSIGN]            =
61   [NEWLINE]           
63   [PREPROC]           #
63   [PP_IF]             ifdef
63   [TYPE]              SOME_DEFINE
63   [NEWLINE]           
64   [WORD]              hw_priv
64   [MEMBER]            ->
64   [WORD]              Counter
64   [SQUARE_OPEN]       [
64   [WORD]              port
64   [ARITH]             -
64   [NUMBER]            1
64   [SQUARE_CLOSE]      ]
64   [MEMBER]            .
64   [WORD]              time
64   [ARITH]             +
64   [WORD]              HZ
64   [ARITH]             *
64   [NUMBER]            2
64   [SEMICOLON]         ;
64   [VBRACE_CLOSE]      
64   [NEWLINE]           
66   [PREPROC]           #
66   [PP_ELSE]           else
66   [COMMENT]           /* ifdef SOME_DEFINE */
66   [NEWLINE]           
67   [WORD]              hw_priv
67   [MEMBER]            ->
67   [WORD]              Counter
67   [SQUARE_OPEN]       [
67   [WORD]              MAIN_PORT
67   [SQUARE_CLOSE]      ]
67   [MEMBER]            .
67   [WORD]              time
67   [ARITH]             +
67   [WORD]              HZ
67   [ARITH]             *
67   [NUMBER]            2
67   [SEMICOLON]         ;
67   [VBRACE_CLOSE]      
67   [NEWLINE]           
68   [PREPROC]           #
68   [PP_ENDIF]          endif
68   [COMMENT]           /* ifdef SOME_DEFINE */
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
70   [BRACE_CLOSE]       }
70   [NEWLINE]           
72   [TYPE]              void
72   [FUNC_DEF]          funct
72   [FPAREN_OPEN]       (
72   [TYPE]              int
72   [WORD]              v1
72   [COMMA]             ,
72   [TYPE]              int
72   [WORD]              v2
72   [COMMA]             ,
72   [TYPE]              int
72   [WORD]              v3
72   [FPAREN_CLOSE]      )
72   [NEWLINE]           
73   [BRACE_OPEN]        {
73   [NEWLINE]           
74   [IF]                if
74   [SPAREN_OPEN]       (
74   [WORD]              v1
74   [SPAREN_CLOSE]      )
75   [BRACE_OPEN]        {
75   [NEWLINE]           
76   [IF]                if
76   [SPAREN_OPEN]       (
76   [WORD]              v2
76   [SPAREN_CLOSE]      )
76   [VBRACE_OPEN]       
76   [FUNC_CALL]         f1
76   [FPAREN_OPEN]       (
76   [FPAREN_CLOSE]      )
76   [SEMICOLON]         ;
76   [VBRACE_CLOSE]      
76   [NEWLINE]           
77   [BRACE_CLOSE]       }
78   [ELSE]              else
79   [BRACE_OPEN]        {
79   [NEWLINE]           
80   [IF]                if
80   [SPAREN_OPEN]       (
80   [WORD]              v3
80   [SPAREN_CLOSE]      )
80   [VBRACE_OPEN]       
80   [FUNC_CALL]         f2
80   [FPAREN_OPEN]       (
80   [FPAREN_CLOSE]      )
80   [SEMICOLON]         ;
80   [VBRACE_CLOSE]      
80   [NEWLINE]           
81   [BRACE_CLOSE]       }
81   [NEWLINE]           
82   [BRACE_CLOSE]       }
82   [NEWLINE]           