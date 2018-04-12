Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          do_this
1    [NEWLINE]           
2    [FPAREN_OPEN]       (
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              x
3    [COMMA]             ,
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              y
4    [NEWLINE]           
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [WORD]              x
7    [ASSIGN]            +=
7    [WORD]              y
7    [SEMICOLON]         ;
7    [COMMENT_CPP]       // x = x + y
7    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              x
8    [COMPARE]           ==
8    [NUMBER]            3
8    [SPAREN_CLOSE]      )
8    [VBRACE_OPEN]       
8    [NEWLINE]           
9    [WORD]              x
9    [INCDEC_AFTER]      ++
9    [SEMICOLON]         ;
9    [VBRACE_CLOSE]      
9    [COMMENT_CPP]       // x plus 1
9    [NEWLINE]           
11   [RETURN]            return
11   [PAREN_OPEN]        (
11   [WORD]              x
11   [PAREN_CLOSE]       )
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           