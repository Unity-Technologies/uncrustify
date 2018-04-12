Line [Token]             Text
1    [COMMENT_CPP]       // Can't set sp_inside_braces_struct=add otherwise Uncrustify starts applying it to initializers combined with old-C-style struct usage.
1    [NEWLINE]           
3    [STRUCT]            struct
3    [TYPE]              in_addr
3    [WORD]              addr
3    [ASSIGN]            =
3    [BRACE_OPEN]        {
3    [NUMBER]            0
3    [BRACE_CLOSE]       }
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [COMMENT_CPP]       // ... --> ...
4    [NEWLINE]           
5    [STRUCT]            struct
5    [TYPE]              in_addr
5    [WORD]              addr
5    [ASSIGN]            =
5    [BRACE_OPEN]        {
5    [NUMBER]            0
5    [BRACE_CLOSE]       }
5    [SEMICOLON]         ;
5    [NEWLINE]           