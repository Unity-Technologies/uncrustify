Line [Parent]            Text
1    [FUNC_PROTO]        static
1    [FUNC_PROTO]        int
1    [NONE]              foo
1    [FUNC_PROTO]        (
1    [NONE]              int
1    [NONE]              bar
1    [FUNC_PROTO]        )
1    [FUNC_PROTO]        ;
1    [NONE]              
3    [FUNC_DEF]          static
3    [FUNC_DEF]          int
3    [NONE]              foo
3    [FUNC_DEF]          (
3    [NONE]              int
3    [NONE]              bar
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              for
5    [FOR]               (
5    [FOR]               ;
5    [FOR]               ;
5    [FOR]               )
5    [NONE]              
6    [FOR]               {
6    [NONE]              
7    [NONE]              break
7    [NONE]              ;
7    [NONE]              
8    [FOR]               }
8    [NONE]              
9    [NONE]              if
9    [IF]                (
9    [NONE]              a
9    [IF]                )
9    [NONE]              
10   [IF]                {
10   [NONE]              
11   [NONE]              foo
11   [FUNC_CALL]         (
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [IF]                }
12   [NONE]              
14   [NONE]              if
14   [IF]                (
14   [NONE]              b
14   [IF]                )
14   [IF]                
14   [NONE]              
15   [NONE]              if
15   [IF]                (
15   [NONE]              c
15   [IF]                )
15   [IF]                
15   [NONE]              
16   [NONE]              bar
16   [FUNC_CALL]         (
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [IF]                
16   [NONE]              
17   [NONE]              else
17   [ELSE]              
17   [NONE]              
18   [NONE]              ;
18   [ELSE]              
18   [IF]                
18   [NONE]              
20   [NONE]              else
20   [NONE]              
21   [ELSE]              {
21   [NONE]              
22   [NONE]              foo
22   [FUNC_CALL]         (
22   [FUNC_CALL]         )
22   [NONE]              ;
22   [NONE]              
23   [ELSE]              }
23   [NONE]              
24   [NONE]              switch
24   [SWITCH]            (
24   [NONE]              a
24   [SWITCH]            )
24   [NONE]              
25   [SWITCH]            {
25   [NONE]              
26   [NONE]              case
26   [NONE]              1
26   [NONE]              :
26   [NONE]              break
26   [NONE]              ;
26   [NONE]              
27   [NONE]              case
27   [NONE]              2
27   [NONE]              :
27   [NONE]              break
27   [NONE]              ;
27   [NONE]              
28   [NONE]              default
28   [NONE]              :
28   [NONE]              break
28   [NONE]              ;
28   [NONE]              
29   [SWITCH]            }
29   [NONE]              
30   [NONE]              while
30   [WHILE]             (
30   [NONE]              b
30   [NONE]              --
30   [NONE]              >
30   [NONE]              0
30   [WHILE]             )
30   [NONE]              
31   [WHILE]             {
31   [NONE]              
32   [NONE]              bar
32   [FUNC_CALL]         (
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [NONE]              
33   [WHILE]             }
33   [NONE]              
34   [NONE]              do
34   [NONE]              
35   [DO]                {
35   [NONE]              
36   [NONE]              bar
36   [FUNC_CALL]         (
36   [FUNC_CALL]         )
36   [NONE]              ;
36   [NONE]              
37   [DO]                }
37   [NONE]              while
37   [WHILE_OF_DO]       (
37   [NONE]              b
37   [NONE]              --
37   [NONE]              >
37   [NONE]              0
37   [WHILE_OF_DO]       )
37   [WHILE_OF_DO]       ;
37   [NONE]              
38   [FUNC_DEF]          }
38   [NONE]              
40   [NONE]              enum
40   [ENUM]              FPP
40   [ENUM]              {
40   [NONE]              
41   [NONE]              FPP_ONE
41   [NONE]              =
41   [NONE]              1
41   [NONE]              ,
41   [NONE]              
42   [NONE]              FPP_TWO
42   [NONE]              =
42   [NONE]              2
42   [NONE]              ,
42   [NONE]              
43   [ENUM]              }
43   [ENUM]              ;
43   [NONE]              
45   [NONE]              struct
45   [STRUCT]            narg
45   [STRUCT]            {
45   [NONE]              
46   [NONE]              int
46   [NONE]              abc
46   [NONE]              ;
46   [NONE]              
47   [NONE]              char
47   [NONE]              def
47   [NONE]              ;
48   [NONE]              
49   [NONE]              const
49   [NONE]              char
49   [NONE]              *
49   [NONE]              ghi
49   [NONE]              ;
49   [NONE]              
50   [STRUCT]            }
50   [STRUCT]            ;
50   [NONE]              
52   [NONE]              class
52   [CLASS]             CFooRun
52   [CLASS]             {
52   [NONE]              
53   [FUNC_PROTO]        long
53   [NONE]              stick
53   [FUNC_PROTO]        (
53   [FUNC_PROTO]        )
53   [FUNC_PROTO]        ;
53   [NONE]              
54   [FUNC_DEF]          int
54   [NONE]              bar
54   [FUNC_DEF]          (
54   [FUNC_DEF]          )
54   [FUNC_DEF]          {
54   [NONE]              
54   [NONE]              m_ick
54   [NONE]              ++
54   [NONE]              ;
54   [NONE]              
54   [FUNC_DEF]          }
54   [NONE]              
56   [NONE]              CFooRun
56   [FUNC_CLASS_PROTO]    (
56   [FUNC_CLASS_PROTO]    )
56   [FUNC_CLASS_PROTO]    ;
56   [NONE]              
57   [NONE]              ~
57   [DESTRUCTOR]        CFooRun
57   [FUNC_CLASS_DEF]    (
57   [FUNC_CLASS_DEF]    )
57   [FUNC_CLASS_DEF]    {
57   [NONE]              
57   [FUNC_CLASS_DEF]    }
57   [NONE]              
58   [CLASS]             }
58   [CLASS]             ;
58   [NONE]              
60   [FUNC_DEF]          void
60   [NONE]              f
60   [FUNC_DEF]          (
60   [FUNC_DEF]          )
60   [NONE]              
61   [FUNC_DEF]          {
61   [NONE]              
62   [NONE]              if
62   [IF]                (
62   [NONE]              tmp
62   [NONE]              [
62   [NONE]              0
62   [NONE]              ]
62   [NONE]              ==
62   [NONE]              "disk"
62   [IF]                )
62   [NONE]              
63   [IF]                {
63   [NONE]              
64   [NONE]              tmp
64   [NONE]              =
64   [NONE]              split
64   [FUNC_CALL]         (
64   [NONE]              tmp
64   [NONE]              [
64   [NONE]              1
64   [NONE]              ]
64   [NONE]              ,
64   [NONE]              ","
64   [FUNC_CALL]         )
64   [NONE]              ;
64   [NONE]              
65   [NONE]              DiskEntry
65   [NONE]              entry
65   [NONE]              =
65   [BRACED_INIT_LIST]    {
65   [NONE]              tmp
65   [NONE]              [
65   [NONE]              0
65   [NONE]              ]
65   [NONE]              ,
65   [NONE]              tmp
65   [NONE]              [
65   [NONE]              2
65   [NONE]              ]
65   [NONE]              ,
65   [NONE]              
66   [NONE]              stxxl
66   [NONE]              ::
66   [NONE]              int64
66   [FUNC_CALL]         (
66   [NONE]              str2int
66   [FUNC_CALL]         (
66   [NONE]              tmp
66   [NONE]              [
66   [NONE]              1
66   [NONE]              ]
66   [FUNC_CALL]         )
66   [FUNC_CALL]         )
66   [NONE]              *
66   [NONE]              
67   [NONE]              stxxl
67   [NONE]              ::
67   [NONE]              int64
67   [FUNC_CALL]         (
67   [NONE]              1024
67   [NONE]              *
67   [NONE]              1024
67   [FUNC_CALL]         )
67   [BRACED_INIT_LIST]    }
67   [NONE]              ;
67   [NONE]              
68   [NONE]              disks_props
68   [NONE]              .
68   [NONE]              push_back
68   [FUNC_CALL]         (
68   [NONE]              entry
68   [FUNC_CALL]         )
68   [NONE]              ;
68   [NONE]              
69   [IF]                }
69   [NONE]              
70   [FUNC_DEF]          }
70   [NONE]              
72   [NONE]              template
72   [TEMPLATE]          <
72   [NONE]              class
72   [TEMPLATE]          >
72   [TEMPLATE]          struct
72   [STRUCT]            type
72   [STRUCT]            ;
72   [NONE]              
74   [NONE]              template
74   [TEMPLATE]          <
74   [NONE]              class
74   [NONE]              T
74   [TEMPLATE]          >
74   [NONE]              
75   [TEMPLATE]          class
75   [CLASS]             X
75   [CLASS]             {
75   [NONE]              
76   [NONE]              typedef
76   [NONE]              type
76   [TEMPLATE]          <
76   [NONE]              T
76   [TEMPLATE]          >
76   [NONE]              base
76   [TYPEDEF]           ;
76   [NONE]              
77   [FUNC_DEF]          void
77   [NONE]              f
77   [FUNC_DEF]          (
77   [FUNC_DEF]          )
77   [FUNC_DEF]          {
77   [NONE]              
78   [NONE]              (
78   [NONE]              base
78   [NONE]              ::
78   [NONE]              operator
78   [OPERATOR]          *
78   [FUNC_CALL]         (
78   [FUNC_CALL]         )
78   [NONE]              )
78   [NONE]              ;
78   [NONE]              
79   [FUNC_DEF]          }
79   [NONE]              
80   [CLASS]             }
80   [CLASS]             ;
80   [NONE]              
82   [NONE]              namespace
82   [NAMESPACE]         N
82   [NONE]              
83   [NAMESPACE]         {
83   [NONE]              
84   [NONE]              class
84   [CLASS]             C
84   [NONE]              
85   [CLASS]             {
85   [NONE]              
86   [PP_DEFINE]         #
86   [NONE]              define
86   [NONE]              NOP
86   [MACRO_FUNC]        (
86   [NONE]              x
86   [MACRO_FUNC]        )
86   [NONE]              {
86   [NONE]              \
86   [NONE]              }
86   [NONE]              
87   [CLASS]             }
87   [CLASS]             ;
87   [NONE]              
88   [NAMESPACE]         }
88   [NONE]              
90   [NONE]              namespace
90   [NAMESPACE]         N
90   [NONE]              
91   [NAMESPACE]         {
91   [NONE]              
92   [NONE]              class
92   [CLASS]             C
92   [NONE]              
93   [CLASS]             {
93   [NONE]              
94   [CLASS]             }
94   [CLASS]             ;
94   [NONE]              
95   [NAMESPACE]         }
95   [NONE]              
97   [FUNC_DEF]          void
97   [NONE]              deallocate2
97   [FUNC_DEF]          (
97   [NONE]              S
97   [NONE]              *
97   [NONE]              *
97   [NONE]              s_ptr
97   [FUNC_DEF]          )
97   [NONE]              
98   [FUNC_DEF]          {
98   [NONE]              
99   [NONE]              {
99   [NONE]              
100  [NONE]              void
100  [NONE]              *
100  [NONE]              stopper_for_apply
100  [NONE]              =
100  [C_CAST]            (
100  [C_CAST]            int
100  [C_CAST]            []
100  [C_CAST]            )
100  [C_CAST]            {
100  [NONE]              0
100  [C_CAST]            }
100  [NONE]              ;
100  [NONE]              
101  [NONE]              void
101  [NONE]              *
101  [NONE]              *
101  [NONE]              list_for_apply
101  [NONE]              =
101  [C_CAST]            (
101  [C_CAST]            void
101  [C_CAST]            *
101  [C_CAST]            []
101  [C_CAST]            )
101  [C_CAST]            {
101  [NONE]              (
101  [NONE]              *
101  [NONE]              s_ptr
101  [NONE]              )
101  [NONE]              ->
101  [NONE]              arr
101  [NONE]              ,
101  [NONE]              *
101  [NONE]              s_ptr
101  [NONE]              ,
101  [NONE]              stopper_for_apply
101  [C_CAST]            }
101  [NONE]              ;
101  [NONE]              
102  [NONE]              for
102  [FOR]               (
102  [NONE]              int
102  [NONE]              i
102  [NONE]              =
102  [NONE]              0
102  [FOR]               ;
102  [NONE]              list_for_apply
102  [NONE]              [
102  [NONE]              i
102  [NONE]              ]
102  [NONE]              !=
102  [NONE]              stopper_for_apply
102  [FOR]               ;
102  [NONE]              i
102  [NONE]              ++
102  [FOR]               )
102  [FOR]               {
102  [NONE]              
103  [NONE]              saferFree
103  [FUNC_CALL]         (
103  [C_CAST]            (
103  [C_CAST]            void
103  [C_CAST]            *
103  [C_CAST]            )
103  [NONE]              &
103  [NONE]              (
103  [NONE]              list_for_apply
103  [NONE]              [
103  [NONE]              i
103  [NONE]              ]
103  [NONE]              )
103  [FUNC_CALL]         )
103  [NONE]              ;
103  [NONE]              
104  [FOR]               }
104  [NONE]              
105  [NONE]              }
105  [NONE]              
106  [FUNC_DEF]          }
106  [NONE]              