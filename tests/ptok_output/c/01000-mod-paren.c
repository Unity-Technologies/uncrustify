Line [Parent]            Text
2    [FUNC_DEF]          int
2    [NONE]              foo
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              a
2    [NONE]              ,
2    [NONE]              int
2    [NONE]              b
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [NONE]              !
4    [NONE]              (
4    [NONE]              a
4    [NONE]              ||
4    [NONE]              b
4    [NONE]              )
4    [IF]                )
4    [NONE]              
5    [IF]                {
5    [NONE]              
6    [NONE]              return
6    [RETURN]            (
6    [NONE]              1
6    [RETURN]            )
6    [NONE]              ;
6    [NONE]              
7    [IF]                }
7    [NONE]              
8    [NONE]              return
8    [RETURN]            (
8    [NONE]              0
8    [RETURN]            )
8    [NONE]              ;
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
11   [FUNC_DEF]          void
11   [NONE]              fooo
11   [FUNC_DEF]          (
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              if
13   [IF]                (
13   [NONE]              enabled
13   [IF]                )
13   [NONE]              
13   [IF]                {
13   [NONE]              
13   [NONE]              value
13   [NONE]              =
13   [NONE]              1
13   [NONE]              ;
13   [NONE]              
13   [IF]                }
13   [NONE]              
15   [NONE]              if
15   [IF]                (
15   [NONE]              enabled
15   [NONE]              &&
0    [NONE]              (
15   [NONE]              value
15   [NONE]              ==
15   [NONE]              100
0    [NONE]              )
15   [IF]                )
15   [NONE]              
16   [IF]                {
16   [NONE]              
17   [IF]                }
17   [NONE]              
19   [NONE]              if
19   [IF]                (
19   [NONE]              value
19   [NONE]              ==
19   [NONE]              100
19   [IF]                )
19   [NONE]              
20   [IF]                {
20   [NONE]              
21   [IF]                }
21   [NONE]              
23   [NONE]              if
23   [IF]                (
0    [NONE]              (
23   [NONE]              value
23   [NONE]              ==
23   [NONE]              100
0    [NONE]              )
23   [NONE]              &&
0    [NONE]              (
23   [NONE]              i
23   [NONE]              <
23   [NONE]              15
0    [NONE]              )
23   [NONE]              ||
23   [NONE]              enabled
23   [IF]                )
23   [NONE]              
24   [IF]                {
24   [NONE]              
25   [IF]                }
25   [NONE]              
27   [NONE]              if
27   [IF]                (
27   [NONE]              !
27   [NONE]              failed
27   [NONE]              &&
27   [NONE]              (
0    [NONE]              (
27   [NONE]              value
27   [NONE]              ==
27   [NONE]              100
0    [NONE]              )
27   [NONE]              &&
0    [NONE]              (
27   [NONE]              i
27   [NONE]              <
27   [NONE]              15
0    [NONE]              )
27   [NONE]              )
27   [NONE]              ||
27   [NONE]              enabled
27   [IF]                )
27   [NONE]              
28   [IF]                {
28   [NONE]              
29   [IF]                }
29   [NONE]              
31   [FUNC_DEF]          }
31   [NONE]              
33   [FUNC_DEF]          void
33   [NONE]              foo3
33   [FUNC_DEF]          (
33   [FUNC_DEF]          )
33   [NONE]              
34   [FUNC_DEF]          {
34   [NONE]              
35   [NONE]              if
35   [IF]                (
0    [NONE]              (
35   [NONE]              strcmp
35   [FUNC_CALL]         (
35   [NONE]              a
35   [NONE]              ,
35   [NONE]              b
35   [FUNC_CALL]         )
35   [NONE]              ==
35   [NONE]              0
0    [NONE]              )
35   [NONE]              &&
0    [NONE]              (
35   [NONE]              total
35   [NONE]              <
35   [NONE]              5
0    [NONE]              )
35   [IF]                )
35   [NONE]              
36   [IF]                {
36   [NONE]              
37   [NONE]              add_item
37   [FUNC_CALL]         (
37   [NONE]              a
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
38   [IF]                }
38   [NONE]              
40   [NONE]              if
40   [IF]                (
40   [NONE]              glob_add_path
40   [FUNC_CALL]         (
40   [NONE]              gd
40   [NONE]              ,
40   [NONE]              gd
40   [NONE]              ->
40   [NONE]              dir
40   [NONE]              ,
40   [NONE]              NULL
40   [NONE]              ,
40   [NONE]              
41   [NONE]              (
41   [NONE]              flags
41   [NONE]              &
41   [NONE]              GLOB_MARK
41   [NONE]              )
41   [NONE]              &&
41   [NONE]              S_ISDIR
41   [FUNC_CALL]         (
41   [NONE]              gd
41   [NONE]              ->
41   [NONE]              st
41   [NONE]              .
41   [NONE]              st_mode
41   [FUNC_CALL]         )
41   [FUNC_CALL]         )
41   [NONE]              !=
41   [NONE]              0
41   [IF]                )
41   [NONE]              
42   [IF]                {
42   [NONE]              
43   [NONE]              bar
43   [FUNC_CALL]         (
43   [FUNC_CALL]         )
43   [NONE]              ;
43   [NONE]              
44   [IF]                }
44   [NONE]              
45   [NONE]              return
45   [NONE]              ;
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              
48   [FUNC_DEF]          int
48   [NONE]              foo1
48   [FUNC_DEF]          (
48   [NONE]              void
48   [FUNC_DEF]          )
48   [NONE]              
49   [FUNC_DEF]          {
49   [NONE]              
50   [NONE]              FOO_ERROR
50   [FUNC_CALL]         (
50   [NONE]              "connect: can only connected from state CLOSED"
50   [NONE]              ,
50   [NONE]              pcb
50   [NONE]              ->
50   [NONE]              state
50   [NONE]              ==
50   [NONE]              CLOSED
50   [NONE]              ,
50   [NONE]              return
50   [NONE]              ERR_ISCONN
50   [FUNC_CALL]         )
50   [NONE]              ;
50   [NONE]              
51   [NONE]              return
51   [RETURN]            (
51   [NONE]              ERR_OK
51   [RETURN]            )
51   [NONE]              ;
51   [NONE]              
52   [FUNC_DEF]          }
52   [NONE]              
54   [FUNC_DEF]          int
54   [NONE]              foo2
54   [FUNC_DEF]          (
54   [NONE]              void
54   [FUNC_DEF]          )
54   [NONE]              
55   [FUNC_DEF]          {
55   [NONE]              
57   [NONE]              return
57   [RETURN]            (
57   [NONE]              -
57   [NONE]              1
57   [RETURN]            )
57   [NONE]              ;
57   [NONE]              
58   [FUNC_DEF]          }
58   [NONE]              
60   [FUNC_DEF]          void
60   [NONE]              foo
60   [FUNC_DEF]          (
60   [NONE]              void
60   [FUNC_DEF]          )
60   [NONE]              
61   [FUNC_DEF]          {
61   [NONE]              
62   [NONE]              if
62   [IF]                (
62   [NONE]              !
62   [NONE]              value
62   [NONE]              
63   [PP_IF]             #
63   [NONE]              ifdef
63   [NONE]              OPTION
63   [NONE]              
64   [NONE]              ||
64   [NONE]              value
64   [NONE]              ==
64   [NONE]              SOMECONST
64   [NONE]              
65   [PP_ENDIF]          #
65   [NONE]              endif
65   [COMMENT_END]       /* comment */
65   [NONE]              
66   [IF]                )
66   [NONE]              
67   [IF]                {
67   [NONE]              
68   [IF]                }
68   [NONE]              
69   [FUNC_DEF]          }
69   [NONE]              
71   [FUNC_DEF]          void
71   [NONE]              foo3
71   [FUNC_DEF]          (
71   [NONE]              void
71   [FUNC_DEF]          )
71   [NONE]              
72   [FUNC_DEF]          {
72   [NONE]              
73   [NONE]              if
73   [IF]                (
0    [NONE]              (
73   [NONE]              *
73   [NONE]              p
73   [NONE]              ==
73   [NONE]              '-'
0    [NONE]              )
73   [NONE]              &&
0    [NONE]              (
73   [NONE]              p
73   [NONE]              [
73   [NONE]              1
73   [NONE]              ]
73   [NONE]              !=
73   [NONE]              ']'
0    [NONE]              )
73   [NONE]              ?
73   [NONE]              
0    [NONE]              (
74   [NONE]              *
74   [NONE]              text
74   [NONE]              <=
74   [NONE]              *
74   [NONE]              ++
74   [NONE]              p
0    [NONE]              )
74   [NONE]              &&
0    [NONE]              (
74   [NONE]              *
74   [NONE]              text
74   [NONE]              >=
74   [NONE]              last
0    [NONE]              )
74   [NONE]              :
0    [NONE]              (
74   [NONE]              *
74   [NONE]              text
74   [NONE]              ==
74   [NONE]              *
74   [NONE]              p
0    [NONE]              )
74   [IF]                )
74   [NONE]              
75   [IF]                {
75   [NONE]              
76   [NONE]              matched
76   [NONE]              =
76   [NONE]              TRUE
76   [NONE]              ;
76   [NONE]              
77   [IF]                }
77   [NONE]              
78   [FUNC_DEF]          }
78   [NONE]              