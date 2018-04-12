Line [Token]             Text
1    [NAMESPACE]         namespace
1    [BRACE_OPEN]        {
1    [NEWLINE]           
3    [COMMENT_MULTI]     /* If we're in the middle of the original line, copy the string␤   only up to the cursor position into buf, so tab completion␤   will result in buf's containing only the tab-completed␤   path/filename. */
6    [NEWLINE]           
8    [CLASS]             class
8    [TYPE]              Test
8    [BRACE_OPEN]        {
8    [NEWLINE]           
10   [FUNC_CLASS_DEF]    Test
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [BRACE_OPEN]        {
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [DESTRUCTOR]        ~
11   [FUNC_CLASS_DEF]    Test
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [BRACE_OPEN]        {
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [COMMENT_MULTI]     /** Call this method to␤            run the test␤␤	\param n test number␤	\returns the test result␤    */
18   [NEWLINE]           
19   [TYPE]              bool
19   [FUNC_PROTO]        Run
19   [FPAREN_OPEN]       (
19   [TYPE]              int
19   [WORD]              n
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [COMMENT_MULTI]     /** Call this method to␤        stop the test␤␤    \param n test number␤    \returns the test result␤    */
26   [NEWLINE]           
27   [TYPE]              bool
27   [FUNC_PROTO]        Run
27   [FPAREN_OPEN]       (
27   [TYPE]              int
27   [WORD]              n
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           