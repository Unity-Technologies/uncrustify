Line [Parent]            Text
1    [NONE]              
3    [PP_DEFINE]         #
3    [NONE]              define
3    [NONE]              FOO
3    [MACRO_FUNC]        (
3    [NONE]              bar
3    [MACRO_FUNC]        )
3    [NONE]              create_a_really_long_identifier
3    [NONE]              name
3    [FUNC_CALL]         (
3    [NONE]              some_function
3    [FUNC_CALL]         (
3    [NONE]              bar1
3    [NONE]              +
3    [NONE]              bar2
3    [FUNC_CALL]         )
3    [NONE]              ,
3    [NONE]              bar3
3    [NONE]              ,
3    [NONE]              bar4
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
5    [COMMENT_WHOLE]     /* *INDENT-OFF* */
5    [NONE]              
6    [NONE]                 int foo[] = {
6    [NONE]              
7    [NONE]                    1,   3,   5,
7    [NONE]              
8    [NONE]                    3,   5,   7,
8    [NONE]              
9    [NONE]                    5,   7,   9,
9    [NONE]              
10   [NONE]                 };
10   [NONE]              
11   [COMMENT_WHOLE]     /* *INDENT-ON* */
11   [NONE]              
13   [PP_DEFINE]         #
13   [NONE]              define
13   [NONE]              multilinemacro
13   [NONE]              do
13   [DO]                {
13   [NONE]              (
13   [NONE]              x
13   [NONE]              +
13   [NONE]              5
13   [NONE]              )
13   [NONE]              ;
13   [DO]                }
13   [NONE]              while
13   [WHILE_OF_DO]       (
13   [NONE]              0
13   [WHILE_OF_DO]       )
13   [WHILE_OF_DO]       ;
13   [NONE]              \
14   [NONE]              printf
14   [FUNC_CALL]         (
14   [NONE]              "a multilinemacro"
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              \
15   [NONE]              printf
15   [FUNC_CALL]         (
15   [NONE]              "a multilinemacro2"
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
17   [FUNC_DEF]          int
17   [NONE]              main
17   [FUNC_DEF]          (
17   [NONE]              int
17   [NONE]              argc
17   [NONE]              ,
17   [NONE]              char
17   [NONE]              *
17   [NONE]              argv
17   [NONE]              []
17   [FUNC_DEF]          )
17   [NONE]              
18   [FUNC_DEF]          {
18   [NONE]              
19   [COMMENT_WHOLE]     /* *INDENT-OFF* */
19   [NONE]              
21   [NONE]                 int a, b;
21   [NONE]              
22   [NONE]              a = 1; // stupid comment \
22   [NONE]              
23   [NONE]              b = 2;
23   [NONE]              
25   [COMMENT_WHOLE]     /* *INDENT-ON* */
25   [NONE]              
26   [NONE]              return
26   [RETURN]            (
26   [NONE]              a
26   [NONE]              +
26   [NONE]              b
26   [RETURN]            )
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
29   [COMMENT_WHOLE]     /* *INDENT-OFF* */
29   [NONE]              
30   [NONE]              int a;
30   [NONE]              
31   [COMMENT_WHOLE]     /* *INDENT-ON* */
31   [NONE]              