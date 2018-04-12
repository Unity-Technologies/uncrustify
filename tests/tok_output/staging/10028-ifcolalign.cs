Line [Token]             Text
1    [NAMESPACE]         namespace
1    [WORD]              Unity
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         internal
3    [CLASS]             class
3    [TYPE]              Class
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [QUALIFIER]         public
5    [TYPE]              void
5    [FUNC_DEF]          Foo
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              data
7    [SPAREN_CLOSE]      )
7    [VBRACE_OPEN]       
7    [WORD]              go
7    [ASSIGN]            =
7    [NEW]               new
7    [FUNC_CALL]         ClassA
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NEWLINE]           
8    [ELSE]              else
8    [VBRACE_OPEN]       
8    [WORD]              go
8    [ASSIGN]            =
8    [NEW]               new
8    [FUNC_CALL]         ClassB
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [VBRACE_CLOSE]      
8    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              evt
10   [MEMBER]            .
10   [WORD]              alt
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
10   [WORD]              modifiers
10   [ASSIGN]            +=
10   [STRING]            "Alt+"
10   [SEMICOLON]         ;
10   [VBRACE_CLOSE]      
10   [NEWLINE]           
11   [IF]                if
11   [SPAREN_OPEN]       (
11   [WORD]              evt
11   [MEMBER]            .
11   [WORD]              command
11   [SPAREN_CLOSE]      )
11   [VBRACE_OPEN]       
11   [WORD]              modifiers
11   [ASSIGN]            +=
11   [STRING]            "Cmd+"
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           
12   [IF]                if
12   [SPAREN_OPEN]       (
12   [WORD]              evt
12   [MEMBER]            .
12   [WORD]              control
12   [SPAREN_CLOSE]      )
12   [VBRACE_OPEN]       
12   [WORD]              modifiers
12   [ASSIGN]            +=
12   [STRING]            "Ctrl+"
12   [SEMICOLON]         ;
12   [VBRACE_CLOSE]      
12   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              evt
13   [MEMBER]            .
13   [WORD]              shift
13   [SPAREN_CLOSE]      )
13   [VBRACE_OPEN]       
13   [WORD]              modifiers
13   [ASSIGN]            +=
13   [STRING]            "Shift+"
13   [SEMICOLON]         ;
13   [VBRACE_CLOSE]      
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           