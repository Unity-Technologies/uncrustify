Line [Parent]            Text
1    [FUNC_VAR]          int
1    [FUNC_VAR]          (
1    [FUNC_VAR]          ^
1    [NONE]              myBlock
1    [FUNC_VAR]          )
1    [FUNC_PROTO]        (
1    [NONE]              int
1    [FUNC_PROTO]        )
1    [NONE]              =
1    [OC_BLOCK_EXPR]     ^
1    [OC_BLOCK_EXPR]     (
1    [OC_BLOCK_EXPR]     int
1    [OC_BLOCK_EXPR]     num
1    [OC_BLOCK_EXPR]     )
1    [OC_BLOCK_EXPR]     {
1    [NONE]              
1    [NONE]              return
1    [NONE]              num
1    [NONE]              *
1    [NONE]              multiplier
1    [NONE]              ;
1    [NONE]              
1    [OC_BLOCK_EXPR]     }
1    [NONE]              ;
1    [NONE]              
2    [COMMENT_WHOLE]     // for comparison
2    [NONE]              
3    [FUNC_VAR]          int
3    [FUNC_VAR]          (
3    [NONE]              *
3    [NONE]              fcnptr
3    [FUNC_VAR]          )
3    [FUNC_PROTO]        (
3    [NONE]              int
3    [FUNC_PROTO]        )
3    [FUNC_VAR]          ;
3    [NONE]              
5    [NONE]              int
5    [NONE]              d
5    [NONE]              =
5    [NONE]              i
5    [NONE]              %
5    [NONE]              10
5    [NONE]              ;
5    [NONE]              
6    [NONE]              repeat
6    [FUNC_CALL]         (
6    [NONE]              10
6    [NONE]              ,
6    [OC_BLOCK_EXPR]     ^
6    [OC_BLOCK_EXPR]     {
6    [NONE]              putc
6    [FUNC_CALL]         (
6    [NONE]              '0'
6    [NONE]              +
6    [NONE]              d
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
6    [OC_BLOCK_EXPR]     }
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
9    [FUNC_VAR]          void
9    [FUNC_VAR]          (
9    [FUNC_VAR]          ^
9    [NONE]              block
9    [FUNC_VAR]          )
9    [FUNC_PROTO]        (
9    [NONE]              void
9    [FUNC_PROTO]        )
9    [FUNC_VAR]          ;
9    [NONE]              
10   [NONE]              typedef
10   [FUNC_TYPE]         void
10   [FUNC_TYPE]         (
10   [NONE]              ^
10   [TYPEDEF]           vstr_t
10   [FUNC_TYPE]         )
10   [FUNC_PROTO]        (
10   [NONE]              char
10   [NONE]              *
10   [FUNC_PROTO]        )
10   [TYPEDEF]           ;
10   [NONE]              
11   [NONE]              typedef
11   [FUNC_TYPE]         void
11   [FUNC_TYPE]         (
11   [NONE]              ^
11   [TYPEDEF]           workBlk_t
11   [FUNC_TYPE]         )
11   [FUNC_PROTO]        (
11   [NONE]              void
11   [FUNC_PROTO]        )
11   [TYPEDEF]           ;
11   [NONE]              
13   [FUNC_DEF]          void
13   [NONE]              AllLinesInFile
13   [FUNC_DEF]          (
13   [NONE]              char
13   [NONE]              *
13   [NONE]              f
13   [NONE]              ,
13   [NONE]              vstr_t
13   [NONE]              block
13   [FUNC_DEF]          )
13   [NONE]              
13   [FUNC_DEF]          {
13   [NONE]              
14   [NONE]              FILE
14   [NONE]              *
14   [NONE]              fp
14   [NONE]              =
14   [NONE]              fopen
14   [FUNC_CALL]         (
14   [NONE]              f
14   [NONE]              ,
14   [NONE]              "r"
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [NONE]              if
15   [IF]                (
15   [NONE]              !
15   [NONE]              fp
15   [IF]                )
15   [NONE]              
15   [IF]                {
15   [NONE]              
15   [NONE]              return
15   [NONE]              ;
15   [NONE]              
15   [IF]                }
15   [NONE]              
16   [NONE]              char
16   [NONE]              line
16   [NONE]              [
16   [NONE]              1024
16   [NONE]              ]
16   [NONE]              ;
16   [NONE]              
17   [NONE]              while
17   [WHILE]             (
17   [NONE]              fgets
17   [FUNC_CALL]         (
17   [NONE]              line
17   [NONE]              ,
17   [NONE]              1024
17   [NONE]              ,
17   [NONE]              fp
17   [FUNC_CALL]         )
17   [WHILE]             )
17   [NONE]              
17   [WHILE]             {
17   [NONE]              
18   [NONE]              block
18   [FUNC_CALL]         (
18   [NONE]              line
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
18   [WHILE]             }
18   [NONE]              
19   [NONE]              fclose
19   [FUNC_CALL]         (
19   [NONE]              fp
19   [FUNC_CALL]         )
19   [NONE]              ;
19   [NONE]              
20   [FUNC_DEF]          }
20   [NONE]              
23   [NONE]              @implementation
23   [OC_IMPL]           NSArray
23   [OC_IMPL]           (
23   [OC_IMPL]           WWDC
23   [OC_IMPL]           )
23   [NONE]              
24   [OC_MSG_DECL]       -
24   [OC_MSG_DECL]       (
24   [NONE]              NSArray
24   [NONE]              *
24   [OC_MSG_DECL]       )
24   [OC_MSG_DECL]       map
24   [OC_MSG_DECL]       :
24   [OC_MSG_DECL]       (
24   [FUNC_TYPE]         id
24   [FUNC_TYPE]         (
24   [FUNC_TYPE]         ^
24   [FUNC_TYPE]         )
24   [FUNC_CALL]         (
24   [NONE]              id
24   [FUNC_CALL]         )
24   [OC_MSG_DECL]       )
24   [NONE]              xform
24   [NONE]              
24   [OC_MSG_DECL]       {
24   [NONE]              
25   [NONE]              id
25   [NONE]              result
25   [NONE]              =
25   [OC_MSG]            [
25   [NONE]              NSMutableArray
25   [NONE]              array
25   [OC_MSG]            ]
25   [OC_MSG]            ;
25   [NONE]              
26   [NONE]              for
26   [FOR]               (
26   [NONE]              id
26   [NONE]              elem
26   [NONE]              in
26   [NONE]              self
26   [FOR]               )
26   [NONE]              
26   [FOR]               {
26   [NONE]              
27   [OC_MSG]            [
27   [NONE]              result
27   [NONE]              addObject
27   [NONE]              :
27   [NONE]              xform
27   [FUNC_CALL]         (
27   [NONE]              elem
27   [FUNC_CALL]         )
27   [OC_MSG]            ]
27   [OC_MSG]            ;
27   [NONE]              
27   [FOR]               }
27   [NONE]              
28   [NONE]              return
28   [NONE]              result
28   [NONE]              ;
28   [NONE]              
29   [OC_MSG_DECL]       }
29   [NONE]              
31   [OC_MSG_DECL]       -
31   [OC_MSG_DECL]       (
31   [NONE]              NSArray
31   [NONE]              *
31   [OC_MSG_DECL]       )
31   [OC_MSG_DECL]       collect
31   [OC_MSG_DECL]       :
31   [OC_MSG_DECL]       (
31   [FUNC_TYPE]         BOOL
31   [FUNC_TYPE]         (
31   [FUNC_TYPE]         ^
31   [FUNC_TYPE]         )
31   [FUNC_CALL]         (
31   [NONE]              id
31   [FUNC_CALL]         )
31   [OC_MSG_DECL]       )
31   [NONE]              predicate
31   [NONE]              
31   [OC_MSG_DECL]       {
31   [NONE]              
32   [NONE]              id
32   [NONE]              result
32   [NONE]              =
32   [OC_MSG]            [
32   [NONE]              NSMutableArray
32   [NONE]              array
32   [OC_MSG]            ]
32   [OC_MSG]            ;
32   [NONE]              
33   [NONE]              for
33   [FOR]               (
33   [NONE]              id
33   [NONE]              elem
33   [NONE]              in
33   [NONE]              self
33   [FOR]               )
33   [NONE]              
33   [FOR]               {
33   [NONE]              
34   [NONE]              if
34   [IF]                (
34   [NONE]              predicate
34   [FUNC_CALL]         (
34   [NONE]              elem
34   [FUNC_CALL]         )
34   [IF]                )
34   [NONE]              
34   [IF]                {
34   [NONE]              
35   [OC_MSG]            [
35   [NONE]              result
35   [NONE]              addObject
35   [NONE]              :
35   [NONE]              elem
35   [OC_MSG]            ]
35   [OC_MSG]            ;
35   [NONE]              
35   [IF]                }
35   [NONE]              
35   [FOR]               }
35   [NONE]              
36   [NONE]              return
36   [NONE]              result
36   [NONE]              ;
36   [NONE]              
37   [OC_MSG_DECL]       }
37   [NONE]              
39   [COMMENT_WHOLE]     // corner case: block literal in use with return type
39   [NONE]              
40   [NONE]              id
40   [NONE]              longLines
40   [NONE]              =
40   [OC_MSG]            [
40   [NONE]              allLines
40   [NONE]              collect
40   [NONE]              :
40   [OC_BLOCK_EXPR]     ^
40   [OC_BLOCK_EXPR]     BOOL
40   [OC_BLOCK_EXPR]     (
40   [OC_BLOCK_EXPR]     id
40   [OC_BLOCK_EXPR]     item
40   [OC_BLOCK_EXPR]     )
40   [OC_BLOCK_EXPR]     {
40   [NONE]              
41   [NONE]              return
41   [OC_MSG]            [
41   [NONE]              item
41   [NONE]              length
41   [OC_MSG]            ]
41   [NONE]              >
41   [NONE]              20
41   [NONE]              ;
41   [NONE]              
42   [OC_BLOCK_EXPR]     }
42   [OC_MSG]            ]
42   [OC_MSG]            ;
42   [NONE]              
44   [COMMENT_WHOLE]     // corner case: block literal in use with return type
44   [NONE]              
45   [NONE]              id
45   [NONE]              longLines
45   [NONE]              =
45   [OC_MSG]            [
45   [NONE]              allLines
45   [NONE]              collect
45   [NONE]              :
45   [OC_BLOCK_EXPR]     ^
45   [OC_BLOCK_EXPR]     BOOL
45   [OC_BLOCK_EXPR]     *
45   [OC_BLOCK_EXPR]     (
45   [OC_BLOCK_EXPR]     id
45   [OC_BLOCK_EXPR]     item
45   [OC_BLOCK_EXPR]     )
45   [OC_BLOCK_EXPR]     {
45   [NONE]              
46   [NONE]              return
46   [OC_MSG]            [
46   [NONE]              item
46   [NONE]              length
46   [OC_MSG]            ]
46   [NONE]              >
46   [NONE]              20
46   [NONE]              ;
46   [NONE]              
47   [OC_BLOCK_EXPR]     }
47   [OC_MSG]            ]
47   [OC_MSG]            ;
47   [NONE]              
49   [OC_IMPL]           @end
49   [NONE]              
51   [COMMENT_WHOLE]     // 1. block literal: ^{ ... };
51   [NONE]              
52   [COMMENT_WHOLE]     // 2. block declaration: return_t (^name) (int arg1, int arg2, ...) NB: return_t is optional and name is also optional
52   [NONE]              
53   [COMMENT_WHOLE]     // 3. block inline call ^ return_t (int arg) { ... }; NB: return_t is optional
53   [NONE]              