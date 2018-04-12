Line [Token]             Text
1    [TYPE]              void
1    [TYPE]              AkonadiServer
1    [DC_MEMBER]         ::
1    [FUNC_DEF]          createDatabase
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              DbConfig
3    [DC_MEMBER]         ::
3    [FUNC_CALL]         configuredDatabase
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [MEMBER]            ->
3    [FUNC_CALL]         apply
3    [FPAREN_OPEN]       (
3    [WORD]              db
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              db
4    [MEMBER]            .
4    [FUNC_CALL]         setDatabaseName
4    [FPAREN_OPEN]       (
4    [TYPE]              DbConfig
4    [DC_MEMBER]         ::
4    [FUNC_CALL]         configuredDatabase
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [MEMBER]            ->
4    [FUNC_CALL]         databaseName
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           