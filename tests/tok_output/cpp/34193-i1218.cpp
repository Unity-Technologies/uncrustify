Line [Token]             Text
1    [COMMENT_CPP]       // Do not add a new line because of the vbrace close that is above col 25
1    [NEWLINE]           
2    [COMMENT_CPP]       // after return 1;
2    [NEWLINE]           
3    [TYPE]              int
3    [FUNC_DEF]          main
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [IF]                if
5    [SPAREN_OPEN]       (
5    [NUMBER]            1
5    [SPAREN_CLOSE]      )
5    [VBRACE_OPEN]       
5    [NEWLINE]           
6    [RETURN]            return
6    [NUMBER]            1
6    [SEMICOLON]         ;
6    [VBRACE_CLOSE]      
6    [NEWLINE]           
7    [RETURN]            return
7    [NUMBER]            0
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }