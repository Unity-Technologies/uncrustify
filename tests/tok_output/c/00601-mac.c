Line [Token]             Text
1    [COMMENT_MULTI]     /**␍ * This is your typical header comment␍ */
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
9    [FOR]               for
9    [SPAREN_OPEN]       (
9    [WORD]              idx
9    [ASSIGN]            =
9    [NUMBER]            1
9    [SEMICOLON]         ;
9    [WORD]              idx
9    [COMPARE]           <
9    [WORD]              bar
9    [SEMICOLON]         ;
9    [WORD]              idx
9    [INCDEC_AFTER]      ++
9    [SPAREN_CLOSE]      )
9    [VBRACE_OPEN]       
9    [NEWLINE]           
10   [COMMENT]           /* comment in virtual braces */
10   [NEWLINE]           
11   [WORD]              res
11   [ASSIGN]            +=
11   [WORD]              idx
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           
13   [WORD]              res
13   [ASSIGN]            *=
13   [WORD]              idx
13   [SEMICOLON]         ;
13   [COMMENT_CPP]       // some comment
13   [NEWLINE]           
15   [COMMENT_CPP]       // almost continued, but a NL in between
15   [NEWLINE]           
17   [COMMENT_CPP]       // col1 comment in level 1
17   [NEWLINE]           
18   [RETURN]            return
18   [PAREN_OPEN]        (
18   [WORD]              res
18   [PAREN_CLOSE]       )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
21   [COMMENT_CPP]       // col1 comment in level 0
21   [NEWLINE]           