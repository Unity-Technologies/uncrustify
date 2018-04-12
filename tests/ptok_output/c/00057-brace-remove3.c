Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              myBoolean
3    [IF]                )
3    [IF]                {
3    [NONE]              
4    [PP_IF]             #
4    [NONE]              ifdef
4    [NONE]              DEBUG
4    [NONE]              
5    [NONE]              printf
5    [FUNC_CALL]         (
5    [NONE]              "ACK"
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [PP_ENDIF]          #
6    [NONE]              endif
6    [NONE]              
7    [IF]                }
7    [NONE]              
8    [NONE]              return
8    [NONE]              true
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
13   [NONE]              if
13   [IF]                (
13   [NONE]              m_errno
13   [NONE]              ==
13   [NONE]              ERR_NONE
13   [IF]                )
13   [IF]                {
13   [NONE]              
14   [NONE]              function1
14   [FUNC_CALL]         (
14   [NONE]              variables
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [NONE]              function2
15   [FUNC_CALL]         (
15   [NONE]              variables
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [IF]                }
16   [NONE]              else
16   [ELSE]              {
16   [NONE]              
17   [NONE]              function1
17   [FUNC_CALL]         (
17   [NONE]              varialbes
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [ELSE]              }
18   [NONE]              
19   [COMMENT_WHOLE]     //MyComment1
19   [NONE]              
20   [COMMENT_WHOLE]     //MyComment2
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              
23   [FUNC_DEF]          void
23   [NONE]              foo3
23   [FUNC_DEF]          (
23   [FUNC_DEF]          )
23   [NONE]              
24   [FUNC_DEF]          {
24   [NONE]              
25   [NONE]              if
25   [IF]                (
25   [NONE]              statment
25   [IF]                )
25   [IF]                {
25   [NONE]              
26   [NONE]              if
26   [IF]                (
26   [NONE]              statment
26   [IF]                )
26   [IF]                {
26   [NONE]              
27   [NONE]              condition
27   [NONE]              ;
27   [NONE]              
28   [NONE]              return
28   [NONE]              true
28   [NONE]              ;
28   [NONE]              
29   [IF]                }
29   [NONE]              
29   [IF]                }
29   [NONE]              
30   [NONE]              return
30   [NONE]              false
30   [NONE]              ;
30   [NONE]              
31   [FUNC_DEF]          }
31   [NONE]              