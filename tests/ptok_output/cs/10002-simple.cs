Line [Parent]            Text
1    [NONE]              class
1    [CLASS]             X
1    [NONE]              :
1    [NONE]              Y
1    [CLASS]             {
1    [NONE]              
2    [FUNC_DEF]          bool
2    [NONE]              Method
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              argument_1
2    [NONE]              ,
2    [NONE]              int
2    [NONE]              argument_2
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [PP_REGION]         #
4    [NONE]              region
4    [NONE]              something
4    [NONE]              
5    [NONE]              int
5    [NONE]              foo
5    [NONE]              =
5    [NONE]              0
5    [NONE]              ;
5    [NONE]              
6    [PP_ENDREGION]      #
6    [NONE]              endregion
6    [NONE]              
8    [NONE]              if
8    [IF]                (
8    [NONE]              argument_1
8    [NONE]              ==
8    [NONE]              argument_2
8    [IF]                )
8    [NONE]              
8    [IF]                {
8    [NONE]              
9    [NONE]              throw
9    [NONE]              new
9    [NONE]              Exception
9    [FUNC_CALL]         (
9    [NONE]              Locale
9    [NONE]              .
9    [NONE]              GetText
9    [FUNC_CALL]         (
9    [NONE]              "They are equal!"
9    [FUNC_CALL]         )
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
9    [IF]                }
9    [NONE]              
11   [NONE]              if
11   [IF]                (
11   [NONE]              argument_1
11   [NONE]              <
11   [NONE]              argument_2
11   [IF]                )
11   [NONE]              
11   [IF]                {
11   [NONE]              
12   [NONE]              if
12   [IF]                (
12   [NONE]              argument_1
12   [NONE]              *
12   [NONE]              3
12   [NONE]              >
12   [NONE]              4
12   [IF]                )
12   [NONE]              
12   [IF]                {
12   [NONE]              
13   [NONE]              return
13   [RETURN]            (
13   [NONE]              true
13   [RETURN]            )
13   [NONE]              ;
13   [NONE]              
13   [IF]                }
13   [NONE]              
14   [NONE]              else
14   [NONE]              
14   [ELSE]              {
14   [NONE]              
15   [NONE]              return
15   [RETURN]            (
15   [NONE]              false
15   [RETURN]            )
15   [NONE]              ;
15   [NONE]              
15   [ELSE]              }
15   [NONE]              
16   [IF]                }
16   [NONE]              
18   [COMMENT_WHOLE]     //
18   [NONE]              
19   [COMMENT_WHOLE]     // This sample helps keep your sanity while using 8-spaces for tabs
19   [NONE]              
20   [COMMENT_WHOLE]     //
20   [NONE]              
21   [NONE]              VeryLongIdentifierWhichTakesManyArguments
21   [FUNC_CALL]         (
21   [NONE]              
22   [NONE]              Argument1
22   [NONE]              ,
22   [NONE]              
23   [NONE]              Argument2
23   [NONE]              ,
23   [NONE]              Argument3
23   [NONE]              ,
23   [NONE]              
24   [NONE]              NestedCallHere
24   [FUNC_CALL]         (
24   [NONE]              
25   [NONE]              MoreNested
25   [FUNC_CALL]         )
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [FUNC_DEF]          }
26   [NONE]              
28   [CS_PROPERTY]       bool
28   [NONE]              MyProperty
28   [CS_PROPERTY]       {
28   [NONE]              
29   [NONE]              get
29   [GETSET]            {
29   [NONE]              return
29   [RETURN]            (
29   [NONE]              x
29   [RETURN]            )
29   [NONE]              ;
29   [GETSET]            }
29   [NONE]              
31   [NONE]              set
31   [GETSET]            {
31   [NONE]              x
31   [NONE]              =
31   [NONE]              value
31   [NONE]              ;
31   [GETSET]            }
31   [NONE]              
32   [CS_PROPERTY]       }
32   [NONE]              
34   [FUNC_DEF]          void
34   [NONE]              AnotherMethod
34   [FUNC_DEF]          (
34   [FUNC_DEF]          )
34   [NONE]              
35   [FUNC_DEF]          {
35   [NONE]              
36   [NONE]              Logger
36   [NONE]              log
36   [NONE]              =
36   [NONE]              new
36   [NONE]              Logger
36   [FUNC_CALL]         (
36   [FUNC_CALL]         )
36   [NONE]              ;
36   [NONE]              
37   [NONE]              log
37   [NONE]              .
37   [NONE]              foo
37   [NONE]              .
37   [NONE]              bar
37   [NONE]              =
37   [NONE]              5
37   [NONE]              ;
37   [NONE]              
38   [NONE]              log
38   [NONE]              .
38   [NONE]              narf
38   [NONE]              .
38   [NONE]              sweat
38   [NONE]              =
38   [NONE]              "cat"
38   [NONE]              ;
38   [NONE]              
40   [NONE]              if
40   [IF]                (
40   [NONE]              (
40   [NONE]              a
40   [NONE]              +
40   [NONE]              5
40   [NONE]              )
40   [NONE]              !=
40   [NONE]              4
40   [IF]                )
40   [NONE]              
40   [IF]                {
40   [NONE]              
41   [IF]                }
41   [NONE]              
43   [NONE]              while
43   [WHILE]             (
43   [NONE]              blah
43   [WHILE]             )
43   [NONE]              
43   [WHILE]             {
43   [NONE]              
44   [NONE]              if
44   [IF]                (
44   [NONE]              a
44   [IF]                )
44   [NONE]              
44   [IF]                {
44   [NONE]              
45   [NONE]              continue
45   [NONE]              ;
45   [NONE]              
45   [IF]                }
45   [NONE]              
46   [NONE]              b
46   [NONE]              ++
46   [NONE]              ;
46   [NONE]              
47   [WHILE]             }
47   [NONE]              
48   [FUNC_DEF]          }
48   [NONE]              
49   [CLASS]             }
49   [NONE]              
51   [NONE]              object
51   [NONE]              lockA
51   [NONE]              ;
51   [NONE]              
52   [NONE]              object
52   [NONE]              lockB
52   [NONE]              ;
52   [NONE]              
54   [FUNC_DEF]          void
54   [NONE]              Foo
54   [FUNC_DEF]          (
54   [FUNC_DEF]          )
54   [NONE]              
54   [FUNC_DEF]          {
54   [NONE]              
55   [NONE]              lock
55   [LOCK]              (
55   [NONE]              lockA
55   [LOCK]              )
55   [LOCK]              {
55   [NONE]              
56   [NONE]              lock
56   [LOCK]              (
56   [NONE]              lockB
56   [LOCK]              )
56   [LOCK]              {
56   [NONE]              
57   [LOCK]              }
57   [NONE]              
58   [LOCK]              }
58   [NONE]              
59   [FUNC_DEF]          }
59   [NONE]              
61   [FUNC_DEF]          void
61   [NONE]              Bar
61   [FUNC_DEF]          (
61   [FUNC_DEF]          )
61   [NONE]              
61   [FUNC_DEF]          {
61   [NONE]              
62   [NONE]              lock
62   [LOCK]              (
62   [NONE]              lockB
62   [LOCK]              )
62   [LOCK]              {
62   [NONE]              
63   [NONE]              lock
63   [LOCK]              (
63   [NONE]              lockA
63   [LOCK]              )
63   [LOCK]              {
63   [NONE]              
64   [LOCK]              }
64   [NONE]              
65   [LOCK]              }
65   [NONE]              
66   [FUNC_DEF]          }
66   [NONE]              
69   [COMMENT_WHOLE]     // class library
69   [NONE]              
70   [NONE]              class
70   [CLASS]             Blah
70   [CLASS]             {
70   [NONE]              
71   [NONE]              Hashtable
71   [NONE]              ht
71   [NONE]              ;
71   [NONE]              
72   [FUNC_DEF]          void
72   [NONE]              Foo
72   [FUNC_DEF]          (
72   [NONE]              int
72   [NONE]              zzz
72   [NONE]              ,
72   [NONE]              Entry
72   [NONE]              blah
72   [FUNC_DEF]          )
72   [NONE]              
72   [FUNC_DEF]          {
72   [NONE]              
73   [NONE]              lock
73   [LOCK]              (
73   [NONE]              ht
73   [LOCK]              )
73   [LOCK]              {
73   [NONE]              
74   [NONE]              ht
74   [NONE]              .
74   [NONE]              Add
74   [FUNC_CALL]         (
74   [NONE]              zzz
74   [NONE]              ,
74   [NONE]              blah
74   [FUNC_CALL]         )
74   [NONE]              ;
74   [NONE]              
75   [LOCK]              }
75   [NONE]              
76   [FUNC_DEF]          }
76   [NONE]              
78   [FUNC_DEF]          void
78   [NONE]              Bar
78   [FUNC_DEF]          (
78   [FUNC_DEF]          )
78   [NONE]              
79   [FUNC_DEF]          {
79   [NONE]              
80   [NONE]              lock
80   [LOCK]              (
80   [NONE]              ht
80   [LOCK]              )
80   [LOCK]              {
80   [NONE]              
81   [NONE]              foreach
81   [FOR]               (
81   [NONE]              Entry
81   [NONE]              e
81   [NONE]              in
81   [NONE]              ht
81   [FOR]               )
81   [NONE]              
81   [FOR]               {
81   [NONE]              
82   [NONE]              EachBar
82   [FUNC_CALL]         (
82   [NONE]              e
82   [FUNC_CALL]         )
82   [NONE]              ;
82   [NONE]              
82   [FOR]               }
82   [NONE]              
83   [LOCK]              }
83   [NONE]              
84   [FUNC_DEF]          }
84   [NONE]              
86   [FUNC_DEF]          virtual
86   [FUNC_DEF]          void
86   [NONE]              EachBar
86   [FUNC_DEF]          (
86   [NONE]              Entry
86   [NONE]              e
86   [FUNC_DEF]          )
86   [NONE]              
87   [FUNC_DEF]          {
87   [NONE]              
88   [FUNC_DEF]          }
88   [NONE]              
89   [CLASS]             }
89   [NONE]              
91   [COMMENT_WHOLE]     // User
91   [NONE]              
92   [NONE]              class
92   [CLASS]             MyBlah
92   [CLASS]             {
92   [NONE]              
93   [NONE]              byte
93   [NONE]              []
93   [NONE]              box
93   [NONE]              =
93   [NONE]              new
93   [NONE]              byte
93   [NONE]              [
93   [NONE]              6
93   [NONE]              ]
93   [NONE]              ;
93   [NONE]              
95   [NONE]              box
95   [NONE]              [
95   [NONE]              2
95   [NONE]              ]
95   [NONE]              =
95   [NONE]              56
95   [NONE]              ;
95   [NONE]              
97   [FUNC_DEF]          void
97   [NONE]              DoStuff
97   [FUNC_DEF]          (
97   [FUNC_DEF]          )
97   [NONE]              
98   [FUNC_DEF]          {
98   [NONE]              
99   [NONE]              lock
99   [LOCK]              (
99   [NONE]              this
99   [LOCK]              )
99   [LOCK]              {
99   [NONE]              
100  [NONE]              int
100  [NONE]              i
100  [NONE]              =
100  [NONE]              GetNumber
100  [FUNC_CALL]         (
100  [FUNC_CALL]         )
100  [NONE]              ;
100  [NONE]              
101  [NONE]              Entry
101  [NONE]              e
101  [NONE]              =
101  [NONE]              GetEntry
101  [FUNC_CALL]         (
101  [FUNC_CALL]         )
101  [NONE]              ;
101  [NONE]              
103  [NONE]              Foo
103  [FUNC_CALL]         (
103  [NONE]              i
103  [NONE]              ,
103  [NONE]              e
103  [FUNC_CALL]         )
103  [NONE]              ;
103  [NONE]              
104  [LOCK]              }
104  [NONE]              
105  [FUNC_DEF]          }
105  [NONE]              
107  [FUNC_DEF]          override
107  [FUNC_DEF]          void
107  [NONE]              EachBar
107  [FUNC_DEF]          (
107  [NONE]              Entry
107  [NONE]              e
107  [FUNC_DEF]          )
107  [NONE]              
108  [FUNC_DEF]          {
108  [NONE]              
109  [NONE]              lock
109  [LOCK]              (
109  [NONE]              this
109  [LOCK]              )
109  [LOCK]              {
109  [NONE]              
110  [NONE]              DoSomething
110  [FUNC_CALL]         (
110  [NONE]              e
110  [FUNC_CALL]         )
110  [NONE]              ;
110  [NONE]              
111  [LOCK]              }
111  [NONE]              
112  [FUNC_DEF]          }
112  [NONE]              
113  [CLASS]             }
113  [NONE]              