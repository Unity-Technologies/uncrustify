Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * this is a really tough case - perhaps we shouldn't keep any #if crap␤ * unless they all end with the same stack?␤ */
4    [NEWLINE]           
5    [TYPE]              void
5    [FUNC_DEF]          foo
5    [FPAREN_OPEN]       (
5    [TYPE]              void
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              int
7    [WORD]              a
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_IF]             ifdef
8    [WORD]              CONFIG_BLK_DEV_INITRD
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              initrd_start
9    [SPAREN_CLOSE]      )
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [WORD]              ROOT_DEV
10   [ASSIGN]            =
10   [WORD]              Root_RAM0
10   [SEMICOLON]         ;
10   [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_ELSE]           elif
11   [PP_DEFINED]        defined
11   [PAREN_OPEN]        (
11   [WORD]              CONFIG_ROOT_NFS
11   [PAREN_CLOSE]       )
11   [NEWLINE]           
12   [WORD]              ROOT_DEV
12   [ASSIGN]            =
12   [WORD]              Root_NFS
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_ELSE]           elif
13   [PP_DEFINED]        defined
13   [PAREN_OPEN]        (
13   [WORD]              CONFIG_BLK_DEV_IDEDISK
13   [PAREN_CLOSE]       )
13   [NEWLINE]           
14   [WORD]              ROOT_DEV
14   [ASSIGN]            =
14   [WORD]              Root_HDA1
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [PREPROC]           #
15   [PP_ELSE]           else
15   [NEWLINE]           
16   [WORD]              ROOT_DEV
16   [ASSIGN]            =
16   [WORD]              Root_SDA1
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [PREPROC]           #
17   [PP_ENDIF]          endif
17   [NEWLINE]           
18   [RETURN]            return
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           