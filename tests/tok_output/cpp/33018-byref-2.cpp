Line [Token]             Text
1    [TYPE]              int
1    [BYREF]             &
1    [FUNC_PROTO]        aa
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [BYREF]             &
1    [WORD]              x
1    [COMMA]             ,
1    [TYPE]              int
1    [BYREF]             &
1    [WORD]              b
1    [FPAREN_CLOSE]      )
1    [SEMICOLON]         ;
1    [COMMENT_CPP]       // Sp Before Byref Func, Sp After Byref Func, Sp Before Byref, Sp After Byref
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          aa
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [BYREF]             &
2    [WORD]              x
2    [COMMA]             ,
2    [TYPE]              int
2    [BYREF]             &
2    [FPAREN_CLOSE]      )
2    [COMMENT_CPP]       // Sp Before Byref, Sp Before Unnamed Byref, Sp After Byref
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [WORD]              b
4    [ASSIGN]            =
4    [FUNC_CALL]         aa
4    [FPAREN_OPEN]       (
4    [WORD]              x
4    [COMMA]             ,
4    [WORD]              b
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [WORD]              c
5    [ASSIGN]            =
5    [FUNC_CALL]         aa
5    [FPAREN_OPEN]       (
5    [ADDR]              &
5    [WORD]              y
5    [COMMA]             ,
5    [ADDR]              &
5    [WORD]              d
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [COMMENT_CPP]       // Sp Addr
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           