Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              BOOL
2    [WORD]              immediatlyReady
2    [ASSIGN]            =
2    [SQUARE_OPEN]       [
2    [OC_MSG_CLASS]      self
2    [OC_MSG_FUNC]       ensureResource
2    [OC_COLON]          :
2    [WORD]              mutableResources
2    [SQUARE_OPEN]       [
2    [NUMBER]            0
2    [SQUARE_CLOSE]      ]
2    [NEWLINE]           
3    [OC_MSG_NAME]       existsInDirectoryAtPath
3    [OC_COLON]          :
3    [WORD]              mutablePaths
3    [SQUARE_OPEN]       [
3    [NUMBER]            0
3    [SQUARE_CLOSE]      ]
3    [NEWLINE]           
4    [OC_MSG_NAME]       queueMode
4    [OC_COLON]          :
4    [TYPE]              mode
4    [NEWLINE]           
5    [OC_MSG_NAME]       completionHandler
5    [OC_COLON]          :
5    [TYPE]              completionHandler
5    [NEWLINE]           
6    [OC_MSG_NAME]       errorHandler
6    [OC_COLON]          :
6    [WORD]              errorHandler
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [SQUARE_OPEN]       [
8    [OC_MSG_CLASS]      myObject
8    [OC_MSG_FUNC]       doFooWith1
8    [OC_COLON]          :
8    [TYPE]              arg1
8    [NEWLINE]           
8    [OC_MSG_NAME]       name1
8    [OC_COLON]          :
8    [TYPE]              arg2
8    [COMMENT_CPP]       // some lines with >1 arg
8    [NEWLINE]           
9    [OC_MSG_NAME]       error1
9    [OC_COLON]          :
9    [WORD]              arg3
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [SQUARE_OPEN]       [
11   [OC_MSG_CLASS]      myObject
11   [OC_MSG_FUNC]       doFooWith2
11   [OC_COLON]          :
11   [TYPE]              arg4
11   [NEWLINE]           
12   [OC_MSG_NAME]       name2
12   [OC_COLON]          :
12   [TYPE]              arg5
12   [NEWLINE]           
12   [OC_MSG_NAME]       error2
12   [OC_COLON]          :
12   [WORD]              arg6
12   [SQUARE_CLOSE]      ]
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [SQUARE_OPEN]       [
14   [OC_MSG_CLASS]      myObject
14   [OC_MSG_FUNC]       doFooWith3
14   [OC_COLON]          :
14   [TYPE]              arg7
14   [NEWLINE]           
15   [OC_MSG_NAME]       name3
15   [OC_COLON]          :
15   [TYPE]              arg8
15   [COMMENT_CPP]       // aligning keywords instead of colons
15   [NEWLINE]           
16   [OC_MSG_NAME]       error3
16   [OC_COLON]          :
16   [WORD]              arg9
16   [SQUARE_CLOSE]      ]
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [SQUARE_OPEN]       [
18   [OC_MSG_CLASS]      myObject
18   [OC_MSG_FUNC]       doithereguysA
18   [OC_COLON]          :
18   [TYPE]              argA
18   [NEWLINE]           
19   [OC_MSG_NAME]       reallylongargname
19   [OC_COLON]          :
19   [TYPE]              argB
19   [NEWLINE]           
19   [OC_MSG_NAME]       another
19   [OC_COLON]          :
19   [WORD]              argC
19   [SQUARE_CLOSE]      ]
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [TYPE]              int
21   [FUNC_DEF]          foo
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [SQUARE_OPEN]       [
23   [OC_MSG_CLASS]      UIView
23   [OC_MSG_FUNC]       transitionWithView
23   [OC_COLON]          :
23   [THIS]              self
23   [MEMBER]            .
23   [TYPE]              window
23   [NEWLINE]           
24   [OC_MSG_NAME]       duration
24   [OC_COLON]          :
24   [NUMBER_FP]         0.3
24   [NEWLINE]           
25   [OC_MSG_NAME]       options
25   [OC_COLON]          :
25   [TYPE]              UIViewAnimationOptionTransitionCrossDissolve
25   [NEWLINE]           
26   [OC_MSG_NAME]       animations
26   [OC_COLON]          :
26   [OC_BLOCK_CARET]    ^
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [TYPE]              BOOL
27   [WORD]              oldState
27   [ASSIGN]            =
27   [SQUARE_OPEN]       [
27   [OC_MSG_CLASS]      UIView
27   [OC_MSG_FUNC]       areAnimationsEnabled
27   [SQUARE_CLOSE]      ]
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [SQUARE_OPEN]       [
28   [OC_MSG_CLASS]      UIView
28   [OC_MSG_FUNC]       setAnimationsEnabled
28   [OC_COLON]          :
28   [WORD]              NO
28   [SQUARE_CLOSE]      ]
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [THIS]              self
29   [MEMBER]            .
29   [WORD]              window
29   [MEMBER]            .
29   [WORD]              rootViewController
29   [ASSIGN]            =
29   [THIS]              self
29   [MEMBER]            .
29   [WORD]              viewController
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [SQUARE_OPEN]       [
30   [OC_MSG_CLASS]      UIView
30   [OC_MSG_FUNC]       setAnimationsEnabled
30   [OC_COLON]          :
30   [WORD]              oldState
30   [SQUARE_CLOSE]      ]
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
32   [OC_MSG_NAME]       completion
32   [OC_COLON]          :
32   [OC_BLOCK_CARET]    ^
32   [FPAREN_OPEN]       (
32   [TYPE]              BOOL
32   [WORD]              finished
32   [FPAREN_CLOSE]      )
32   [BRACE_OPEN]        {
32   [NEWLINE]           
34   [TYPE]              BOOL
34   [WORD]              foo
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [SQUARE_CLOSE]      ]
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
38   [TYPE]              int
38   [FUNC_DEF]          foo2
38   [FPAREN_OPEN]       (
38   [FPAREN_CLOSE]      )
38   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [SQUARE_OPEN]       [
40   [OC_MSG_CLASS]      UIView
40   [OC_MSG_FUNC]       transitionWithView
40   [OC_COLON]          :
40   [THIS]              self
40   [MEMBER]            .
40   [TYPE]              window
40   [NEWLINE]           
40   [OC_MSG_NAME]       duration
40   [OC_COLON]          :
40   [NUMBER_FP]         0.3
40   [NEWLINE]           
40   [OC_MSG_NAME]       options
40   [OC_COLON]          :
40   [TYPE]              UIViewAnimationOptionTransitionCrossDissolve
40   [NEWLINE]           
40   [OC_MSG_NAME]       animations
40   [OC_COLON]          :
40   [OC_BLOCK_CARET]    ^
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [TYPE]              BOOL
41   [WORD]              oldState
41   [ASSIGN]            =
41   [SQUARE_OPEN]       [
41   [OC_MSG_CLASS]      UIView
41   [OC_MSG_FUNC]       areAnimationsEnabled
41   [SQUARE_CLOSE]      ]
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [SQUARE_OPEN]       [
42   [OC_MSG_CLASS]      UIView
42   [OC_MSG_FUNC]       setAnimationsEnabled
42   [OC_COLON]          :
42   [WORD]              NO
42   [SQUARE_CLOSE]      ]
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [THIS]              self
43   [MEMBER]            .
43   [WORD]              window
43   [MEMBER]            .
43   [WORD]              rootViewController
43   [ASSIGN]            =
43   [THIS]              self
43   [MEMBER]            .
43   [WORD]              viewController
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [SQUARE_OPEN]       [
44   [OC_MSG_CLASS]      UIView
44   [OC_MSG_FUNC]       setAnimationsEnabled
44   [OC_COLON]          :
44   [WORD]              oldState
44   [SQUARE_CLOSE]      ]
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
46   [OC_MSG_NAME]       completion
46   [OC_COLON]          :
46   [OC_BLOCK_CARET]    ^
46   [FPAREN_OPEN]       (
46   [TYPE]              BOOL
46   [WORD]              finished
46   [FPAREN_CLOSE]      )
46   [BRACE_OPEN]        {
46   [NEWLINE]           
48   [TYPE]              BOOL
48   [WORD]              foo
48   [SEMICOLON]         ;
48   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [SQUARE_CLOSE]      ]
49   [SEMICOLON]         ;
49   [NEWLINE]           
51   [SQUARE_OPEN]       [
51   [SQUARE_OPEN]       [
51   [OC_MSG_CLASS]      HRNewsService
51   [OC_MSG_FUNC]       sharedInstance
51   [SQUARE_CLOSE]      ]
51   [OC_MSG_FUNC]       registerPushToken
51   [OC_COLON]          :
51   [TYPE]              deviceToken
51   [NEWLINE]           
51   [OC_MSG_NAME]       success
51   [OC_COLON]          :
51   [OC_BLOCK_CARET]    ^
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [FUNC_CALL]         DLog
52   [FPAREN_OPEN]       (
52   [STRING]            @"Finished Registering Push Token!"
52   [FPAREN_CLOSE]      )
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [THIS]              self
53   [MEMBER]            .
53   [WORD]              notificationsEnabled
53   [ASSIGN]            =
53   [WORD]              YES
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [BRACE_CLOSE]       }
54   [NEWLINE]           
54   [OC_MSG_NAME]       fail
54   [OC_COLON]          :
54   [WORD]              nil
54   [SQUARE_CLOSE]      ]
54   [SEMICOLON]         ;
54   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           