Line [Token]             Text
1    [TYPE]              bool
1    [TYPE]              Handler
1    [DC_MEMBER]         ::
1    [FUNC_DEF]          failureResponse
1    [FPAREN_OPEN]       (
1    [QUALIFIER]         const
1    [TYPE]              QByteArray
1    [BYREF]             &
1    [WORD]              failureMessage
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              response
3    [MEMBER]            .
3    [FUNC_CALL]         setString
3    [FPAREN_OPEN]       (
3    [WORD]              failureMessage
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [Q_EMIT]            Q_EMIT
4    [FUNC_CALL]         responseAvailable
4    [FPAREN_OPEN]       (
4    [WORD]              response
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           