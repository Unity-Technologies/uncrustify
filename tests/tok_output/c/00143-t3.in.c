Line [Token]             Text
1    [QUALIFIER]         extern
1    [COMMENT]           /*@observer@*/ /*@null@*/
1    [QUALIFIER]         const
1    [TYPE]              dcroid_t
1    [PTR_TYPE]          *
1    [FUNC_PROTO]        dcrp_oidget
1    [NEWLINE]           
2    [FPAREN_OPEN]       (
2    [NEWLINE]           
3    [COMMENT]           /*@in@*/
3    [QUALIFIER]         const
3    [TYPE]              char
3    [PTR_TYPE]          *
3    [WORD]              h
3    [COMMA]             ,
3    [NEWLINE]           
4    [COMMENT]           /*@in@*/
4    [QUALIFIER]         const
4    [TYPE]              char
4    [PTR_TYPE]          *
4    [WORD]              t
4    [NEWLINE]           
5    [FPAREN_CLOSE]      )
5    [COMMENT]           /*@ensures maxRead(result) >= 0@*/
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [QUALIFIER]         extern
7    [COMMENT]           /*@observer@*/
7    [QUALIFIER]         const
7    [TYPE]              char
7    [PTR_TYPE]          *
7    [FUNC_PROTO]        dcrp_oidlabel
7    [NEWLINE]           
8    [FPAREN_OPEN]       (
8    [NEWLINE]           
9    [COMMENT]           /*@in@*/
9    [QUALIFIER]         const
9    [TYPE]              dcroid_t
9    [PTR_TYPE]          *
9    [WORD]              oid
9    [NEWLINE]           
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           