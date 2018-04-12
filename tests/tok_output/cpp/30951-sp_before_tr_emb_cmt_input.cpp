Line [Token]             Text
1    [COMMENT]           /* leading cmt */
1    [TYPE]              int
1    [WORD]              w
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPE]              int
2    [WORD]              y
2    [SEMICOLON]         ;
2    [COMMENT]           /* embedded cmt */
2    [TYPE]              int
2    [WORD]              z
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [COMMENT_CPP]       // whole cpp cmt
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              x
4    [SEMICOLON]         ;
4    [COMMENT_CPP]       // trailing cpp cmt
4    [NEWLINE]           
5    [COMMENT]           /* whole c cmt */
5    [NEWLINE]           
6    [TYPE]              int
6    [WORD]              x
6    [SEMICOLON]         ;
6    [COMMENT]           /* trailing c cmt */
6    [NEWLINE]           
7    [STRUCT]            struct
7    [TYPE]              foo
7    [BRACE_OPEN]        {
7    [COMMENT_CPP]       // trailing cmt
7    [NEWLINE]           
8    [TYPE]              int
8    [WORD]              x
8    [SEMICOLON]         ;
8    [COMMENT_CPP]       // trailing cmt
8    [NEWLINE]           
9    [COMMENT_CPP]       // whole cmt
9    [NEWLINE]           
10   [TYPE]              int
10   [WORD]              a
10   [SEMICOLON]         ;
10   [COMMENT]           /* emb cmt */
10   [TYPE]              int
10   [WORD]              b
10   [SEMICOLON]         ;
10   [COMMENT_CPP]       // trailing cmt
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [SEMICOLON]         ;
11   [COMMENT_CPP]       // trailing cmt
11   [NEWLINE]           
12   [TYPE]              int
12   [WORD]              a
12   [SEMICOLON]         ;
12   [COMMENT]           /* emb cmt */
12   [TYPE]              int
12   [WORD]              b
12   [SEMICOLON]         ;
12   [COMMENT_CPP]       // trailing cmt
12   [NEWLINE]           