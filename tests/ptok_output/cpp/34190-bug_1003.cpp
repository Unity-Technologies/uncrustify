Line [Parent]            Text
1    [NONE]              class
1    [CLASS]             Foo
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [NONE]              public
3    [NONE]              :
3    [NONE]              
4    [NONE]              Foo
4    [FUNC_CLASS_DEF]    (
4    [NONE]              
5    [NONE]              int
5    [NONE]              x_
5    [NONE]              ,
5    [NONE]              
6    [NONE]              int
6    [NONE]              y_
6    [NONE]              
7    [FUNC_CLASS_DEF]    )
7    [NONE]              :
7    [NONE]              x
7    [FUNC_CTOR_VAR]     (
7    [NONE]              x_
7    [FUNC_CTOR_VAR]     )
7    [NONE]              ,
7    [NONE]              y
7    [FUNC_CTOR_VAR]     (
7    [NONE]              y_
7    [FUNC_CTOR_VAR]     )
7    [NONE]              
8    [FUNC_CLASS_DEF]    {
8    [NONE]              
9    [FUNC_CLASS_DEF]    }
9    [NONE]              
10   [NONE]              private
10   [NONE]              :
10   [NONE]              
11   [NONE]              int
11   [NONE]              x
11   [NONE]              ;
11   [NONE]              
12   [NONE]              int
12   [NONE]              y
12   [NONE]              ;
12   [NONE]              
13   [CLASS]             }
13   [CLASS]             ;
13   [NONE]              
15   [NONE]              class
15   [CLASS]             Bar
15   [NONE]              
16   [CLASS]             {
16   [NONE]              
17   [NONE]              public
17   [NONE]              :
17   [NONE]              
18   [COMMENT_WHOLE]     // Splits 3,5 onto newlines
18   [NONE]              
19   [NONE]              Bar
19   [FUNC_CLASS_DEF]    (
19   [FUNC_CLASS_DEF]    )
19   [NONE]              :
19   [NONE]              Bar
19   [FUNC_CTOR_VAR]     (
19   [NONE]              3
19   [NONE]              ,
19   [NONE]              5
19   [FUNC_CTOR_VAR]     )
19   [NONE]              
20   [FUNC_CLASS_DEF]    {
20   [NONE]              
21   [FUNC_CLASS_DEF]    }
21   [NONE]              
23   [COMMENT_WHOLE]     // No split here
23   [NONE]              
24   [NONE]              Bar
24   [FUNC_CLASS_DEF]    (
24   [NONE]              
25   [NONE]              int
25   [NONE]              x
25   [NONE]              ,
25   [NONE]              
26   [NONE]              int
26   [NONE]              y
26   [NONE]              
27   [FUNC_CLASS_DEF]    )
27   [NONE]              :
27   [NONE]              foo
27   [FUNC_CTOR_VAR]     (
27   [NONE]              x
27   [NONE]              ,
27   [NONE]              y
27   [FUNC_CTOR_VAR]     )
27   [NONE]              
28   [FUNC_CLASS_DEF]    {
28   [NONE]              
29   [FUNC_CLASS_DEF]    }
29   [NONE]              
31   [NONE]              Foo
31   [NONE]              foo
31   [NONE]              ;
31   [NONE]              
32   [CLASS]             }
32   [CLASS]             ;
32   [NONE]              