Line [Token]             Text
1    [TYPE]              EditorApplication
1    [MEMBER]            .
1    [FUNC_CALL]         CallDelayed
1    [FPAREN_OPEN]       (
1    [PAREN_OPEN]        (
1    [PAREN_CLOSE]       )
1    [LAMBDA]            =>
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [FOR]               foreach
2    [SPAREN_OPEN]       (
2    [TYPE]              CollabToolbarWindow
2    [WORD]              window
2    [IN]                in
2    [WORD]              Resources
2    [MEMBER]            .
2    [FUNC_CALL]         FindObjectsOfTypeAll
2    [ANGLE_OPEN]        <
2    [TYPE]              CollabToolbarWindow
2    [ANGLE_CLOSE]       >
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [SPAREN_CLOSE]      )
2    [VBRACE_OPEN]       
2    [NEWLINE]           
3    [WORD]              window
3    [MEMBER]            .
3    [FUNC_CALL]         Close
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [VBRACE_CLOSE]      
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [COMMA]             ,
4    [NUMBER_FP]         1f
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
7    [TYPE]              var
7    [WORD]              requestedTargets
7    [ASSIGN]            =
7    [WORD]              storage
7    [MEMBER]            .
7    [FUNC_CALL]         GlobalVariable
7    [FPAREN_OPEN]       (
7    [STRING]            "JAM_COMMAND_LINE_TARGETS"
7    [FPAREN_CLOSE]      )
7    [MEMBER]            .
7    [WORD]              Elements
7    [MEMBER]            .
7    [FUNC_CALL]         Select
7    [FPAREN_OPEN]       (
7    [WORD]              e
7    [LAMBDA]            =>
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              var
9    [WORD]              t
9    [ASSIGN]            =
9    [WORD]              jamState
9    [MEMBER]            .
9    [FUNC_CALL]         GetTarget
9    [FPAREN_OPEN]       (
9    [WORD]              e
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              t
10   [COMPARE]           ==
10   [WORD]              null
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
10   [NEWLINE]           
11   [THROW]             throw
11   [NEW]               new
11   [FUNC_CALL]         Exception
11   [FPAREN_OPEN]       (
11   [STRING]            $"Unknown target '{e}' while writing build dependency graph."
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           
12   [RETURN]            return
12   [WORD]              t
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [FPAREN_CLOSE]      )
13   [MEMBER]            .
13   [FUNC_CALL]         ToArray
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           