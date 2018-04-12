Line [Parent]            Text
1    [FUNC_DEF]          int
1    [NONE]              main
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              int
3    [NONE]              b
3    [NONE]              =
3    [NONE]              3
3    [NONE]              ;
3    [NONE]              
4    [NONE]              int
4    [NONE]              *
4    [NONE]              p
4    [NONE]              =
4    [NONE]              &
4    [NONE]              b
4    [NONE]              ;
4    [NONE]              
6    [COMMENT_WHOLE]     // Should stay as b * *p
6    [NONE]              
7    [NONE]              int
7    [NONE]              a
7    [NONE]              =
7    [NONE]              b
7    [NONE]              *
7    [NONE]              *
7    [NONE]              p
7    [NONE]              ;
7    [NONE]              
9    [COMMENT_WHOLE]     // Correctly formats as a * b;
9    [NONE]              
10   [NONE]              int
10   [NONE]              c
10   [NONE]              =
10   [NONE]              b
10   [NONE]              *
10   [NONE]              a
10   [NONE]              ;
10   [NONE]              
12   [COMMENT_WHOLE]     // Correctly formats as d = *p;
12   [NONE]              
13   [NONE]              int
13   [NONE]              d
13   [NONE]              =
13   [NONE]              *
13   [NONE]              p
13   [NONE]              ;
13   [NONE]              
14   [FUNC_DEF]          }
14   [NONE]              