Line [Token]             Text
1    [COMMENT_CPP]       // It shouldn't detele the space after the tuple definition
1    [NEWLINE]           
2    [QUALIFIER]         public
2    [QUALIFIER]         static
2    [PAREN_OPEN]        (
2    [TYPE]              bool
2    [WORD]              updated
2    [COMMA]             ,
2    [TYPE]              Warnings
2    [WORD]              warnings
2    [PAREN_CLOSE]       )
2    [FUNC_DEF]          UpdateIncludesInFile
2    [FPAREN_OPEN]       (
2    [NEWLINE]           
3    [TYPE]              string
3    [WORD]              fileToUpdate
3    [COMMA]             ,
3    [TYPE]              string
3    [WORD]              oldIncludeFile
3    [COMMA]             ,
3    [TYPE]              string
3    [WORD]              newIncludeFile
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [COMMENT_CPP]       // ...
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [COMMENT_CPP]       // It shouldn't detele the space after the tuple definition
8    [NEWLINE]           
9    [QUALIFIER]         public
9    [QUALIFIER]         static
9    [PAREN_OPEN]        (
9    [TYPE]              int
9    [COMMA]             ,
9    [TYPE]              string
9    [PAREN_CLOSE]       )
9    [FUNC_DEF]          UpdateIncludesInFile
9    [FPAREN_OPEN]       (
9    [NEWLINE]           
10   [TYPE]              string
10   [WORD]              fileToUpdate
10   [COMMA]             ,
10   [TYPE]              string
10   [WORD]              oldIncludeFile
10   [COMMA]             ,
10   [TYPE]              string
10   [WORD]              newIncludeFile
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [COMMENT_CPP]       // ...
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [COMMENT_CPP]       // It shouldn't detele the space after the tuple definition and updated, warnings should be tokenized as types
15   [NEWLINE]           
16   [QUALIFIER]         public
16   [QUALIFIER]         static
16   [PAREN_OPEN]        (
16   [TYPE]              updated
16   [COMMA]             ,
16   [TYPE]              warnings
16   [PAREN_CLOSE]       )
16   [FUNC_DEF]          UpdateIncludesInFile
16   [FPAREN_OPEN]       (
16   [NEWLINE]           
17   [TYPE]              string
17   [WORD]              fileToUpdate
17   [COMMA]             ,
17   [TYPE]              string
17   [WORD]              oldIncludeFile
17   [COMMA]             ,
17   [TYPE]              string
17   [WORD]              newIncludeFile
17   [FPAREN_CLOSE]      )
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [COMMENT_CPP]       // ...
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           