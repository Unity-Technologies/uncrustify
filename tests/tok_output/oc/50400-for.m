Line [Token]             Text
1    [SQUARE_OPEN]       [
1    [SQUARE_OPEN]       [
1    [OC_MSG_CLASS]      HRNewsService
1    [OC_MSG_FUNC]       sharedInstance
1    [SQUARE_CLOSE]      ]
1    [OC_MSG_FUNC]       fetchBreakingNewsItemWithId
1    [OC_COLON]          :
1    [THIS]              self
1    [MEMBER]            .
1    [TYPE]              breakingNewsId
1    [NEWLINE]           
1    [OC_MSG_NAME]       success
1    [OC_COLON]          :
1    [OC_BLOCK_CARET]    ^
1    [FPAREN_OPEN]       (
1    [TYPE]              id
1    [WORD]              responseObject
1    [FPAREN_CLOSE]      )
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [WORD]              NSDictionary
2    [PTR_TYPE]          *
2    [WORD]              thing
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [FOR]               for
3    [SPAREN_OPEN]       (
3    [WORD]              NSArray
3    [PTR_TYPE]          *
3    [WORD]              dictionary
3    [IN]                in
3    [WORD]              photos
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
5    [OC_MSG_NAME]       failure
5    [OC_COLON]          :
5    [OC_BLOCK_CARET]    ^
5    [FPAREN_OPEN]       (
5    [TYPE]              NSError
5    [PTR_TYPE]          *
5    [WORD]              error
5    [FPAREN_CLOSE]      )
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [COMMENT_CPP]       // Failure?
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [SQUARE_CLOSE]      ]
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [COMMENT_CPP]       // We also need to consider cases where a non-pointer type (or, a pointer without the star) is declared in ObjC.
9    [NEWLINE]           
10   [FOR]               for
10   [SPAREN_OPEN]       (
10   [TYPE]              id
10   [WORD]              obj
10   [IN]                in
10   [WORD]              someDictionary
10   [SPAREN_CLOSE]      )
10   [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [FUNC_CALL]         NSLog
11   [FPAREN_OPEN]       (
11   [STRING]            @"This could be anything! Objective-C really needs parametrized collections."
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           