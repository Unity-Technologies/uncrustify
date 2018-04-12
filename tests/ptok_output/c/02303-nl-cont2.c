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
4    [NONE]              multilinemacro
4    [NONE]              do
4    [DO]                {
4    [NONE]              (
4    [NONE]              x
4    [NONE]              +
4    [NONE]              5
4    [NONE]              )
4    [NONE]              ;
4    [DO]                }
4    [NONE]              while
4    [WHILE_OF_DO]       (
4    [NONE]              0
4    [WHILE_OF_DO]       )
4    [WHILE_OF_DO]       ;
4    [NONE]              \
5    [NONE]              printf
5    [FUNC_CALL]         (
5    [NONE]              "a multilinemacro"
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              \
6    [NONE]              printf
6    [FUNC_CALL]         (
6    [NONE]              "a multilinemacro2"
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
8    [FUNC_DEF]          int
8    [NONE]              main
8    [FUNC_DEF]          (
8    [NONE]              int
8    [NONE]              argc
8    [NONE]              ,
8    [NONE]              char
8    [NONE]              *
8    [NONE]              argv
8    [NONE]              []
8    [FUNC_DEF]          )
8    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [NONE]              int
10   [NONE]              a
10   [NONE]              ,
10   [NONE]              b
10   [NONE]              ;
10   [NONE]              
11   [NONE]              a
11   [NONE]              =
11   [NONE]              1
11   [NONE]              ;
11   [COMMENT_END]       // stupid comment \␍␤b = 2;
12   [NONE]              
14   [NONE]              return
14   [RETURN]            (
14   [NONE]              a
14   [NONE]              +
14   [NONE]              b
14   [RETURN]            )
14   [NONE]              ;
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              