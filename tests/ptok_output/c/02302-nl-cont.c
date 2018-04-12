Line [Parent]            Text
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              FOO
2    [MACRO_FUNC]        (
2    [NONE]              bar
2    [MACRO_FUNC]        )
2    [NONE]              create_a_really_long_identifier
2    [NONE]              name
2    [FUNC_CALL]         (
2    [NONE]              some_function
2    [FUNC_CALL]         (
2    [NONE]              \
2    [NONE]              bar1
2    [NONE]              +
2    [NONE]              bar2
2    [FUNC_CALL]         )
2    [NONE]              ,
2    [NONE]              bar3
2    [NONE]              ,
2    [NONE]              \
2    [NONE]              bar4
2    [FUNC_CALL]         )
2    [NONE]              ;
2    [NONE]              
4    [PP_DEFINE]         #
4    [NONE]              define
4    [NONE]              VNV_RECORD_CYCLES
4    [MACRO_FUNC]        (
4    [NONE]              m
4    [MACRO_FUNC]        )
4    [NONE]              do
4    [DO]                {
4    [NONE]              \
5    [NONE]              uint16_t
5    [NONE]              cyc_out
5    [NONE]              =
5    [NONE]              (
5    [C_CAST]            (
5    [C_CAST]            uint16_t
5    [C_CAST]            )
5    [NONE]              TMR4
5    [NONE]              )
5    [NONE]              -
5    [NONE]              cyc_in
5    [NONE]              ;
5    [NONE]              \
6    [NONE]              if
6    [IF]                (
6    [NONE]              cyc_out
6    [NONE]              <
6    [NONE]              vnv_ticks
6    [NONE]              [
6    [NONE]              m
6    [NONE]              ]
6    [NONE]              .
6    [NONE]              min
6    [IF]                )
6    [IF]                
6    [NONE]              vnv_ticks
6    [NONE]              [
6    [NONE]              m
6    [NONE]              ]
6    [NONE]              .
6    [NONE]              min
6    [NONE]              =
6    [NONE]              cyc_out
6    [NONE]              ;
6    [IF]                
6    [NONE]              \
7    [NONE]              if
7    [IF]                (
7    [NONE]              cyc_out
7    [NONE]              >
7    [NONE]              vnv_ticks
7    [NONE]              [
7    [NONE]              m
7    [NONE]              ]
7    [NONE]              .
7    [NONE]              max
7    [IF]                )
7    [IF]                
7    [NONE]              vnv_ticks
7    [NONE]              [
7    [NONE]              m
7    [NONE]              ]
7    [NONE]              .
7    [NONE]              max
7    [NONE]              =
7    [NONE]              cyc_out
7    [NONE]              ;
7    [IF]                
7    [NONE]              \
8    [DO]                }
8    [NONE]              while
8    [WHILE_OF_DO]       (
8    [NONE]              0
8    [WHILE_OF_DO]       )
8    [NONE]              
10   [PP_DEFINE]         #
10   [NONE]              define
10   [NONE]              multilinemacro
10   [NONE]              do
10   [DO]                {
10   [NONE]              (
10   [NONE]              x
10   [NONE]              +
10   [NONE]              5
10   [NONE]              )
10   [NONE]              ;
10   [DO]                }
10   [NONE]              while
10   [WHILE_OF_DO]       (
10   [NONE]              0
10   [WHILE_OF_DO]       )
10   [WHILE_OF_DO]       ;
10   [NONE]              \
11   [NONE]              printf
11   [FUNC_CALL]         (
11   [NONE]              "a multilinemacro"
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              \
12   [NONE]              printf
12   [FUNC_CALL]         (
12   [NONE]              "a multilinemacro2"
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
14   [FUNC_DEF]          int
14   [NONE]              main
14   [FUNC_DEF]          (
14   [NONE]              int
14   [NONE]              argc
14   [NONE]              ,
14   [NONE]              char
14   [NONE]              *
14   [NONE]              argv
14   [NONE]              []
14   [FUNC_DEF]          )
14   [NONE]              
15   [FUNC_DEF]          {
15   [NONE]              
16   [NONE]              int
16   [NONE]              a
16   [NONE]              ,
16   [NONE]              b
16   [NONE]              ;
16   [NONE]              
17   [NONE]              a
17   [NONE]              =
17   [NONE]              1
17   [NONE]              ;
17   [COMMENT_END]       // stupid comment \\
17   [NONE]              
18   [NONE]              b
18   [NONE]              =
18   [NONE]              2
18   [NONE]              ;
18   [NONE]              
20   [NONE]              return
20   [RETURN]            (
20   [NONE]              a
20   [NONE]              +
20   [NONE]              b
20   [RETURN]            )
20   [NONE]              ;
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              