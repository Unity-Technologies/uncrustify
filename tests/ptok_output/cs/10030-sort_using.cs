Line [Parent]            Text
1    [COMMENT_WHOLE]     // should be ddd, eee, fff
1    [NONE]              
2    [NONE]              using
2    [NONE]              b
2    [NONE]              .
2    [NONE]              ddd
2    [NONE]              ;
2    [NONE]              
4    [NONE]              using
4    [NONE]              b
4    [NONE]              .
4    [NONE]              eee
4    [NONE]              ;
4    [NONE]              
3    [NONE]              using
3    [NONE]              b
3    [NONE]              .
3    [NONE]              fff
3    [NONE]              ;
3    [NONE]              
6    [COMMENT_WHOLE]     // should be aaa, ccc
6    [NONE]              
8    [NONE]              using
8    [NONE]              aaa
8    [NONE]              ;
8    [NONE]              
7    [NONE]              using
7    [NONE]              ccc
7    [NONE]              ;
7    [NONE]              
9    [COMMENT_WHOLE]     // should be just bbb
9    [NONE]              
10   [NONE]              using
10   [NONE]              bbb
10   [NONE]              ;
10   [NONE]              
12   [COMMENT_WHOLE]     // should not change these, as it can't handle multi-line imports
12   [NONE]              
13   [NONE]              using
13   [NONE]              mango
13   [NONE]              .
13   [NONE]              ccc
13   [NONE]              ;
13   [NONE]              
14   [NONE]              using
14   [NONE]              mango
14   [NONE]              .
14   [NONE]              bbb
14   [NONE]              ,
14   [NONE]              
15   [NONE]              mango
15   [NONE]              .
15   [NONE]              aaa
15   [NONE]              ;
15   [NONE]              
17   [FUNC_PROTO]        void
17   [NONE]              foo
17   [FUNC_PROTO]        (
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [NONE]              