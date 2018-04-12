Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              foo
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              bar
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              for
4    [FOR]               (
4    [FOR]               ;
4    [FOR]               ;
4    [FOR]               )
4    [NONE]              
5    [FOR]               {
5    [NONE]              
6    [NONE]              break
6    [NONE]              ;
6    [NONE]              
7    [FOR]               }
7    [NONE]              
8    [NONE]              if
8    [IF]                (
8    [NONE]              a
8    [IF]                )
8    [NONE]              
9    [IF]                {
9    [NONE]              
10   [NONE]              foo
10   [FUNC_CALL]         (
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [IF]                }
11   [NONE]              
13   [NONE]              if
13   [IF]                (
13   [NONE]              b
13   [IF]                )
13   [NONE]              
13   [IF]                {
13   [NONE]              
14   [NONE]              if
14   [IF]                (
14   [NONE]              c
14   [IF]                )
14   [NONE]              
14   [IF]                {
14   [NONE]              
15   [NONE]              bar
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
15   [IF]                }
15   [NONE]              
16   [NONE]              else
16   [NONE]              
16   [ELSE]              {
16   [NONE]              
17   [ELSE]              }
17   [NONE]              
17   [IF]                }
17   [NONE]              
19   [NONE]              else
19   [NONE]              
20   [ELSE]              {
20   [NONE]              
21   [NONE]              foo
21   [FUNC_CALL]         (
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [ELSE]              }
22   [NONE]              
23   [NONE]              switch
23   [SWITCH]            (
23   [NONE]              a
23   [SWITCH]            )
23   [NONE]              
24   [SWITCH]            {
24   [NONE]              
25   [NONE]              case
25   [NONE]              1
25   [NONE]              :
25   [NONE]              break
25   [NONE]              ;
25   [NONE]              
26   [NONE]              case
26   [NONE]              2
26   [NONE]              :
26   [NONE]              break
26   [NONE]              ;
26   [NONE]              
27   [NONE]              default
27   [NONE]              :
27   [NONE]              break
27   [NONE]              ;
27   [NONE]              
28   [SWITCH]            }
28   [NONE]              
29   [NONE]              while
29   [WHILE]             (
29   [NONE]              b
29   [NONE]              --
29   [NONE]              >
29   [NONE]              0
29   [WHILE]             )
29   [NONE]              
30   [WHILE]             {
30   [NONE]              
31   [NONE]              bar
31   [FUNC_CALL]         (
31   [FUNC_CALL]         )
31   [NONE]              ;
31   [NONE]              
32   [WHILE]             }
32   [NONE]              
33   [NONE]              do
33   [NONE]              
34   [DO]                {
34   [NONE]              
35   [NONE]              bar
35   [FUNC_CALL]         (
35   [FUNC_CALL]         )
35   [NONE]              ;
35   [NONE]              
36   [DO]                }
36   [NONE]              while
36   [WHILE_OF_DO]       (
36   [NONE]              b
36   [NONE]              --
36   [NONE]              >
36   [NONE]              0
36   [WHILE_OF_DO]       )
36   [WHILE_OF_DO]       ;
36   [NONE]              
37   [FUNC_DEF]          }
37   [FUNC_DEF]          /* foo */
37   [NONE]              
39   [NONE]              enum
39   [ENUM]              FPP
39   [NONE]              
39   [ENUM]              {
39   [NONE]              
40   [NONE]              FPP_ONE
40   [NONE]              =
40   [NONE]              1
40   [NONE]              ,
40   [NONE]              
41   [NONE]              FPP_TWO
41   [NONE]              =
41   [NONE]              2
41   [NONE]              ,
41   [NONE]              
42   [ENUM]              }
42   [ENUM]              ;
42   [NONE]              
44   [NONE]              struct
44   [STRUCT]            narg
44   [NONE]              
44   [STRUCT]            {
44   [NONE]              
45   [NONE]              int
45   [NONE]              abc
45   [NONE]              ;
45   [NONE]              
46   [NONE]              char
46   [NONE]              def
46   [NONE]              ;
47   [NONE]              
48   [NONE]              const
48   [NONE]              char
48   [NONE]              *
48   [NONE]              ghi
48   [NONE]              ;
48   [NONE]              
49   [STRUCT]            }
49   [STRUCT]            ;
49   [NONE]              
51   [FUNC_DEF]          void
51   [NONE]              f2
51   [FUNC_DEF]          (
51   [NONE]              void
51   [FUNC_DEF]          )
51   [NONE]              
52   [FUNC_DEF]          {
52   [NONE]              
53   [NONE]              {
53   [NONE]              
53   [NONE]              i
53   [NONE]              ++
53   [NONE]              ;
53   [NONE]              
53   [NONE]              }
53   [NONE]              
55   [NONE]              for
55   [FOR]               (
55   [FOR]               ;
55   [FOR]               ;
55   [FOR]               )
55   [NONE]              
55   [FOR]               {
55   [NONE]              
55   [FOR]               }
55   [NONE]              
57   [NONE]              for
57   [FOR]               (
57   [FOR]               ;
57   [FOR]               ;
57   [FOR]               )
57   [NONE]              
57   [FOR]               {
57   [NONE]              
57   [FOR]               }
57   [NONE]              
58   [FUNC_DEF]          }
58   [NONE]              
60   [FUNC_DEF]          int
60   [NONE]              main
60   [FUNC_DEF]          (
60   [NONE]              int
60   [NONE]              argc
60   [NONE]              ,
60   [NONE]              char
60   [NONE]              *
60   [NONE]              argv
60   [NONE]              []
60   [FUNC_DEF]          )
60   [NONE]              
61   [FUNC_DEF]          {
61   [NONE]              
62   [NONE]              if
62   [IF]                (
62   [NONE]              argc
62   [NONE]              ==
62   [NONE]              1
62   [IF]                )
62   [NONE]              
63   [IF]                {
63   [NONE]              
64   [NONE]              printf
64   [FUNC_CALL]         (
64   [NONE]              "one"
64   [FUNC_CALL]         )
64   [NONE]              ;
64   [NONE]              
65   [IF]                }
65   [NONE]              
66   [NONE]              else
66   [NONE]              if
66   [ELSEIF]            (
66   [NONE]              argc
66   [NONE]              ==
66   [NONE]              2
66   [ELSEIF]            )
66   [NONE]              
67   [ELSEIF]            {
67   [NONE]              
68   [NONE]              printf
68   [FUNC_CALL]         (
68   [NONE]              "two"
68   [FUNC_CALL]         )
68   [NONE]              ;
68   [NONE]              
69   [ELSEIF]            }
69   [NONE]              
70   [NONE]              else
70   [NONE]              
71   [ELSE]              {
71   [NONE]              
72   [NONE]              printf
72   [FUNC_CALL]         (
72   [NONE]              "%d"
72   [NONE]              ,
72   [NONE]              argc
72   [FUNC_CALL]         )
72   [NONE]              ;
72   [NONE]              
73   [ELSE]              }
73   [NONE]              
74   [NONE]              return
74   [RETURN]            (
74   [NONE]              0
74   [RETURN]            )
74   [NONE]              ;
74   [NONE]              
75   [FUNC_DEF]          }
75   [NONE]              