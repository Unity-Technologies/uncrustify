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
3    [WORD]              a
3    [SPAREN_CLOSE]      )
3    [VBRACE_OPEN]       
3    [WORD]              a
3    [INCDEC_AFTER]      ++
3    [SEMICOLON]         ;
3    [VBRACE_CLOSE]      
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [NOT]               !
4    [WORD]              a
4    [SPAREN_CLOSE]      )
4    [VBRACE_OPEN]       
4    [WORD]              b
4    [INCDEC_AFTER]      ++
4    [ELSE]              else
4    [ELSEIF]            if
4    [SPAREN_OPEN]       (
4    [NOT]               !
4    [WORD]              b
4    [SPAREN_CLOSE]      )
4    [VBRACE_OPEN]       
4    [WORD]              a
4    [INCDEC_AFTER]      ++
4    [ELSE]              else
4    [VBRACE_OPEN]       
4    [WORD]              c
4    [INCDEC_AFTER]      ++
4    [SEMICOLON]         ;
4    [VBRACE_CLOSE]      
4    [VBRACE_CLOSE]      
4    [VBRACE_CLOSE]      
4    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              b
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [WORD]              b
7    [INCDEC_AFTER]      ++
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [ELSE]              else
8    [ELSEIF]            if
8    [SPAREN_OPEN]       (
8    [WORD]              c
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [WORD]              c
9    [INCDEC_AFTER]      ++
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [ELSE]              else
10   [BRACE_OPEN]        {
10   [WORD]              d
10   [INCDEC_AFTER]      ++
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           