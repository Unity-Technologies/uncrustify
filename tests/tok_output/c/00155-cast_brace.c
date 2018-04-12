Line [Token]             Text
1    [COMMENT_CPP]       //
1    [NEWLINE]           
2    [TYPE]              void
2    [FUNC_DEF]          disappearing_semicolon
2    [FPAREN_OPEN]       (
2    [TYPE]              void
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [WORD]              r
4    [ASSIGN]            =
4    [PAREN_OPEN]        (
4    [TYPE]              recordtypecast
4    [PAREN_CLOSE]       )
4    [BRACE_OPEN]        {
4    [NEWLINE]           
4    [WORD]              a
4    [COMMA]             ,
4    [WORD]              b
4    [COMMA]             ,
4    [WORD]              c
4    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [SEMICOLON]         ;
4    [COMMENT_CPP]       //<--
4    [NEWLINE]           
5    [WORD]              p
5    [ASSIGN]            =
5    [FUNC_CALL]         Table_put
5    [FPAREN_OPEN]       (
5    [WORD]              t
5    [COMMA]             ,
5    [WORD]              a
5    [COMMA]             ,
5    [ADDR]              &
5    [WORD]              r
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           