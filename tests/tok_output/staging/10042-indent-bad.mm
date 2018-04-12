Line [Token]             Text
1    [OC_SCOPE]          -
1    [PAREN_OPEN]        (
1    [TYPE]              void
1    [PAREN_CLOSE]       )
1    [OC_MSG_DECL]       bar
1    [BRACE_OPEN]        {
1    [IF]                if
1    [SPAREN_OPEN]       (
1    [WORD]              foo
1    [SPAREN_CLOSE]      )
1    [VBRACE_OPEN]       
1    [SQUARE_OPEN]       [
1    [OC_MSG_CLASS]      _obj
1    [OC_MSG_FUNC]       bar
1    [SQUARE_CLOSE]      ]
1    [SEMICOLON]         ;
1    [VBRACE_CLOSE]      
1    [BRACE_CLOSE]       }
1    [NEWLINE]           
3    [TYPE]              void
3    [FUNC_DEF]          foo
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              foo
3    [SPAREN_CLOSE]      )
3    [VBRACE_OPEN]       
3    [FUNC_CALL]         bar
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [VBRACE_CLOSE]      
3    [FUNC_CALL]         bar
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
5    [CLASS]             class
5    [TYPE]              Foo
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              void
7    [FUNC_DEF]          foo
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              bar
9    [SPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [FUNC_CALL]         bar
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [BRACE_CLOSE]       }
9    [ELSE]              else
9    [VBRACE_OPEN]       
9    [WORD]              i
9    [INCDEC_AFTER]      ++
9    [SEMICOLON]         ;
9    [VBRACE_CLOSE]      
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [SEMICOLON]         ;
11   [NEWLINE]           