Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [NONE]              void
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              asm
3    [NONE]              __volatile__
3    [ASM]               (
3    [NONE]              
4    [NONE]              "subl %2,%0\n\t"
4    [NONE]              
5    [NONE]              "sbbl %3,%1"
5    [NONE]              
6    [NONE]              :
6    [NONE]              "=a"
6    [NONE]              (
6    [NONE]              l
6    [NONE]              )
6    [NONE]              ,
6    [NONE]              "=d"
6    [NONE]              (
6    [NONE]              h
6    [NONE]              )
6    [NONE]              
7    [NONE]              :
7    [NONE]              "g"
7    [NONE]              (
7    [NONE]              sl
7    [NONE]              )
7    [NONE]              ,
7    [NONE]              "g"
7    [NONE]              (
7    [NONE]              sh
7    [NONE]              )
7    [NONE]              ,
7    [NONE]              
8    [NONE]              "0"
8    [NONE]              (
8    [NONE]              l
8    [NONE]              )
8    [NONE]              ,
8    [NONE]              "1"
8    [NONE]              (
8    [NONE]              h
8    [NONE]              )
8    [ASM]               )
8    [ASM]               ;
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              