Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              op
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [SWITCH]            switch
4    [SPAREN_OPEN]       (
4    [WORD]              op
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [CASE]              case
6    [NUMBER]            1
6    [CASE_COLON]        :
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL]         do_something
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [RETURN]            return
8    [NUMBER]            0
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [CASE]              case
11   [NUMBER]            2
11   [CASE_COLON]        :
11   [NEWLINE]           
12   [FUNC_CALL]         do_something_else
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [RETURN]            return
13   [NUMBER]            1
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [CASE]              case
15   [NUMBER]            3
15   [CASE_COLON]        :
15   [NEWLINE]           
16   [CASE]              case
16   [NUMBER]            4
16   [CASE_COLON]        :
16   [NEWLINE]           
17   [COMMENT]           /* don't do anything */
17   [NEWLINE]           
18   [BREAK]             break
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [CASE]              case
20   [NUMBER]            5
20   [CASE_COLON]        :
20   [NEWLINE]           
21   [RETURN]            return
21   [NUMBER]            3
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [CASE]              default
23   [CASE_COLON]        :
23   [NEWLINE]           
24   [BREAK]             break
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [RETURN]            return
27   [NEG]               -
27   [NUMBER]            1
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           