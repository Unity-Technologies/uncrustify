Line [Parent]            Text
1    [NONE]              
3    [NONE]              @implementation
3    [OC_IMPL]           NSArray
3    [OC_IMPL]           (
3    [OC_IMPL]           WWDC
3    [OC_IMPL]           )
3    [NONE]              
4    [OC_MSG_DECL]       -
4    [OC_MSG_DECL]       (
4    [NONE]              NSArray
4    [NONE]              *
4    [OC_MSG_DECL]       )
4    [OC_MSG_DECL]       map
4    [OC_MSG_DECL]       :
4    [OC_MSG_DECL]       (
4    [FUNC_TYPE]         id
4    [FUNC_TYPE]         (
4    [FUNC_TYPE]         ^
4    [FUNC_TYPE]         )
4    [FUNC_CALL]         (
4    [NONE]              id
4    [FUNC_CALL]         )
4    [OC_MSG_DECL]       )
4    [NONE]              xform
4    [OC_MSG_DECL]       {
4    [NONE]              
5    [NONE]              id
5    [NONE]              result
5    [NONE]              =
5    [OC_MSG]            [
5    [NONE]              NSMutableArray
5    [NONE]              array
5    [OC_MSG]            ]
5    [OC_MSG]            ;
5    [NONE]              
6    [NONE]              for
6    [FOR]               (
6    [NONE]              id
6    [NONE]              elem
6    [NONE]              in
6    [NONE]              self
6    [FOR]               )
6    [FOR]               
6    [NONE]              
7    [OC_MSG]            [
7    [NONE]              result
7    [NONE]              addObject
7    [NONE]              :
7    [NONE]              xform
7    [FUNC_CALL]         (
7    [NONE]              elem
7    [FUNC_CALL]         )
7    [OC_MSG]            ]
7    [OC_MSG]            ;
7    [FOR]               
7    [NONE]              
8    [NONE]              return
8    [NONE]              result
8    [NONE]              ;
8    [NONE]              
9    [OC_MSG_DECL]       }
9    [NONE]              
11   [OC_MSG_DECL]       -
11   [OC_MSG_DECL]       (
11   [NONE]              NSArray
11   [NONE]              *
11   [OC_MSG_DECL]       )
11   [OC_MSG_DECL]       collect
11   [OC_MSG_DECL]       :
11   [OC_MSG_DECL]       (
11   [FUNC_TYPE]         BOOL
11   [FUNC_TYPE]         (
11   [FUNC_TYPE]         ^
11   [FUNC_TYPE]         )
11   [FUNC_CALL]         (
11   [NONE]              id
11   [FUNC_CALL]         )
11   [OC_MSG_DECL]       )
11   [NONE]              predicate
11   [OC_MSG_DECL]       {
11   [NONE]              
12   [NONE]              id
12   [NONE]              result
12   [NONE]              =
12   [OC_MSG]            [
12   [NONE]              NSMutableArray
12   [NONE]              array
12   [OC_MSG]            ]
12   [OC_MSG]            ;
12   [NONE]              
13   [NONE]              for
13   [FOR]               (
13   [NONE]              id
13   [NONE]              elem
13   [NONE]              in
13   [NONE]              self
13   [FOR]               )
13   [FOR]               
13   [NONE]              
14   [NONE]              if
14   [IF]                (
14   [NONE]              predicate
14   [FUNC_CALL]         (
14   [NONE]              elem
14   [FUNC_CALL]         )
14   [IF]                )
14   [IF]                
14   [NONE]              
15   [OC_MSG]            [
15   [NONE]              result
15   [NONE]              addObject
15   [NONE]              :
15   [NONE]              elem
15   [OC_MSG]            ]
15   [OC_MSG]            ;
15   [IF]                
15   [FOR]               
15   [NONE]              
16   [NONE]              return
16   [NONE]              result
16   [NONE]              ;
16   [NONE]              
17   [OC_MSG_DECL]       }
17   [NONE]              
19   [OC_MSG_DECL]       -
19   [OC_MSG_DECL]       (
19   [NONE]              void
19   [OC_MSG_DECL]       )
19   [OC_MSG_DECL]       each
19   [OC_MSG_DECL]       :
19   [OC_MSG_DECL]       (
19   [FUNC_TYPE]         void
19   [FUNC_TYPE]         (
19   [FUNC_TYPE]         ^
19   [FUNC_TYPE]         )
19   [FUNC_CALL]         (
19   [NONE]              id
19   [NONE]              object
19   [FUNC_CALL]         )
19   [OC_MSG_DECL]       )
19   [NONE]              block
19   [OC_MSG_DECL]       {
19   [NONE]              
20   [OC_MSG]            [
20   [NONE]              self
20   [NONE]              enumerateObjectsUsingBlock
20   [NONE]              :
20   [OC_BLOCK_EXPR]     ^
20   [OC_BLOCK_EXPR]     (
20   [OC_BLOCK_EXPR]     id
20   [OC_BLOCK_EXPR]     obj
20   [OC_BLOCK_EXPR]     ,
20   [OC_BLOCK_EXPR]     NSUInteger
20   [OC_BLOCK_EXPR]     idx
20   [OC_BLOCK_EXPR]     ,
20   [OC_BLOCK_EXPR]     BOOL
20   [OC_BLOCK_EXPR]     *
20   [OC_BLOCK_EXPR]     stop
20   [OC_BLOCK_EXPR]     )
20   [OC_BLOCK_EXPR]     {
20   [NONE]              
21   [NONE]              block
21   [FUNC_CALL]         (
21   [NONE]              obj
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [OC_BLOCK_EXPR]     }
22   [OC_MSG]            ]
22   [OC_MSG]            ;
22   [NONE]              
23   [OC_MSG_DECL]       }
23   [NONE]              
25   [COMMENT_WHOLE]     // corner case: block literal in use with return type
25   [NONE]              
26   [NONE]              id
26   [NONE]              longLines
26   [NONE]              =
26   [OC_MSG]            [
26   [NONE]              allLines
26   [NONE]              collect
26   [NONE]              :
26   [OC_BLOCK_EXPR]     ^
26   [OC_BLOCK_EXPR]     BOOL
26   [OC_BLOCK_EXPR]     (
26   [OC_BLOCK_EXPR]     id
26   [OC_BLOCK_EXPR]     item
26   [OC_BLOCK_EXPR]     )
26   [OC_BLOCK_EXPR]     {
26   [NONE]              
27   [NONE]              return
27   [OC_MSG]            [
27   [NONE]              item
27   [NONE]              length
27   [OC_MSG]            ]
27   [NONE]              >
27   [NONE]              20
27   [NONE]              ;
27   [NONE]              
28   [OC_BLOCK_EXPR]     }
28   [OC_MSG]            ]
28   [OC_MSG]            ;
28   [NONE]              
30   [COMMENT_WHOLE]     // corner case: block literal in use with return type
30   [NONE]              
31   [NONE]              id
31   [NONE]              longLines
31   [NONE]              =
31   [OC_MSG]            [
31   [NONE]              allLines
31   [NONE]              collect
31   [NONE]              :
31   [OC_BLOCK_EXPR]     ^
31   [OC_BLOCK_EXPR]     BOOL
31   [OC_BLOCK_EXPR]     *
31   [OC_BLOCK_EXPR]     (
31   [OC_BLOCK_EXPR]     id
31   [OC_BLOCK_EXPR]     item
31   [OC_BLOCK_EXPR]     )
31   [OC_BLOCK_EXPR]     {
31   [NONE]              
32   [NONE]              return
32   [OC_MSG]            [
32   [NONE]              item
32   [NONE]              length
32   [OC_MSG]            ]
32   [NONE]              >
32   [NONE]              20
32   [NONE]              ;
32   [NONE]              
33   [OC_BLOCK_EXPR]     }
33   [OC_MSG]            ]
33   [OC_MSG]            ;
33   [NONE]              
35   [OC_IMPL]           @end
35   [NONE]              
37   [COMMENT_WHOLE]     // 1. block literal: ^{ ... };
37   [NONE]              
38   [COMMENT_WHOLE]     // 2. block declaration: return_t (^name) (int arg1, int arg2, ...) NB: return_t is optional and name is also optional
38   [NONE]              
39   [COMMENT_WHOLE]     // 3. block inline call ^ return_t (int arg) { ... }; NB: return_t is optional
39   [NONE]              