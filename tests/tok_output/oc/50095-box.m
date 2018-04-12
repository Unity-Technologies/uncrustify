Line [Token]             Text
1    [TYPE]              NSArray
1    [PTR_TYPE]          *
1    [WORD]              test
1    [ASSIGN]            =
1    [OC_AT]             @
1    [TSQUARE]           []
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPE]              NSNumber
2    [PTR_TYPE]          *
2    [WORD]              test
2    [ASSIGN]            =
2    [OC_AT]             @
2    [PAREN_OPEN]        (
2    [NUMBER]            42
2    [ARITH]             *
2    [NUMBER]            2
2    [PAREN_CLOSE]       )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPE]              NSNumber
3    [PTR_TYPE]          *
3    [WORD]              test
3    [ASSIGN]            =
3    [NUMBER_FP]         @4.0
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              NSDictionary
4    [PTR_TYPE]          *
4    [WORD]              test
4    [ASSIGN]            =
4    [OC_AT]             @
4    [BRACE_OPEN]        {
4    [NEWLINE]           
4    [STRING]            @"foo"
4    [OC_DICT_COLON]     :
4    [STRING]            @"bar"
4    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [OC_IMPL]           @implementation
6    [OC_CLASS]          UrlTemplateTest
6    [NEWLINE]           
7    [OC_SCOPE]          -
7    [PAREN_OPEN]        (
7    [TYPE]              void
7    [PAREN_CLOSE]       )
7    [OC_MSG_DECL]       test
7    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [TYPE]              NSString
8    [PTR_TYPE]          *
8    [WORD]              test
8    [ASSIGN]            =
8    [STRING]            @""
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              NSString
9    [PTR_TYPE]          *
9    [WORD]              string
9    [ASSIGN]            =
9    [SQUARE_OPEN]       [
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      NSMutableString
9    [OC_MSG_FUNC]       alloc
9    [SQUARE_CLOSE]      ]
9    [OC_MSG_FUNC]       initWithString
9    [OC_COLON]          :
9    [STRING]            @""
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [FUNC_CALL]         STAssertEqualObjects
10   [FPAREN_OPEN]       (
10   [WORD]              string
10   [COMMA]             ,
10   [STRING]            @""
10   [COMMA]             ,
10   [WORD]              nil
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [OC_END]            @end
12   [NEWLINE]           