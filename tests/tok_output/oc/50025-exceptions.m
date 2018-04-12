Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          main
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              argc
2    [COMMA]             ,
2    [QUALIFIER]         const
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [WORD]              argv
2    [TSQUARE]           []
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TRY]               @try
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [SQUARE_OPEN]       [
4    [OC_MSG_CLASS]      NSException
4    [OC_MSG_FUNC]       raise
4    [OC_COLON]          :
4    [TYPE]              NSInternalInconsistency
4    [NEWLINE]           
5    [OC_MSG_NAME]       format
5    [OC_COLON]          :
5    [STRING]            @"An internal inconsistency was raised"
5    [SQUARE_CLOSE]      ]
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [CATCH]             @catch
7    [SPAREN_OPEN]       (
7    [TYPE]              NSException
7    [PTR_TYPE]          *
7    [WORD]              e
7    [SPAREN_CLOSE]      )
7    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [FUNC_CALL]         NSLog
8    [FPAREN_OPEN]       (
8    [STRING]            @"Catch"
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [FINALLY]           @finally
10   [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [FUNC_CALL]         NSLog
11   [FPAREN_OPEN]       (
11   [STRING]            @"Finally"
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
14   [THROW]             @throw
14   [SQUARE_OPEN]       [
14   [OC_MSG_CLASS]      NSException
14   [OC_MSG_FUNC]       exceptionWithName
14   [OC_COLON]          :
14   [STRING]            @"foo"
14   [OC_MSG_NAME]       reason
14   [OC_COLON]          :
14   [STRING]            @"bar"
14   [OC_MSG_NAME]       userInfo
14   [OC_COLON]          :
14   [WORD]              nil
14   [SQUARE_CLOSE]      ]
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [TYPE]              NSException
16   [PTR_TYPE]          *
16   [WORD]              exception
16   [ASSIGN]            =
16   [SQUARE_OPEN]       [
16   [OC_MSG_CLASS]      NSException
16   [OC_MSG_FUNC]       exceptionWithName
16   [OC_COLON]          :
16   [STRING]            @"HotTeaException"
16   [NEWLINE]           
17   [OC_MSG_NAME]       reason
17   [OC_COLON]          :
17   [STRING]            @"The tea is too hot"
17   [NEWLINE]           
18   [OC_MSG_NAME]       userInfo
18   [OC_COLON]          :
18   [WORD]              nil
18   [SQUARE_CLOSE]      ]
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [THROW]             @throw
20   [WORD]              exception
20   [SEMICOLON]         ;
20   [NEWLINE]           
22   [RETURN]            return
22   [NUMBER]            0
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           