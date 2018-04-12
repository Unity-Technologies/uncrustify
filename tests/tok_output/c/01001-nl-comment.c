Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * This is your typical header comment␤ */
3    [NEWLINE]           
4    [TYPE]              int
4    [FUNC_DEF]          foo
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [WORD]              bar
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              int
6    [WORD]              idx
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPE]              int
7    [WORD]              res
7    [ASSIGN]            =
7    [NUMBER]            0
7    [SEMICOLON]         ;
7    [COMMENT_CPP]       // trailing comment
7    [NEWLINE]           
8    [COMMENT_CPP]       // that spans two lines
8    [NEWLINE]           
9    [COMMENT_MULTI]     /* multi-line comment␤    */
10   [NEWLINE]           
11   [WORD]              idx
11   [ASSIGN]            =
11   [NUMBER]            50
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [COMMENT]           /* single line comment */
12   [NEWLINE]           
13   [FOR]               for
13   [SPAREN_OPEN]       (
13   [WORD]              idx
13   [ASSIGN]            =
13   [NUMBER]            1
13   [SEMICOLON]         ;
13   [WORD]              idx
13   [COMPARE]           <
13   [WORD]              bar
13   [SEMICOLON]         ;
13   [WORD]              idx
13   [INCDEC_AFTER]      ++
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [COMMENT]           /* comment in virtual braces */
14   [NEWLINE]           
15   [WORD]              res
15   [ASSIGN]            +=
15   [WORD]              idx
15   [SEMICOLON]         ;
15   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [WORD]              res
17   [ASSIGN]            *=
17   [WORD]              idx
17   [SEMICOLON]         ;
17   [COMMENT_CPP]       // some comment
17   [NEWLINE]           
19   [COMMENT_CPP]       // almost continued, but a NL in between
19   [NEWLINE]           
21   [WORD]              i
21   [INCDEC_AFTER]      ++
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [COMMENT_CPP]       // col1 comment in level 1
22   [NEWLINE]           
23   [COMMENT_CPP]       // second comment
23   [NEWLINE]           
24   [RETURN]            return
24   [PAREN_OPEN]        (
24   [WORD]              res
24   [PAREN_CLOSE]       )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [COMMENT_CPP]       // col1 comment in level 0
27   [NEWLINE]           
28   [COMMENT_CPP]       // and another
28   [NEWLINE]           