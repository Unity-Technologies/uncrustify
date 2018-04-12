Line [Parent]            Text
1    [NONE]              
2    [PP_IF]             #
2    [NONE]              if
2    [NONE]              defined
2    [NONE]              (
2    [NONE]              A
2    [NONE]              )
2    [NONE]              
4    [NONE]              extern
4    [NONE]              int
4    [NONE]              a
4    [NONE]              ;
4    [NONE]              
6    [PP_ELSE]           #
6    [NONE]              elif
6    [NONE]              defined
6    [NONE]              (
6    [NONE]              B
6    [NONE]              )
6    [NONE]              
8    [NONE]              extern
8    [NONE]              int
8    [NONE]              b
8    [NONE]              ;
8    [NONE]              
10   [PP_ELSE]           #
10   [NONE]              else
10   [NONE]              
12   [NONE]              extern
12   [NONE]              int
12   [NONE]              c
12   [NONE]              ;
12   [NONE]              
14   [PP_ENDIF]          #
14   [NONE]              endif
14   [NONE]              
16   [FUNC_DEF]          int
16   [NONE]              foo
16   [FUNC_DEF]          (
16   [FUNC_DEF]          )
16   [NONE]              
17   [FUNC_DEF]          {
17   [NONE]              
18   [PP_IF]             #
18   [NONE]              if
18   [NONE]              defined
18   [NONE]              (
18   [NONE]              A
18   [NONE]              )
18   [NONE]              
19   [NONE]              return
19   [NONE]              a
19   [NONE]              ;
19   [NONE]              
20   [PP_ELSE]           #
20   [NONE]              elif
20   [NONE]              defined
20   [NONE]              (
20   [NONE]              B
20   [NONE]              )
20   [NONE]              
21   [NONE]              return
21   [NONE]              b
21   [NONE]              ;
21   [NONE]              
22   [PP_ELSE]           #
22   [NONE]              else
22   [NONE]              
23   [NONE]              return
23   [NONE]              c
23   [NONE]              ;
23   [NONE]              
24   [PP_ENDIF]          #
24   [NONE]              endif
24   [NONE]              
25   [FUNC_DEF]          }
25   [NONE]              