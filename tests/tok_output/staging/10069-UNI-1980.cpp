Line [Token]             Text
1    [COMMENT_CPP]       // First: scan more FAKE_FUNCTION diffs and see how common this problem is.
1    [NEWLINE]           
3    [COMMENT_CPP]       // The & should be attached to RefType because it's in a function prototype. Most likely being detected as ARITH.
3    [NEWLINE]           
5    [COMMENT_CPP]       // We need to figure out how to support this with some setting in our cpp cfg for uncrustify.
5    [NEWLINE]           
7    [FUNC_PROTO]        FAKE_FUNCTION
7    [FPAREN_OPEN]       (
7    [WORD]              Boo
7    [COMMA]             ,
7    [TYPE]              RefType
7    [BYREF]             &
7    [PAREN_OPEN]        (
7    [TYPE]              void
7    [PAREN_CLOSE]       )
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [FUNC_PROTO]        FAKE_FUNCTION
8    [FPAREN_OPEN]       (
8    [WORD]              Foo
8    [COMMA]             ,
8    [PAREN_OPEN]        (
8    [TYPE]              MyAwesomeType
8    [PTR_TYPE]          *
8    [PAREN_OPEN]        (
8    [TYPE]              void
8    [PAREN_CLOSE]       )
8    [PAREN_CLOSE]       )
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           