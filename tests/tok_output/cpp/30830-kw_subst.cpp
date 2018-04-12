Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * @file kw_subst.cpp␤ * Description␤ *␤ * $Id$␤ */
6    [NEWLINE]           
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <string>
1    [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  CFoo␤ * TODO: DESCRIPTION␤ */
4    [NEWLINE]           
3    [CLASS]             class
3    [TYPE]              CFoo
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              int
5    [FUNC_PROTO]        foo1
5    [FPAREN_OPEN]       (
5    [TYPE]              int
5    [WORD]              arg
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPE]              int
6    [FUNC_PROTO]        foo2
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  CFoo␤ * METHOD: foo3␤ * TODO: DESCRIPTION␤ * @param ch TODO␤ * ��@param xx TO␤ * O␤@return TODO␤ */
6    [NEWLINE]           
7    [TYPE]              int
7    [FUNC_DEF]          foo3
7    [FPAREN_OPEN]       (
7    [TYPE]              char
7    [WORD]              ch
7    [COMMA]             ,
7    [TYPE]              int
7    [WORD]              xx
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [SEMICOLON]         ;
10   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  CFoo␤ * METHOD: foo1␤ * TODO: DESCRIPTION␤ * @param arg TODO␤ * ��@param arg2 TO␤ * O␤@return TODO␤ */
6    [NEWLINE]           
12   [TYPE]              int
12   [TYPE]              CFoo
12   [DC_MEMBER]         ::
12   [FUNC_DEF]          foo1
12   [FPAREN_OPEN]       (
12   [TYPE]              int
12   [WORD]              arg
12   [COMMA]             ,
12   [TYPE]              int
12   [WORD]              arg2
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  CFoo␤ * METHOD: foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NEWLINE]           
16   [TYPE]              int
16   [TYPE]              CFoo
16   [DC_MEMBER]         ::
16   [FUNC_DEF]          foo2
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  CFoo␤ * METHOD: operator +␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NEWLINE]           
20   [TYPE]              int
20   [TYPE]              CFoo
20   [DC_MEMBER]         ::
20   [OPERATOR]          operator
20   [FUNC_DEF]          +
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  $(fclass)␤ * METHOD: func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NEWLINE]           
24   [TYPE]              map
24   [ANGLE_OPEN]        <
24   [TYPE]              string
24   [COMMA]             ,
24   [TYPE]              int
24   [ANGLE_CLOSE]       >
24   [FUNC_DEF]          func
24   [FPAREN_OPEN]       (
24   [FPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [COMMENT_CPP]       // some codes
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * CLASS:  $(fclass)␤ * METHOD: some_func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NEWLINE]           
29   [TYPE]              int
29   [FUNC_DEF]          some_func
29   [FPAREN_OPEN]       (
29   [TYPE]              void
29   [FPAREN_CLOSE]      )
29   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           