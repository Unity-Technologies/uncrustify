Line [Token]             Text
1    [COMMENT_CPP]       // Why are we getting doubling indentation on multiline new[] initializer?
1    [NEWLINE]           
3    [COMMENT_CPP]       // See GetAdditionalReferences
3    [NEWLINE]           
5    [COMMENT_CPP]       // Note that in C++ it seems to work ok
5    [NEWLINE]           
7    [NAMESPACE]         namespace
7    [WORD]              Namespace
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [QUALIFIER]         public
9    [CLASS]             class
9    [TYPE]              Class
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [QUALIFIER]         private
11   [TYPE]              string
11   [TSQUARE]           []
11   [FUNC_DEF]          GetAdditionalReferences
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [RETURN]            return
13   [NEW]               new
13   [TSQUARE]           []
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [STRING]            "System.dll"
15   [COMMA]             ,
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           