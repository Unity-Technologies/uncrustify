Line [Token]             Text
1    [COMMENT_CPP]       // Test a case where blocks wrapped by parentheses were causing the parser to crash
1    [NEWLINE]           
2    [TYPE]              int
2    [TPAREN_OPEN]       (
2    [PTR_TYPE]          ^
2    [FUNC_VAR]          myBlock
2    [TPAREN_CLOSE]      )
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [FPAREN_CLOSE]      )
2    [ASSIGN]            =
2    [PAREN_OPEN]        (
2    [OC_BLOCK_CARET]    ^
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              num
2    [FPAREN_CLOSE]      )
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [RETURN]            return
3    [WORD]              num
3    [ARITH]             *
3    [WORD]              multiplier
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [PAREN_CLOSE]       )
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [FUNC_CALL]         dispatch_async
6    [FPAREN_OPEN]       (
6    [WORD]              thread
6    [COMMA]             ,
6    [PAREN_OPEN]        (
6    [OC_BLOCK_CARET]    ^
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL]         dispatch_async
7    [FPAREN_OPEN]       (
7    [WORD]              thread
7    [COMMA]             ,
7    [OC_BLOCK_CARET]    ^
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [FUNC_CALL]         dispatch_async
8    [FPAREN_OPEN]       (
8    [WORD]              thread
8    [COMMA]             ,
8    [OC_BLOCK_CARET]    ^
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [FUNC_CALL]         NSLog
9    [FPAREN_OPEN]       (
9    [STRING]            @"Hooray for dispatch_async!"
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [PAREN_CLOSE]       )
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [COMMENT_CPP]       // Example of a unit test using Kiwi
14   [NEWLINE]           
15   [FUNC_CALL]         beforeAll
15   [FPAREN_OPEN]       (
15   [OC_BLOCK_CARET]    ^
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [TYPE]              NSString
16   [PTR_TYPE]          *
16   [WORD]              serviceURL
16   [ASSIGN]            =
16   [SQUARE_OPEN]       [
16   [OC_MSG_CLASS]      NSURL
16   [OC_MSG_FUNC]       URLWithString
16   [OC_COLON]          :
16   [STRING]            @"http://TEST_URL"
16   [SQUARE_CLOSE]      ]
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [FUNC_CALL]         NSLog
17   [FPAREN_OPEN]       (
17   [WORD]              serviceURL
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           