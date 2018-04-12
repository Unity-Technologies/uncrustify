Line [Parent]            Text
1    [OC_MSG]            [
1    [OC_MSG]            [
1    [NONE]              HRNewsService
1    [NONE]              sharedInstance
1    [OC_MSG]            ]
1    [NONE]              fetchBreakingNewsItemWithId
1    [NONE]              :
1    [NONE]              self
1    [NONE]              .
1    [NONE]              breakingNewsId
1    [NONE]              
1    [NONE]              success
1    [OC_MSG_NAME]       :
1    [OC_BLOCK_EXPR]     ^
1    [OC_BLOCK_EXPR]     (
1    [OC_BLOCK_EXPR]     id
1    [OC_BLOCK_EXPR]     responseObject
1    [OC_BLOCK_EXPR]     )
1    [OC_BLOCK_EXPR]     {
1    [NONE]              
2    [NONE]              NSDictionary
2    [NONE]              *
2    [NONE]              thing
2    [NONE]              ;
2    [NONE]              
3    [NONE]              for
3    [FOR]               (
3    [NONE]              NSArray
3    [NONE]              *
3    [NONE]              dictionary
3    [NONE]              in
3    [NONE]              photos
3    [FOR]               )
3    [NONE]              
3    [FOR]               {
3    [NONE]              
4    [FOR]               }
4    [NONE]              
5    [OC_BLOCK_EXPR]     }
5    [NONE]              
5    [NONE]              failure
5    [OC_MSG_NAME]       :
5    [OC_BLOCK_EXPR]     ^
5    [OC_BLOCK_EXPR]     (
5    [OC_BLOCK_EXPR]     NSError
5    [OC_BLOCK_EXPR]     *
5    [OC_BLOCK_EXPR]     error
5    [OC_BLOCK_EXPR]     )
5    [OC_BLOCK_EXPR]     {
5    [NONE]              
6    [COMMENT_WHOLE]     // Failure?
6    [NONE]              
7    [OC_BLOCK_EXPR]     }
7    [OC_MSG]            ]
7    [OC_MSG]            ;
7    [NONE]              
9    [COMMENT_WHOLE]     // We also need to consider cases where a non-pointer type (or, a pointer without the star) is declared in ObjC.
9    [NONE]              
10   [NONE]              for
10   [FOR]               (
10   [NONE]              id
10   [NONE]              obj
10   [NONE]              in
10   [NONE]              someDictionary
10   [FOR]               )
10   [NONE]              
10   [FOR]               {
10   [NONE]              
11   [NONE]              NSLog
11   [FUNC_CALL]         (
11   [NONE]              @"This could be anything! Objective-C really needs parametrized collections."
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [FOR]               }
12   [NONE]              