Line [Token]             Text
1    [COMMENT_CPP]       // Runtime\Allocator\BucketAllocator.cpp
1    [NEWLINE]           
3    [TYPE]              void
3    [FUNC_DEF]          foo
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              void
5    [PTR_TYPE]          *
5    [WORD]              p1
5    [ASSIGN]            =
5    [NEW]               new
5    [PAREN_OPEN]        (
5    [WORD]              ptr
5    [PAREN_CLOSE]       )
5    [FUNC_CALL]         Block
5    [FPAREN_OPEN]       (
5    [WORD]              bucketsSize
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [COMMENT_CPP]       // becomes...
6    [NEWLINE]           
7    [TYPE]              void
7    [PTR_TYPE]          *
7    [WORD]              p1
7    [ASSIGN]            =
7    [NEW]               new
7    [PAREN_OPEN]        (
7    [WORD]              ptr
7    [PAREN_CLOSE]       )
7    [FUNC_CALL]         Block
7    [FPAREN_OPEN]       (
7    [WORD]              bucketsSize
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [COMMENT_CPP]       // missing space after ')'
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           