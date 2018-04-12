Line [Parent]            Text
1    [NONE]              class
1    [CLASS]             ClassWithCtorICall
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [NONE]              public
3    [NONE]              ClassWithCtorICall
3    [FUNC_CLASS_DEF]    (
3    [FUNC_CLASS_DEF]    )
3    [NONE]              
4    [FUNC_CLASS_DEF]    {
4    [NONE]              
5    [NONE]              DoICall
5    [FUNC_CALL]         (
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [FUNC_CLASS_DEF]    }
6    [NONE]              
8    [COMMENT_WHOLE]     //It shouldn't add an extra space before 0x1000
8    [NONE]              
9    [CS_SQ_STMT]        [
9    [CS_SQ_STMT]        MethodImpl
9    [FUNC_CALL]         (
9    [C_CAST]            (
9    [C_CAST]            MethodImplOptions
9    [C_CAST]            )
9    [CS_SQ_STMT]        0x1000
9    [FUNC_CALL]         )
9    [CS_SQ_STMT]        ]
9    [NONE]              
10   [FUNC_PROTO]        static
10   [FUNC_PROTO]        extern
10   [FUNC_PROTO]        void
10   [NONE]              DoICall
10   [FUNC_PROTO]        (
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [NONE]              
12   [COMMENT_WHOLE]     //It shouldn't add an extra space before 1000
12   [NONE]              
13   [CS_SQ_STMT]        [
13   [CS_SQ_STMT]        MethodImpl
13   [FUNC_CALL]         (
13   [C_CAST]            (
13   [C_CAST]            MethodImplOptions
13   [C_CAST]            )
13   [CS_SQ_STMT]        1000
13   [FUNC_CALL]         )
13   [CS_SQ_STMT]        ]
13   [NONE]              
14   [FUNC_PROTO]        static
14   [FUNC_PROTO]        extern
14   [FUNC_PROTO]        void
14   [NONE]              DoICall
14   [FUNC_PROTO]        (
14   [FUNC_PROTO]        )
14   [FUNC_PROTO]        ;
14   [NONE]              
15   [CLASS]             }
15   [NONE]              