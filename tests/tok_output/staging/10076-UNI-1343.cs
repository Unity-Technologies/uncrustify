Line [Token]             Text
1    [COMMENT_CPP]       // Need to...
1    [NEWLINE]           
3    [COMMENT_CPP]       // * Deal with the newline-after-opening and brace arrangement thing (eat_blanks_after_open_brace etc - see note in Uncrustify.Cpp.cfg)
3    [NEWLINE]           
4    [COMMENT_CPP]       // * Terminate with //namespace if greater than x lines (like with #ifdef)
4    [NEWLINE]           
6    [NAMESPACE]         namespace
6    [WORD]              Unity
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [QUALIFIER]         public
8    [QUALIFIER]         static
8    [TYPE]              void
8    [FUNC_DEF]          foo1
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [QUALIFIER]         public
13   [QUALIFIER]         static
13   [TYPE]              void
13   [FUNC_DEF]          foo2
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [QUALIFIER]         public
18   [QUALIFIER]         static
18   [TYPE]              void
18   [FUNC_DEF]          foo3
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [COMMENT_CPP]       // namespace Unity
22   [NEWLINE]           