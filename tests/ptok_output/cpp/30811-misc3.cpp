Line [Parent]            Text
1    [COMMENT_WHOLE]     // When constructing an object there should not be any space between the & and the variable name:
1    [NONE]              
3    [NONE]              MyClass
3    [NONE]              my1
3    [FUNC_CTOR_VAR]     (
3    [NONE]              foo
3    [NONE]              ,
3    [NONE]              &
3    [NONE]              bar
3    [FUNC_CTOR_VAR]     )
3    [FUNC_CTOR_VAR]     ;
3    [NONE]              
4    [NONE]              MyClass
4    [NONE]              my2
4    [FUNC_CTOR_VAR]     (
4    [NONE]              foo
4    [NONE]              ,
4    [NONE]              bar
4    [FUNC_CTOR_VAR]     )
4    [FUNC_CTOR_VAR]     ;
4    [NONE]              
5    [NONE]              MyClass
5    [NONE]              my3
5    [FUNC_CTOR_VAR]     (
5    [NONE]              foo
5    [NONE]              ,
5    [NONE]              bar
5    [NONE]              +
5    [NONE]              3
5    [FUNC_CTOR_VAR]     )
5    [FUNC_CTOR_VAR]     ;
5    [NONE]              
6    [NONE]              MyClass
6    [NONE]              my4
6    [FUNC_CTOR_VAR]     (
6    [NONE]              42
6    [FUNC_CTOR_VAR]     )
6    [FUNC_CTOR_VAR]     ;
6    [NONE]              
7    [NONE]              MyClass
7    [NONE]              my5
7    [FUNC_CTOR_VAR]     (
7    [NONE]              foo
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              ,
7    [NONE]              bar
7    [FUNC_CTOR_VAR]     )
7    [FUNC_CTOR_VAR]     ;
7    [NONE]              
8    [FUNC_PROTO]        MyClass
8    [NONE]              my6
8    [FUNC_PROTO]        (
8    [NONE]              int
8    [NONE]              foo
8    [NONE]              ,
8    [NONE]              int
8    [NONE]              &
8    [NONE]              bar
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [NONE]              
9    [FUNC_PROTO]        MyClass
9    [NONE]              my7
9    [FUNC_PROTO]        (
9    [NONE]              const
9    [NONE]              int
9    [NONE]              foo
9    [NONE]              ,
9    [NONE]              int
9    [NONE]              &
9    [NONE]              bar
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [NONE]              
12   [COMMENT_WHOLE]     //When using references inside of casts there is also an additional space after the &:
12   [NONE]              
14   [NONE]              MyClass
14   [NONE]              &
14   [NONE]              myInst
14   [NONE]              =
14   [NONE]              static_cast
14   [TYPE_CAST]         <
14   [NONE]              MyClass
14   [NONE]              &
14   [TYPE_CAST]         >
14   [TYPE_CAST]         (
14   [NONE]              otherInst
14   [TYPE_CAST]         )
14   [NONE]              ;
14   [NONE]              
17   [COMMENT_WHOLE]     // When using the qt-specific signals and slots the pointer star is separated from the type with a space:
17   [NONE]              
19   [NONE]              connect
19   [FUNC_CALL]         (
19   [NONE]              &
19   [NONE]              mapper
19   [NONE]              ,
19   [NONE]              SIGNAL
19   [FUNC_CALL]         (
19   [NONE]              mapped
19   [FUNC_CALL]         (
19   [NONE]              QWidget
19   [NONE]              *
19   [FUNC_CALL]         )
19   [FUNC_CALL]         )
19   [NONE]              ,
19   [NONE]              this
19   [NONE]              ,
19   [NONE]              SLOT
19   [FUNC_CALL]         (
19   [NONE]              onSomeEvent
19   [FUNC_CALL]         (
19   [NONE]              QWidget
19   [NONE]              *
19   [FUNC_CALL]         )
19   [FUNC_CALL]         )
19   [FUNC_CALL]         )
19   [NONE]              ;
19   [NONE]              
21   [FUNC_PROTO]        extern
21   [FUNC_PROTO]        int
21   [NONE]              select
21   [FUNC_PROTO]        (
21   [NONE]              int
21   [NONE]              __nfds
21   [NONE]              ,
21   [NONE]              fd_set
21   [NONE]              *
21   [NONE]              __restrict
21   [NONE]              __readfds
21   [NONE]              ,
22   [NONE]              fd_set
22   [NONE]              *
22   [NONE]              __restrict
22   [NONE]              __writefds
22   [NONE]              ,
23   [NONE]              fd_set
23   [NONE]              *
23   [NONE]              __restrict
23   [NONE]              __exceptfds
23   [NONE]              ,
24   [NONE]              struct
24   [NONE]              timeval
24   [STRUCT]            *
24   [NONE]              __restrict
24   [NONE]              __timeout
24   [FUNC_PROTO]        )
24   [FUNC_PROTO]        ;
24   [NONE]              