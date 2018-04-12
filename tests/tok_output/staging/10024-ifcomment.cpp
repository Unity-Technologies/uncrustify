Line [Token]             Text
1    [IF]                if
1    [SPAREN_OPEN]       (
1    [WORD]              true
1    [SPAREN_CLOSE]      )
1    [VBRACE_OPEN]       
1    [COMMENT_CPP]       // indent_relative_single_line_comments = false
1    [NEWLINE]           
2    [RETURN]            return
2    [SEMICOLON]         ;
2    [VBRACE_CLOSE]      
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              foo
3    [SPAREN_CLOSE]      )
3    [COMMENT_CPP]       // true
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [FUNC_CALL]         bar
4    [FPAREN_OPEN]       (
4    [NUMBER]            1
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [COMMENT_CPP]       // action 1
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
5    [ELSE]              else
5    [COMMENT_CPP]       // false
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [FUNC_CALL]         bar
6    [FPAREN_OPEN]       (
6    [NUMBER]            2
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [COMMENT_CPP]       // action 2
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           