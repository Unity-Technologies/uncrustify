Line [Parent]            Text
1    [OC_MSG]            [
1    [NONE]              UIView
1    [NONE]              animateWithDuration
1    [NONE]              :
1    [NONE]              0.2f
1    [NONE]              delay
1    [OC_MSG_NAME]       :
1    [NONE]              0.f
1    [NONE]              options
1    [OC_MSG_NAME]       :
1    [NONE]              UIViewAnimationCurveEaseInOut
1    [NONE]              animations
1    [OC_MSG_NAME]       :
1    [OC_BLOCK_EXPR]     ^
1    [OC_BLOCK_EXPR]     {
1    [NONE]              
2    [NONE]              self
2    [NONE]              .
2    [NONE]              transform
2    [NONE]              =
2    [NONE]              CGAffineTransformMakeScale
2    [FUNC_CALL]         (
2    [NONE]              1.05f
2    [NONE]              ,
2    [NONE]              1.05f
2    [FUNC_CALL]         )
2    [NONE]              ;
2    [NONE]              
3    [OC_BLOCK_EXPR]     }
3    [NONE]              completion
3    [OC_MSG_NAME]       :
3    [OC_BLOCK_EXPR]     ^
3    [OC_BLOCK_EXPR]     (
3    [OC_BLOCK_EXPR]     BOOL
3    [OC_BLOCK_EXPR]     finished
3    [OC_BLOCK_EXPR]     )
3    [OC_BLOCK_EXPR]     {
3    [NONE]              
4    [OC_MSG]            [
4    [NONE]              UIView
4    [NONE]              animateWithDuration
4    [NONE]              :
4    [NONE]              0.08f
4    [NONE]              delay
4    [OC_MSG_NAME]       :
4    [NONE]              0.f
4    [NONE]              options
4    [OC_MSG_NAME]       :
4    [NONE]              UIViewAnimationOptionCurveEaseInOut
4    [NONE]              animations
4    [OC_MSG_NAME]       :
4    [OC_BLOCK_EXPR]     ^
4    [OC_BLOCK_EXPR]     {
4    [NONE]              
5    [NONE]              self
5    [NONE]              .
5    [NONE]              transform
5    [NONE]              =
5    [NONE]              CGAffineTransformIdentity
5    [NONE]              ;
5    [NONE]              
6    [OC_MSG]            [
6    [NONE]              UIView
6    [NONE]              animateWithDuration
6    [NONE]              :
6    [NONE]              1
6    [NONE]              delay
6    [OC_MSG_NAME]       :
6    [NONE]              0
6    [NONE]              options
6    [OC_MSG_NAME]       :
6    [NONE]              0
6    [NONE]              animations
6    [OC_MSG_NAME]       :
6    [OC_BLOCK_EXPR]     ^
6    [OC_BLOCK_EXPR]     {
6    [NONE]              
7    [COMMENT_WHOLE]     // blah
7    [NONE]              
8    [OC_BLOCK_EXPR]     }
8    [NONE]              completion
8    [OC_MSG_NAME]       :
8    [NONE]              nil
8    [OC_MSG]            ]
8    [OC_MSG]            ;
8    [NONE]              
9    [OC_BLOCK_EXPR]     }
9    [OC_MSG]            ]
9    [OC_MSG]            ;
9    [NONE]              
10   [OC_BLOCK_EXPR]     }
10   [OC_MSG]            ]
10   [OC_MSG]            ;
10   [NONE]              
12   [NONE]              dispatch_async
12   [FUNC_CALL]         (
12   [NONE]              foo
12   [NONE]              ,
12   [OC_BLOCK_EXPR]     ^
12   [OC_BLOCK_EXPR]     {
12   [NONE]              
13   [NONE]              dispatch_async
13   [FUNC_CALL]         (
13   [NONE]              bar
13   [NONE]              ,
13   [OC_BLOCK_EXPR]     ^
13   [OC_BLOCK_EXPR]     {
13   [NONE]              
14   [NONE]              dispatch_async
14   [FUNC_CALL]         (
14   [NONE]              qux
14   [NONE]              ,
14   [OC_BLOCK_EXPR]     ^
14   [OC_BLOCK_EXPR]     {
14   [NONE]              
15   [NONE]              quz
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [OC_BLOCK_EXPR]     }
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [OC_BLOCK_EXPR]     }
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [OC_BLOCK_EXPR]     }
18   [FUNC_CALL]         )
18   [NONE]              