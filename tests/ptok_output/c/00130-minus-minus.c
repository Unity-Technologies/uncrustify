Line [Parent]            Text
1    [NONE]              int
1    [NONE]              a
1    [NONE]              =
1    [NONE]              5
1    [NONE]              ;
1    [NONE]              
2    [NONE]              int
2    [NONE]              *
2    [NONE]              b
2    [NONE]              =
2    [NONE]              &
2    [NONE]              a
2    [NONE]              ;
2    [NONE]              
3    [FUNC_DEF]          int
3    [NONE]              negneg
3    [FUNC_DEF]          (
3    [NONE]              void
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              return
5    [RETURN]            (
5    [NONE]              -
5    [NONE]              -
5    [NONE]              a
5    [RETURN]            )
5    [NONE]              ;
5    [NONE]              
6    [FUNC_DEF]          }
6    [NONE]              
8    [FUNC_DEF]          int
8    [NONE]              pospos
8    [FUNC_DEF]          (
8    [NONE]              void
8    [FUNC_DEF]          )
8    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [NONE]              return
10   [RETURN]            (
10   [NONE]              +
10   [NONE]              +
10   [NONE]              a
10   [RETURN]            )
10   [NONE]              ;
10   [NONE]              
11   [FUNC_DEF]          }
11   [NONE]              
13   [FUNC_DEF]          int
13   [NONE]              negpos
13   [FUNC_DEF]          (
13   [NONE]              void
13   [FUNC_DEF]          )
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
15   [NONE]              return
15   [RETURN]            (
15   [NONE]              -
15   [NONE]              +
15   [NONE]              a
15   [RETURN]            )
15   [NONE]              ;
15   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
18   [FUNC_DEF]          int
18   [NONE]              posneg
18   [FUNC_DEF]          (
18   [NONE]              void
18   [FUNC_DEF]          )
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [NONE]              return
20   [RETURN]            (
20   [NONE]              +
20   [NONE]              -
20   [NONE]              a
20   [RETURN]            )
20   [NONE]              ;
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              
23   [PP_IF]             #
23   [NONE]              if
23   [NONE]              VERSION
23   [NONE]              <
23   [NONE]              -
23   [NONE]              5
23   [NONE]              
24   [FUNC_DEF]          int
24   [NONE]              negnegneg
24   [FUNC_DEF]          (
24   [NONE]              void
24   [FUNC_DEF]          )
24   [NONE]              
25   [FUNC_DEF]          {
25   [NONE]              
26   [NONE]              return
26   [RETURN]            (
26   [NONE]              -
26   [NONE]              -
26   [NONE]              -
26   [NONE]              a
26   [RETURN]            )
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
28   [PP_ELSE]           #
28   [NONE]              else
28   [NONE]              
29   [FUNC_DEF]          int
29   [NONE]              negat
29   [FUNC_DEF]          (
29   [NONE]              void
29   [FUNC_DEF]          )
29   [NONE]              
30   [FUNC_DEF]          {
30   [NONE]              
31   [NONE]              return
31   [RETURN]            (
31   [NONE]              -
31   [NONE]              *
31   [NONE]              b
31   [RETURN]            )
31   [NONE]              ;
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              
33   [PP_ENDIF]          #
33   [NONE]              endif
33   [NONE]              