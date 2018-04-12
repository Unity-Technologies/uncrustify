Line [Parent]            Text
1    [NONE]              
2    [NONE]              BOOL
2    [NONE]              immediatlyReady
2    [NONE]              =
2    [OC_MSG]            [
2    [NONE]              self
2    [NONE]              ensureResource
2    [NONE]              :
2    [NONE]              mutableResources
2    [NONE]              [
2    [NONE]              0
2    [NONE]              ]
2    [NONE]              
3    [NONE]              existsInDirectoryAtPath
3    [OC_MSG_NAME]       :
3    [NONE]              mutablePaths
3    [NONE]              [
3    [NONE]              0
3    [NONE]              ]
3    [NONE]              
4    [NONE]              queueMode
4    [OC_MSG_NAME]       :
4    [NONE]              mode
4    [NONE]              
5    [NONE]              completionHandler
5    [OC_MSG_NAME]       :
5    [NONE]              completionHandler
5    [NONE]              
6    [NONE]              errorHandler
6    [OC_MSG_NAME]       :
6    [NONE]              errorHandler
6    [OC_MSG]            ]
6    [OC_MSG]            ;
6    [NONE]              
8    [OC_MSG]            [
8    [NONE]              myObject
8    [NONE]              doFooWith1
8    [NONE]              :
8    [NONE]              arg1
8    [NONE]              
8    [NONE]              name1
8    [OC_MSG_NAME]       :
8    [NONE]              arg2
8    [COMMENT_END]       // some lines with >1 arg
8    [NONE]              
9    [NONE]              error1
9    [OC_MSG_NAME]       :
9    [NONE]              arg3
9    [OC_MSG]            ]
9    [OC_MSG]            ;
9    [NONE]              
11   [OC_MSG]            [
11   [NONE]              myObject
11   [NONE]              doFooWith2
11   [NONE]              :
11   [NONE]              arg4
11   [NONE]              
12   [NONE]              name2
12   [OC_MSG_NAME]       :
12   [NONE]              arg5
12   [NONE]              
12   [NONE]              error2
12   [OC_MSG_NAME]       :
12   [NONE]              arg6
12   [OC_MSG]            ]
12   [OC_MSG]            ;
12   [NONE]              
14   [OC_MSG]            [
14   [NONE]              myObject
14   [NONE]              doFooWith3
14   [NONE]              :
14   [NONE]              arg7
14   [NONE]              
15   [NONE]              name3
15   [OC_MSG_NAME]       :
15   [NONE]              arg8
15   [COMMENT_END]       // aligning keywords instead of colons
15   [NONE]              
16   [NONE]              error3
16   [OC_MSG_NAME]       :
16   [NONE]              arg9
16   [OC_MSG]            ]
16   [OC_MSG]            ;
16   [NONE]              
18   [OC_MSG]            [
18   [NONE]              myObject
18   [NONE]              doithereguysA
18   [NONE]              :
18   [NONE]              argA
18   [NONE]              
19   [NONE]              reallylongargname
19   [OC_MSG_NAME]       :
19   [NONE]              argB
19   [NONE]              
19   [NONE]              another
19   [OC_MSG_NAME]       :
19   [NONE]              argC
19   [OC_MSG]            ]
19   [OC_MSG]            ;
19   [NONE]              
21   [FUNC_DEF]          int
21   [NONE]              foo
21   [FUNC_DEF]          (
21   [FUNC_DEF]          )
21   [NONE]              
22   [FUNC_DEF]          {
22   [NONE]              
23   [OC_MSG]            [
23   [NONE]              UIView
23   [NONE]              transitionWithView
23   [NONE]              :
23   [NONE]              self
23   [NONE]              .
23   [NONE]              window
23   [NONE]              
24   [NONE]              duration
24   [OC_MSG_NAME]       :
24   [NONE]              0.3
24   [NONE]              
25   [NONE]              options
25   [OC_MSG_NAME]       :
25   [NONE]              UIViewAnimationOptionTransitionCrossDissolve
25   [NONE]              
26   [NONE]              animations
26   [OC_MSG_NAME]       :
26   [OC_BLOCK_EXPR]     ^
26   [OC_BLOCK_EXPR]     {
26   [NONE]              
27   [NONE]              BOOL
27   [NONE]              oldState
27   [NONE]              =
27   [OC_MSG]            [
27   [NONE]              UIView
27   [NONE]              areAnimationsEnabled
27   [OC_MSG]            ]
27   [OC_MSG]            ;
27   [NONE]              
28   [OC_MSG]            [
28   [NONE]              UIView
28   [NONE]              setAnimationsEnabled
28   [NONE]              :
28   [NONE]              NO
28   [OC_MSG]            ]
28   [OC_MSG]            ;
28   [NONE]              
29   [NONE]              self
29   [NONE]              .
29   [NONE]              window
29   [NONE]              .
29   [NONE]              rootViewController
29   [NONE]              =
29   [NONE]              self
29   [NONE]              .
29   [NONE]              viewController
29   [NONE]              ;
29   [NONE]              
30   [OC_MSG]            [
30   [NONE]              UIView
30   [NONE]              setAnimationsEnabled
30   [NONE]              :
30   [NONE]              oldState
30   [OC_MSG]            ]
30   [OC_MSG]            ;
30   [NONE]              
31   [OC_BLOCK_EXPR]     }
31   [NONE]              
32   [NONE]              completion
32   [OC_MSG_NAME]       :
32   [OC_BLOCK_EXPR]     ^
32   [OC_BLOCK_EXPR]     (
32   [OC_BLOCK_EXPR]     BOOL
32   [OC_BLOCK_EXPR]     finished
32   [OC_BLOCK_EXPR]     )
32   [OC_BLOCK_EXPR]     {
32   [NONE]              
34   [NONE]              BOOL
34   [NONE]              foo
34   [NONE]              ;
34   [NONE]              
35   [OC_BLOCK_EXPR]     }
35   [OC_MSG]            ]
35   [OC_MSG]            ;
35   [NONE]              
36   [FUNC_DEF]          }
36   [NONE]              
38   [FUNC_DEF]          int
38   [NONE]              foo2
38   [FUNC_DEF]          (
38   [FUNC_DEF]          )
38   [NONE]              
39   [FUNC_DEF]          {
39   [NONE]              
40   [OC_MSG]            [
40   [NONE]              UIView
40   [NONE]              transitionWithView
40   [NONE]              :
40   [NONE]              self
40   [NONE]              .
40   [NONE]              window
40   [NONE]              
40   [NONE]              duration
40   [OC_MSG_NAME]       :
40   [NONE]              0.3
40   [NONE]              
40   [NONE]              options
40   [OC_MSG_NAME]       :
40   [NONE]              UIViewAnimationOptionTransitionCrossDissolve
40   [NONE]              
40   [NONE]              animations
40   [OC_MSG_NAME]       :
40   [OC_BLOCK_EXPR]     ^
40   [OC_BLOCK_EXPR]     {
40   [NONE]              
41   [NONE]              BOOL
41   [NONE]              oldState
41   [NONE]              =
41   [OC_MSG]            [
41   [NONE]              UIView
41   [NONE]              areAnimationsEnabled
41   [OC_MSG]            ]
41   [OC_MSG]            ;
41   [NONE]              
42   [OC_MSG]            [
42   [NONE]              UIView
42   [NONE]              setAnimationsEnabled
42   [NONE]              :
42   [NONE]              NO
42   [OC_MSG]            ]
42   [OC_MSG]            ;
42   [NONE]              
43   [NONE]              self
43   [NONE]              .
43   [NONE]              window
43   [NONE]              .
43   [NONE]              rootViewController
43   [NONE]              =
43   [NONE]              self
43   [NONE]              .
43   [NONE]              viewController
43   [NONE]              ;
43   [NONE]              
44   [OC_MSG]            [
44   [NONE]              UIView
44   [NONE]              setAnimationsEnabled
44   [NONE]              :
44   [NONE]              oldState
44   [OC_MSG]            ]
44   [OC_MSG]            ;
44   [NONE]              
45   [OC_BLOCK_EXPR]     }
45   [NONE]              
46   [NONE]              completion
46   [OC_MSG_NAME]       :
46   [OC_BLOCK_EXPR]     ^
46   [OC_BLOCK_EXPR]     (
46   [OC_BLOCK_EXPR]     BOOL
46   [OC_BLOCK_EXPR]     finished
46   [OC_BLOCK_EXPR]     )
46   [OC_BLOCK_EXPR]     {
46   [NONE]              
48   [NONE]              BOOL
48   [NONE]              foo
48   [NONE]              ;
48   [NONE]              
49   [OC_BLOCK_EXPR]     }
49   [OC_MSG]            ]
49   [OC_MSG]            ;
49   [NONE]              
51   [OC_MSG]            [
51   [OC_MSG]            [
51   [NONE]              HRNewsService
51   [NONE]              sharedInstance
51   [OC_MSG]            ]
51   [NONE]              registerPushToken
51   [NONE]              :
51   [NONE]              deviceToken
51   [NONE]              
51   [NONE]              success
51   [OC_MSG_NAME]       :
51   [OC_BLOCK_EXPR]     ^
51   [OC_BLOCK_EXPR]     {
51   [NONE]              
52   [NONE]              DLog
52   [FUNC_CALL]         (
52   [NONE]              @"Finished Registering Push Token!"
52   [FUNC_CALL]         )
52   [NONE]              ;
52   [NONE]              
53   [NONE]              self
53   [NONE]              .
53   [NONE]              notificationsEnabled
53   [NONE]              =
53   [NONE]              YES
53   [NONE]              ;
53   [NONE]              
54   [OC_BLOCK_EXPR]     }
54   [NONE]              
54   [NONE]              fail
54   [OC_MSG_NAME]       :
54   [NONE]              nil
54   [OC_MSG]            ]
54   [OC_MSG]            ;
54   [NONE]              
56   [FUNC_DEF]          }
56   [NONE]              