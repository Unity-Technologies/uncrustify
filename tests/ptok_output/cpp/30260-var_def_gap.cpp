Line [Parent]            Text
1    [PP_DEFINE]         #
1    [NONE]              define
1    [NONE]              A
1    [NONE]              -
1    [NONE]              3
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              B
2    [NONE]              163
2    [NONE]              
3    [PP_DEFINE]         #
3    [NONE]              define
3    [NONE]              C
3    [NONE]              2
3    [NONE]              
5    [FUNC_DEF]          void
5    [NONE]              foo
5    [FUNC_DEF]          (
5    [FUNC_DEF]          )
5    [NONE]              
6    [FUNC_DEF]          {
6    [NONE]              
7    [NONE]              const
7    [NONE]              std
7    [NONE]              ::
7    [NONE]              string
7    [NONE]              &
7    [NONE]              targetName1
7    [NONE]              =
7    [NONE]              pEntry
7    [NONE]              ->
7    [NONE]              getTargetName
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [NONE]              const
8    [NONE]              Point3d_t
8    [NONE]              currentPosition1
8    [NONE]              =
8    [NONE]              pSatOrbit
8    [NONE]              ->
8    [NONE]              GetPositionAtTime
8    [FUNC_CALL]         (
8    [NONE]              jdNow
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
11   [FUNC_DEF]          void
11   [NONE]              foo2
11   [FUNC_DEF]          (
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              const
13   [NONE]              std
13   [NONE]              ::
13   [NONE]              string
13   [NONE]              *
13   [NONE]              *
13   [NONE]              targetName2
13   [NONE]              =
13   [NONE]              pEntry
13   [NONE]              ->
13   [NONE]              getTargetName
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [NONE]              const
14   [NONE]              Point3d_t
14   [NONE]              currentPosition2
14   [NONE]              =
14   [NONE]              pSatOrbit
14   [NONE]              ->
14   [NONE]              GetPositionAtTime
14   [FUNC_CALL]         (
14   [NONE]              jdNow
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
17   [FUNC_DEF]          void
17   [NONE]              foo2
17   [FUNC_DEF]          (
17   [FUNC_DEF]          )
17   [NONE]              
18   [FUNC_DEF]          {
18   [NONE]              
19   [NONE]              const
19   [NONE]              std
19   [NONE]              ::
19   [NONE]              string
19   [NONE]              *
19   [NONE]              *
19   [NONE]              targetName3
19   [NONE]              =
19   [NONE]              pEntry
19   [NONE]              ->
19   [NONE]              getTargetName
19   [FUNC_CALL]         (
19   [FUNC_CALL]         )
19   [NONE]              ;
19   [NONE]              
20   [NONE]              const
20   [NONE]              Point3d_t
20   [NONE]              currentPosition3
20   [NONE]              =
20   [NONE]              pSatOrbit
20   [NONE]              ->
20   [NONE]              GetPositionAtTime
20   [FUNC_CALL]         (
20   [NONE]              jdNow
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              
23   [NONE]              typedef
23   [NONE]              int
23   [NONE]              MY_INT
23   [TYPEDEF]           ;
23   [NONE]              
24   [NONE]              typedef
24   [NONE]              int
24   [NONE]              *
24   [NONE]              MY_INTP
24   [TYPEDEF]           ;
24   [NONE]              
25   [NONE]              typedef
25   [FUNC_TYPE]         int
25   [FUNC_TYPE]         (
25   [NONE]              *
25   [TYPEDEF]           foo_t
25   [FUNC_TYPE]         )
25   [FUNC_PROTO]        (
25   [NONE]              void
25   [NONE]              *
25   [NONE]              bar
25   [FUNC_PROTO]        )
25   [TYPEDEF]           ;
25   [NONE]              
26   [NONE]              typedef
26   [FUNC_TYPE]         int
26   [FUNC_TYPE]         (
26   [NONE]              *
26   [TYPEDEF]           somefunc_t
26   [FUNC_TYPE]         )
26   [FUNC_PROTO]        (
26   [NONE]              void
26   [NONE]              *
26   [NONE]              barstool
26   [FUNC_PROTO]        )
26   [TYPEDEF]           ;
26   [NONE]              