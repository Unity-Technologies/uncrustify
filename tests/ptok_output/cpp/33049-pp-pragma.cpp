Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <stdio.h>
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              main
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              argc
2    [NONE]              ,
2    [NONE]              char
2    [NONE]              *
2    [NONE]              *
2    [NONE]              argv
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [PP_IF]             #
4    [NONE]              ifdef
4    [NONE]              DEBUG
4    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              FORMAT
5    [NONE]              "argc=%d\n"
5    [NONE]              
6    [NONE]              std
6    [NONE]              ::
6    [NONE]              printf
6    [FUNC_CALL]         (
6    [NONE]              FORMAT
6    [NONE]              ,
6    [NONE]              argc
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [PP_UNDEF]          #
7    [NONE]              undef
7    [NONE]              FORMAT
7    [NONE]              
8    [PP_ENDIF]          #
8    [NONE]              endif
8    [NONE]              DEBUG
8    [NONE]              
9    [PP_IF]             #
9    [NONE]              ifdef
9    [NONE]              _OPENMP
9    [NONE]              
10   [PP_PRAGMA]         #
10   [NONE]              pragma
10   [NONE]              omp parallel
10   [NONE]              
11   [NONE]              {
11   [NONE]              
12   [NONE]              printf
12   [FUNC_CALL]         (
12   [NONE]              "Hello from thread!\n"
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [NONE]              }
13   [NONE]              
14   [PP_ENDIF]          #
14   [NONE]              endif
14   [NONE]              
15   [NONE]              return
15   [NONE]              0
15   [NONE]              ;
15   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              