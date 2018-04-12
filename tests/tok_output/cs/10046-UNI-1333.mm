Line [Token]             Text
1    [COMMENT_CPP]       // Test if Uncrustify properly handles `@synchronized` keyword for ObjC
1    [NEWLINE]           
3    [COMMENT_CPP]       // In keywords.cpp there is no @synchronized keyword listed and from what I've seen synchronized is only regarded as a keyword in other languages
3    [NEWLINE]           
4    [COMMENT_CPP]       // { "synchronized", CT_QUALIFIER, LANG_D | LANG_JAVA | LANG_ECMA },
4    [NEWLINE]           
6    [NEG]               -
6    [PAREN_OPEN]        (
6    [TYPE]              void
6    [PAREN_CLOSE]       )
6    [CS_PROPERTY]       foo
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [FUNC_CALL]         @synchronized
8    [FPAREN_OPEN]       (
8    [WORD]              self
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              bar
10   [SPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [WORD]              bar
12   [ASSIGN]            =
12   [WORD]              false
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           