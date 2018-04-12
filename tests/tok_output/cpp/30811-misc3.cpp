Line [Token]             Text
1    [COMMENT_CPP]       // When constructing an object there should not be any space between the & and the variable name:
1    [NEWLINE]           
3    [TYPE]              MyClass
3    [FUNC_CTOR_VAR]     my1
3    [FPAREN_OPEN]       (
3    [WORD]              foo
3    [COMMA]             ,
3    [ADDR]              &
3    [WORD]              bar
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              MyClass
4    [FUNC_CTOR_VAR]     my2
4    [FPAREN_OPEN]       (
4    [WORD]              foo
4    [COMMA]             ,
4    [WORD]              bar
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              MyClass
5    [FUNC_CTOR_VAR]     my3
5    [FPAREN_OPEN]       (
5    [WORD]              foo
5    [COMMA]             ,
5    [WORD]              bar
5    [ARITH]             +
5    [NUMBER]            3
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPE]              MyClass
6    [FUNC_CTOR_VAR]     my4
6    [FPAREN_OPEN]       (
6    [NUMBER]            42
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPE]              MyClass
7    [FUNC_CTOR_VAR]     my5
7    [FPAREN_OPEN]       (
7    [FUNC_CALL]         foo
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [COMMA]             ,
7    [WORD]              bar
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              MyClass
8    [FUNC_PROTO]        my6
8    [FPAREN_OPEN]       (
8    [TYPE]              int
8    [WORD]              foo
8    [COMMA]             ,
8    [TYPE]              int
8    [BYREF]             &
8    [WORD]              bar
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              MyClass
9    [FUNC_PROTO]        my7
9    [FPAREN_OPEN]       (
9    [QUALIFIER]         const
9    [TYPE]              int
9    [WORD]              foo
9    [COMMA]             ,
9    [TYPE]              int
9    [BYREF]             &
9    [WORD]              bar
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
12   [COMMENT_CPP]       //When using references inside of casts there is also an additional space after the &:
12   [NEWLINE]           
14   [TYPE]              MyClass
14   [BYREF]             &
14   [WORD]              myInst
14   [ASSIGN]            =
14   [TYPE_CAST]         static_cast
14   [ANGLE_OPEN]        <
14   [TYPE]              MyClass
14   [BYREF]             &
14   [ANGLE_CLOSE]       >
14   [PAREN_OPEN]        (
14   [WORD]              otherInst
14   [PAREN_CLOSE]       )
14   [SEMICOLON]         ;
14   [NEWLINE]           
17   [COMMENT_CPP]       // When using the qt-specific signals and slots the pointer star is separated from the type with a space:
17   [NEWLINE]           
19   [FUNC_CALL]         connect
19   [FPAREN_OPEN]       (
19   [ADDR]              &
19   [WORD]              mapper
19   [COMMA]             ,
19   [FUNC_CALL]         SIGNAL
19   [FPAREN_OPEN]       (
19   [FUNC_CALL]         mapped
19   [FPAREN_OPEN]       (
19   [WORD]              QWidget
19   [PTR_TYPE]          *
19   [FPAREN_CLOSE]      )
19   [FPAREN_CLOSE]      )
19   [COMMA]             ,
19   [THIS]              this
19   [COMMA]             ,
19   [FUNC_CALL]         SLOT
19   [FPAREN_OPEN]       (
19   [FUNC_CALL]         onSomeEvent
19   [FPAREN_OPEN]       (
19   [WORD]              QWidget
19   [PTR_TYPE]          *
19   [FPAREN_CLOSE]      )
19   [FPAREN_CLOSE]      )
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [QUALIFIER]         extern
21   [TYPE]              int
21   [FUNC_PROTO]        select
21   [FPAREN_OPEN]       (
21   [TYPE]              int
21   [WORD]              __nfds
21   [COMMA]             ,
21   [TYPE]              fd_set
21   [PTR_TYPE]          *
21   [QUALIFIER]         __restrict
21   [WORD]              __readfds
21   [COMMA]             ,
22   [TYPE]              fd_set
22   [PTR_TYPE]          *
22   [QUALIFIER]         __restrict
22   [WORD]              __writefds
22   [COMMA]             ,
23   [TYPE]              fd_set
23   [PTR_TYPE]          *
23   [QUALIFIER]         __restrict
23   [WORD]              __exceptfds
23   [COMMA]             ,
24   [STRUCT]            struct
24   [TYPE]              timeval
24   [PTR_TYPE]          *
24   [QUALIFIER]         __restrict
24   [WORD]              __timeout
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           