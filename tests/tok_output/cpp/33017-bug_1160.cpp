Line [Token]             Text
1    [TEMPLATE]          template
1    [ANGLE_OPEN]        <
1    [TYPENAME]          typename
1    [TYPE]              T1
1    [ANGLE_CLOSE]       >
1    [NEWLINE]           
2    [CLASS]             class
2    [TYPE]              Class1
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [PRIVATE]           public
4    [PRIVATE_COLON]     :
4    [NEWLINE]           
5    [TYPE]              status
5    [MEMBER]            .
5    [WORD]              time_count
5    [ASSIGN]            =
5    [FUNC_CALL]         duration_cast
5    [ANGLE_OPEN]        <
5    [DC_MEMBER]         ::
5    [TYPE]              milliseconds
5    [ANGLE_CLOSE]       >
5    [NEWLINE]           
6    [FPAREN_OPEN]       (
6    [TYPE]              steady_clock
6    [DC_MEMBER]         ::
6    [FUNC_CALL]         now
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [MEMBER]            .
6    [FUNC_CALL]         time_since_epoch
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [FPAREN_CLOSE]      )
6    [MEMBER]            .
6    [FUNC_CALL]         count
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           