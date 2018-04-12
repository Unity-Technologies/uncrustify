Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              "child.h"
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              main
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              argc
2    [NONE]              ,
2    [NONE]              char
2    [NONE]              *
2    [NONE]              argv
2    [NONE]              []
2    [FUNC_DEF]          )
2    [FUNC_DEF]          {
2    [NONE]              
3    [C_CAST]            (
3    [C_CAST]            void
3    [C_CAST]            )
3    [NONE]              argc
3    [NONE]              ;
3    [NONE]              
4    [C_CAST]            (
4    [C_CAST]            void
4    [C_CAST]            )
4    [NONE]              argv
4    [NONE]              ;
4    [NONE]              
5    [NONE]              Child
5    [NONE]              child
5    [NONE]              ;
5    [NONE]              
6    [NONE]              for
6    [FOR]               (
6    [NONE]              auto
6    [NONE]              &
6    [NONE]              attribute
6    [NONE]              :
6    [NONE]              *
6    [NONE]              child
6    [NONE]              .
6    [NONE]              GetAttributes
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [FOR]               )
6    [FOR]               {
6    [NONE]              
7    [NONE]              std
7    [NONE]              ::
7    [NONE]              cout
7    [NONE]              <<
7    [NONE]              attribute
7    [NONE]              <<
7    [NONE]              std
7    [NONE]              ::
7    [NONE]              endl
7    [NONE]              ;
7    [NONE]              
8    [FOR]               }
8    [NONE]              
9    [NONE]              return
9    [NONE]              0
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              