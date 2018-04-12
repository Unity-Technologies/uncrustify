Line [Token]             Text
1    [SQUARE_OPEN]       [
1    [SQUARE_OPEN]       [
1    [OC_MSG_CLASS]      HRNewsService
1    [OC_MSG_FUNC]       sharedInstance
1    [SQUARE_CLOSE]      ]
1    [OC_MSG_FUNC]       unregisterPushToken
1    [OC_COLON]          :
1    [TYPE]              data
1    [NEWLINE]           
2    [OC_MSG_NAME]       success
2    [OC_COLON]          :
2    [OC_BLOCK_CARET]    ^
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [THIS]              self
3    [MEMBER]            .
3    [WORD]              notificationsEnabled
3    [ASSIGN]            =
3    [WORD]              NO
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [WORD]              data
4    [MEMBER]            .
4    [WORD]              param
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [THIS]              self
5    [MEMBER]            .
5    [WORD]              loudNotifications
5    [ASSIGN]            =
5    [WORD]              YES
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [OC_MSG_NAME]       fail
8    [OC_COLON]          :
8    [OC_BLOCK_CARET]    ^
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [THIS]              self
9    [MEMBER]            .
9    [WORD]              notificationsEnabled
9    [ASSIGN]            =
9    [WORD]              NO
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              data
10   [MEMBER]            .
10   [WORD]              param
10   [SPAREN_CLOSE]      )
10   [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [THIS]              self
11   [MEMBER]            .
11   [WORD]              loudNotifications
11   [ASSIGN]            =
11   [WORD]              YES
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [SQUARE_CLOSE]      ]
14   [SEMICOLON]         ;
14   [NEWLINE]           