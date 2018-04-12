Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [NONE]              void
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              cond_a
3    [IF]                )
3    [IF]                {
3    [NONE]              
4    [NONE]              fcn_a
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              fcn_b
5    [FUNC_CALL]         (
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [IF]                }
6    [NONE]              else
6    [ELSE]              {
6    [NONE]              
7    [NONE]              fcn_c
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [ELSE]              }
8    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              cond_b
10   [IF]                )
10   [IF]                
10   [NONE]              
11   [NONE]              fcn_d
11   [FUNC_CALL]         (
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [IF]                
12   [NONE]              else
12   [ELSE]              
12   [NONE]              
13   [NONE]              fcn_e
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [ELSE]              
14   [NONE]              
16   [NONE]              if
16   [IF]                (
16   [NONE]              cond_c
16   [IF]                )
16   [IF]                {
16   [NONE]              
17   [NONE]              fcn_f
17   [FUNC_CALL]         (
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [NONE]              fcn_g
18   [FUNC_CALL]         (
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [IF]                }
19   [NONE]              else
19   [ELSE]              {
19   [NONE]              
20   [NONE]              fcn_h
20   [FUNC_CALL]         (
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
20   [ELSE]              }
20   [NONE]              
22   [NONE]              if
22   [IF]                (
22   [NONE]              cond_d
22   [IF]                )
22   [IF]                {
22   [NONE]              
23   [NONE]              fcn_i
23   [FUNC_CALL]         (
23   [FUNC_CALL]         )
23   [NONE]              ;
23   [NONE]              
23   [IF]                }
24   [NONE]              else
24   [ELSE]              {
24   [NONE]              
25   [NONE]              fcn_j
25   [FUNC_CALL]         (
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [NONE]              fcn_k
26   [FUNC_CALL]         (
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [ELSE]              }
27   [NONE]              
29   [NONE]              if
29   [IF]                (
29   [NONE]              cond_e
29   [IF]                )
29   [IF]                
29   [NONE]              
30   [NONE]              fcn_l
30   [FUNC_CALL]         (
30   [FUNC_CALL]         )
30   [NONE]              ;
30   [IF]                
30   [NONE]              
31   [NONE]              else
31   [ELSE]              
31   [NONE]              
32   [NONE]              fcn_m
32   [FUNC_CALL]         (
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [ELSE]              
32   [NONE]              
34   [NONE]              if
34   [IF]                (
34   [NONE]              cond_f
34   [IF]                )
34   [IF]                {
34   [NONE]              
35   [NONE]              fcn_n
35   [FUNC_CALL]         (
35   [FUNC_CALL]         )
35   [NONE]              ;
35   [NONE]              
35   [IF]                }
36   [NONE]              else
36   [NONE]              if
36   [ELSEIF]            (
36   [NONE]              cond_g
36   [ELSEIF]            )
36   [ELSEIF]            {
36   [NONE]              
37   [NONE]              fcn_o
37   [FUNC_CALL]         (
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
38   [NONE]              while
38   [WHILE]             (
38   [NONE]              cond_g
38   [WHILE]             )
38   [WHILE]             
38   [NONE]              
39   [NONE]              fcn_p
39   [FUNC_CALL]         (
39   [FUNC_CALL]         )
39   [NONE]              ;
39   [NONE]              
40   [WHILE]             
41   [ELSEIF]            }
41   [NONE]              else
41   [NONE]              if
41   [ELSEIF]            (
41   [NONE]              cond_h
41   [ELSEIF]            )
41   [ELSEIF]            {
41   [NONE]              
42   [NONE]              while
42   [WHILE]             (
42   [NONE]              cond_i
42   [WHILE]             )
42   [WHILE]             {
42   [NONE]              
43   [NONE]              fcn_q
43   [FUNC_CALL]         (
43   [FUNC_CALL]         )
43   [NONE]              ;
43   [NONE]              
44   [NONE]              fcn_r
44   [FUNC_CALL]         (
44   [FUNC_CALL]         )
44   [NONE]              ;
44   [NONE]              
45   [WHILE]             }
45   [NONE]              
45   [ELSEIF]            }
46   [NONE]              else
46   [ELSE]              {
46   [NONE]              
47   [NONE]              fcn_s
47   [FUNC_CALL]         (
47   [FUNC_CALL]         )
47   [NONE]              ;
47   [NONE]              
47   [ELSE]              }
47   [NONE]              
48   [FUNC_DEF]          }
48   [NONE]              
50   [COMMENT_WHOLE]     /* this next bit test whether vbraces can be successfully converted␤ * when the closing brace is in an #ifdef.␤ * Note that the author should have braced the code to begin with.␤ */
53   [NONE]              
54   [FUNC_DEF]          void
54   [NONE]              bar
54   [FUNC_DEF]          (
54   [NONE]              void
54   [FUNC_DEF]          )
54   [NONE]              
55   [FUNC_DEF]          {
55   [NONE]              
56   [NONE]              if
56   [IF]                (
56   [NONE]              jiffies
56   [NONE]              >=
56   [NONE]              hw_priv
56   [NONE]              ->
56   [NONE]              Counter
56   [NONE]              [
56   [NONE]              port
56   [NONE]              ]
56   [NONE]              .
56   [NONE]              time
56   [IF]                )
56   [IF]                {
56   [NONE]              
57   [NONE]              hw_priv
57   [NONE]              ->
57   [NONE]              Counter
57   [NONE]              [
57   [NONE]              port
57   [NONE]              ]
57   [NONE]              .
57   [NONE]              fRead
57   [NONE]              =
57   [NONE]              1
57   [NONE]              ;
57   [NONE]              
58   [NONE]              if
58   [IF]                (
58   [NONE]              port
58   [NONE]              ==
58   [NONE]              MAIN_PORT
58   [IF]                )
58   [IF]                
58   [NONE]              
59   [NONE]              hw_priv
59   [NONE]              ->
59   [NONE]              Counter
59   [NONE]              [
59   [NONE]              MAIN_PORT
59   [NONE]              ]
59   [NONE]              .
59   [NONE]              time
59   [NONE]              =
59   [NONE]              jiffies
59   [NONE]              +
59   [NONE]              HZ
59   [NONE]              *
59   [NONE]              6
59   [NONE]              ;
59   [NONE]              
60   [IF]                
60   [NONE]              else
60   [ELSE]              
60   [NONE]              
61   [NONE]              hw_priv
61   [NONE]              ->
61   [NONE]              Counter
61   [NONE]              [
61   [NONE]              port
61   [NONE]              ]
61   [NONE]              .
61   [NONE]              time
61   [NONE]              =
61   [NONE]              
63   [PP_IF]             #
63   [NONE]              ifdef
63   [NONE]              SOME_DEFINE
63   [NONE]              
64   [NONE]              hw_priv
64   [NONE]              ->
64   [NONE]              Counter
64   [NONE]              [
64   [NONE]              port
64   [NONE]              -
64   [NONE]              1
64   [NONE]              ]
64   [NONE]              .
64   [NONE]              time
64   [NONE]              +
64   [NONE]              HZ
64   [NONE]              *
64   [NONE]              2
64   [NONE]              ;
64   [ELSE]              
64   [NONE]              
66   [PP_ELSE]           #
66   [NONE]              else
66   [COMMENT_END]       /* ifdef SOME_DEFINE */
66   [NONE]              
67   [NONE]              hw_priv
67   [NONE]              ->
67   [NONE]              Counter
67   [NONE]              [
67   [NONE]              MAIN_PORT
67   [NONE]              ]
67   [NONE]              .
67   [NONE]              time
67   [NONE]              +
67   [NONE]              HZ
67   [NONE]              *
67   [NONE]              2
67   [NONE]              ;
67   [ELSE]              
67   [NONE]              
68   [PP_ENDIF]          #
68   [NONE]              endif
68   [COMMENT_END]       /* ifdef SOME_DEFINE */
68   [NONE]              
69   [IF]                }
69   [NONE]              
70   [FUNC_DEF]          }
70   [NONE]              
72   [FUNC_DEF]          void
72   [NONE]              funct
72   [FUNC_DEF]          (
72   [NONE]              int
72   [NONE]              v1
72   [NONE]              ,
72   [NONE]              int
72   [NONE]              v2
72   [NONE]              ,
72   [NONE]              int
72   [NONE]              v3
72   [FUNC_DEF]          )
72   [NONE]              
73   [FUNC_DEF]          {
73   [NONE]              
74   [NONE]              if
74   [IF]                (
74   [NONE]              v1
74   [IF]                )
75   [IF]                {
75   [NONE]              
76   [NONE]              if
76   [IF]                (
76   [NONE]              v2
76   [IF]                )
76   [IF]                
76   [NONE]              f1
76   [FUNC_CALL]         (
76   [FUNC_CALL]         )
76   [NONE]              ;
76   [IF]                
76   [NONE]              
77   [IF]                }
78   [NONE]              else
79   [ELSE]              {
79   [NONE]              
80   [NONE]              if
80   [IF]                (
80   [NONE]              v3
80   [IF]                )
80   [IF]                
80   [NONE]              f2
80   [FUNC_CALL]         (
80   [FUNC_CALL]         )
80   [NONE]              ;
80   [IF]                
80   [NONE]              
81   [ELSE]              }
81   [NONE]              
82   [FUNC_DEF]          }
82   [NONE]              