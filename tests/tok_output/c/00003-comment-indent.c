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
18   [COMMENT_CPP]       // second comment
18   [NEWLINE]           
19   [RETURN]            return
19   [PAREN_OPEN]        (
19   [WORD]              res
19   [PAREN_CLOSE]       )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
22   [COMMENT_CPP]       // col1 comment in level 0
22   [NEWLINE]           
23   [COMMENT_CPP]       // and another
23   [NEWLINE]           
25   [TYPE]              void
25   [FUNC_DEF]          foo
25   [FPAREN_OPEN]       (
25   [FPAREN_CLOSE]      )
25   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [IF]                if
27   [SPAREN_OPEN]       (
27   [WORD]              bar
27   [SPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [FUNC_CALL]         foo
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [COMMENT_MULTI]     /*else if( bar2 )␤ {␤   foo2();␤ }␤ */
31   [NEWLINE]           
35   [ELSE]              else
35   [ELSEIF]            if
35   [SPAREN_OPEN]       (
35   [WORD]              bar3
35   [SPAREN_CLOSE]      )
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [FUNC_CALL]         foo3
37   [FPAREN_OPEN]       (
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [NEWLINE]           