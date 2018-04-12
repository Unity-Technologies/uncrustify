Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              main
2    [FUNC_DEF]          (
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              int
4    [NONE]              a
4    [NONE]              ;
4    [NONE]              
5    [PP_IF]             #
5    [NONE]              ifndef
5    [NONE]              SOMEDEF
5    [NONE]              
6    [NONE]              int
6    [NONE]              b
6    [NONE]              ;
6    [NONE]              
7    [PP_ENDIF]          #
7    [NONE]              endif
7    [COMMENT_END]       /* SOMEDEF */
7    [NONE]              
9    [NONE]              if
9    [IF]                (
9    [NONE]              a
9    [IF]                )
9    [NONE]              
10   [IF]                {
10   [NONE]              
11   [IF]                }
11   [NONE]              
12   [PP_IF]             #
12   [NONE]              ifndef
12   [NONE]              SOMEDEF
12   [NONE]              
13   [NONE]              else
13   [NONE]              if
13   [ELSEIF]            (
13   [NONE]              b
13   [ELSEIF]            )
13   [NONE]              
14   [ELSEIF]            {
14   [NONE]              
15   [ELSEIF]            }
15   [NONE]              
16   [PP_ENDIF]          #
16   [NONE]              endif
16   [COMMENT_END]       /* SOMEDEF */
16   [NONE]              
18   [COMMENT_WHOLE]     /* same thing w/o preprocs for reference */
18   [NONE]              
19   [NONE]              if
19   [IF]                (
19   [NONE]              a
19   [IF]                )
19   [NONE]              
20   [IF]                {
20   [NONE]              
21   [IF]                }
21   [NONE]              
22   [NONE]              else
22   [NONE]              if
22   [ELSEIF]            (
22   [NONE]              b
22   [ELSEIF]            )
22   [NONE]              
23   [ELSEIF]            {
23   [NONE]              
24   [ELSEIF]            }
24   [NONE]              
26   [PP_IF]             #
26   [NONE]              ifdef
26   [NONE]              FOO
26   [NONE]              
27   [NONE]              do
27   [NONE]              
28   [DO]                {
28   [NONE]              
29   [NONE]              Foo
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [DO]                }
30   [NONE]              
31   [PP_ENDIF]          #
31   [NONE]              endif
31   [NONE]              
32   [NONE]              while
32   [WHILE_OF_DO]       (
32   [NONE]              Loop
32   [NONE]              --
32   [WHILE_OF_DO]       )
32   [WHILE_OF_DO]       ;
32   [NONE]              
33   [FUNC_DEF]          }
33   [NONE]              