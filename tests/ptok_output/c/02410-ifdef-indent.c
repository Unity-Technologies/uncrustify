Line [Parent]            Text
1    [PP_IF]             #
1    [NONE]              ifdef
1    [NONE]              foo
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              include
2    [NONE]              <foo1.h>
2    [NONE]              
3    [PP_ELSE]           #
3    [NONE]              else
3    [NONE]              
4    [PP_INCLUDE]        #
4    [NONE]              include
4    [NONE]              <foo2.h>
4    [NONE]              
5    [PP_ENDIF]          #
5    [NONE]              endif
5    [NONE]              
7    [FUNC_DEF]          int
7    [NONE]              
8    [NONE]              show_interrupts
8    [FUNC_DEF]          (
8    [NONE]              struct
8    [STRUCT]            seq_file
8    [STRUCT]            *
8    [NONE]              p
8    [NONE]              ,
8    [NONE]              void
8    [NONE]              *
8    [NONE]              v
8    [FUNC_DEF]          )
8    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [PP_IF]             #
10   [NONE]              ifndef
10   [NONE]              CONFIG_SMP
10   [NONE]              
11   [NONE]              a
11   [NONE]              ++
11   [NONE]              ;
11   [NONE]              
12   [PP_ELSE]           #
12   [NONE]              else
12   [NONE]              
13   [NONE]              for
13   [FOR]               (
13   [NONE]              b
13   [NONE]              =
13   [NONE]              0
13   [FOR]               ;
13   [NONE]              b
13   [NONE]              <
13   [NONE]              9
13   [FOR]               ;
13   [NONE]              b
13   [NONE]              ++
13   [FOR]               )
13   [FOR]               
13   [NONE]              
14   [NONE]              if
14   [IF]                (
14   [NONE]              b
14   [NONE]              &
14   [NONE]              1
14   [IF]                )
14   [IF]                
14   [NONE]              
15   [NONE]              k
15   [NONE]              ++
15   [NONE]              ;
15   [IF]                
15   [FOR]               
15   [NONE]              
16   [PP_ENDIF]          #
16   [NONE]              endif
16   [NONE]              
18   [NONE]              if
18   [IF]                (
18   [NONE]              v
18   [IF]                )
18   [NONE]              
19   [IF]                {
19   [NONE]              
20   [NONE]              bar
20   [FUNC_CALL]         (
20   [NONE]              v
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [PP_IF]             #
21   [NONE]              if
21   [NONE]              DEBUG
21   [NONE]              ==
21   [NONE]              1
21   [NONE]              
22   [NONE]              printf
22   [FUNC_CALL]         (
22   [NONE]              "yup\n"
22   [FUNC_CALL]         )
22   [NONE]              ;
22   [NONE]              
23   [PP_ENDIF]          #
23   [NONE]              endif
23   [NONE]              
24   [IF]                }
24   [NONE]              
25   [FUNC_DEF]          }
25   [NONE]              
27   [FUNC_DEF]          void
27   [NONE]              foo
27   [FUNC_DEF]          (
27   [FUNC_DEF]          )
27   [NONE]              
28   [FUNC_DEF]          {
28   [NONE]              
29   [NONE]              int
29   [NONE]              i
29   [NONE]              =
29   [NONE]              0
29   [NONE]              ;
29   [NONE]              
30   [PP_IF]             #
30   [NONE]              if
30   [NONE]              DEBUG
30   [NONE]              ==
30   [NONE]              1
30   [NONE]              
31   [NONE]              i
31   [NONE]              --
31   [NONE]              ;
31   [NONE]              
32   [PP_ENDIF]          #
32   [NONE]              endif
32   [NONE]              
33   [NONE]              i
33   [NONE]              ++
33   [NONE]              ;
33   [NONE]              
34   [FUNC_DEF]          }
34   [NONE]              