Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              data
3    [SPAREN_CLOSE]      )
3    [VBRACE_OPEN]       
3    [WORD]              go
3    [ASSIGN]            =
3    [NEW]               new
3    [FUNC_CALL]         ClassA
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [VBRACE_CLOSE]      
3    [NEWLINE]           
4    [ELSE]              else
4    [VBRACE_OPEN]       
4    [WORD]              go
4    [ASSIGN]            =
4    [NEW]               new
4    [FUNC_CALL]         ClassB
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [VBRACE_CLOSE]      
4    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              evt
6    [MEMBER]            .
6    [WORD]              alt
6    [SPAREN_CLOSE]      )
6    [VBRACE_OPEN]       
6    [WORD]              modifiers
6    [ASSIGN]            +=
6    [STRING]            "Alt+"
6    [SEMICOLON]         ;
6    [VBRACE_CLOSE]      
6    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              evt
7    [MEMBER]            .
7    [WORD]              command
7    [SPAREN_CLOSE]      )
7    [VBRACE_OPEN]       
7    [WORD]              modifiers
7    [ASSIGN]            +=
7    [STRING]            "Cmd+"
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              evt
8    [MEMBER]            .
8    [WORD]              control
8    [SPAREN_CLOSE]      )
8    [VBRACE_OPEN]       
8    [WORD]              modifiers
8    [ASSIGN]            +=
8    [STRING]            "Ctrl+"
8    [SEMICOLON]         ;
8    [VBRACE_CLOSE]      
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              evt
9    [MEMBER]            .
9    [WORD]              shift
9    [SPAREN_CLOSE]      )
9    [VBRACE_OPEN]       
9    [WORD]              modifiers
9    [ASSIGN]            +=
9    [STRING]            "Shift+"
9    [SEMICOLON]         ;
9    [VBRACE_CLOSE]      
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           