Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * trailing comments are added at 8 newlines in this test.␤ *␤ *␤ */
5    [NEWLINE]           
6    [TYPE]              void
6    [FUNC_DEF]          short_function
6    [FPAREN_OPEN]       (
6    [TYPE]              void
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [COMMENT]           /* this is a 'short' function, so no added comment */
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [TYPE]              void
11   [FUNC_DEF]          long_function
11   [FPAREN_OPEN]       (
11   [TYPE]              void
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [COMMENT]           /* this is a 'long' function, so a comment is added */
13   [NEWLINE]           
14   [SWITCH]            switch
14   [SPAREN_OPEN]       (
14   [FUNC_CALL]         some_int_value
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [SPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [CASE]              case
16   [NUMBER]            0
16   [CASE_COLON]        :
16   [NEWLINE]           
17   [FUNC_CALL]         handle_zero
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BREAK]             break
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [CASE]              case
20   [NUMBER]            50
20   [CASE_COLON]        :
20   [NEWLINE]           
21   [FUNC_CALL]         handle_fifty
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BREAK]             break
22   [SEMICOLON]         ;
22   [NEWLINE]           
24   [CASE]              case
24   [NUMBER]            127
24   [CASE_COLON]        :
24   [NEWLINE]           
25   [FUNC_CALL]         handle_another_value
25   [FPAREN_OPEN]       (
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BREAK]             break
26   [SEMICOLON]         ;
26   [NEWLINE]           
28   [CASE]              default
28   [CASE_COLON]        :
28   [NEWLINE]           
29   [FUNC_CALL]         boy_do_i_lack_imagination
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BREAK]             break
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [COMMENT]           /* switch */
31   [NEWLINE]           
33   [COMMENT]           /* call one last function... */
33   [NEWLINE]           
34   [FUNC_CALL]         one_last_func_call
34   [FPAREN_OPEN]       (
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [COMMENT]           /* long_function */
35   [NEWLINE]           