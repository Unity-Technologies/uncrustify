Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              BSTR
3    [WORD]              test
3    [ASSIGN]            =
3    [STRING]            L"SID"
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              CHAR
4    [WORD]              s
4    [TSQUARE]           []
4    [ASSIGN]            =
4    [STRING]            "This is a \"test\""
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              CHAR
5    [WORD]              ch
5    [ASSIGN]            =
5    [STRING]            'a'
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [COMMENT]           /* The 'u8', 'u', and 'U' prefixes */
8    [NEWLINE]           
9    [QUALIFIER]         const
9    [TYPE]              char
9    [PTR_TYPE]          *
9    [WORD]              s1
9    [ASSIGN]            =
9    [STRING]            u8"I'm a UTF-8 string."
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [QUALIFIER]         const
10   [TYPE]              char16_t
10   [PTR_TYPE]          *
10   [WORD]              s2
10   [ASSIGN]            =
10   [STRING]            u"This is a UTF-16 string."
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [QUALIFIER]         const
11   [TYPE]              char32_t
11   [PTR_TYPE]          *
11   [WORD]              s3
11   [ASSIGN]            =
11   [STRING]            U"This is a UTF-32 string."
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [QUALIFIER]         const
13   [TYPE]              char
13   [WORD]              c1
13   [ASSIGN]            =
13   [STRING]            u8'1'
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [QUALIFIER]         const
14   [TYPE]              char16_t
14   [WORD]              c2
14   [ASSIGN]            =
14   [STRING]            u'2'
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [QUALIFIER]         const
15   [TYPE]              char32_t
15   [WORD]              c3
15   [ASSIGN]            =
15   [STRING]            U'4'
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [QUALIFIER]         const
16   [TYPE]              wchar_t
16   [WORD]              c4
16   [ASSIGN]            =
16   [STRING]            L'w'
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [QUALIFIER]         const
17   [TYPE]              char16_t
17   [WORD]              u
17   [ASSIGN]            =
17   [STRING]            u'\u007f'
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [TYPE]              OutputType
19   [WORD]              some_variable
19   [ASSIGN]            =
19   [STRING]            "1234"_Suffix
19   [SEMICOLON]         ;
19   [COMMENT_CPP]       //Calls the const char * version
19   [NEWLINE]           
20   [TYPE]              OutputType
20   [WORD]              some_variable
20   [ASSIGN]            =
20   [STRING]            u8"1234"_Suffix
20   [SEMICOLON]         ;
20   [COMMENT_CPP]       //Calls the const char * version
20   [NEWLINE]           
21   [TYPE]              OutputType
21   [WORD]              some_variable
21   [ASSIGN]            =
21   [STRING]            L"1234"_Suffix
21   [SEMICOLON]         ;
21   [COMMENT_CPP]       //Calls the const wchar_t * version
21   [NEWLINE]           
22   [TYPE]              OutputType
22   [WORD]              some_variable
22   [ASSIGN]            =
22   [STRING]            u"1234"_Suffix
22   [SEMICOLON]         ;
22   [COMMENT_CPP]       //Calls the const char16_t * version
22   [NEWLINE]           
23   [TYPE]              OutputType
23   [WORD]              some_variable
23   [ASSIGN]            =
23   [STRING]            U"1234"_Suffix
23   [SEMICOLON]         ;
23   [COMMENT_CPP]       //Calls the const char32_t * version