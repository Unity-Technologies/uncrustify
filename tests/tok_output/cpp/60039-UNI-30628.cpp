Line [Token]             Text
1    [COMMENT_CPP]       // Regression 1 FAKE_METHOD expands to a function prototype. Could possibly use PROTO_WRAP like for FAKE_FUNCTION
1    [NEWLINE]           
2    [CLASS]             class
2    [TYPE]              Foo
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [FUNC_CALL]         FAKE_FUNCTION
4    [FPAREN_OPEN]       (
4    [WORD]              Bar
4    [COMMA]             ,
4    [WORD]              GetBarInfo
4    [COMMA]             ,
4    [QUALIFIER]         const
4    [TYPE]              BarInfo
4    [BYREF]             &
4    [PAREN_OPEN]        (
4    [PAREN_CLOSE]       )
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [FUNC_CALL]         FAKE_METHOD
5    [FPAREN_OPEN]       (
5    [WORD]              Bar
5    [COMMA]             ,
5    [WORD]              GetBarInfo
5    [COMMA]             ,
5    [QUALIFIER]         const
5    [TYPE]              BarInfo
5    [BYREF]             &
5    [PAREN_OPEN]        (
5    [PAREN_CLOSE]       )
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FUNC_CALL]         FAKE_FUNCTION_WITH_LOCAL_NAME
6    [FPAREN_OPEN]       (
6    [WORD]              FakeGetCommonScriptingClasses
6    [COMMA]             ,
6    [WORD]              GetCommonScriptingClasses
6    [COMMA]             ,
6    [QUALIFIER]         const
6    [TYPE]              CommonScriptingClasses
6    [BYREF]             &
6    [PAREN_OPEN]        (
6    [PAREN_CLOSE]       )
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           