Line [Token]             Text
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             outpsize
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO_FUNC]        some
3    [FPAREN_OPEN]       (
3    [WORD]              f
3    [FPAREN_CLOSE]      )
3    [NL_CONT]           \
4    [FUNC_CALL]         foo
4    [FPAREN_OPEN]       (
4    [WORD]              f
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
6    [CLASS]             class
6    [TYPE]              CRC
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [PRIVATE]           public
8    [PRIVATE_COLON]     :
8    [NEWLINE]           
9    [TYPE]              int
9    [WORD]              foo
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [COMMENT_CPP]       // Initial CRC Start Value
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_DEFINE]         define
11   [NUMBER]            24BITCRC
11   [PAREN_OPEN]        (
11   [PAREN_OPEN]        (
11   [TYPE]              ULONG
11   [PAREN_CLOSE]       )
11   [NUMBER]            0x00864CFB
11   [PAREN_CLOSE]       )
11   [COMMENT_CPP]       // This line is not aligned with the other lines
11   [NEWLINE]           
12   [TYPE]              char
12   [WORD]              ch
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_DEFINE]         define
13   [MACRO]             MULTI
13   [TYPE]              LINE
13   [TYPE]              DEFINE
13   [NL_CONT]           \
14   [TYPE]              in
14   [WORD]              column
14   [NUMBER]            0
14   [NL_CONT]           \
15   [TYPE]              that
15   [WORD]              spans
15   [NEWLINE]           
16   [COMMENT_CPP]       //// Operations ////
16   [NEWLINE]           
17   [PRIVATE]           public
17   [PRIVATE_COLON]     :
17   [NEWLINE]           
18   [ELLIPSIS]          ...
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_IF]             if
22   [PP_DEFINED]        defined
22   [PAREN_OPEN]        (
22   [WORD]              WIN32
22   [PAREN_CLOSE]       )
22   [NEWLINE]           
23   [TYPE]              SYSTEMTIME
23   [WORD]              st
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [TYPE]              DWORD
24   [WORD]              ThreadId
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_ELSE]           else
25   [NEWLINE]           
26   [STRUCT]            struct
26   [TYPE]              timeval
26   [WORD]              mytv
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [STRUCT]            struct
27   [TYPE]              tm
27   [PTR_TYPE]          *
27   [WORD]              mytm
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [TYPE]              pid_t
28   [WORD]              ProcessId
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [PREPROC]           #
29   [PP_ENDIF]          endif
29   [NEWLINE]           
31   [PREPROC]           #
31   [PP_IF]             if
31   [TYPE]              SOME
31   [WORD]              COND
31   [NEWLINE]           
32   [PAREN_OPEN]        (
32   [TYPE]              void
32   [PAREN_CLOSE]       )
32   [WORD]              loop
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [PREPROC]           #
33   [PP_ENDIF]          endif
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           