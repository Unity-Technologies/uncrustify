Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [NONE]              @interface
3    [OC_INTF]           TestClass
3    [OC_CLASS]          :
3    [NONE]              NSObject
3    [NONE]              
4    [OC_INTF]           @end
4    [NONE]              
6    [NONE]              @implementation
6    [OC_IMPL]           TestClass
6    [NONE]              
8    [OC_MSG_DECL]       -
8    [OC_MSG_DECL]       (
8    [NONE]              void
8    [OC_MSG_DECL]       )
8    [OC_MSG_DECL]       method1
8    [OC_MSG_DECL]       {
8    [NONE]              
9    [OC_MSG]            [
9    [NONE]              session
9    [NONE]              mergeCommonMovieItems
9    [NONE]              :
9    [OC_BLOCK_EXPR]     ^
9    [OC_BLOCK_EXPR]     (
9    [OC_BLOCK_EXPR]     NSURL
9    [OC_BLOCK_EXPR]     *
9    [OC_BLOCK_EXPR]     exportURL
9    [OC_BLOCK_EXPR]     ,
9    [OC_BLOCK_EXPR]     NSError
9    [OC_BLOCK_EXPR]     *
9    [OC_BLOCK_EXPR]     exportError
9    [OC_BLOCK_EXPR]     )
9    [OC_BLOCK_EXPR]     {
9    [NONE]              
10   [NONE]              NSDictionary
10   [NONE]              *
10   [NONE]              settings
10   [NONE]              =
10   [OC_MSG]            [
10   [NONE]              self
10   [NONE]              getSettings
10   [OC_MSG]            ]
10   [OC_MSG]            ;
10   [NONE]              
12   [OC_MSG]            [
12   [NONE]              session
12   [NONE]              postSessionWithCallback
12   [NONE]              :
12   [OC_BLOCK_EXPR]     ^
12   [OC_BLOCK_EXPR]     (
12   [OC_BLOCK_EXPR]     NSError
12   [OC_BLOCK_EXPR]     *
12   [OC_BLOCK_EXPR]     error
12   [OC_BLOCK_EXPR]     ,
12   [OC_BLOCK_EXPR]     id
12   [OC_BLOCK_EXPR]     d
12   [OC_BLOCK_EXPR]     )
12   [OC_BLOCK_EXPR]     {
12   [NONE]              
13   [NONE]              if
13   [IF]                (
13   [NONE]              error
13   [NONE]              ==
13   [NONE]              nil
13   [IF]                )
13   [IF]                {
13   [NONE]              
14   [OC_MSG]            [
14   [NONE]              session
14   [NONE]              uploadSessionWithCallback
14   [NONE]              :
14   [OC_BLOCK_EXPR]     ^
14   [OC_BLOCK_EXPR]     (
14   [OC_BLOCK_EXPR]     NSError
14   [OC_BLOCK_EXPR]     *
14   [OC_BLOCK_EXPR]     error
14   [OC_BLOCK_EXPR]     ,
14   [OC_BLOCK_EXPR]     id
14   [OC_BLOCK_EXPR]     d
14   [OC_BLOCK_EXPR]     )
14   [OC_BLOCK_EXPR]     {
14   [NONE]              
15   [NONE]              NSLog
15   [FUNC_CALL]         (
15   [NONE]              @"OK"
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [OC_BLOCK_EXPR]     }
16   [OC_MSG]            ]
16   [OC_MSG]            ;
16   [NONE]              
17   [IF]                }
17   [NONE]              else
17   [ELSE]              {
17   [NONE]              
18   [NONE]              NSLog
18   [FUNC_CALL]         (
18   [NONE]              @"Something went wrong: %@"
18   [NONE]              ,
18   [NONE]              error
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [NONE]              return
19   [NONE]              ;
19   [NONE]              
20   [ELSE]              }
20   [NONE]              
21   [OC_BLOCK_EXPR]     }
21   [OC_MSG]            ]
21   [OC_MSG]            ;
21   [NONE]              
22   [OC_BLOCK_EXPR]     }
22   [OC_MSG]            ]
22   [OC_MSG]            ;
22   [NONE]              
23   [OC_MSG_DECL]       }
23   [NONE]              
25   [OC_MSG_DECL]       -
25   [OC_MSG_DECL]       (
25   [NONE]              void
25   [OC_MSG_DECL]       )
25   [OC_MSG_DECL]       postSelection
25   [OC_MSG_DECL]       :
25   [OC_MSG_DECL]       (
25   [NONE]              NSString
25   [NONE]              *
25   [OC_MSG_DECL]       )
25   [NONE]              testName
25   [NONE]              
26   [OC_MSG_DECL]       selection
26   [OC_MSG_DECL]       :
26   [OC_MSG_DECL]       (
26   [NONE]              NSString
26   [NONE]              *
26   [OC_MSG_DECL]       )
26   [NONE]              selection
26   [OC_MSG_DECL]       {
26   [NONE]              
27   [NONE]              dispatch_async
27   [FUNC_CALL]         (
27   [NONE]              dispatch_get_main_queue
27   [FUNC_CALL]         (
27   [FUNC_CALL]         )
27   [NONE]              ,
27   [OC_BLOCK_EXPR]     ^
27   [OC_BLOCK_EXPR]     {
27   [NONE]              
28   [OC_MSG]            [
28   [NONE]              self
28   [NONE]              warmup
28   [NONE]              :
28   [OC_BLOCK_EXPR]     ^
28   [OC_BLOCK_EXPR]     {
28   [NONE]              
29   [OC_MSG]            [
29   [NONE]              self
29   [NONE]              setReady
29   [OC_MSG]            ]
29   [OC_MSG]            ;
29   [NONE]              
30   [OC_BLOCK_EXPR]     }
30   [OC_MSG]            ]
30   [OC_MSG]            ;
30   [NONE]              
31   [OC_BLOCK_EXPR]     }
31   [FUNC_CALL]         )
31   [NONE]              ;
31   [NONE]              
33   [NONE]              dispatch_after
33   [FUNC_CALL]         (
33   [NONE]              retryTime
33   [NONE]              ,
33   [NONE]              dispatch_get_main_queue
33   [FUNC_CALL]         (
33   [FUNC_CALL]         )
33   [NONE]              ,
33   [OC_BLOCK_EXPR]     ^
33   [OC_BLOCK_EXPR]     (
33   [OC_BLOCK_EXPR]     void
33   [OC_BLOCK_EXPR]     )
33   [OC_BLOCK_EXPR]     {
33   [NONE]              
34   [OC_MSG]            [
34   [NONE]              self
34   [NONE]              postSelection
34   [NONE]              :
34   [NONE]              testName
34   [NONE]              selection
34   [OC_MSG_NAME]       :
34   [NONE]              selection
34   [OC_MSG]            ]
34   [OC_MSG]            ;
34   [NONE]              
35   [OC_BLOCK_EXPR]     }
35   [FUNC_CALL]         )
35   [NONE]              ;
35   [NONE]              
37   [OC_MSG]            [
37   [NONE]              TestClassRequest
37   [NONE]              performMethod
37   [NONE]              :
37   [NONE]              TestClassRequestMethodPOST
37   [NONE]              
38   [NONE]              responseHandler
38   [OC_MSG_NAME]       :
38   [OC_BLOCK_EXPR]     ^
38   [OC_BLOCK_EXPR]     (
38   [OC_BLOCK_EXPR]     NSURLResponse
38   [OC_BLOCK_EXPR]     *
38   [OC_BLOCK_EXPR]     response
38   [OC_BLOCK_EXPR]     )
38   [OC_BLOCK_EXPR]     {
38   [NONE]              
39   [NONE]              dispatch_after
39   [FUNC_CALL]         (
39   [NONE]              retryTime
39   [NONE]              ,
39   [NONE]              dispatch_get_main_queue
39   [FUNC_CALL]         (
39   [FUNC_CALL]         )
39   [NONE]              ,
39   [OC_BLOCK_EXPR]     ^
39   [OC_BLOCK_EXPR]     (
39   [OC_BLOCK_EXPR]     void
39   [OC_BLOCK_EXPR]     )
39   [OC_BLOCK_EXPR]     {
39   [NONE]              
40   [OC_MSG]            [
40   [NONE]              self
40   [NONE]              postSelection
40   [NONE]              :
40   [NONE]              testName
40   [NONE]              selection
40   [OC_MSG_NAME]       :
40   [NONE]              selection
40   [OC_MSG]            ]
40   [OC_MSG]            ;
40   [NONE]              
41   [OC_BLOCK_EXPR]     }
41   [FUNC_CALL]         )
41   [NONE]              ;
41   [NONE]              
42   [OC_BLOCK_EXPR]     }
42   [OC_MSG]            ]
42   [OC_MSG]            ;
42   [NONE]              
44   [OC_MSG]            [
44   [NONE]              UIView
44   [NONE]              transitionWithView
44   [NONE]              :
44   [NONE]              self
44   [NONE]              .
44   [NONE]              view
44   [NONE]              .
44   [NONE]              window
44   [NONE]              duration
44   [OC_MSG_NAME]       :
44   [NONE]              0.75
44   [NONE]              options
44   [OC_MSG_NAME]       :
44   [NONE]              UIViewAnimationOptionTransitionFlipFromRight
44   [NONE]              animations
44   [OC_MSG_NAME]       :
44   [OC_BLOCK_EXPR]     ^
44   [OC_BLOCK_EXPR]     {
44   [NONE]              
45   [OC_MSG]            [
45   [NONE]              self
45   [NONE]              presentViewController
45   [NONE]              :
45   [NONE]              viewController
45   [NONE]              animated
45   [OC_MSG_NAME]       :
45   [NONE]              NO
45   [NONE]              completion
45   [OC_MSG_NAME]       :
45   [NONE]              nil
45   [OC_MSG]            ]
45   [OC_MSG]            ;
45   [NONE]              
46   [OC_BLOCK_EXPR]     }
46   [NONE]              complete
46   [OC_MSG_NAME]       :
46   [OC_BLOCK_EXPR]     ^
46   [OC_BLOCK_EXPR]     {
46   [OC_BLOCK_EXPR]     }
46   [OC_MSG]            ]
46   [OC_MSG]            ;
46   [NONE]              
47   [OC_MSG_DECL]       }
47   [NONE]              
49   [OC_MSG_DECL]       -
49   [OC_MSG_DECL]       (
49   [NONE]              void
49   [OC_MSG_DECL]       )
49   [OC_MSG_DECL]       closeEditor
49   [OC_MSG_DECL]       {
49   [NONE]              
50   [NONE]              dispatch_async
50   [FUNC_CALL]         (
50   [NONE]              dispatch_get_main_queue
50   [FUNC_CALL]         (
50   [FUNC_CALL]         )
50   [NONE]              ,
50   [OC_BLOCK_EXPR]     ^
50   [OC_BLOCK_EXPR]     {
50   [NONE]              
51   [NONE]              if
51   [IF]                (
51   [OC_MSG]            [
51   [OC_MSG]            [
51   [NONE]              TestClass
51   [NONE]              sharedInstance
51   [OC_MSG]            ]
51   [NONE]              TestClassController
51   [OC_MSG]            ]
51   [NONE]              !=
51   [NONE]              nil
51   [NONE]              &&
51   [OC_MSG]            [
51   [OC_MSG]            [
51   [OC_MSG]            [
51   [NONE]              TestClass
51   [NONE]              sharedInstance
51   [OC_MSG]            ]
51   [NONE]              TestClassController
51   [OC_MSG]            ]
51   [NONE]              isKindOfClass
51   [NONE]              :
51   [OC_MSG]            [
51   [NONE]              TestClassSocialViewController
51   [NONE]              class
51   [OC_MSG]            ]
51   [OC_MSG]            ]
51   [IF]                )
51   [IF]                {
51   [NONE]              
52   [OC_MSG]            [
52   [OC_MSG]            [
52   [NONE]              TestClass
52   [NONE]              sharedInstance
52   [OC_MSG]            ]
52   [NONE]              .
52   [NONE]              TestClassTransitionController
52   [NONE]              transitionToViewController
52   [NONE]              :
52   [OC_MSG]            [
52   [OC_MSG]            [
52   [NONE]              TestClass
52   [NONE]              sharedInstance
52   [OC_MSG]            ]
52   [NONE]              TestClassController
52   [OC_MSG]            ]
52   [NONE]              withCompletitionHandler
52   [OC_MSG_NAME]       :
52   [OC_BLOCK_EXPR]     ^
52   [OC_BLOCK_EXPR]     {
52   [NONE]              
53   [OC_MSG]            [
53   [OC_MSG]            [
53   [NONE]              TestClass
53   [NONE]              sharedInstance
53   [OC_MSG]            ]
53   [NONE]              setTestClassVideoPlayerViewController
53   [NONE]              :
53   [NONE]              nil
53   [OC_MSG]            ]
53   [OC_MSG]            ;
53   [NONE]              
54   [OC_BLOCK_EXPR]     }
54   [OC_MSG]            ]
54   [OC_MSG]            ;
54   [NONE]              
55   [IF]                }
55   [NONE]              else
55   [NONE]              if
55   [ELSEIF]            (
55   [OC_MSG]            [
55   [OC_MSG]            [
55   [NONE]              TestClass
55   [NONE]              sharedInstance
55   [OC_MSG]            ]
55   [NONE]              TestClassController
55   [OC_MSG]            ]
55   [NONE]              !=
55   [NONE]              nil
55   [NONE]              &&
55   [OC_MSG]            [
55   [OC_MSG]            [
55   [OC_MSG]            [
55   [NONE]              TestClass
55   [NONE]              sharedInstance
55   [OC_MSG]            ]
55   [NONE]              TestClassController
55   [OC_MSG]            ]
55   [NONE]              isKindOfClass
55   [NONE]              :
55   [OC_MSG]            [
55   [NONE]              TestClassModalViewController
55   [NONE]              class
55   [OC_MSG]            ]
55   [OC_MSG]            ]
55   [ELSEIF]            )
55   [ELSEIF]            {
55   [NONE]              
56   [OC_MSG]            [
56   [OC_MSG]            [
56   [NONE]              TestClass
56   [NONE]              sharedInstance
56   [OC_MSG]            ]
56   [NONE]              .
56   [NONE]              TestClassTransitionController
56   [NONE]              transitionToViewController
56   [NONE]              :
56   [NONE]              nil
56   [NONE]              withCompletitionHandler
56   [OC_MSG_NAME]       :
56   [OC_BLOCK_EXPR]     ^
56   [OC_BLOCK_EXPR]     {
56   [NONE]              
57   [OC_MSG]            [
57   [OC_MSG]            [
57   [NONE]              TestClass
57   [NONE]              sharedInstance
57   [OC_MSG]            ]
57   [NONE]              setTestClassVideoPlayerViewController
57   [NONE]              :
57   [NONE]              nil
57   [OC_MSG]            ]
57   [OC_MSG]            ;
57   [NONE]              
58   [OC_BLOCK_EXPR]     }
58   [OC_MSG]            ]
58   [OC_MSG]            ;
58   [NONE]              
59   [ELSEIF]            }
59   [NONE]              else
59   [ELSE]              {
59   [NONE]              
60   [OC_MSG]            [
60   [OC_MSG]            [
60   [NONE]              TestClass
60   [NONE]              sharedInstance
60   [OC_MSG]            ]
60   [NONE]              hideTestClass
60   [OC_MSG]            ]
60   [OC_MSG]            ;
60   [NONE]              
61   [ELSE]              }
61   [NONE]              
62   [OC_BLOCK_EXPR]     }
62   [FUNC_CALL]         )
62   [NONE]              ;
62   [NONE]              
63   [OC_MSG_DECL]       }
63   [NONE]              
65   [OC_MSG_DECL]       -
65   [OC_MSG_DECL]       (
65   [NONE]              void
65   [OC_MSG_DECL]       )
65   [OC_MSG_DECL]       testMethodWrapper
65   [OC_MSG_DECL]       {
65   [NONE]              
66   [NONE]              SEL
66   [NONE]              testMethodForSelectorSel
66   [NONE]              =
66   [NONE]              @selector
66   [OC_SEL]            (
66   [OC_SEL]            testMethod
66   [OC_SEL]            :
66   [OC_SEL]            )
66   [NONE]              ;
66   [NONE]              
67   [NONE]              __block
67   [NONE]              void
67   [NONE]              *
67   [NONE]              testMethodForSelectorBlock
67   [NONE]              =
67   [NONE]              TestFunction
67   [FUNC_CALL]         (
67   [NONE]              encoderTest
67   [NONE]              ,
67   [NONE]              testMethodForSelectorSel
67   [NONE]              ,
67   [OC_BLOCK_EXPR]     ^
67   [OC_BLOCK_EXPR]     id
67   [OC_BLOCK_EXPR]     (
67   [OC_BLOCK_EXPR]     __typeof
67   [TYPE_CAST]         (
67   [OC_BLOCK_EXPR]     encoderTest
67   [TYPE_CAST]         )
67   [OC_BLOCK_EXPR]     self
67   [OC_BLOCK_EXPR]     ,
67   [OC_BLOCK_EXPR]     SEL
67   [OC_BLOCK_EXPR]     aSelector
67   [OC_BLOCK_EXPR]     )
67   [OC_BLOCK_EXPR]     {
67   [NONE]              
68   [NONE]              NSLog
68   [FUNC_CALL]         (
68   [NONE]              @"OK"
68   [FUNC_CALL]         )
68   [NONE]              ;
68   [NONE]              
69   [OC_BLOCK_EXPR]     }
69   [FUNC_CALL]         )
69   [NONE]              ;
69   [NONE]              
70   [OC_MSG_DECL]       }
70   [NONE]              
72   [OC_MSG_DECL]       -
72   [OC_MSG_DECL]       (
72   [NONE]              void
72   [OC_MSG_DECL]       )
72   [OC_MSG_DECL]       method2
72   [OC_MSG_DECL]       {
72   [NONE]              
73   [OC_MSG]            [
73   [NONE]              TestClassRequest
73   [NONE]              performMethod
73   [NONE]              :
73   [NONE]              TestClassRequestMethodPOST
73   [NONE]              
74   [NONE]              responseHandler
74   [OC_MSG_NAME]       :
74   [OC_BLOCK_EXPR]     ^
74   [OC_BLOCK_EXPR]     (
74   [OC_BLOCK_EXPR]     NSURLResponse
74   [OC_BLOCK_EXPR]     *
74   [OC_BLOCK_EXPR]     response
74   [OC_BLOCK_EXPR]     ,
74   [OC_BLOCK_EXPR]     NSData
74   [OC_BLOCK_EXPR]     *
74   [OC_BLOCK_EXPR]     responseData
74   [OC_BLOCK_EXPR]     ,
74   [OC_BLOCK_EXPR]     NSError
74   [OC_BLOCK_EXPR]     *
74   [OC_BLOCK_EXPR]     error
74   [OC_BLOCK_EXPR]     )
74   [OC_BLOCK_EXPR]     {
74   [NONE]              
75   [OC_MSG]            [
75   [NONE]              self
75   [NONE]              checkPermissions
75   [NONE]              :
75   [NONE]              connection
75   [NONE]              withCallback
75   [OC_MSG_NAME]       :
75   [OC_BLOCK_EXPR]     ^
75   [OC_BLOCK_EXPR]     (
75   [OC_BLOCK_EXPR]     NSError
75   [OC_BLOCK_EXPR]     *
75   [OC_BLOCK_EXPR]     error
75   [OC_BLOCK_EXPR]     ,
75   [OC_BLOCK_EXPR]     id
75   [OC_BLOCK_EXPR]     data
75   [OC_BLOCK_EXPR]     )
75   [OC_BLOCK_EXPR]     {
75   [NONE]              
76   [OC_MSG]            [
76   [NONE]              self
76   [NONE]              bar
76   [OC_MSG]            ]
76   [OC_MSG]            ;
76   [NONE]              
77   [OC_BLOCK_EXPR]     }
77   [OC_MSG]            ]
77   [OC_MSG]            ;
77   [NONE]              
78   [OC_BLOCK_EXPR]     }
78   [OC_MSG]            ]
78   [OC_MSG]            ;
78   [NONE]              
79   [OC_MSG_DECL]       }
79   [NONE]              
81   [OC_MSG_DECL]       -
81   [OC_MSG_DECL]       (
81   [NONE]              void
81   [OC_MSG_DECL]       )
81   [OC_MSG_DECL]       method3
81   [OC_MSG_DECL]       {
81   [NONE]              
82   [OC_MSG]            [
82   [NONE]              TestClassRequest
82   [NONE]              performMethod
82   [NONE]              :
82   [NONE]              TestClassRequestMethodPOST
82   [NONE]              responseHandler
82   [OC_MSG_NAME]       :
82   [OC_BLOCK_EXPR]     ^
82   [OC_BLOCK_EXPR]     (
82   [OC_BLOCK_EXPR]     NSURLResponse
82   [OC_BLOCK_EXPR]     *
82   [OC_BLOCK_EXPR]     response
82   [OC_BLOCK_EXPR]     ,
82   [OC_BLOCK_EXPR]     NSData
82   [OC_BLOCK_EXPR]     *
82   [OC_BLOCK_EXPR]     responseData
82   [OC_BLOCK_EXPR]     ,
82   [OC_BLOCK_EXPR]     NSError
82   [OC_BLOCK_EXPR]     *
82   [OC_BLOCK_EXPR]     error
82   [OC_BLOCK_EXPR]     )
82   [OC_BLOCK_EXPR]     {
82   [NONE]              
83   [OC_MSG]            [
83   [NONE]              self
83   [NONE]              checkPermissions
83   [NONE]              :
83   [NONE]              connection
83   [NONE]              withCallback
83   [OC_MSG_NAME]       :
83   [OC_BLOCK_EXPR]     ^
83   [OC_BLOCK_EXPR]     (
83   [OC_BLOCK_EXPR]     NSError
83   [OC_BLOCK_EXPR]     *
83   [OC_BLOCK_EXPR]     error
83   [OC_BLOCK_EXPR]     ,
83   [OC_BLOCK_EXPR]     id
83   [OC_BLOCK_EXPR]     data
83   [OC_BLOCK_EXPR]     )
83   [OC_BLOCK_EXPR]     {
83   [NONE]              
84   [OC_MSG]            [
84   [NONE]              self
84   [NONE]              bar
84   [OC_MSG]            ]
84   [OC_MSG]            ;
84   [NONE]              
85   [OC_BLOCK_EXPR]     }
85   [OC_MSG]            ]
85   [OC_MSG]            ;
85   [NONE]              
86   [OC_BLOCK_EXPR]     }
86   [OC_MSG]            ]
86   [OC_MSG]            ;
86   [NONE]              
87   [OC_MSG_DECL]       }
87   [NONE]              
89   [OC_IMPL]           @end
89   [NONE]              