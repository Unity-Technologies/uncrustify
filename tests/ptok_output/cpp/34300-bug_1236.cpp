Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              int
3    [NONE]              head
3    [NONE]              ,
3    [NONE]              bar
3    [NONE]              ;
3    [NONE]              
4    [NONE]              __asm__
4    [NONE]              __volatile__
4    [NONE]              
5    [ASM]               (
5    [NONE]              
6    [NONE]              "movq %0,%%xmm0\n\t"
6    [COMMENT_END]       /* asm template */
6    [NONE]              
7    [NONE]              "0:\n\t"
7    [NONE]              
8    [NONE]              "bar\t%0, [%4]\n\t"
8    [COMMENT_END]       // in template
8    [NONE]              
9    [NONE]              "1:\n\t"
9    [NONE]              
10   [NONE]              :
10   [NONE]              "=a"
10   [NONE]              ,
10   [NONE]              (
10   [NONE]              bar
10   [NONE]              )
10   [NONE]              
11   [NONE]              :
11   [NONE]              "=&b"
11   [NONE]              ,
11   [NONE]              (
11   [NONE]              &
11   [NONE]              head
11   [NONE]              )
11   [NONE]              ,
11   [NONE]              "+m"
11   [NONE]              ,
11   [NONE]              (
11   [NONE]              bar
11   [NONE]              )
11   [NONE]              
12   [NONE]              :
12   [NONE]              "cc"
12   [NONE]              
13   [ASM]               )
13   [ASM]               ;
13   [NONE]              
14   [FUNC_DEF]          }
14   [NONE]              