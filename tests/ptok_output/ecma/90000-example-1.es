Line [Parent]            Text
1    [NONE]              x
1    [NONE]              =
1    [NONE]              0
1    [NONE]              ;
1    [COMMENT_END]       // A global variable
1    [NONE]              
2    [NONE]              var
2    [NONE]              y
2    [NONE]              =
2    [NONE]              'Hello!'
2    [NONE]              ;
2    [COMMENT_END]       // Another global variable
2    [NONE]              
4    [NONE]              function
4    [NONE]              f
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [NONE]              
4    [FUNC_CALL]         {
4    [NONE]              
5    [NONE]              var
5    [NONE]              z
5    [NONE]              =
5    [NONE]              'foxes'
5    [NONE]              ;
5    [COMMENT_END]       // A local variable
5    [NONE]              
6    [NONE]              twenty
6    [NONE]              =
6    [NONE]              20
6    [NONE]              ;
6    [COMMENT_END]       // Global because keyword var is not used
6    [NONE]              
7    [NONE]              return
7    [RETURN]            (
7    [NONE]              x
7    [RETURN]            )
7    [NONE]              ;
7    [COMMENT_END]       // We can use x here because it is global
7    [NONE]              
8    [FUNC_CALL]         }
8    [NONE]              
9    [COMMENT_WHOLE]     // The value of z is no longer available
9    [NONE]              