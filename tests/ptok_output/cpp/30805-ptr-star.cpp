Line [Parent]            Text
1    [NONE]              int
1    [NONE]              dx
1    [NONE]              =
1    [NONE]              m_ClipBox
1    [NONE]              .
1    [NONE]              GetWidth
1    [FUNC_CALL]         (
1    [FUNC_CALL]         )
1    [NONE]              *
1    [NONE]              GetZoom
1    [FUNC_CALL]         (
1    [FUNC_CALL]         )
1    [NONE]              ;
1    [NONE]              
3    [NONE]              m_ClipBox
3    [NONE]              .
3    [NONE]              m_Pos
3    [NONE]              .
3    [NONE]              y
3    [NONE]              =
3    [NONE]              PaintClipBox
3    [NONE]              .
3    [NONE]              y
3    [NONE]              *
3    [NONE]              GetZoom
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
5    [NONE]              int
5    [NONE]              *
5    [NONE]              i
5    [NONE]              ;
5    [NONE]              
6    [NONE]              char
6    [NONE]              *
6    [NONE]              i
6    [NONE]              ;
6    [NONE]              
8    [FUNC_DEF]          int
8    [NONE]              MyFunc
8    [FUNC_DEF]          (
8    [NONE]              std
8    [NONE]              ::
8    [NONE]              string
8    [NONE]              &
8    [NONE]              s
8    [NONE]              ,
8    [NONE]              char
8    [NONE]              *
8    [FUNC_DEF]          )
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              char
9    [NONE]              *
9    [NONE]              c
9    [NONE]              =
9    [NONE]              const_cast
9    [TYPE_CAST]         <
9    [NONE]              char
9    [NONE]              *
9    [TYPE_CAST]         >
9    [TYPE_CAST]         (
9    [NONE]              s
9    [NONE]              .
9    [NONE]              c_str
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [TYPE_CAST]         )
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
12   [FUNC_DEF]          int
12   [NONE]              YerFunc
12   [FUNC_DEF]          (
12   [NONE]              std
12   [NONE]              ::
12   [NONE]              string
12   [NONE]              &
12   [NONE]              s
12   [NONE]              ,
12   [NONE]              char
12   [NONE]              *
12   [NONE]              *
12   [FUNC_DEF]          )
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              char
13   [NONE]              *
13   [NONE]              *
13   [NONE]              c
13   [NONE]              ;
13   [NONE]              
14   [NONE]              int
14   [NONE]              a
14   [NONE]              =
14   [NONE]              b
14   [NONE]              [
14   [NONE]              0
14   [NONE]              ]
14   [NONE]              *
14   [NONE]              c
14   [NONE]              ;
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
17   [FUNC_PROTO]        int
17   [FUNC_PROTO]        *
17   [NONE]              X
17   [FUNC_PROTO]        (
17   [NONE]              int
17   [NONE]              *
17   [NONE]              i
17   [NONE]              ,
17   [NONE]              int
17   [NONE]              *
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [NONE]              
19   [NONE]              int
19   [NONE]              *
19   [NONE]              i
19   [NONE]              =
19   [NONE]              &
19   [NONE]              a
19   [NONE]              ;
19   [NONE]              
20   [NONE]              int
20   [NONE]              *
20   [NONE]              i
20   [NONE]              =
20   [NONE]              *
20   [NONE]              b
20   [NONE]              ;
20   [NONE]              
21   [NONE]              int
21   [NONE]              *
21   [NONE]              i
21   [NONE]              =
21   [NONE]              &
21   [NONE]              *
21   [NONE]              c
21   [NONE]              ;
21   [NONE]              
23   [FUNC_PROTO]        int
23   [FUNC_PROTO]        *
23   [FUNC_PROTO]        Aclass
23   [FUNC_PROTO]        ::
23   [NONE]              X
23   [FUNC_PROTO]        (
23   [NONE]              int
23   [NONE]              *
23   [NONE]              i
23   [NONE]              ,
23   [NONE]              int
23   [NONE]              *
23   [FUNC_PROTO]        )
23   [FUNC_PROTO]        ;
23   [NONE]              
25   [NONE]              class
25   [CLASS]             Aclass
25   [CLASS]             {
25   [NONE]              
26   [FUNC_PROTO]        int
26   [FUNC_PROTO]        *
26   [NONE]              X
26   [FUNC_PROTO]        (
26   [NONE]              int
26   [NONE]              *
26   [NONE]              i
26   [NONE]              ,
26   [NONE]              int
26   [NONE]              *
26   [FUNC_PROTO]        )
26   [FUNC_PROTO]        ;
26   [NONE]              
27   [CLASS]             }
27   [NONE]              
28   [NONE]              extern
28   [EXTERN]            "C"
28   [EXTERN]            {
28   [NONE]              
29   [FUNC_PROTO]        int
29   [NONE]              foo1
29   [FUNC_PROTO]        (
29   [NONE]              int
29   [NONE]              *
29   [NONE]              a
29   [FUNC_PROTO]        )
29   [FUNC_PROTO]        ;
29   [NONE]              
30   [FUNC_PROTO]        int
30   [NONE]              foo2
30   [FUNC_PROTO]        (
30   [NONE]              sometype
30   [NONE]              *
30   [NONE]              a
30   [FUNC_PROTO]        )
30   [FUNC_PROTO]        ;
30   [NONE]              
31   [EXTERN]            }
31   [NONE]              
32   [FUNC_PROTO]        int
32   [NONE]              bar1
32   [FUNC_PROTO]        (
32   [NONE]              int
32   [NONE]              *
32   [NONE]              a
32   [FUNC_PROTO]        )
32   [FUNC_PROTO]        ;
32   [NONE]              
33   [FUNC_PROTO]        int
33   [NONE]              bar2
33   [FUNC_PROTO]        (
33   [NONE]              sometype
33   [NONE]              *
33   [NONE]              a
33   [FUNC_PROTO]        )
33   [FUNC_PROTO]        ;
33   [NONE]              
35   [NONE]              struct
35   [STRUCT]            X
35   [NONE]              
36   [STRUCT]            {
36   [NONE]              
37   [NONE]              int
37   [NONE]              *
37   [NONE]              a
37   [NONE]              ;
37   [COMMENT_END]       // 3:5
37   [NONE]              
39   [FUNC_DEF]          int
39   [NONE]              f
39   [FUNC_DEF]          (
39   [FUNC_DEF]          )
39   [NONE]              
40   [FUNC_DEF]          {
40   [NONE]              
41   [NONE]              return
41   [NONE]              *
41   [NONE]              b
41   [NONE]              ;
41   [COMMENT_END]       // 7:8
41   [NONE]              
42   [FUNC_DEF]          }
42   [NONE]              
43   [FUNC_DEF]          int
43   [NONE]              g
43   [FUNC_DEF]          (
43   [FUNC_DEF]          )
43   [NONE]              
44   [FUNC_DEF]          {
44   [NONE]              
45   [NONE]              return
45   [NONE]              *
45   [NONE]              c
45   [NONE]              ;
45   [COMMENT_END]       // 11:8
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              
47   [STRUCT]            }
47   [STRUCT]            ;
47   [NONE]              
49   [NONE]              int
49   [NONE]              *
49   [NONE]              const
49   [NONE]              i
49   [NONE]              ;
49   [NONE]              
50   [NONE]              int
50   [NONE]              *
50   [NONE]              static
50   [NONE]              i
50   [NONE]              ;
50   [NONE]              