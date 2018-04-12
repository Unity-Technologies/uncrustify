Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_INTF]           @interface
3    [OC_CLASS]          TestClass
3    [CLASS_COLON]       :
3    [WORD]              NSObject
3    [NEWLINE]           
4    [OC_END]            @end
4    [NEWLINE]           
6    [OC_IMPL]           @implementation
6    [OC_CLASS]          TestClass
6    [NEWLINE]           
8    [OC_SCOPE]          -
8    [PAREN_OPEN]        (
8    [TYPE]              void
8    [PAREN_CLOSE]       )
8    [OC_MSG_DECL]       method1
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      session
9    [OC_MSG_FUNC]       mergeCommonMovieItems
9    [OC_COLON]          :
9    [OC_BLOCK_CARET]    ^
9    [FPAREN_OPEN]       (
9    [TYPE]              NSURL
9    [PTR_TYPE]          *
9    [WORD]              exportURL
9    [COMMA]             ,
9    [TYPE]              NSError
9    [PTR_TYPE]          *
9    [WORD]              exportError
9    [FPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [WORD]              NSDictionary
10   [PTR_TYPE]          *
10   [WORD]              settings
10   [ASSIGN]            =
10   [SQUARE_OPEN]       [
10   [OC_MSG_CLASS]      self
10   [OC_MSG_FUNC]       getSettings
10   [SQUARE_CLOSE]      ]
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [SQUARE_OPEN]       [
12   [OC_MSG_CLASS]      session
12   [OC_MSG_FUNC]       postSessionWithCallback
12   [OC_COLON]          :
12   [OC_BLOCK_CARET]    ^
12   [FPAREN_OPEN]       (
12   [TYPE]              NSError
12   [PTR_TYPE]          *
12   [WORD]              error
12   [COMMA]             ,
12   [TYPE]              id
12   [WORD]              d
12   [FPAREN_CLOSE]      )
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              error
13   [COMPARE]           ==
13   [WORD]              nil
13   [SPAREN_CLOSE]      )
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [SQUARE_OPEN]       [
14   [OC_MSG_CLASS]      session
14   [OC_MSG_FUNC]       uploadSessionWithCallback
14   [OC_COLON]          :
14   [OC_BLOCK_CARET]    ^
14   [FPAREN_OPEN]       (
14   [TYPE]              NSError
14   [PTR_TYPE]          *
14   [WORD]              error
14   [COMMA]             ,
14   [TYPE]              id
14   [WORD]              d
14   [FPAREN_CLOSE]      )
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [FUNC_CALL]         NSLog
15   [FPAREN_OPEN]       (
15   [STRING]            @"OK"
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [SQUARE_CLOSE]      ]
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [ELSE]              else
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [FUNC_CALL]         NSLog
18   [FPAREN_OPEN]       (
18   [STRING]            @"Something went wrong: %@"
18   [COMMA]             ,
18   [WORD]              error
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [RETURN]            return
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [SQUARE_CLOSE]      ]
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [SQUARE_CLOSE]      ]
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
25   [OC_SCOPE]          -
25   [PAREN_OPEN]        (
25   [TYPE]              void
25   [PAREN_CLOSE]       )
25   [OC_MSG_DECL]       postSelection
25   [OC_COLON]          :
25   [PAREN_OPEN]        (
25   [TYPE]              NSString
25   [PTR_TYPE]          *
25   [PAREN_CLOSE]       )
25   [TYPE]              testName
25   [NEWLINE]           
26   [WORD]              selection
26   [OC_COLON]          :
26   [PAREN_OPEN]        (
26   [TYPE]              NSString
26   [PTR_TYPE]          *
26   [PAREN_CLOSE]       )
26   [WORD]              selection
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [FUNC_CALL]         dispatch_async
27   [FPAREN_OPEN]       (
27   [FUNC_CALL]         dispatch_get_main_queue
27   [FPAREN_OPEN]       (
27   [FPAREN_CLOSE]      )
27   [COMMA]             ,
27   [OC_BLOCK_CARET]    ^
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [SQUARE_OPEN]       [
28   [OC_MSG_CLASS]      self
28   [OC_MSG_FUNC]       warmup
28   [OC_COLON]          :
28   [OC_BLOCK_CARET]    ^
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [SQUARE_OPEN]       [
29   [OC_MSG_CLASS]      self
29   [OC_MSG_FUNC]       setReady
29   [SQUARE_CLOSE]      ]
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [SQUARE_CLOSE]      ]
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [NEWLINE]           
33   [FUNC_CALL]         dispatch_after
33   [FPAREN_OPEN]       (
33   [WORD]              retryTime
33   [COMMA]             ,
33   [FUNC_CALL]         dispatch_get_main_queue
33   [FPAREN_OPEN]       (
33   [FPAREN_CLOSE]      )
33   [COMMA]             ,
33   [OC_BLOCK_CARET]    ^
33   [FPAREN_OPEN]       (
33   [TYPE]              void
33   [FPAREN_CLOSE]      )
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [SQUARE_OPEN]       [
34   [OC_MSG_CLASS]      self
34   [OC_MSG_FUNC]       postSelection
34   [OC_COLON]          :
34   [TYPE]              testName
34   [OC_MSG_NAME]       selection
34   [OC_COLON]          :
34   [WORD]              selection
34   [SQUARE_CLOSE]      ]
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
37   [SQUARE_OPEN]       [
37   [OC_MSG_CLASS]      TestClassRequest
37   [OC_MSG_FUNC]       performMethod
37   [OC_COLON]          :
37   [TYPE]              TestClassRequestMethodPOST
37   [NEWLINE]           
38   [OC_MSG_NAME]       responseHandler
38   [OC_COLON]          :
38   [OC_BLOCK_CARET]    ^
38   [FPAREN_OPEN]       (
38   [TYPE]              NSURLResponse
38   [PTR_TYPE]          *
38   [WORD]              response
38   [FPAREN_CLOSE]      )
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [FUNC_CALL]         dispatch_after
39   [FPAREN_OPEN]       (
39   [WORD]              retryTime
39   [COMMA]             ,
39   [FUNC_CALL]         dispatch_get_main_queue
39   [FPAREN_OPEN]       (
39   [FPAREN_CLOSE]      )
39   [COMMA]             ,
39   [OC_BLOCK_CARET]    ^
39   [FPAREN_OPEN]       (
39   [TYPE]              void
39   [FPAREN_CLOSE]      )
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [SQUARE_OPEN]       [
40   [OC_MSG_CLASS]      self
40   [OC_MSG_FUNC]       postSelection
40   [OC_COLON]          :
40   [TYPE]              testName
40   [OC_MSG_NAME]       selection
40   [OC_COLON]          :
40   [WORD]              selection
40   [SQUARE_CLOSE]      ]
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [SQUARE_CLOSE]      ]
42   [SEMICOLON]         ;
42   [NEWLINE]           
44   [SQUARE_OPEN]       [
44   [OC_MSG_CLASS]      UIView
44   [OC_MSG_FUNC]       transitionWithView
44   [OC_COLON]          :
44   [THIS]              self
44   [MEMBER]            .
44   [WORD]              view
44   [MEMBER]            .
44   [TYPE]              window
44   [OC_MSG_NAME]       duration
44   [OC_COLON]          :
44   [NUMBER_FP]         0.75
44   [OC_MSG_NAME]       options
44   [OC_COLON]          :
44   [TYPE]              UIViewAnimationOptionTransitionFlipFromRight
44   [OC_MSG_NAME]       animations
44   [OC_COLON]          :
44   [OC_BLOCK_CARET]    ^
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [SQUARE_OPEN]       [
45   [OC_MSG_CLASS]      self
45   [OC_MSG_FUNC]       presentViewController
45   [OC_COLON]          :
45   [TYPE]              viewController
45   [OC_MSG_NAME]       animated
45   [OC_COLON]          :
45   [TYPE]              NO
45   [OC_MSG_NAME]       completion
45   [OC_COLON]          :
45   [WORD]              nil
45   [SQUARE_CLOSE]      ]
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [OC_MSG_NAME]       complete
46   [OC_COLON]          :
46   [OC_BLOCK_CARET]    ^
46   [BRACE_OPEN]        {
46   [BRACE_CLOSE]       }
46   [SQUARE_CLOSE]      ]
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
49   [OC_SCOPE]          -
49   [PAREN_OPEN]        (
49   [TYPE]              void
49   [PAREN_CLOSE]       )
49   [OC_MSG_DECL]       closeEditor
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [FUNC_CALL]         dispatch_async
50   [FPAREN_OPEN]       (
50   [FUNC_CALL]         dispatch_get_main_queue
50   [FPAREN_OPEN]       (
50   [FPAREN_CLOSE]      )
50   [COMMA]             ,
50   [OC_BLOCK_CARET]    ^
50   [BRACE_OPEN]        {
50   [NEWLINE]           
51   [IF]                if
51   [SPAREN_OPEN]       (
51   [SQUARE_OPEN]       [
51   [SQUARE_OPEN]       [
51   [OC_MSG_CLASS]      TestClass
51   [OC_MSG_FUNC]       sharedInstance
51   [SQUARE_CLOSE]      ]
51   [OC_MSG_FUNC]       TestClassController
51   [SQUARE_CLOSE]      ]
51   [COMPARE]           !=
51   [WORD]              nil
51   [BOOL]              &&
51   [SQUARE_OPEN]       [
51   [SQUARE_OPEN]       [
51   [SQUARE_OPEN]       [
51   [OC_MSG_CLASS]      TestClass
51   [OC_MSG_FUNC]       sharedInstance
51   [SQUARE_CLOSE]      ]
51   [OC_MSG_FUNC]       TestClassController
51   [SQUARE_CLOSE]      ]
51   [OC_MSG_FUNC]       isKindOfClass
51   [OC_COLON]          :
51   [SQUARE_OPEN]       [
51   [OC_MSG_CLASS]      TestClassSocialViewController
51   [OC_MSG_FUNC]       class
51   [SQUARE_CLOSE]      ]
51   [SQUARE_CLOSE]      ]
51   [SPAREN_CLOSE]      )
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [SQUARE_OPEN]       [
52   [SQUARE_OPEN]       [
52   [OC_MSG_CLASS]      TestClass
52   [OC_MSG_FUNC]       sharedInstance
52   [SQUARE_CLOSE]      ]
52   [MEMBER]            .
52   [TYPE]              TestClassTransitionController
52   [OC_MSG_FUNC]       transitionToViewController
52   [OC_COLON]          :
52   [SQUARE_OPEN]       [
52   [SQUARE_OPEN]       [
52   [OC_MSG_CLASS]      TestClass
52   [OC_MSG_FUNC]       sharedInstance
52   [SQUARE_CLOSE]      ]
52   [OC_MSG_FUNC]       TestClassController
52   [SQUARE_CLOSE]      ]
52   [OC_MSG_NAME]       withCompletitionHandler
52   [OC_COLON]          :
52   [OC_BLOCK_CARET]    ^
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [SQUARE_OPEN]       [
53   [SQUARE_OPEN]       [
53   [OC_MSG_CLASS]      TestClass
53   [OC_MSG_FUNC]       sharedInstance
53   [SQUARE_CLOSE]      ]
53   [OC_MSG_FUNC]       setTestClassVideoPlayerViewController
53   [OC_COLON]          :
53   [WORD]              nil
53   [SQUARE_CLOSE]      ]
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [BRACE_CLOSE]       }
54   [SQUARE_CLOSE]      ]
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [ELSE]              else
55   [ELSEIF]            if
55   [SPAREN_OPEN]       (
55   [SQUARE_OPEN]       [
55   [SQUARE_OPEN]       [
55   [OC_MSG_CLASS]      TestClass
55   [OC_MSG_FUNC]       sharedInstance
55   [SQUARE_CLOSE]      ]
55   [OC_MSG_FUNC]       TestClassController
55   [SQUARE_CLOSE]      ]
55   [COMPARE]           !=
55   [WORD]              nil
55   [BOOL]              &&
55   [SQUARE_OPEN]       [
55   [SQUARE_OPEN]       [
55   [SQUARE_OPEN]       [
55   [OC_MSG_CLASS]      TestClass
55   [OC_MSG_FUNC]       sharedInstance
55   [SQUARE_CLOSE]      ]
55   [OC_MSG_FUNC]       TestClassController
55   [SQUARE_CLOSE]      ]
55   [OC_MSG_FUNC]       isKindOfClass
55   [OC_COLON]          :
55   [SQUARE_OPEN]       [
55   [OC_MSG_CLASS]      TestClassModalViewController
55   [OC_MSG_FUNC]       class
55   [SQUARE_CLOSE]      ]
55   [SQUARE_CLOSE]      ]
55   [SPAREN_CLOSE]      )
55   [BRACE_OPEN]        {
55   [NEWLINE]           
56   [SQUARE_OPEN]       [
56   [SQUARE_OPEN]       [
56   [OC_MSG_CLASS]      TestClass
56   [OC_MSG_FUNC]       sharedInstance
56   [SQUARE_CLOSE]      ]
56   [MEMBER]            .
56   [TYPE]              TestClassTransitionController
56   [OC_MSG_FUNC]       transitionToViewController
56   [OC_COLON]          :
56   [TYPE]              nil
56   [OC_MSG_NAME]       withCompletitionHandler
56   [OC_COLON]          :
56   [OC_BLOCK_CARET]    ^
56   [BRACE_OPEN]        {
56   [NEWLINE]           
57   [SQUARE_OPEN]       [
57   [SQUARE_OPEN]       [
57   [OC_MSG_CLASS]      TestClass
57   [OC_MSG_FUNC]       sharedInstance
57   [SQUARE_CLOSE]      ]
57   [OC_MSG_FUNC]       setTestClassVideoPlayerViewController
57   [OC_COLON]          :
57   [WORD]              nil
57   [SQUARE_CLOSE]      ]
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [SQUARE_CLOSE]      ]
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [BRACE_CLOSE]       }
59   [ELSE]              else
59   [BRACE_OPEN]        {
59   [NEWLINE]           
60   [SQUARE_OPEN]       [
60   [SQUARE_OPEN]       [
60   [OC_MSG_CLASS]      TestClass
60   [OC_MSG_FUNC]       sharedInstance
60   [SQUARE_CLOSE]      ]
60   [OC_MSG_FUNC]       hideTestClass
60   [SQUARE_CLOSE]      ]
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [BRACE_CLOSE]       }
61   [NEWLINE]           
62   [BRACE_CLOSE]       }
62   [FPAREN_CLOSE]      )
62   [SEMICOLON]         ;
62   [NEWLINE]           
63   [BRACE_CLOSE]       }
63   [NEWLINE]           
65   [OC_SCOPE]          -
65   [PAREN_OPEN]        (
65   [TYPE]              void
65   [PAREN_CLOSE]       )
65   [OC_MSG_DECL]       testMethodWrapper
65   [BRACE_OPEN]        {
65   [NEWLINE]           
66   [TYPE]              SEL
66   [WORD]              testMethodForSelectorSel
66   [ASSIGN]            =
66   [OC_SEL]            @selector
66   [PAREN_OPEN]        (
66   [OC_SEL_NAME]       testMethod
66   [OC_SEL_NAME]       :
66   [PAREN_CLOSE]       )
66   [SEMICOLON]         ;
66   [NEWLINE]           
67   [QUALIFIER]         __block
67   [TYPE]              void
67   [PTR_TYPE]          *
67   [WORD]              testMethodForSelectorBlock
67   [ASSIGN]            =
67   [FUNC_CALL]         TestFunction
67   [FPAREN_OPEN]       (
67   [WORD]              encoderTest
67   [COMMA]             ,
67   [WORD]              testMethodForSelectorSel
67   [COMMA]             ,
67   [OC_BLOCK_CARET]    ^
67   [TYPE]              id
67   [FPAREN_OPEN]       (
67   [SIZEOF]            __typeof
67   [PAREN_OPEN]        (
67   [WORD]              encoderTest
67   [PAREN_CLOSE]       )
67   [TYPE]              self
67   [COMMA]             ,
67   [TYPE]              SEL
67   [WORD]              aSelector
67   [FPAREN_CLOSE]      )
67   [BRACE_OPEN]        {
67   [NEWLINE]           
68   [FUNC_CALL]         NSLog
68   [FPAREN_OPEN]       (
68   [STRING]            @"OK"
68   [FPAREN_CLOSE]      )
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [FPAREN_CLOSE]      )
69   [SEMICOLON]         ;
69   [NEWLINE]           
70   [BRACE_CLOSE]       }
70   [NEWLINE]           
72   [OC_SCOPE]          -
72   [PAREN_OPEN]        (
72   [TYPE]              void
72   [PAREN_CLOSE]       )
72   [OC_MSG_DECL]       method2
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [SQUARE_OPEN]       [
73   [OC_MSG_CLASS]      TestClassRequest
73   [OC_MSG_FUNC]       performMethod
73   [OC_COLON]          :
73   [TYPE]              TestClassRequestMethodPOST
73   [NEWLINE]           
74   [OC_MSG_NAME]       responseHandler
74   [OC_COLON]          :
74   [OC_BLOCK_CARET]    ^
74   [FPAREN_OPEN]       (
74   [TYPE]              NSURLResponse
74   [PTR_TYPE]          *
74   [WORD]              response
74   [COMMA]             ,
74   [TYPE]              NSData
74   [PTR_TYPE]          *
74   [WORD]              responseData
74   [COMMA]             ,
74   [TYPE]              NSError
74   [PTR_TYPE]          *
74   [WORD]              error
74   [FPAREN_CLOSE]      )
74   [BRACE_OPEN]        {
74   [NEWLINE]           
75   [SQUARE_OPEN]       [
75   [OC_MSG_CLASS]      self
75   [OC_MSG_FUNC]       checkPermissions
75   [OC_COLON]          :
75   [TYPE]              connection
75   [OC_MSG_NAME]       withCallback
75   [OC_COLON]          :
75   [OC_BLOCK_CARET]    ^
75   [FPAREN_OPEN]       (
75   [TYPE]              NSError
75   [PTR_TYPE]          *
75   [WORD]              error
75   [COMMA]             ,
75   [TYPE]              id
75   [WORD]              data
75   [FPAREN_CLOSE]      )
75   [BRACE_OPEN]        {
75   [NEWLINE]           
76   [SQUARE_OPEN]       [
76   [OC_MSG_CLASS]      self
76   [OC_MSG_FUNC]       bar
76   [SQUARE_CLOSE]      ]
76   [SEMICOLON]         ;
76   [NEWLINE]           
77   [BRACE_CLOSE]       }
77   [SQUARE_CLOSE]      ]
77   [SEMICOLON]         ;
77   [NEWLINE]           
78   [BRACE_CLOSE]       }
78   [SQUARE_CLOSE]      ]
78   [SEMICOLON]         ;
78   [NEWLINE]           
79   [BRACE_CLOSE]       }
79   [NEWLINE]           
81   [OC_SCOPE]          -
81   [PAREN_OPEN]        (
81   [TYPE]              void
81   [PAREN_CLOSE]       )
81   [OC_MSG_DECL]       method3
81   [BRACE_OPEN]        {
81   [NEWLINE]           
82   [SQUARE_OPEN]       [
82   [OC_MSG_CLASS]      TestClassRequest
82   [OC_MSG_FUNC]       performMethod
82   [OC_COLON]          :
82   [TYPE]              TestClassRequestMethodPOST
82   [OC_MSG_NAME]       responseHandler
82   [OC_COLON]          :
82   [OC_BLOCK_CARET]    ^
82   [FPAREN_OPEN]       (
82   [TYPE]              NSURLResponse
82   [PTR_TYPE]          *
82   [WORD]              response
82   [COMMA]             ,
82   [TYPE]              NSData
82   [PTR_TYPE]          *
82   [WORD]              responseData
82   [COMMA]             ,
82   [TYPE]              NSError
82   [PTR_TYPE]          *
82   [WORD]              error
82   [FPAREN_CLOSE]      )
82   [BRACE_OPEN]        {
82   [NEWLINE]           
83   [SQUARE_OPEN]       [
83   [OC_MSG_CLASS]      self
83   [OC_MSG_FUNC]       checkPermissions
83   [OC_COLON]          :
83   [TYPE]              connection
83   [OC_MSG_NAME]       withCallback
83   [OC_COLON]          :
83   [OC_BLOCK_CARET]    ^
83   [FPAREN_OPEN]       (
83   [TYPE]              NSError
83   [PTR_TYPE]          *
83   [WORD]              error
83   [COMMA]             ,
83   [TYPE]              id
83   [WORD]              data
83   [FPAREN_CLOSE]      )
83   [BRACE_OPEN]        {
83   [NEWLINE]           
84   [SQUARE_OPEN]       [
84   [OC_MSG_CLASS]      self
84   [OC_MSG_FUNC]       bar
84   [SQUARE_CLOSE]      ]
84   [SEMICOLON]         ;
84   [NEWLINE]           
85   [BRACE_CLOSE]       }
85   [SQUARE_CLOSE]      ]
85   [SEMICOLON]         ;
85   [NEWLINE]           
86   [BRACE_CLOSE]       }
86   [SQUARE_CLOSE]      ]
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [BRACE_CLOSE]       }
87   [NEWLINE]           
89   [OC_END]            @end
89   [NEWLINE]           