Line [Parent]            Text
1    [NONE]              
2    [COMMENT_WHOLE]     // note - set threshold to three
2    [NONE]              
3    [FUNC_DEF]          void
3    [NONE]              foo
3    [FUNC_DEF]          (
3    [NONE]              void
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              printf
5    [FUNC_CALL]         (
5    [NONE]              "This is the first line\n"
5    [NONE]              
6    [NONE]              "And this is the second.\n"
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
8    [NONE]              fprintf
8    [FUNC_CALL]         (
8    [NONE]              stderr
8    [NONE]              ,
8    [NONE]              "This is the first line\n"
8    [NONE]              
9    [NONE]              "And this is the second.\n"
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
11   [NONE]              fprintf
11   [FUNC_CALL]         (
11   [NONE]              stderr
11   [NONE]              ,
11   [NONE]              "Format string: %s"
11   [NONE]              ,
11   [NONE]              "This is the first line\n"
11   [NONE]              
12   [NONE]              "And this is the second.\n"
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              