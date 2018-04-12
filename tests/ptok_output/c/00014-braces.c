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
6    [WHILE]             {
6    [NONE]              
7    [NONE]              a
7    [NONE]              ++
7    [NONE]              ;
7    [NONE]              
8    [WHILE]             }
8    [NONE]              
10   [NONE]              while
10   [WHILE]             (
10   [NONE]              b
10   [NONE]              <
10   [NONE]              a
10   [WHILE]             )
10   [WHILE]             
10   [COMMENT_END]       // trailing C++ comment
10   [NONE]              
11   [NONE]              b
11   [NONE]              ++
11   [NONE]              ;
11   [WHILE]             
11   [NONE]              
13   [NONE]              do
14   [DO]                {
13   [COMMENT_END]       // trailing C++ comment
14   [NONE]              
15   [NONE]              a
15   [NONE]              --
15   [NONE]              ;
15   [NONE]              
16   [DO]                }
16   [NONE]              while
16   [WHILE_OF_DO]       (
16   [NONE]              a
16   [NONE]              >
16   [NONE]              0
16   [WHILE_OF_DO]       )
16   [WHILE_OF_DO]       ;
16   [NONE]              
18   [NONE]              do
18   [DO]                
18   [NONE]              
19   [NONE]              a
19   [NONE]              --
19   [NONE]              ;
19   [DO]                
19   [NONE]              
20   [NONE]              while
20   [WHILE_OF_DO]       (
20   [NONE]              a
20   [NONE]              >
20   [NONE]              0
20   [WHILE_OF_DO]       )
20   [WHILE_OF_DO]       ;
20   [NONE]              
22   [NONE]              for
22   [FOR]               (
22   [NONE]              a
22   [NONE]              =
22   [NONE]              0
22   [FOR]               ;
22   [NONE]              a
22   [NONE]              <
22   [NONE]              10
22   [FOR]               ;
22   [NONE]              a
22   [NONE]              ++
22   [FOR]               )
23   [FOR]               {
22   [COMMENT_END]       // trailing C++ comment
23   [NONE]              
24   [NONE]              printf
24   [FUNC_CALL]         (
24   [NONE]              "a=%d\n"
24   [NONE]              ,
24   [NONE]              a
24   [FUNC_CALL]         )
24   [NONE]              ;
24   [NONE]              
25   [FOR]               }
25   [NONE]              
27   [NONE]              if
27   [IF]                (
27   [NONE]              a
27   [NONE]              ==
27   [NONE]              10
27   [IF]                )
28   [IF]                {
27   [COMMENT_END]       // trailing C++ comment
28   [NONE]              
29   [NONE]              printf
29   [FUNC_CALL]         (
29   [NONE]              "a looks good\n"
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [IF]                }
31   [NONE]              else
32   [ELSE]              {
31   [COMMENT_END]       // trailing C++ comment
32   [NONE]              
33   [NONE]              printf
33   [FUNC_CALL]         (
33   [NONE]              "not so good\n"
33   [FUNC_CALL]         )
33   [NONE]              ;
33   [NONE]              
34   [ELSE]              }
34   [NONE]              
36   [NONE]              if
36   [IF]                (
36   [NONE]              state
36   [NONE]              ==
36   [NONE]              ST_RUN
36   [IF]                )
37   [IF]                {
37   [NONE]              
38   [NONE]              if
38   [IF]                (
38   [NONE]              (
38   [NONE]              foo
38   [NONE]              <
38   [NONE]              bar
38   [NONE]              )
38   [NONE]              &&
38   [NONE]              
39   [NONE]              (
39   [NONE]              bar
39   [NONE]              >
39   [NONE]              foo2
39   [NONE]              )
39   [IF]                )
40   [IF]                {
40   [NONE]              
41   [NONE]              if
41   [IF]                (
41   [NONE]              a
41   [NONE]              <
41   [NONE]              5
41   [IF]                )
42   [IF]                {
42   [NONE]              
43   [NONE]              a
43   [NONE]              *=
43   [NONE]              a
43   [NONE]              ;
43   [NONE]              
44   [IF]                }
45   [NONE]              else
45   [NONE]              if
45   [ELSEIF]            (
45   [NONE]              b
45   [NONE]              !=
45   [NONE]              0
45   [ELSEIF]            )
45   [ELSEIF]            
45   [NONE]              
46   [NONE]              a
46   [NONE]              /=
46   [NONE]              b
46   [NONE]              ;
46   [ELSEIF]            
46   [NONE]              
47   [NONE]              else
47   [ELSE]              
47   [COMMENT_END]       // trailing C++ comment
47   [NONE]              
48   [NONE]              a
48   [NONE]              +=
48   [NONE]              b
48   [NONE]              ;
48   [ELSE]              
48   [NONE]              
49   [IF]                }
49   [NONE]              
50   [IF]                }
50   [NONE]              
52   [NONE]              list_for_each
52   [FUNC_CALL]         (
52   [NONE]              k
52   [FUNC_CALL]         )
52   [NONE]              
52   [FUNC_CALL]         {
52   [NONE]              
53   [NONE]              if
53   [IF]                (
53   [NONE]              a
53   [IF]                )
53   [IF]                
53   [NONE]              
54   [NONE]              if
54   [IF]                (
54   [NONE]              b
54   [IF]                )
55   [IF]                {
55   [NONE]              
56   [NONE]              c
56   [NONE]              ++
56   [NONE]              ;
56   [NONE]              
57   [IF]                }
57   [IF]                
57   [NONE]              
58   [FUNC_CALL]         }
58   [NONE]              
61   [NONE]              while
61   [WHILE]             (
61   [NONE]              1
61   [WHILE]             )
61   [WHILE]             
61   [NONE]              
62   [NONE]              ;
62   [WHILE]             
62   [COMMENT_END]       /* hang forever */
62   [NONE]              
63   [FUNC_DEF]          }
63   [NONE]              
65   [FUNC_DEF]          void
65   [NONE]              f
65   [FUNC_DEF]          (
65   [FUNC_DEF]          )
65   [NONE]              
65   [FUNC_DEF]          {
65   [NONE]              
66   [NONE]              if
66   [IF]                (
66   [NONE]              buf
66   [NONE]              [
66   [NONE]              0
66   [NONE]              ]
66   [NONE]              ==
66   [NONE]              '~'
66   [NONE]              &&
66   [NONE]              strchr
66   [FUNC_CALL]         (
66   [NONE]              tmp
66   [NONE]              ,
66   [NONE]              '/'
66   [FUNC_CALL]         )
66   [NONE]              ==
66   [NONE]              NULL
66   [IF]                )
66   [IF]                {
66   [NONE]              
67   [NONE]              buf
67   [NONE]              =
67   [NONE]              mallocstrcpy
67   [FUNC_CALL]         (
67   [NONE]              buf
67   [NONE]              ,
67   [NONE]              tmp
67   [FUNC_CALL]         )
67   [NONE]              ;
67   [NONE]              
68   [NONE]              matches
68   [NONE]              =
68   [NONE]              username_tab_completion
68   [FUNC_CALL]         (
68   [NONE]              tmp
68   [NONE]              ,
68   [NONE]              &
68   [NONE]              num_matches
68   [FUNC_CALL]         )
68   [NONE]              ;
68   [NONE]              
69   [IF]                }
69   [NONE]              
70   [COMMENT_WHOLE]     /* If we're in the middle of the original line, copy the string␤  only up to the cursor position into buf, so tab completion␤  will result in buf's containing only the tab-completed␤  path/filename. */
73   [NONE]              
74   [NONE]              else
74   [NONE]              if
74   [ELSEIF]            (
74   [NONE]              strlen
74   [FUNC_CALL]         (
74   [NONE]              buf
74   [FUNC_CALL]         )
74   [NONE]              >
74   [NONE]              strlen
74   [FUNC_CALL]         (
74   [NONE]              tmp
74   [FUNC_CALL]         )
74   [ELSEIF]            )
74   [ELSEIF]            
74   [NONE]              
75   [NONE]              buf
75   [NONE]              =
75   [NONE]              mallocstrcpy
75   [FUNC_CALL]         (
75   [NONE]              buf
75   [NONE]              ,
75   [NONE]              tmp
75   [FUNC_CALL]         )
75   [NONE]              ;
75   [ELSEIF]            
75   [NONE]              
76   [FUNC_DEF]          }
76   [NONE]              
78   [FUNC_DEF]          void
78   [NONE]              f
78   [FUNC_DEF]          (
78   [FUNC_DEF]          )
78   [NONE]              
78   [FUNC_DEF]          {
78   [NONE]              
78   [FUNC_DEF]          }
78   [NONE]              
78   [FUNC_DEF]          void
78   [NONE]              g
78   [FUNC_DEF]          (
78   [FUNC_DEF]          )
78   [NONE]              
78   [FUNC_DEF]          {
78   [NONE]              
78   [FUNC_DEF]          }
78   [NONE]              