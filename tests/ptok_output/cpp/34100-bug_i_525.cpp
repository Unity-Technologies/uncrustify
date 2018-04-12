Line [Parent]            Text
1    [NONE]              EXEC
1    [NONE]              SQL
1    [NONE]              BEGIN
1    [NONE]              DECLARE
1    [NONE]              SECTION
1    [NONE]              ;
1    [NONE]              
2    [NONE]              static
2    [NONE]              char
2    [NONE]              *
2    [NONE]              tbuf
2    [NONE]              ;
2    [NONE]              
3    [NONE]              EXEC
3    [SQL_END]           SQL
3    [SQL_END]           END
3    [SQL_END]           DECLARE
3    [SQL_END]           SECTION
3    [SQL_END]           ;
3    [NONE]              
5    [FUNC_DEF]          void
5    [NONE]              myfunc1
5    [FUNC_DEF]          (
5    [FUNC_DEF]          )
5    [NONE]              
6    [FUNC_DEF]          {
6    [NONE]              
7    [NONE]              exec
7    [SQL_EXEC]          sql
7    [SQL_EXEC]          execute
7    [SQL_EXEC]          immediate
7    [SQL_EXEC]          :
7    [SQL_EXEC]          tbuf
7    [SQL_EXEC]          ;
7    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              
10   [FUNC_DEF]          void
10   [NONE]              myfunc2
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              EXEC
12   [SQL_EXEC]          SQL
12   [SQL_EXEC]          EXECUTE
12   [SQL_EXEC]          IMMEDIATE
12   [SQL_EXEC]          :
12   [SQL_EXEC]          tbuf
12   [SQL_EXEC]          ;
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              