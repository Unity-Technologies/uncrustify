Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TRY]               try
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
3    [FUNC_CALL]         foo
3    [FPAREN_OPEN]       (
3    [WORD]              bar
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
3    [CATCH]             catch
3    [SPAREN_OPEN]       (
3    [TYPE]              int
3    [PTR_TYPE]          *
3    [WORD]              e
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
3    [RETURN]            return
3    [NUMBER]            0
3    [SEMICOLON]         ;
3    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
5    [IF]                if
5    [SPAREN_OPEN]       (
5    [WORD]              false
5    [SPAREN_CLOSE]      )
5    [VBRACE_OPEN]       
5    [NEWLINE]           
5    [TRY]               try
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
5    [THROW]             throw
5    [FUNC_CALL]         int
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
5    [CATCH]             catch
5    [SPAREN_OPEN]       (
5    [ELLIPSIS]          ...
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [VBRACE_CLOSE]      
5    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              a
7    [SPAREN_CLOSE]      )
7    [BRACE_OPEN]        {
7    [RETURN]            return
7    [NUMBER]            1
7    [SEMICOLON]         ;
7    [BRACE_CLOSE]       }
7    [ELSE]              else
7    [BRACE_OPEN]        {
7    [RETURN]            return
7    [NUMBER]            0
7    [SEMICOLON]         ;
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [RETURN]            return
8    [NUMBER]            1
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           