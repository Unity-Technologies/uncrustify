Line [Token]             Text
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              QString
2    [WORD]              fileName
2    [ASSIGN]            =
2    [TYPE]              QFileDialog
2    [DC_MEMBER]         ::
2    [FUNC_CALL]         getOpenFileName
2    [FPAREN_OPEN]       (
2    [THIS]              this
2    [COMMA]             ,
2    [NEWLINE]           
3    [FUNC_CALL]         tr
3    [FPAREN_OPEN]       (
3    [STRING]            "Choose Configuration File"
3    [FPAREN_CLOSE]      )
3    [COMMA]             ,
3    [WORD]              ui
3    [MEMBER]            ->
3    [WORD]              leStrategyFile
3    [MEMBER]            ->
3    [FUNC_CALL]         text
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [COMMA]             ,
3    [NEWLINE]           
4    [FUNC_CALL]         tr
4    [FPAREN_OPEN]       (
4    [STRING]            "Configuration Files (*.cfg);; All Files (*.*)"
4    [FPAREN_CLOSE]      )
4    [COMMA]             ,
4    [NUMBER]            0
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [WORD]              pSettings
6    [ASSIGN]            =
6    [NEW]               new
6    [FUNC_CALL]         QSettings
6    [FPAREN_OPEN]       (
6    [TYPE]              QCoreApplication
6    [DC_MEMBER]         ::
6    [FUNC_CALL]         applicationDirPath
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [ARITH]             +
6    [STRING]            "/"
6    [ARITH]             +
6    [NEWLINE]           
7    [TYPE]              QCoreApplication
7    [DC_MEMBER]         ::
7    [FUNC_CALL]         applicationName
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [ARITH]             +
7    [STRING]            ".ini"
7    [COMMA]             ,
7    [NEWLINE]           
8    [TYPE]              QSettings
8    [DC_MEMBER]         ::
8    [WORD]              IniFormat
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [TYPE]              int
10   [FUNC_DEF]          a
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              double
12   [WORD]              a_very_long_variable
12   [ASSIGN]            =
12   [FUNC_CALL]         test
12   [FPAREN_OPEN]       (
12   [WORD]              foobar1
12   [COMMA]             ,
12   [NEWLINE]           
13   [WORD]              foobar5
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              double
15   [WORD]              a_other_very_long
15   [ASSIGN]            =
15   [WORD]              asdfasdfasdfasdfasdf
15   [ARITH]             +
15   [WORD]              asdfasfafasdfa
15   [ARITH]             +
15   [NEWLINE]           
16   [WORD]              asdfasdfasdf
16   [ARITH]             -
16   [WORD]              asdfasdf
16   [ARITH]             +
16   [NUMBER]            56598
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [WORD]              a_other_very_long
18   [ASSIGN]            =
18   [WORD]              asdfasdfasdfasdfasdf
18   [ARITH]             +
18   [WORD]              asdfasfafasdfa
18   [ARITH]             +
18   [NEWLINE]           
19   [WORD]              asdfasdfasdf
19   [ARITH]             -
19   [WORD]              asdfasdf
19   [ARITH]             +
19   [NUMBER]            56598
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [FUNC_CALL]         testadsfa
21   [FPAREN_OPEN]       (
21   [WORD]              dfasdf
21   [COMMA]             ,
21   [NEWLINE]           
22   [WORD]              aaafsdfa
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [RETURN]            return
23   [NUMBER]            0
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           