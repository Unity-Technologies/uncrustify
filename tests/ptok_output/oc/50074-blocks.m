Line [Parent]            Text
1    [FUNC_VAR]          int
1    [FUNC_VAR]          *
1    [FUNC_VAR]          (
1    [FUNC_VAR]          ^
1    [NONE]              blkReturningPointer
1    [FUNC_VAR]          )
1    [FUNC_PROTO]        (
1    [NONE]              int
1    [FUNC_PROTO]        )
1    [NONE]              =
1    [OC_BLOCK_EXPR]     ^
1    [OC_BLOCK_EXPR]     int
1    [OC_BLOCK_EXPR]     *
1    [OC_BLOCK_EXPR]     (
1    [OC_BLOCK_EXPR]     int
1    [OC_BLOCK_EXPR]     a
1    [OC_BLOCK_EXPR]     )
1    [OC_BLOCK_EXPR]     {
1    [NONE]              
2    [NONE]              return
2    [NONE]              a
2    [NONE]              +
2    [NONE]              1
2    [NONE]              ;
2    [NONE]              
3    [OC_BLOCK_EXPR]     }
3    [NONE]              ;
3    [NONE]              
5    [FUNC_VAR]          void
5    [FUNC_VAR]          (
5    [FUNC_VAR]          ^
5    [NONE]              blk2
5    [FUNC_VAR]          )
5    [FUNC_PROTO]        (
5    [NONE]              int
5    [NONE]              *
5    [FUNC_PROTO]        )
5    [NONE]              =
5    [OC_BLOCK_EXPR]     ^
5    [OC_BLOCK_EXPR]     (
5    [OC_BLOCK_EXPR]     int
5    [OC_BLOCK_EXPR]     *
5    [OC_BLOCK_EXPR]     b
5    [OC_BLOCK_EXPR]     )
5    [OC_BLOCK_EXPR]     {
5    [NONE]              
6    [NONE]              *
6    [NONE]              b
6    [NONE]              =
6    [NONE]              1
6    [NONE]              ;
6    [NONE]              
7    [OC_BLOCK_EXPR]     }
7    [NONE]              ;
7    [NONE]              
10   [FUNC_VAR]          int
10   [FUNC_VAR]          (
10   [FUNC_VAR]          ^
10   [NONE]              oneFrom
10   [FUNC_VAR]          )
10   [FUNC_PROTO]        (
10   [NONE]              int
10   [FUNC_PROTO]        )
10   [NONE]              =
10   [OC_BLOCK_EXPR]     ^
10   [OC_BLOCK_EXPR]     (
10   [OC_BLOCK_EXPR]     int
10   [OC_BLOCK_EXPR]     anInt
10   [OC_BLOCK_EXPR]     )
10   [OC_BLOCK_EXPR]     {
10   [NONE]              
11   [NONE]              return
11   [NONE]              anInt
11   [NONE]              -
11   [NONE]              1
11   [NONE]              ;
11   [NONE]              
12   [OC_BLOCK_EXPR]     }
12   [NONE]              ;
12   [NONE]              
14   [COMMENT_WHOLE]     // this should not be flagged as OC_BLOCK_CARET
14   [NONE]              
15   [NONE]              int
15   [NONE]              x
15   [NONE]              =
15   [NONE]              12
15   [NONE]              ^
15   [NONE]              23
15   [NONE]              ;
15   [NONE]              