Line [Token]             Text
1    [COMMENT_MULTI]     /**␍␤ * This is your typical header comment␍␤ */
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
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [COMMENT]           /* comment in virtual braces */
11   [NEWLINE]           
12   [WORD]              res
12   [ASSIGN]            +=
12   [WORD]              idx
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
16   [WORD]              res
16   [ASSIGN]            *=
16   [WORD]              idx
16   [SEMICOLON]         ;
16   [COMMENT_CPP]       // some comment
16   [NEWLINE]           
18   [COMMENT_CPP]       // almost continued, but a NL in between
18   [NEWLINE]           
20   [COMMENT_CPP]       // col1 comment in level 1
20   [NEWLINE]           
21   [RETURN]            return
21   [PAREN_OPEN]        (
21   [WORD]              res
21   [PAREN_CLOSE]       )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
24   [COMMENT_CPP]       // col1 comment in level 0
24   [NEWLINE]           
26   [COMMENT_MULTI]     /*␍␤   Silly multiline comment.␍␤␍␤   Oh yes.␍␤␍␤   Really␍␤*/
32   [NEWLINE]           