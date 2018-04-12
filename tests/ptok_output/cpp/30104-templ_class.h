Line [Parent]            Text
1    [NONE]              template
1    [TEMPLATE]          <
1    [NONE]              typename
1    [NONE]              T
1    [NONE]              ,
1    [NONE]              template
1    [TEMPLATE]          <
1    [NONE]              typename
1    [TEMPLATE]          >
1    [NONE]              class
1    [NONE]              SpecialClass
1    [TEMPLATE]          >
1    [NONE]              
2    [TEMPLATE]          class
2    [CLASS]             Example
2    [NONE]              
3    [CLASS]             {
3    [NONE]              
4    [COMMENT_WHOLE]     // Copy constructor with other variants of Example
4    [NONE]              
5    [NONE]              template
5    [TEMPLATE]          <
5    [NONE]              template
5    [TEMPLATE]          <
5    [NONE]              typename
5    [TEMPLATE]          >
5    [NONE]              class
5    [NONE]              OtherSpecialClass
5    [TEMPLATE]          >
5    [NONE]              
6    [NONE]              Example
6    [FUNC_CLASS_DEF]    (
6    [NONE]              const
6    [NONE]              Example
6    [TEMPLATE]          <
6    [NONE]              T
6    [NONE]              ,
6    [NONE]              OtherSpecialClass
6    [TEMPLATE]          >
6    [NONE]              &
6    [NONE]              other
6    [FUNC_CLASS_DEF]    )
6    [NONE]              
7    [FUNC_CLASS_DEF]    {
7    [NONE]              
8    [COMMENT_WHOLE]     // do something useful here
8    [NONE]              
9    [FUNC_CLASS_DEF]    }
9    [NONE]              
11   [COMMENT_WHOLE]     /** The normal member var based on the template arguments */
11   [NONE]              
12   [NONE]              SpecialClass
12   [TEMPLATE]          <
12   [NONE]              T
12   [TEMPLATE]          >
12   [NONE]              memberVar
12   [NONE]              ;
12   [NONE]              
14   [CLASS]             }
14   [CLASS]             ;
14   [NONE]              