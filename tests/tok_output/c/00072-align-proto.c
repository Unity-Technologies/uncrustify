Line [Token]             Text
1    [TYPE]              unsigned
1    [TYPE]              int
1    [FUNC_PROTO]        align_here
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_PROTO]        this_works
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              x
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPE]              int
3    [FUNC_PROTO]        bug
3    [FPAREN_OPEN]       (
3    [TYPE]              int
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [COMMENT_CPP]       // BUG: left-aligned
3    [NEWLINE]           