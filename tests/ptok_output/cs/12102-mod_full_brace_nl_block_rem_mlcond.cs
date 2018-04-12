Line [Parent]            Text
1    [COMMENT_WHOLE]     // mod_full_brace_nl_block_rem_mlcond should block brace removal here
1    [NONE]              
2    [NONE]              if
2    [IF]                (
2    [NONE]              a
2    [NONE]              ==
2    [NONE]              true
2    [NONE]              
3    [NONE]              &&
3    [NONE]              b
3    [NONE]              ==
3    [NONE]              false
3    [IF]                )
3    [NONE]              
4    [IF]                {
4    [NONE]              
5    [NONE]              return
5    [NONE]              1
5    [NONE]              ;
5    [NONE]              
6    [IF]                }
6    [NONE]              
7    [NONE]              else
7    [NONE]              if
7    [ELSEIF]            (
7    [NONE]              a
7    [NONE]              ==
7    [NONE]              true
7    [NONE]              
8    [NONE]              &&
8    [NONE]              b
8    [NONE]              ==
8    [NONE]              false
8    [ELSEIF]            )
8    [NONE]              
9    [ELSEIF]            {
9    [NONE]              
10   [NONE]              return
10   [NONE]              2
10   [NONE]              ;
10   [NONE]              
11   [ELSEIF]            }
11   [NONE]              
12   [COMMENT_WHOLE]     // except here as there are no parenthesis
12   [NONE]              
13   [NONE]              else
14   [ELSE]              
14   [NONE]              
15   [NONE]              return
15   [NONE]              3
15   [NONE]              ;
15   [NONE]              
16   [ELSE]              
16   [NONE]              
19   [NONE]              if
19   [IF]                (
19   [NONE]              a
19   [NONE]              ==
19   [NONE]              true
19   [NONE]              ;
19   [NONE]              
20   [NONE]              b
20   [NONE]              ==
20   [NONE]              true
20   [NONE]              ;
20   [NONE]              
21   [NONE]              c
21   [NONE]              ==
21   [NONE]              true
21   [IF]                )
21   [NONE]              
22   [IF]                {
22   [NONE]              
23   [NONE]              return
23   [NONE]              1
23   [NONE]              ;
23   [NONE]              
24   [IF]                }
24   [NONE]              
26   [NONE]              for
26   [FOR]               (
26   [NONE]              a
26   [NONE]              =
26   [NONE]              true
26   [FOR]               ;
26   [NONE]              
27   [NONE]              a
27   [NONE]              <
27   [NONE]              9
27   [FOR]               ;
27   [NONE]              
28   [NONE]              a
28   [NONE]              ++
28   [FOR]               )
28   [NONE]              
29   [FOR]               {
29   [NONE]              
30   [NONE]              return
30   [NONE]              1
30   [NONE]              ;
30   [NONE]              
31   [FOR]               }
31   [NONE]              
33   [NONE]              while
33   [WHILE]             (
33   [NONE]              a
33   [NONE]              ==
33   [NONE]              true
33   [NONE]              
34   [NONE]              &&
34   [NONE]              b
34   [NONE]              ==
34   [NONE]              true
34   [NONE]              
35   [NONE]              &&
35   [NONE]              c
35   [NONE]              ==
35   [NONE]              true
35   [WHILE]             )
35   [NONE]              
36   [WHILE]             {
36   [NONE]              
37   [NONE]              return
37   [NONE]              1
37   [NONE]              ;
37   [NONE]              
38   [WHILE]             }
38   [NONE]              
40   [NONE]              using
40   [USING_STMT]        (
40   [NONE]              Foo
40   [NONE]              bar
40   [NONE]              =
40   [NONE]              
41   [NONE]              new
41   [NONE]              Foo
41   [FUNC_CALL]         (
41   [FUNC_CALL]         )
41   [USING_STMT]        )
41   [NONE]              
42   [USING_STMT]        {
42   [NONE]              
43   [NONE]              return
43   [NONE]              1
43   [NONE]              ;
43   [NONE]              
44   [USING_STMT]        }
44   [NONE]              
48   [COMMENT_WHOLE]     // mod_full_brace_nl_block_rem_mlcond should not block brace removal here
48   [NONE]              
49   [NONE]              if
49   [IF]                (
49   [NONE]              a
49   [NONE]              ==
49   [NONE]              true
49   [NONE]              &&
49   [NONE]              b
49   [NONE]              ==
49   [NONE]              false
49   [IF]                )
50   [IF]                
50   [NONE]              
51   [NONE]              return
51   [NONE]              1
51   [NONE]              ;
51   [NONE]              
52   [IF]                
53   [NONE]              else
53   [NONE]              if
53   [ELSEIF]            (
53   [NONE]              a
53   [NONE]              ==
53   [NONE]              true
53   [NONE]              &&
53   [NONE]              b
53   [NONE]              ==
53   [NONE]              false
53   [ELSEIF]            )
54   [ELSEIF]            
54   [NONE]              
55   [NONE]              return
55   [NONE]              2
55   [NONE]              ;
55   [NONE]              
56   [ELSEIF]            
57   [NONE]              else
58   [ELSE]              
58   [NONE]              
59   [NONE]              return
59   [NONE]              3
59   [NONE]              ;
59   [NONE]              
60   [ELSE]              
60   [NONE]              
63   [NONE]              if
63   [IF]                (
63   [NONE]              a
63   [NONE]              ==
63   [NONE]              true
63   [NONE]              ;
63   [NONE]              b
63   [NONE]              ==
63   [NONE]              true
63   [NONE]              ;
63   [NONE]              c
63   [NONE]              ==
63   [NONE]              true
63   [IF]                )
64   [IF]                
64   [NONE]              
65   [NONE]              return
65   [NONE]              1
65   [NONE]              ;
65   [NONE]              
66   [IF]                
66   [NONE]              
68   [NONE]              for
68   [FOR]               (
68   [NONE]              a
68   [NONE]              =
68   [NONE]              true
68   [FOR]               ;
68   [NONE]              a
68   [NONE]              <
68   [NONE]              9
68   [FOR]               ;
68   [NONE]              a
68   [NONE]              ++
68   [FOR]               )
69   [FOR]               
69   [NONE]              
70   [NONE]              return
70   [NONE]              1
70   [NONE]              ;
70   [NONE]              
71   [FOR]               
71   [NONE]              
73   [NONE]              while
73   [WHILE]             (
73   [NONE]              a
73   [NONE]              ==
73   [NONE]              true
73   [NONE]              &&
73   [NONE]              b
73   [NONE]              ==
73   [NONE]              true
73   [NONE]              &&
73   [NONE]              c
73   [NONE]              ==
73   [NONE]              true
73   [WHILE]             )
74   [WHILE]             
74   [NONE]              
75   [NONE]              return
75   [NONE]              1
75   [NONE]              ;
75   [NONE]              
76   [WHILE]             
76   [NONE]              
78   [NONE]              using
78   [USING_STMT]        (
78   [NONE]              Foo
78   [NONE]              bar
78   [NONE]              =
78   [NONE]              new
78   [NONE]              Foo
78   [FUNC_CALL]         (
78   [FUNC_CALL]         )
78   [USING_STMT]        )
79   [USING_STMT]        
79   [NONE]              
80   [NONE]              return
80   [NONE]              1
80   [NONE]              ;
80   [NONE]              
81   [USING_STMT]        