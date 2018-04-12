Line [Token]             Text
1    [COMMENT_CPP]       // mod_full_brace_nl_block_rem_mlcond should block brace removal here
1    [NEWLINE]           
2    [IF]                if
2    [SPAREN_OPEN]       (
2    [WORD]              a
2    [COMPARE]           ==
2    [WORD]              true
2    [NEWLINE]           
3    [BOOL]              &&
3    [WORD]              b
3    [COMPARE]           ==
3    [WORD]              false
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [RETURN]            return
5    [NUMBER]            1
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [ELSE]              else
7    [ELSEIF]            if
7    [SPAREN_OPEN]       (
7    [WORD]              a
7    [COMPARE]           ==
7    [WORD]              true
7    [NEWLINE]           
8    [BOOL]              &&
8    [WORD]              b
8    [COMPARE]           ==
8    [WORD]              false
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [RETURN]            return
10   [NUMBER]            2
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [COMMENT_CPP]       // except here as there are no parenthesis
12   [NEWLINE]           
13   [ELSE]              else
14   [VBRACE_OPEN]       
14   [NEWLINE]           
15   [RETURN]            return
15   [NUMBER]            3
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [VBRACE_CLOSE]      
16   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [WORD]              a
19   [COMPARE]           ==
19   [WORD]              true
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [WORD]              b
20   [COMPARE]           ==
20   [WORD]              true
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [WORD]              c
21   [COMPARE]           ==
21   [WORD]              true
21   [SPAREN_CLOSE]      )
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [RETURN]            return
23   [NUMBER]            1
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
26   [FOR]               for
26   [SPAREN_OPEN]       (
26   [WORD]              a
26   [ASSIGN]            =
26   [WORD]              true
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [WORD]              a
27   [COMPARE]           <
27   [NUMBER]            9
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [WORD]              a
28   [INCDEC_AFTER]      ++
28   [SPAREN_CLOSE]      )
28   [NEWLINE]           
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [RETURN]            return
30   [NUMBER]            1
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
33   [WHILE]             while
33   [SPAREN_OPEN]       (
33   [WORD]              a
33   [COMPARE]           ==
33   [WORD]              true
33   [NEWLINE]           
34   [BOOL]              &&
34   [WORD]              b
34   [COMPARE]           ==
34   [WORD]              true
34   [NEWLINE]           
35   [BOOL]              &&
35   [WORD]              c
35   [COMPARE]           ==
35   [WORD]              true
35   [SPAREN_CLOSE]      )
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [RETURN]            return
37   [NUMBER]            1
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [NEWLINE]           
40   [USING_STMT]        using
40   [SPAREN_OPEN]       (
40   [TYPE]              Foo
40   [WORD]              bar
40   [ASSIGN]            =
40   [NEWLINE]           
41   [NEW]               new
41   [FUNC_CALL]         Foo
41   [FPAREN_OPEN]       (
41   [FPAREN_CLOSE]      )
41   [SPAREN_CLOSE]      )
41   [NEWLINE]           
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [RETURN]            return
43   [NUMBER]            1
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
48   [COMMENT_CPP]       // mod_full_brace_nl_block_rem_mlcond should not block brace removal here
48   [NEWLINE]           
49   [IF]                if
49   [SPAREN_OPEN]       (
49   [WORD]              a
49   [COMPARE]           ==
49   [WORD]              true
49   [BOOL]              &&
49   [WORD]              b
49   [COMPARE]           ==
49   [WORD]              false
49   [SPAREN_CLOSE]      )
50   [VBRACE_OPEN]       
50   [NEWLINE]           
51   [RETURN]            return
51   [NUMBER]            1
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [VBRACE_CLOSE]      
53   [ELSE]              else
53   [ELSEIF]            if
53   [SPAREN_OPEN]       (
53   [WORD]              a
53   [COMPARE]           ==
53   [WORD]              true
53   [BOOL]              &&
53   [WORD]              b
53   [COMPARE]           ==
53   [WORD]              false
53   [SPAREN_CLOSE]      )
54   [VBRACE_OPEN]       
54   [NEWLINE]           
55   [RETURN]            return
55   [NUMBER]            2
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [VBRACE_CLOSE]      
57   [ELSE]              else
58   [VBRACE_OPEN]       
58   [NEWLINE]           
59   [RETURN]            return
59   [NUMBER]            3
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [VBRACE_CLOSE]      
60   [NEWLINE]           
63   [IF]                if
63   [SPAREN_OPEN]       (
63   [WORD]              a
63   [COMPARE]           ==
63   [WORD]              true
63   [SEMICOLON]         ;
63   [WORD]              b
63   [COMPARE]           ==
63   [WORD]              true
63   [SEMICOLON]         ;
63   [WORD]              c
63   [COMPARE]           ==
63   [WORD]              true
63   [SPAREN_CLOSE]      )
64   [VBRACE_OPEN]       
64   [NEWLINE]           
65   [RETURN]            return
65   [NUMBER]            1
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [VBRACE_CLOSE]      
66   [NEWLINE]           
68   [FOR]               for
68   [SPAREN_OPEN]       (
68   [WORD]              a
68   [ASSIGN]            =
68   [WORD]              true
68   [SEMICOLON]         ;
68   [WORD]              a
68   [COMPARE]           <
68   [NUMBER]            9
68   [SEMICOLON]         ;
68   [WORD]              a
68   [INCDEC_AFTER]      ++
68   [SPAREN_CLOSE]      )
69   [VBRACE_OPEN]       
69   [NEWLINE]           
70   [RETURN]            return
70   [NUMBER]            1
70   [SEMICOLON]         ;
70   [NEWLINE]           
71   [VBRACE_CLOSE]      
71   [NEWLINE]           
73   [WHILE]             while
73   [SPAREN_OPEN]       (
73   [WORD]              a
73   [COMPARE]           ==
73   [WORD]              true
73   [BOOL]              &&
73   [WORD]              b
73   [COMPARE]           ==
73   [WORD]              true
73   [BOOL]              &&
73   [WORD]              c
73   [COMPARE]           ==
73   [WORD]              true
73   [SPAREN_CLOSE]      )
74   [VBRACE_OPEN]       
74   [NEWLINE]           
75   [RETURN]            return
75   [NUMBER]            1
75   [SEMICOLON]         ;
75   [NEWLINE]           
76   [VBRACE_CLOSE]      
76   [NEWLINE]           
78   [USING_STMT]        using
78   [SPAREN_OPEN]       (
78   [TYPE]              Foo
78   [WORD]              bar
78   [ASSIGN]            =
78   [NEW]               new
78   [FUNC_CALL]         Foo
78   [FPAREN_OPEN]       (
78   [FPAREN_CLOSE]      )
78   [SPAREN_CLOSE]      )
79   [VBRACE_OPEN]       
79   [NEWLINE]           
80   [RETURN]            return
80   [NUMBER]            1
80   [SEMICOLON]         ;
80   [NEWLINE]           
81   [VBRACE_CLOSE]      