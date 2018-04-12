Line [Token]             Text
1    [QUALIFIER]         public
1    [FUNC_DEF]          hudtext16
1    [FPAREN_OPEN]       (
1    [WORD]              textblock
1    [TSQUARE]           []
1    [COMMA]             ,
1    [WORD]              colr
1    [COMMA]             ,
1    [WORD]              colg
1    [COMMA]             ,
1    [WORD]              colb
1    [COMMA]             ,
1    [WORD]              posx
1    [COMMA]             ,
1    [WORD]              posy
1    [COMMA]             ,
1    [WORD]              screen
1    [COMMA]             ,
1    [WORD]              time
1    [COMMA]             ,
1    [WORD]              id
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [NEW]               new
3    [WORD]              y
3    [VSEMICOLON]        ;
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [FUNC_CALL]         contain
4    [FPAREN_OPEN]       (
4    [WORD]              textblock
4    [COMMA]             ,
4    [STRING]            "^n"
4    [FPAREN_CLOSE]      )
4    [COMPARE]           ==
4    [NEG]               -
4    [NUMBER]            1
4    [SPAREN_CLOSE]      )
4    [COMMENT_CPP]       // if there is no linebreak in the text, we can just show it as it is
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FUNC_CALL]         set_hudmessage
5    [FPAREN_OPEN]       (
5    [WORD]              colr
5    [COMMA]             ,
5    [WORD]              colg
5    [COMMA]             ,
5    [WORD]              colb
5    [COMMA]             ,
5    [FUNC_CALL]         float
5    [FPAREN_OPEN]       (
5    [WORD]              posx
5    [FPAREN_CLOSE]      )
5    [ARITH]             /
5    [NUMBER_FP]         1000.0
5    [COMMA]             ,
5    [FUNC_CALL]         float
5    [FPAREN_OPEN]       (
5    [WORD]              posy
5    [FPAREN_CLOSE]      )
5    [ARITH]             /
5    [NUMBER_FP]         1000.0
5    [COMMA]             ,
5    [NUMBER]            0
5    [COMMA]             ,
5    [NUMBER_FP]         6.0
5    [COMMA]             ,
5    [FUNC_CALL]         float
5    [FPAREN_OPEN]       (
5    [WORD]              time
5    [FPAREN_CLOSE]      )
5    [COMMA]             ,
5    [NUMBER_FP]         0.2
5    [COMMA]             ,
5    [NUMBER_FP]         0.2
5    [COMMA]             ,
5    [WORD]              screen
5    [FPAREN_CLOSE]      )
5    [VSEMICOLON]        ;
5    [NEWLINE]           
6    [FUNC_CALL]         show_hudmessage
6    [FPAREN_OPEN]       (
6    [WORD]              id
6    [COMMA]             ,
6    [WORD]              textblock
6    [FPAREN_CLOSE]      )
6    [VSEMICOLON]        ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [ELSE]              else
8    [COMMENT_CPP]       // more than one line
8    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [NEW]               new
9    [WORD]              out
9    [SQUARE_OPEN]       [
9    [NUMBER]            128
9    [SQUARE_CLOSE]      ]
9    [COMMA]             ,
9    [WORD]              rowcounter
9    [ASSIGN]            =
9    [NUMBER]            0
9    [COMMA]             ,
9    [WORD]              tmp
9    [SQUARE_OPEN]       [
9    [NUMBER]            512
9    [SQUARE_CLOSE]      ]
9    [COMMA]             ,
9    [WORD]              textremain
9    [ASSIGN]            =
9    [WORD]              true
9    [SEMICOLON]         ;
9    [WORD]              y
9    [ASSIGN]            =
9    [WORD]              screen
9    [VSEMICOLON]        ;
9    [NEWLINE]           
11   [NEW]               new
11   [WORD]              i
11   [ASSIGN]            =
11   [FUNC_CALL]         contain
11   [FPAREN_OPEN]       (
11   [WORD]              textblock
11   [COMMA]             ,
11   [STRING]            "^n"
11   [FPAREN_CLOSE]      )
11   [VSEMICOLON]        ;
11   [NEWLINE]           
13   [DO]                do
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [WHILE_OF_DO]       while
16   [SPAREN_OPEN]       (
16   [WORD]              textremain
16   [COMPARE]           >
16   [NUMBER]            0
16   [SPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [FUNC_CALL]         copy
18   [FPAREN_OPEN]       (
18   [WORD]              out
18   [COMMA]             ,
18   [WORD]              i
18   [COMMA]             ,
18   [WORD]              textblock
18   [FPAREN_CLOSE]      )
18   [VSEMICOLON]        ;
18   [COMMENT_CPP]       // we need to get the first line of text before the loop
18   [NEWLINE]           
20   [DO]                do
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [WHILE_OF_DO]       while
23   [SPAREN_OPEN]       (
23   [WORD]              textremain
23   [SPAREN_CLOSE]      )
23   [VSEMICOLON]        ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [RETURN]            return
25   [WORD]              screen
25   [ARITH]             -
25   [WORD]              y
25   [VSEMICOLON]        ;
25   [COMMENT_CPP]       // we will return how many screens of text we printed
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           