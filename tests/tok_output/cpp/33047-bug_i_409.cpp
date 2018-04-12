Line [Token]             Text
1    [IF]                if
1    [SPAREN_OPEN]       (
1    [WORD]              X
1    [COMPARE]           ==
1    [WORD]              Y
1    [SPAREN_CLOSE]      )
1    [VBRACE_OPEN]       
1    [WORD]              X
1    [ASSIGN]            =
1    [WORD]              Z
1    [SEMICOLON]         ;
1    [VBRACE_CLOSE]      
1    [NEWLINE]           
2    [IF]                if
2    [SPAREN_OPEN]       (
2    [WORD]              Y
2    [COMPARE]           ==
2    [WORD]              Z
2    [SPAREN_CLOSE]      )
2    [VBRACE_OPEN]       
3    [WORD]              Y
3    [ASSIGN]            =
3    [WORD]              X
3    [SEMICOLON]         ;
3    [VBRACE_CLOSE]      
3    [NEWLINE]           
5    [FOR]               for
5    [SPAREN_OPEN]       (
5    [WORD]              i
5    [ASSIGN]            =
5    [NUMBER]            0
5    [SEMICOLON]         ;
5    [WORD]              i
5    [COMPARE]           <
5    [NUMBER]            5
5    [SEMICOLON]         ;
5    [WORD]              i
5    [INCDEC_AFTER]      ++
5    [SPAREN_CLOSE]      )
5    [VBRACE_OPEN]       
5    [FUNC_CALL]         foo
5    [FPAREN_OPEN]       (
5    [WORD]              i
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [VBRACE_CLOSE]      
5    [NEWLINE]           
6    [FOR]               for
6    [SPAREN_OPEN]       (
6    [WORD]              i
6    [ASSIGN]            =
6    [NUMBER]            0
6    [SEMICOLON]         ;
6    [WORD]              i
6    [COMPARE]           <
6    [NUMBER]            5
6    [SEMICOLON]         ;
6    [WORD]              i
6    [INCDEC_AFTER]      ++
6    [SPAREN_CLOSE]      )
6    [VBRACE_OPEN]       
7    [FUNC_CALL]         foo
7    [FPAREN_OPEN]       (
7    [WORD]              i
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NEWLINE]           
9    [WHILE]             while
9    [SPAREN_OPEN]       (
9    [WORD]              i
9    [COMPARE]           <
9    [NUMBER]            5
9    [SPAREN_CLOSE]      )
9    [VBRACE_OPEN]       
9    [FUNC_CALL]         foo
9    [FPAREN_OPEN]       (
9    [WORD]              i
9    [INCDEC_AFTER]      ++
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [VBRACE_CLOSE]      
9    [NEWLINE]           
10   [WHILE]             while
10   [SPAREN_OPEN]       (
10   [WORD]              i
10   [COMPARE]           <
10   [NUMBER]            5
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
11   [FUNC_CALL]         foo
11   [FPAREN_OPEN]       (
11   [WORD]              i
11   [INCDEC_AFTER]      ++
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           