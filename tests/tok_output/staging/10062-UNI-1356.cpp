Line [Token]             Text
1    [COMMENT_CPP]       // Hi,
1    [NEWLINE]           
2    [COMMENT_CPP]       // When using "space only" and "indent continue", I notice a wrong indentation in C language (at least)
2    [NEWLINE]           
3    [COMMENT_CPP]       // function call when the retrun value is assigned to a variable and the call is split in two or more line.
3    [NEWLINE]           
4    [COMMENT_CPP]       // In that case the indent is twice the indent set in "indent_continue"
4    [NEWLINE]           
5    [COMMENT_CPP]       // This only appears when "indent_with_tabs" is set to 0 "space only" and 1
5    [NEWLINE]           
6    [COMMENT_CPP]       // "indent with tabs to brace level, align with spaces"
6    [NEWLINE]           
7    [COMMENT_CPP]       // Version tested:
7    [NEWLINE]           
8    [COMMENT_CPP]       // 0.59: good indentation
8    [NEWLINE]           
9    [COMMENT_CPP]       // 0.60: wrong indentation
9    [NEWLINE]           
10   [COMMENT_CPP]       // master (sha1 fc5228e): wrong indentation
10   [NEWLINE]           
11   [COMMENT_CPP]       // Here are some details about thats issue:
11   [NEWLINE]           
12   [COMMENT_CPP]       // orignal code
12   [NEWLINE]           
13   [COMMENT_CPP]       // The long line are manually split and not indented to test uncrustify indent
13   [NEWLINE]           
15   [TYPE]              int
15   [FUNC_DEF]          main
15   [FPAREN_OPEN]       (
15   [TYPE]              int
15   [WORD]              argc
15   [COMMA]             ,
15   [TYPE]              char
15   [PTR_TYPE]          *
15   [WORD]              argv
15   [TSQUARE]           []
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [TYPE]              double
17   [WORD]              a_very_long_variable
17   [ASSIGN]            =
17   [FUNC_CALL]         test
17   [FPAREN_OPEN]       (
17   [WORD]              foobar1
17   [COMMA]             ,
17   [WORD]              foobar2
17   [COMMA]             ,
17   [WORD]              foobar3
17   [COMMA]             ,
17   [WORD]              foobar4
17   [COMMA]             ,
17   [NEWLINE]           
18   [WORD]              foobar5
18   [COMMA]             ,
18   [WORD]              foobar6
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [TYPE]              double
20   [WORD]              a_other_very_long
20   [ASSIGN]            =
20   [WORD]              asdfasdfasdfasdfasdf
20   [ARITH]             +
20   [WORD]              asdfasfafasdfa
20   [ARITH]             +
20   [NEWLINE]           
21   [WORD]              asdfasdfasdf
21   [ARITH]             -
21   [WORD]              asdfasdf
21   [ARITH]             +
21   [NUMBER]            56598
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [FUNC_CALL]         testadsfa
23   [FPAREN_OPEN]       (
23   [WORD]              dfasdf
23   [COMMA]             ,
23   [WORD]              fdssaf
23   [COMMA]             ,
23   [WORD]              dsfasdf
23   [COMMA]             ,
23   [WORD]              sadfa
23   [COMMA]             ,
23   [WORD]              sadfas
23   [COMMA]             ,
23   [WORD]              fsadfa
23   [COMMA]             ,
23   [NEWLINE]           
24   [WORD]              aaafsdfa
24   [COMMA]             ,
24   [WORD]              afsd
24   [COMMA]             ,
24   [WORD]              asfdas
24   [COMMA]             ,
24   [WORD]              asdfa
24   [COMMA]             ,
24   [WORD]              asfasdfa
24   [COMMA]             ,
24   [WORD]              afsda
24   [COMMA]             ,
24   [WORD]              asfdasfds
24   [COMMA]             ,
24   [WORD]              asdfasf
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
26   [RETURN]            return
26   [NUMBER]            0
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           