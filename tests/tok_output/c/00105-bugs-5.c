Line [Token]             Text
1    [NEWLINE]           
2    [QUALIFIER]         static
2    [TYPE]              void
2    [FUNC_DEF]          log_roll_file
2    [FPAREN_OPEN]       (
2    [TYPE]              log_output_t
2    [PTR_TYPE]          *
2    [WORD]              plo
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              INT32
4    [WORD]              retcode
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [QUALIFIER]         const
5    [TYPE]              CHAR
5    [PTR_TYPE]          *
5    [WORD]              name_save
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [QUALIFIER]         const
6    [TYPE]              CHAR
6    [PTR_TYPE]          *
6    [WORD]              name_temp
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              plo
8    [MEMBER]            ->
8    [WORD]              pfile
8    [COMPARE]           !=
8    [WORD]              NULL
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           