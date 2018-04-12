Line [Parent]            Text
1    [COMMENT_WHOLE]     // Asm blocks have their own special indentation where lables must remain at indent 0 relative to __asm__ block.
1    [NONE]              
2    [COMMENT_WHOLE]     // They few ways of being opened and closed depending on the compiler.
2    [NONE]              
3    [COMMENT_WHOLE]     // For now, we can at least detect and ignore the contents, including alignment.
3    [NONE]              
5    [COMMENT_WHOLE]     // Workaround: can always fall back on disable/enable_processing_cmt.
5    [NONE]              
7    [FUNC_DEF]          void
7    [NONE]              foo
7    [FUNC_DEF]          (
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              int
9    [NONE]              head
9    [NONE]              ,
9    [NONE]              bar
9    [NONE]              ;
9    [NONE]              
10   [NONE]              __asm__
10   [NONE]              __volatile__
10   [NONE]              
11   [ASM]               (
11   [NONE]              
12   [NONE]              "movq %0,%%xmm0\n\t"
12   [COMMENT_END]       /* asm template */
12   [NONE]              
13   [NONE]              "0:\n\t"
13   [NONE]              
14   [NONE]              "bar	%0, [%4]\n\t"
14   [COMMENT_END]       // in template
14   [NONE]              
15   [NONE]              "1:\n\t"
15   [NONE]              
16   [NONE]              :
16   [NONE]              "=a"
16   [NONE]              ,
16   [NONE]              (
16   [NONE]              bar
16   [NONE]              )
16   [NONE]              
17   [NONE]              :
17   [NONE]              "=&b"
17   [NONE]              ,
17   [NONE]              (
17   [NONE]              &
17   [NONE]              head
17   [NONE]              )
17   [NONE]              ,
17   [NONE]              "+m"
17   [NONE]              ,
17   [NONE]              (
17   [NONE]              bar
17   [NONE]              )
17   [NONE]              
18   [NONE]              :
18   [NONE]              "cc"
18   [NONE]              
19   [ASM]               )
19   [ASM]               ;
19   [NONE]              
20   [FUNC_DEF]          }
20   [NONE]              