Line [Token]             Text
1    [ENUM]              enum
1    [TYPE]              one
1    [BRACE_OPEN]        {
1    [WORD]              liner
1    [BRACE_CLOSE]       }
1    [SEMICOLON]         ;
1    [NEWLINE]           
3    [ENUM]              enum
3    [TYPE]              not
3    [BRACE_OPEN]        {
5    [WORD]              a
5    [COMMA]             ,
5    [WORD]              one
5    [COMMA]             ,
7    [WORD]              liner
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [ENUM]              enum
9    [TYPE]              foo
9    [BRACE_OPEN]        {
9    [WORD]              bar
9    [COMMA]             ,
9    [WORD]              baz
9    [COMMA]             ,
9    [WORD]              quux
9    [BRACE_CLOSE]       }
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [COMMENT_MULTI]     /*␤ * In some tests, the following line remains longer than 80␤ * characters. Perhaps a bug?␤*/
14   [NEWLINE]           
15   [ENUM]              enum
15   [TYPE]              longer_enum_that
15   [BRACE_OPEN]        {
15   [WORD]              will
15   [COMMA]             ,
15   [WORD]              not
15   [COMMA]             ,
15   [WORD]              all
15   [COMMA]             ,
15   [WORD]              fit
15   [COMMA]             ,
15   [WORD]              on
15   [COMMA]             ,
15   [WORD]              one
15   [COMMA]             ,
15   [WORD]              line
15   [COMMA]             ,
15   [WORD]              as
15   [COMMA]             ,
15   [WORD]              longg
15   [COMMA]             ,
15   [WORD]              as
15   [COMMA]             ,
15   [WORD]              the
15   [COMMA]             ,
15   [NEWLINE]           
15   [WORD]              cutoff
15   [COMMA]             ,
15   [WORD]              is
15   [COMMA]             ,
15   [WORD]              reasonable
15   [COMMA]             ,
15   [WORD]              because
15   [COMMA]             ,
15   [WORD]              this
15   [COMMA]             ,
15   [WORD]              is
15   [COMMA]             ,
15   [WORD]              a
15   [COMMA]             ,
15   [WORD]              very
15   [COMMA]             ,
15   [NEWLINE]           
15   [WORD]              very
15   [COMMA]             ,
15   [WORD]              wide
15   [COMMA]             ,
15   [WORD]              line
15   [BRACE_CLOSE]       }
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [ENUM]              enum
17   [TYPE]              q
17   [BRACE_OPEN]        {
17   [WORD]              w
17   [COMMA]             ,
18   [WORD]              e
18   [COMMA]             ,
18   [WORD]              r
18   [COMMA]             ,
19   [WORD]              t
19   [COMMA]             ,
22   [WORD]              y
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
28   [SEMICOLON]         ;