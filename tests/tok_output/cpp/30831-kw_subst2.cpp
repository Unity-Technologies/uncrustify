Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * @file kw_subst2.cpp␤ * Description␤ *␤ * $Id$␤ */
6    [NEWLINE]           
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <string>
1    [NEWLINE]           
3    [NAMESPACE]         namespace
3    [WORD]              bar
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  CFoo␤ * TODO: DESCRIPTION␤ */
4    [NEWLINE]           
6    [CLASS]             class
6    [TYPE]              CFoo
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [TYPE]              int
8    [FUNC_PROTO]        foo1
8    [FPAREN_OPEN]       (
8    [TYPE]              int
8    [WORD]              arg
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [PRIVATE]           private
9    [PRIVATE_COLON]     :
9    [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
10   [TYPE]              int
10   [FUNC_DEF]          foo2
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [SEMICOLON]         ;
13   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * foo1␤ * TODO: DESCRIPTION␤ * @param arg TODO␤ * ��@param arg2 TO␤ * O␤@return TODO␤ */
5    [NEWLINE]           
15   [TYPE]              int
15   [TYPE]              CFoo
15   [DC_MEMBER]         ::
15   [FUNC_DEF]          foo1
15   [FPAREN_OPEN]       (
15   [TYPE]              int
15   [WORD]              arg
15   [COMMA]             ,
15   [TYPE]              char
15   [WORD]              arg2
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
19   [TYPE]              int
19   [TYPE]              CFoo
19   [DC_MEMBER]         ::
19   [FUNC_DEF]          foo2
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * operator +␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
23   [TYPE]              int
23   [TYPE]              CFoo
23   [DC_MEMBER]         ::
23   [OPERATOR]          operator
23   [FUNC_DEF]          +
23   [FPAREN_OPEN]       (
23   [FPAREN_CLOSE]      )
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
27   [TYPE]              map
27   [ANGLE_OPEN]        <
27   [TYPE]              string
27   [COMMA]             ,
27   [TYPE]              int
27   [ANGLE_CLOSE]       >
27   [FUNC_DEF]          func
27   [FPAREN_OPEN]       (
27   [FPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [COMMENT_CPP]       // some codes
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * some_func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
32   [TYPE]              int
32   [FUNC_DEF]          some_func
32   [FPAREN_OPEN]       (
32   [TYPE]              void
32   [FPAREN_CLOSE]      )
32   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           