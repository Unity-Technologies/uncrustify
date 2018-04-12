Line [Parent]            Text
1    [COMMENT_WHOLE]     // Test a case where blocks wrapped by parentheses were causing the parser to crash
1    [NONE]              
2    [FUNC_VAR]          int
2    [FUNC_VAR]          (
2    [FUNC_VAR]          ^
2    [NONE]              myBlock
2    [FUNC_VAR]          )
2    [FUNC_PROTO]        (
2    [NONE]              int
2    [FUNC_PROTO]        )
2    [NONE]              =
2    [NONE]              (
2    [OC_BLOCK_EXPR]     ^
2    [OC_BLOCK_EXPR]     (
2    [OC_BLOCK_EXPR]     int
2    [OC_BLOCK_EXPR]     num
2    [OC_BLOCK_EXPR]     )
2    [OC_BLOCK_EXPR]     {
2    [NONE]              
3    [NONE]              return
3    [NONE]              num
3    [NONE]              *
3    [NONE]              multiplier
3    [NONE]              ;
3    [NONE]              
4    [OC_BLOCK_EXPR]     }
4    [NONE]              )
4    [NONE]              ;
4    [NONE]              
6    [NONE]              dispatch_async
6    [FUNC_CALL]         (
6    [NONE]              thread
6    [NONE]              ,
6    [NONE]              (
6    [OC_BLOCK_EXPR]     ^
6    [OC_BLOCK_EXPR]     {
6    [NONE]              
7    [NONE]              dispatch_async
7    [FUNC_CALL]         (
7    [NONE]              thread
7    [NONE]              ,
7    [OC_BLOCK_EXPR]     ^
7    [OC_BLOCK_EXPR]     {
7    [NONE]              
8    [NONE]              dispatch_async
8    [FUNC_CALL]         (
8    [NONE]              thread
8    [NONE]              ,
8    [OC_BLOCK_EXPR]     ^
8    [OC_BLOCK_EXPR]     {
8    [NONE]              
9    [NONE]              NSLog
9    [FUNC_CALL]         (
9    [NONE]              @"Hooray for dispatch_async!"
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [OC_BLOCK_EXPR]     }
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [OC_BLOCK_EXPR]     }
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [OC_BLOCK_EXPR]     }
12   [NONE]              )
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
14   [COMMENT_WHOLE]     // Example of a unit test using Kiwi
14   [NONE]              
15   [NONE]              beforeAll
15   [FUNC_CALL]         (
15   [OC_BLOCK_EXPR]     ^
15   [OC_BLOCK_EXPR]     {
15   [NONE]              
16   [NONE]              NSString
16   [NONE]              *
16   [NONE]              serviceURL
16   [NONE]              =
16   [OC_MSG]            [
16   [NONE]              NSURL
16   [NONE]              URLWithString
16   [NONE]              :
16   [NONE]              @"http://TEST_URL"
16   [OC_MSG]            ]
16   [OC_MSG]            ;
16   [NONE]              
17   [NONE]              NSLog
17   [FUNC_CALL]         (
17   [NONE]              serviceURL
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [OC_BLOCK_EXPR]     }
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              