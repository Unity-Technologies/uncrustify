Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          void
2    [NONE]              f
2    [FUNC_DEF]          (
2    [FUNC_DEF]          )
2    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              0
3    [IF]                )
3    [NONE]              
4    [PP_PRAGMA]         #
4    [NONE]              pragma
4    [NONE]              omp atomic
4    [NONE]              
3    [IF]                {
3    [NONE]              
5    [NONE]              i
5    [NONE]              ++
5    [NONE]              ;
5    [NONE]              
5    [IF]                }
5    [NONE]              
6    [FUNC_DEF]          }
6    [NONE]              
9    [FUNC_DEF]          void
9    [NONE]              f
9    [FUNC_DEF]          (
9    [FUNC_DEF]          )
9    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              0
10   [IF]                )
10   [NONE]              
11   [PP_IF]             #
11   [NONE]              if
11   [NONE]              foo
11   [NONE]              
11   [IF]                {
11   [NONE]              
12   [NONE]              i
12   [NONE]              ++
12   [NONE]              ;
12   [NONE]              
12   [IF]                }
12   [NONE]              
13   [PP_ELSE]           #
13   [NONE]              else
13   [NONE]              
13   [IF]                {
13   [NONE]              
14   [NONE]              i
14   [NONE]              +=
14   [NONE]              2
14   [NONE]              ;
14   [NONE]              
14   [IF]                }
14   [NONE]              
15   [PP_ENDIF]          #
15   [NONE]              endif
15   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
18   [FUNC_DEF]          void
18   [NONE]              f
18   [FUNC_DEF]          (
18   [FUNC_DEF]          )
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [NONE]              while
20   [WHILE]             (
20   [NONE]              108
20   [WHILE]             )
20   [NONE]              
20   [WHILE]             {
20   [NONE]              
21   [NONE]              if
21   [IF]                (
21   [NONE]              42
21   [IF]                )
21   [NONE]              
22   [PP_PRAGMA]         #
22   [NONE]              pragma
22   [NONE]              omp critical
22   [NONE]              
23   [IF]                {
23   [IF]                }
23   [NONE]              
24   [NONE]              if
24   [IF]                (
24   [NONE]              23
24   [IF]                )
24   [NONE]              
25   [PP_PRAGMA]         #
25   [NONE]              pragma
25   [NONE]              omp critical
25   [NONE]              
24   [IF]                {
24   [NONE]              
26   [NONE]              ++
26   [NONE]              i
26   [NONE]              ;
26   [NONE]              
26   [IF]                }
26   [NONE]              
27   [NONE]              while
27   [WHILE]             (
27   [NONE]              16
27   [WHILE]             )
27   [NONE]              
28   [WHILE]             {
28   [NONE]              
28   [WHILE]             }
28   [NONE]              
29   [NONE]              int
29   [NONE]              i
29   [NONE]              =
29   [NONE]              15
29   [NONE]              ;
29   [NONE]              
30   [NONE]              if
30   [IF]                (
30   [NONE]              8
30   [IF]                )
30   [NONE]              
31   [PP_PRAGMA]         #
31   [NONE]              pragma
31   [NONE]              omp atomic
31   [NONE]              
30   [IF]                {
30   [NONE]              
32   [NONE]              i
32   [NONE]              +=
32   [NONE]              4
32   [NONE]              ;
32   [NONE]              
32   [IF]                }
32   [NONE]              
33   [WHILE]             }
33   [NONE]              
34   [FUNC_DEF]          }
34   [NONE]              