Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          void
2    [NONE]              foo
2    [FUNC_DEF]          (
2    [NONE]              void
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              int
4    [NONE]              a
4    [NONE]              =
4    [NONE]              0
4    [NONE]              ;
4    [NONE]              
5    [NONE]              while
5    [WHILE]             (
5    [NONE]              a
5    [NONE]              <
5    [NONE]              3
5    [WHILE]             )
6    [WHILE]             
6    [NONE]              
7    [NONE]              a
7    [NONE]              ++
7    [NONE]              ;
7    [NONE]              
8    [WHILE]             
8    [NONE]              
10   [NONE]              while
10   [WHILE]             (
10   [NONE]              b
10   [NONE]              <
10   [NONE]              a
10   [WHILE]             )
10   [WHILE]             
10   [NONE]              
11   [NONE]              b
11   [NONE]              ++
11   [NONE]              ;
11   [WHILE]             
11   [NONE]              
13   [NONE]              do
14   [DO]                
14   [NONE]              
15   [NONE]              a
15   [NONE]              --
15   [NONE]              ;
15   [NONE]              
16   [DO]                
16   [NONE]              while
16   [WHILE_OF_DO]       (
16   [NONE]              a
16   [NONE]              >
16   [NONE]              0
16   [WHILE_OF_DO]       )
16   [WHILE_OF_DO]       ;
16   [NONE]              
18   [NONE]              for
18   [FOR]               (
18   [NONE]              a
18   [NONE]              =
18   [NONE]              0
18   [FOR]               ;
18   [NONE]              a
18   [NONE]              <
18   [NONE]              10
18   [FOR]               ;
18   [NONE]              a
18   [NONE]              ++
18   [FOR]               )
19   [FOR]               
19   [NONE]              
20   [NONE]              printf
20   [FUNC_CALL]         (
20   [NONE]              "a=%d\n"
20   [NONE]              ,
20   [NONE]              a
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [FOR]               
21   [NONE]              
23   [NONE]              if
23   [IF]                (
23   [NONE]              a
23   [NONE]              ==
23   [NONE]              10
23   [IF]                )
24   [IF]                
24   [NONE]              
25   [NONE]              printf
25   [FUNC_CALL]         (
25   [NONE]              "a looks good\n"
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [IF]                
26   [NONE]              
28   [NONE]              if
28   [IF]                (
28   [NONE]              state
28   [NONE]              ==
28   [NONE]              ST_RUN
28   [IF]                )
28   [NONE]              
29   [IF]                {
29   [NONE]              
30   [NONE]              if
30   [IF]                (
30   [NONE]              (
30   [NONE]              foo
30   [NONE]              <
30   [NONE]              bar
30   [NONE]              )
30   [NONE]              &&
30   [NONE]              
31   [NONE]              (
31   [NONE]              bar
31   [NONE]              >
31   [NONE]              foo2
31   [NONE]              )
31   [IF]                )
31   [NONE]              
32   [IF]                {
32   [NONE]              
33   [NONE]              if
33   [IF]                (
33   [NONE]              a
33   [NONE]              <
33   [NONE]              5
33   [IF]                )
34   [IF]                
34   [NONE]              
35   [NONE]              a
35   [NONE]              *=
35   [NONE]              a
35   [NONE]              ;
35   [NONE]              
36   [IF]                
37   [IF]                }
37   [NONE]              
38   [IF]                }
38   [NONE]              
40   [NONE]              while
40   [WHILE]             (
40   [NONE]              *
40   [NONE]              ptr
40   [NONE]              ++
40   [NONE]              !=
40   [NONE]              ','
40   [WHILE]             )
40   [NONE]              
41   [WHILE]             {
41   [NONE]              
42   [WHILE]             }
42   [NONE]              
43   [FUNC_DEF]          }
43   [NONE]              
45   [COMMENT_WHOLE]     // mod_full_brace_for = remove should not remove the braces in this example:
45   [NONE]              
46   [FUNC_DEF]          int
46   [NONE]              main
46   [FUNC_DEF]          (
46   [FUNC_DEF]          )
46   [FUNC_DEF]          {
46   [NONE]              
47   [NONE]              if
47   [IF]                (
47   [NONE]              true
47   [IF]                )
47   [IF]                
47   [COMMENT_END]       // indent=1
47   [NONE]              
48   [NONE]              for
48   [FOR]               (
48   [NONE]              int
48   [NONE]              i
48   [NONE]              =
48   [NONE]              0
48   [FOR]               ;
48   [NONE]              i
48   [NONE]              <
48   [NONE]              3
48   [FOR]               ;
48   [NONE]              i
48   [NONE]              ++
48   [FOR]               )
48   [FOR]               {
48   [NONE]              
49   [NONE]              if
49   [IF]                (
49   [NONE]              false
49   [IF]                )
49   [IF]                
49   [NONE]              
50   [NONE]              continue
50   [NONE]              ;
50   [IF]                
50   [COMMENT_END]       // indent=4
50   [NONE]              
51   [FOR]               }
51   [IF]                
51   [NONE]              
52   [NONE]              else
52   [ELSE]              
52   [NONE]              
53   [NONE]              return
53   [NONE]              ;
53   [ELSE]              
53   [COMMENT_END]       // indent=2
53   [NONE]              
54   [FUNC_DEF]          }
54   [NONE]              
56   [COMMENT_WHOLE]     // mod_full_brace_if = remove should not remove the braces in this example:
56   [NONE]              
57   [FUNC_DEF]          int
57   [NONE]              main
57   [FUNC_DEF]          (
57   [FUNC_DEF]          )
57   [FUNC_DEF]          {
57   [NONE]              
58   [NONE]              if
58   [IF]                (
58   [NONE]              true
58   [IF]                )
58   [IF]                {
58   [NONE]              
59   [NONE]              for
59   [FOR]               (
59   [NONE]              int
59   [NONE]              i
59   [NONE]              =
59   [NONE]              0
59   [FOR]               ;
59   [NONE]              i
59   [NONE]              <
59   [NONE]              3
59   [FOR]               ;
59   [NONE]              i
59   [NONE]              ++
59   [FOR]               )
59   [FOR]               
59   [NONE]              
60   [NONE]              if
60   [IF]                (
60   [NONE]              false
60   [IF]                )
60   [IF]                
60   [NONE]              
61   [NONE]              continue
61   [NONE]              ;
61   [IF]                
61   [FOR]               
61   [COMMENT_END]       // indent=4
61   [NONE]              
62   [IF]                }
62   [NONE]              
63   [NONE]              else
63   [ELSE]              
63   [NONE]              
64   [NONE]              return
64   [NONE]              ;
64   [ELSE]              
64   [COMMENT_END]       // indent=2
64   [NONE]              
65   [FUNC_DEF]          }
65   [NONE]              
67   [FUNC_DEF]          int
67   [NONE]              main
67   [FUNC_DEF]          (
67   [FUNC_DEF]          )
67   [NONE]              
68   [FUNC_DEF]          {
68   [NONE]              
69   [NONE]              while
69   [WHILE]             (
69   [NONE]              1
69   [WHILE]             )
69   [WHILE]             {
69   [NONE]              
70   [NONE]              if
70   [IF]                (
70   [NONE]              0
70   [IF]                )
70   [IF]                
70   [NONE]              
71   [NONE]              break
71   [NONE]              ;
71   [IF]                
71   [NONE]              
72   [NONE]              switch
72   [SWITCH]            (
72   [NONE]              1
72   [SWITCH]            )
72   [SWITCH]            {
72   [NONE]              
73   [NONE]              case
73   [NONE]              1
73   [NONE]              :
73   [NONE]              
74   [NONE]              break
74   [NONE]              ;
74   [NONE]              
75   [SWITCH]            }
75   [NONE]              
76   [WHILE]             }
76   [NONE]              
77   [NONE]              return
77   [NONE]              0
77   [NONE]              ;
77   [NONE]              
78   [FUNC_DEF]          }
78   [NONE]              