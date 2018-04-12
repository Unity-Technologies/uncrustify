Line [Token]             Text
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        include
2    [PREPROC_BODY]      <stdio.h>
2    [NEWLINE]           
4    [QUALIFIER]         static
4    [TYPE]              void
4    [FUNC_PROTO]        status_cb
4    [FPAREN_OPEN]       (
4    [TYPE]              status_t
4    [PTR_TYPE]          *
4    [WORD]              status
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [QUALIFIER]         static
5    [TYPE]              int
5    [FUNC_PROTO]        add_conn
5    [FPAREN_OPEN]       (
5    [QUALIFIER]         const
5    [TYPE]              char
5    [PTR_TYPE]          *
5    [WORD]              path
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [PREPROC]           #
7    [PP_IF]             ifdef
7    [WORD]              USE_FOO_CMD
7    [NEWLINE]           
8    [QUALIFIER]         static
8    [TYPE]              void
8    [FUNC_PROTO]        foo_cmd
8    [FPAREN_OPEN]       (
8    [TYPE]              void
8    [PTR_TYPE]          *
8    [WORD]              user
8    [COMMA]             ,
8    [QUALIFIER]         const
8    [TYPE]              info_t
8    [PTR_TYPE]          *
8    [WORD]              info
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_ENDIF]          endif
9    [NEWLINE]           