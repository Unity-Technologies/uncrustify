Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              void
2    [FUNC_PROTO]        log_fmt
2    [FPAREN_OPEN]       (
2    [TYPE]              log_sev_t
2    [WORD]              sev
2    [COMMA]             ,
2    [QUALIFIER]         const
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [WORD]              fmt
2    [COMMA]             ,
2    [ELLIPSIS]          ...
2    [FPAREN_CLOSE]      )
2    [ATTRIBUTE]         __attribute__
2    [FPAREN_OPEN]       (
2    [PAREN_OPEN]        (
2    [FUNC_CALL]         format
2    [FPAREN_OPEN]       (
2    [WORD]              printf
2    [COMMA]             ,
2    [NUMBER]            2
2    [COMMA]             ,
2    [NUMBER]            3
2    [FPAREN_CLOSE]      )
2    [PAREN_CLOSE]       )
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_DEFINE]         define
4    [MACRO_FUNC]        LOG_FMT
4    [FPAREN_OPEN]       (
4    [WORD]              sev
4    [COMMA]             ,
4    [WORD]              args
4    [ELLIPSIS]          ...
4    [FPAREN_CLOSE]      )
4    [NL_CONT]           \
5    [DO]                do
5    [BRACE_OPEN]        {
5    [IF]                if
5    [SPAREN_OPEN]       (
5    [FUNC_CALL]         log_sev_on
5    [FPAREN_OPEN]       (
5    [WORD]              sev
5    [FPAREN_CLOSE]      )
5    [SPAREN_CLOSE]      )
5    [BRACE_OPEN]        {
5    [FUNC_CALL]         log_fmt
5    [FPAREN_OPEN]       (
5    [WORD]              sev
5    [COMMA]             ,
5    [PP]                ##
5    [WORD]              args
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [BRACE_CLOSE]       }
5    [BRACE_CLOSE]       }
5    [WHILE_OF_DO]       while
5    [SPAREN_OPEN]       (
5    [NUMBER]            0
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ENDIF]          endif
6    [NEWLINE]           
8    [TYPE]              void
8    [FUNC_DEF]          foo
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TRY]               try
10   [BRACE_OPEN]        {
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [CATCH]             catch
11   [SPAREN_OPEN]       (
11   [ELLIPSIS]          ...
11   [SPAREN_CLOSE]      )
11   [COMMENT_CPP]       // <== HERE
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           