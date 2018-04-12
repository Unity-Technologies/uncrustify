Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * @file cmt_insert.cpp␤ * Description␤ *␤ * $Id$␤ */
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
5    [FUNC_CLASS_PROTO]    CFoo
5    [FPAREN_OPEN]       (
5    [TYPE]              int
5    [WORD]              arg
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FUNC_CLASS_DEF]    CFoo
6    [FPAREN_OPEN]       (
6    [TYPE]              char
6    [WORD]              arg
6    [FPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [DESTRUCTOR]        ~
8    [FUNC_CLASS_PROTO]    CFoo
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              int
9    [FUNC_PROTO]        foo1
9    [FPAREN_OPEN]       (
9    [TYPE]              int
9    [WORD]              arg
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPE]              int
10   [FUNC_PROTO]        foo2
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPE]              int
11   [FUNC_DEF]          foo3
11   [FPAREN_OPEN]       (
11   [TYPE]              char
11   [WORD]              ch
11   [COMMA]             ,
11   [TYPE]              int
11   [WORD]              xx
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [TYPE]              CFoo
16   [DC_MEMBER]         ::
16   [FUNC_CLASS_DEF]    CFoo
16   [FPAREN_OPEN]       (
16   [TYPE]              int
16   [WORD]              arg
16   [FPAREN_CLOSE]      )
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [TYPE]              CFoo
19   [DC_MEMBER]         ::
19   [DESTRUCTOR]        ~
19   [FUNC_CLASS_DEF]    CFoo
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * foo1␤ * TODO: DESCRIPTION␤ * @param arg TODO␤ * ��@param arg2 TO␤ * O␤@return TODO␤ */
5    [NEWLINE]           
22   [TYPE]              int
22   [TYPE]              CFoo
22   [DC_MEMBER]         ::
22   [FUNC_DEF]          foo1
22   [FPAREN_OPEN]       (
22   [TYPE]              int
22   [WORD]              arg
22   [COMMA]             ,
22   [TYPE]              int
22   [WORD]              arg2
22   [FPAREN_CLOSE]      )
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
26   [TYPE]              int
26   [TYPE]              CFoo
26   [DC_MEMBER]         ::
26   [FUNC_DEF]          foo2
26   [FPAREN_OPEN]       (
26   [FPAREN_CLOSE]      )
26   [NEWLINE]           
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * operator +␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
30   [TYPE]              int
30   [TYPE]              CFoo
30   [DC_MEMBER]         ::
30   [OPERATOR]          operator
30   [FUNC_DEF]          +
30   [FPAREN_OPEN]       (
30   [FPAREN_CLOSE]      )
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
34   [TYPE]              map
34   [ANGLE_OPEN]        <
34   [TYPE]              string
34   [COMMA]             ,
34   [TYPE]              int
34   [ANGLE_CLOSE]       >
34   [FUNC_DEF]          func
34   [FPAREN_OPEN]       (
34   [FPAREN_CLOSE]      )
34   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [COMMENT_CPP]       // some codes
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * some_func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NEWLINE]           
39   [TYPE]              int
39   [FUNC_DEF]          some_func
39   [FPAREN_OPEN]       (
39   [TYPE]              void
39   [FPAREN_CLOSE]      )
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [NEWLINE]           
43   [CLASS]             class
43   [TYPE]              some_class_declaration
43   [SEMICOLON]         ;
43   [NEWLINE]           
45   [TYPE]              int
45   [FUNC_PROTO]        some_func_declaration
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [NEWLINE]           