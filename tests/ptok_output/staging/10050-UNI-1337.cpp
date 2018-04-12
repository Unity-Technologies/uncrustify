Line [Parent]            Text
1    [COMMENT_WHOLE]     // Runtime\Allocator\BucketAllocator.cpp
1    [NONE]              
3    [FUNC_DEF]          void
3    [NONE]              foo
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              void
5    [NONE]              *
5    [NONE]              p1
5    [NONE]              =
5    [NONE]              new
5    [NEW]               (
5    [NONE]              ptr
5    [NEW]               )
5    [NONE]              Block
5    [FUNC_CALL]         (
5    [NONE]              bucketsSize
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [COMMENT_WHOLE]     // becomes...
6    [NONE]              
7    [NONE]              void
7    [NONE]              *
7    [NONE]              p1
7    [NONE]              =
7    [NONE]              new
7    [NEW]               (
7    [NONE]              ptr
7    [NEW]               )
7    [NONE]              Block
7    [FUNC_CALL]         (
7    [NONE]              bucketsSize
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [COMMENT_WHOLE]     // missing space after ')'
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              