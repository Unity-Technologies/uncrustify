Line [Token]             Text
1    [TYPE]              EXEC
1    [TYPE]              SQL
1    [TYPE]              BEGIN
1    [TYPE]              DECLARE
1    [WORD]              SECTION
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [QUALIFIER]         static
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [WORD]              tbuf
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [SQL_END]           EXEC
3    [SQL_WORD]          SQL
3    [SQL_WORD]          END
3    [SQL_WORD]          DECLARE
3    [SQL_WORD]          SECTION
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              void
5    [FUNC_DEF]          myfunc1
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [SQL_EXEC]          exec
7    [SQL_WORD]          sql
7    [SQL_WORD]          execute
7    [SQL_WORD]          immediate
7    [COLON]             :
7    [SQL_WORD]          tbuf
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [TYPE]              void
10   [FUNC_DEF]          myfunc2
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [SQL_EXEC]          EXEC
12   [SQL_WORD]          SQL
12   [SQL_WORD]          EXECUTE
12   [SQL_WORD]          IMMEDIATE
12   [COLON]             :
12   [SQL_WORD]          tbuf
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           