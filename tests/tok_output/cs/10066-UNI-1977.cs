Line [Token]             Text
1    [COMMENT_CPP]       // We specifically avoid our own tab-space in GenericFormat because of the @"" issue.
1    [NEWLINE]           
2    [COMMENT_CPP]       // So we must rely on Uncrustify getting it right, and it nearly does - except for the
2    [NEWLINE]           
3    [COMMENT_CPP]       // "Layout has changed, bail out now" where it does not replace the tab preceding the comment.
3    [NEWLINE]           
5    [NAMESPACE]         namespace
5    [WORD]              Namespace
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [CLASS]             class
7    [TYPE]              Class
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [QUALIFIER]         public
9    [TYPE]              void
9    [FUNC_DEF]          Foo
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [IF]                if
11   [SPAREN_OPEN]       (
11   [WORD]              bar
11   [SPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [COMMENT_CPP]       //	Layout has changed, bail out now.
13   [NEWLINE]           
14   [WORD]              bar
14   [ASSIGN]            =
14   [WORD]              false
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           