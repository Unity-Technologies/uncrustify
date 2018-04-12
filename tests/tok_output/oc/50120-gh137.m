Line [Token]             Text
1    [SQUARE_OPEN]       [
1    [OC_MSG_CLASS]      UIView
1    [OC_MSG_FUNC]       animateWithDuration
1    [OC_COLON]          :
1    [NUMBER_FP]         0.2f
1    [OC_MSG_NAME]       delay
1    [OC_COLON]          :
1    [NUMBER_FP]         0.f
1    [OC_MSG_NAME]       options
1    [OC_COLON]          :
1    [TYPE]              UIViewAnimationCurveEaseInOut
1    [OC_MSG_NAME]       animations
1    [OC_COLON]          :
1    [OC_BLOCK_CARET]    ^
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [THIS]              self
2    [MEMBER]            .
2    [WORD]              transform
2    [ASSIGN]            =
2    [FUNC_CALL]         CGAffineTransformMakeScale
2    [FPAREN_OPEN]       (
2    [NUMBER_FP]         1.05f
2    [COMMA]             ,
2    [NUMBER_FP]         1.05f
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [OC_MSG_NAME]       completion
3    [OC_COLON]          :
3    [OC_BLOCK_CARET]    ^
3    [FPAREN_OPEN]       (
3    [TYPE]              BOOL
3    [WORD]              finished
3    [FPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [SQUARE_OPEN]       [
4    [OC_MSG_CLASS]      UIView
4    [OC_MSG_FUNC]       animateWithDuration
4    [OC_COLON]          :
4    [NUMBER_FP]         0.08f
4    [OC_MSG_NAME]       delay
4    [OC_COLON]          :
4    [NUMBER_FP]         0.f
4    [OC_MSG_NAME]       options
4    [OC_COLON]          :
4    [TYPE]              UIViewAnimationOptionCurveEaseInOut
4    [OC_MSG_NAME]       animations
4    [OC_COLON]          :
4    [OC_BLOCK_CARET]    ^
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [THIS]              self
5    [MEMBER]            .
5    [WORD]              transform
5    [ASSIGN]            =
5    [WORD]              CGAffineTransformIdentity
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      UIView
6    [OC_MSG_FUNC]       animateWithDuration
6    [OC_COLON]          :
6    [NUMBER]            1
6    [OC_MSG_NAME]       delay
6    [OC_COLON]          :
6    [NUMBER]            0
6    [OC_MSG_NAME]       options
6    [OC_COLON]          :
6    [NUMBER]            0
6    [OC_MSG_NAME]       animations
6    [OC_COLON]          :
6    [OC_BLOCK_CARET]    ^
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [COMMENT_CPP]       // blah
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [OC_MSG_NAME]       completion
8    [OC_COLON]          :
8    [WORD]              nil
8    [SQUARE_CLOSE]      ]
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [SQUARE_CLOSE]      ]
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [FUNC_CALL]         dispatch_async
12   [FPAREN_OPEN]       (
12   [WORD]              foo
12   [COMMA]             ,
12   [OC_BLOCK_CARET]    ^
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [FUNC_CALL]         dispatch_async
13   [FPAREN_OPEN]       (
13   [WORD]              bar
13   [COMMA]             ,
13   [OC_BLOCK_CARET]    ^
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [FUNC_CALL]         dispatch_async
14   [FPAREN_OPEN]       (
14   [WORD]              qux
14   [COMMA]             ,
14   [OC_BLOCK_CARET]    ^
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [FUNC_CALL]         quz
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           