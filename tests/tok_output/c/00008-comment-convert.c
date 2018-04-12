Line [Token]             Text
1    [COMMENT_CPP]       // This is your typical header comment
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              bar
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              idx
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              res
5    [ASSIGN]            =
5    [NUMBER]            0
5    [SEMICOLON]         ;
5    [COMMENT_CPP]       // trailing comment
5    [NEWLINE]           
6    [COMMENT_CPP]       // that spans two lines
6    [NEWLINE]           
9    [COMMENT_CPP]       // Comment with embedded /* C comment */
9    [NEWLINE]           
10   [FOR]               for
10   [SPAREN_OPEN]       (
10   [WORD]              idx
10   [ASSIGN]            =
10   [NUMBER]            1
10   [SEMICOLON]         ;
10   [WORD]              idx
10   [COMPARE]           <
10   [WORD]              bar
10   [SEMICOLON]         ;
10   [WORD]              idx
10   [INCDEC_AFTER]      ++
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
10   [NEWLINE]           
11   [COMMENT]           /* comment in virtual braces */
11   [NEWLINE]           
12   [WORD]              res
12   [ASSIGN]            +=
12   [WORD]              idx
12   [SEMICOLON]         ;
12   [VBRACE_CLOSE]      
12   [NEWLINE]           
14   [COMMENT_CPP]       // Multi-line comment with embedded /* C comment */ and junk
14   [NEWLINE]           
15   [COMMENT_CPP]       // afterwards
15   [NEWLINE]           
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
21   [COMMENT_CPP]       // second comment
21   [NEWLINE]           
22   [RETURN]            return
22   [PAREN_OPEN]        (
22   [WORD]              res
22   [PAREN_CLOSE]       )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
25   [COMMENT_CPP]       // col1 comment in level 0
25   [NEWLINE]           
26   [COMMENT_CPP]       // and another
26   [NEWLINE]           