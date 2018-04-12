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
9    [COMMENT]           /* The 'u8', 'u', and 'U' prefixes */
9    [NEWLINE]           
10   [QUALIFIER]         const
10   [TYPE]              char
10   [PTR_TYPE]          *
10   [WORD]              s1
10   [ASSIGN]            =
10   [STRING]            u8"I'm a UTF-8 string."
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [QUALIFIER]         const
11   [TYPE]              char16_t
11   [PTR_TYPE]          *
11   [WORD]              s2
11   [ASSIGN]            =
11   [STRING]            u"This is a UTF-16 string."
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [QUALIFIER]         const
12   [TYPE]              char32_t
12   [PTR_TYPE]          *
12   [WORD]              s3
12   [ASSIGN]            =
12   [STRING]            U"This is a UTF-32 string."
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [QUALIFIER]         const
14   [TYPE]              char
14   [WORD]              c1
14   [ASSIGN]            =
14   [STRING]            u8'1'
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [QUALIFIER]         const
15   [TYPE]              char16_t
15   [WORD]              c2
15   [ASSIGN]            =
15   [STRING]            u'2'
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [QUALIFIER]         const
16   [TYPE]              char32_t
16   [WORD]              c3
16   [ASSIGN]            =
16   [STRING]            U'4'
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [QUALIFIER]         const
17   [TYPE]              wchar_t
17   [WORD]              c4
17   [ASSIGN]            =
17   [STRING]            L'w'
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [QUALIFIER]         const
18   [TYPE]              char16_t
18   [WORD]              u
18   [ASSIGN]            =
18   [STRING]            u'\u007f'
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [COMMENT]           /* The 'R' and 'R"delim(' prefixes */
20   [NEWLINE]           
21   [QUALIFIER]         const
21   [TYPE]              char
21   [PTR_TYPE]          *
21   [WORD]              r1
21   [ASSIGN]            =
21   [STRING]            R"(Xhe String Data \ Stuff " )"
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [QUALIFIER]         const
22   [TYPE]              char
22   [PTR_TYPE]          *
22   [WORD]              r2
22   [ASSIGN]            =
22   [STRING]            R"delimiter(The String Data \ Stuff ")delimiter"
22   [SEMICOLON]         ;
22   [NEWLINE]           
24   [COMMENT]           /* Multiline string */
24   [NEWLINE]           
25   [TYPE]              auto
25   [WORD]              foo
25   [ASSIGN]            =
25   [STRING_MULTI]      R"FOO"(␤ some␤ text␤ and␤ more␤ text␤)FOO""
31   [SEMICOLON]         ;
31   [NEWLINE]           
33   [COMMENT]           /* Combo */
33   [NEWLINE]           
34   [QUALIFIER]         const
34   [TYPE]              char
34   [PTR_TYPE]          *
34   [WORD]              c1
34   [ASSIGN]            =
34   [STRING]            u8R"XXX(I'm a "raw UTF-8" string.)XXX"
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [QUALIFIER]         const
35   [TYPE]              char16_t
35   [PTR_TYPE]          *
35   [WORD]              c2
35   [ASSIGN]            =
35   [STRING]            uR"*(This is a "raw UTF-16" string.)*"
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [QUALIFIER]         const
36   [TYPE]              char32_t
36   [PTR_TYPE]          *
36   [WORD]              c3
36   [ASSIGN]            =
36   [STRING]            UR"(This is a "raw UTF-32" string.)"
36   [SEMICOLON]         ;
36   [NEWLINE]           
38   [COMMENT]           /* user-defined */
38   [NEWLINE]           
39   [TYPE]              OutputType
39   [OPERATOR]          operator
39   [FUNC_PROTO]        "" _Suffix
39   [FPAREN_OPEN]       (
39   [TYPE]              unsigned
39   [TYPE]              long
39   [TYPE]              long
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [TYPE]              OutputType
40   [OPERATOR]          operator
40   [FUNC_PROTO]        "" _Suffix
40   [FPAREN_OPEN]       (
40   [TYPE]              long
40   [TYPE]              double
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [NEWLINE]           
42   [TYPE]              OutputType
42   [WORD]              some_variable
42   [ASSIGN]            =
42   [NUMBER]            1234_Suffix
42   [SEMICOLON]         ;
42   [COMMENT_CPP]       // uses the first function
42   [NEWLINE]           
43   [TYPE]              OutputType
43   [WORD]              another_variable
43   [ASSIGN]            =
43   [NUMBER_FP]         3.1416_Suffix
43   [SEMICOLON]         ;
43   [COMMENT_CPP]       // uses the second function
43   [NEWLINE]           
45   [TYPE]              OutputType
45   [OPERATOR]          operator
45   [FUNC_PROTO]        "" _Suffix
45   [FPAREN_OPEN]       (
45   [QUALIFIER]         const
45   [TYPE]              char
45   [PTR_TYPE]          *
45   [WORD]              string_values
45   [COMMA]             ,
45   [TYPE]              size_t
45   [WORD]              num_chars
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [TYPE]              OutputType
46   [OPERATOR]          operator
46   [FUNC_PROTO]        "" _Suffix
46   [FPAREN_OPEN]       (
46   [QUALIFIER]         const
46   [TYPE]              wchar_t
46   [PTR_TYPE]          *
46   [WORD]              string_values
46   [COMMA]             ,
46   [TYPE]              size_t
46   [WORD]              num_chars
46   [FPAREN_CLOSE]      )
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [TYPE]              OutputType
47   [OPERATOR]          operator
47   [FUNC_PROTO]        "" _Suffix
47   [FPAREN_OPEN]       (
47   [QUALIFIER]         const
47   [TYPE]              char16_t
47   [PTR_TYPE]          *
47   [WORD]              string_values
47   [COMMA]             ,
47   [TYPE]              size_t
47   [WORD]              num_chars
47   [FPAREN_CLOSE]      )
47   [SEMICOLON]         ;
47   [NEWLINE]           
48   [TYPE]              OutputType
48   [OPERATOR]          operator
48   [FUNC_PROTO]        "" _Suffix
48   [FPAREN_OPEN]       (
48   [QUALIFIER]         const
48   [TYPE]              char32_t
48   [PTR_TYPE]          *
48   [WORD]              string_values
48   [COMMA]             ,
48   [TYPE]              size_t
48   [WORD]              num_chars
48   [FPAREN_CLOSE]      )
48   [SEMICOLON]         ;
48   [NEWLINE]           
50   [TYPE]              OutputType
50   [WORD]              some_variable
50   [ASSIGN]            =
50   [STRING]            "1234"_Suffix
50   [SEMICOLON]         ;
50   [COMMENT_CPP]       //Calls the const char * version
50   [NEWLINE]           
51   [TYPE]              OutputType
51   [WORD]              some_variable
51   [ASSIGN]            =
51   [STRING]            u8"1234"_Suffix
51   [SEMICOLON]         ;
51   [COMMENT_CPP]       //Calls the const char * version
51   [NEWLINE]           
52   [TYPE]              OutputType
52   [WORD]              some_variable
52   [ASSIGN]            =
52   [STRING]            L"1234"_Suffix
52   [SEMICOLON]         ;
52   [COMMENT_CPP]       //Calls the const wchar_t * version
52   [NEWLINE]           
53   [TYPE]              OutputType
53   [WORD]              some_variable
53   [ASSIGN]            =
53   [STRING]            u"1234"_Suffix
53   [SEMICOLON]         ;
53   [COMMENT_CPP]       //Calls the const char16_t * version
53   [NEWLINE]           
54   [TYPE]              OutputType
54   [WORD]              some_variable
54   [ASSIGN]            =
54   [STRING]            U"1234"_Suffix
54   [SEMICOLON]         ;
54   [COMMENT_CPP]       //Calls the const char32_t * version
54   [NEWLINE]           
56   [COMMENT]           /* Some stuff that should NOT be detected as a C++0x  user-defined literal */
56   [NEWLINE]           
57   [FUNC_CALL]         sscanf
57   [FPAREN_OPEN]       (
57   [WORD]              text
57   [COMMA]             ,
57   [STRING]            "%"
57   [WORD]              SCNx64
57   [COMMA]             ,
57   [ADDR]              &
57   [WORD]              val
57   [FPAREN_CLOSE]      )
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [FUNC_CALL]         printf
58   [FPAREN_OPEN]       (
58   [STRING]            "Val=%"
58   [WORD]              PRIx64
58   [STRING]            "\n"
58   [COMMA]             ,
58   [WORD]              val
58   [FPAREN_CLOSE]      )
58   [SEMICOLON]         ;
58   [NEWLINE]           