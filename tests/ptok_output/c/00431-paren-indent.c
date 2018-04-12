Line [Parent]            Text
1    [FUNC_PROTO]        static
1    [FUNC_PROTO]        void
1    [FUNC_PROTO]        *
1    [NONE]              foo
1    [FUNC_PROTO]        (
1    [NONE]              int
1    [NONE]              param1
1    [NONE]              
1    [NONE]              ,
2    [NONE]              char
2    [NONE]              *
2    [NONE]              param2
2    [NONE]              
3    [FUNC_PROTO]        )
3    [FUNC_PROTO]        ;
3    [NONE]              
6    [FUNC_DEF]          static
6    [FUNC_DEF]          void
6    [FUNC_DEF]          *
6    [NONE]              foo
6    [NONE]              
7    [FUNC_DEF]          (
7    [NONE]              
8    [NONE]              int
8    [NONE]              param1
8    [NONE]              
8    [NONE]              ,
9    [NONE]              char
9    [NONE]              *
9    [NONE]              param2
9    [NONE]              
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              for
12   [FOR]               (
12   [NONE]              
13   [NONE]              int
13   [NONE]              i
13   [NONE]              =
13   [NONE]              0
13   [FOR]               ;
13   [NONE]              
14   [NONE]              i
14   [NONE]              <
14   [NONE]              10
14   [FOR]               ;
14   [NONE]              
15   [NONE]              i
15   [NONE]              ++
15   [NONE]              
16   [FOR]               )
16   [NONE]              
17   [FOR]               {
17   [NONE]              
18   [NONE]              bar
18   [FUNC_CALL]         (
18   [NONE]              
19   [NONE]              arg1
19   [NONE]              
19   [NONE]              ,
20   [NONE]              arg2
20   [NONE]              
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [NONE]              if
22   [IF]                (
22   [NONE]              (
22   [NONE]              abc
22   [NONE]              <
22   [NONE]              bcd
22   [NONE]              )
22   [NONE]              
23   [NONE]              &&
23   [NONE]              (
23   [NONE]              123
23   [NONE]              <
23   [NONE]              abc
23   [NONE]              )
23   [NONE]              
24   [IF]                )
24   [NONE]              
25   [IF]                {
25   [NONE]              
26   [NONE]              none
26   [FUNC_CALL]         (
26   [NONE]              arg1
26   [NONE]              
26   [NONE]              ,
27   [NONE]              arg2
27   [NONE]              
27   [NONE]              ,
28   [NONE]              arg3
28   [NONE]              
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [IF]                }
30   [NONE]              
31   [FOR]               }
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              
35   [FUNC_DEF]          void
35   [FUNC_DEF]          CWarningAnalyzer
35   [FUNC_DEF]          ::
35   [NONE]              SetEffect
35   [FUNC_DEF]          (
35   [NONE]              int
35   [NONE]              FilterNumber
35   [NONE]              
36   [NONE]              ,
36   [NONE]              bool
36   [NONE]              Exclude
36   [NONE]              
37   [NONE]              ,
37   [NONE]              int
37   [NONE]              Red
37   [NONE]              
38   [NONE]              ,
38   [NONE]              int
38   [NONE]              Green
38   [NONE]              
39   [NONE]              ,
39   [NONE]              int
39   [NONE]              Blue
39   [NONE]              
40   [NONE]              ,
40   [NONE]              bool
40   [NONE]              Italic
40   [NONE]              
41   [NONE]              ,
41   [NONE]              bool
41   [NONE]              Bold
41   [NONE]              
42   [NONE]              ,
42   [NONE]              bool
42   [NONE]              Underlined
42   [NONE]              
43   [FUNC_DEF]          )
43   [NONE]              
44   [FUNC_DEF]          {
44   [NONE]              
45   [COMMENT_WHOLE]     /* TODO */
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              