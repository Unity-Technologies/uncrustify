Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              BSTR
3    [NONE]              test
3    [NONE]              =
3    [NONE]              L"SID"
3    [NONE]              ;
3    [NONE]              
4    [NONE]              CHAR
4    [NONE]              s
4    [NONE]              []
4    [NONE]              =
4    [NONE]              "This is a \"test\""
4    [NONE]              ;
4    [NONE]              
5    [NONE]              CHAR
5    [NONE]              ch
5    [NONE]              =
5    [NONE]              'a'
5    [NONE]              ;
5    [NONE]              
6    [FUNC_DEF]          }
6    [NONE]              
9    [COMMENT_WHOLE]     /* The 'u8', 'u', and 'U' prefixes */
9    [NONE]              
10   [NONE]              const
10   [NONE]              char
10   [NONE]              *
10   [NONE]              s1
10   [NONE]              =
10   [NONE]              u8"I'm a UTF-8 string."
10   [NONE]              ;
10   [NONE]              
11   [NONE]              const
11   [NONE]              char16_t
11   [NONE]              *
11   [NONE]              s2
11   [NONE]              =
11   [NONE]              u"This is a UTF-16 string."
11   [NONE]              ;
11   [NONE]              
12   [NONE]              const
12   [NONE]              char32_t
12   [NONE]              *
12   [NONE]              s3
12   [NONE]              =
12   [NONE]              U"This is a UTF-32 string."
12   [NONE]              ;
12   [NONE]              
14   [NONE]              const
14   [NONE]              char
14   [NONE]              c1
14   [NONE]              =
14   [NONE]              u8'1'
14   [NONE]              ;
14   [NONE]              
15   [NONE]              const
15   [NONE]              char16_t
15   [NONE]              c2
15   [NONE]              =
15   [NONE]              u'2'
15   [NONE]              ;
15   [NONE]              
16   [NONE]              const
16   [NONE]              char32_t
16   [NONE]              c3
16   [NONE]              =
16   [NONE]              U'4'
16   [NONE]              ;
16   [NONE]              
17   [NONE]              const
17   [NONE]              wchar_t
17   [NONE]              c4
17   [NONE]              =
17   [NONE]              L'w'
17   [NONE]              ;
17   [NONE]              
18   [NONE]              const
18   [NONE]              char16_t
18   [NONE]              u
18   [NONE]              =
18   [NONE]              u'\u007f'
18   [NONE]              ;
18   [NONE]              
20   [COMMENT_WHOLE]     /* The 'R' and 'R"delim(' prefixes */
20   [NONE]              
21   [NONE]              const
21   [NONE]              char
21   [NONE]              *
21   [NONE]              r1
21   [NONE]              =
21   [NONE]              R"(Xhe String Data \ Stuff " )"
21   [NONE]              ;
21   [NONE]              
22   [NONE]              const
22   [NONE]              char
22   [NONE]              *
22   [NONE]              r2
22   [NONE]              =
22   [NONE]              R"delimiter(The String Data \ Stuff ")delimiter"
22   [NONE]              ;
22   [NONE]              
24   [COMMENT_WHOLE]     /* Multiline string */
24   [NONE]              
25   [NONE]              auto
25   [NONE]              foo
25   [NONE]              =
25   [NONE]              R"FOO"(␤ some␤ text␤ and␤ more␤ text␤)FOO""
31   [NONE]              ;
31   [NONE]              
33   [COMMENT_WHOLE]     /* Combo */
33   [NONE]              
34   [NONE]              const
34   [NONE]              char
34   [NONE]              *
34   [NONE]              c1
34   [NONE]              =
34   [NONE]              u8R"XXX(I'm a "raw UTF-8" string.)XXX"
34   [NONE]              ;
34   [NONE]              
35   [NONE]              const
35   [NONE]              char16_t
35   [NONE]              *
35   [NONE]              c2
35   [NONE]              =
35   [NONE]              uR"*(This is a "raw UTF-16" string.)*"
35   [NONE]              ;
35   [NONE]              
36   [NONE]              const
36   [NONE]              char32_t
36   [NONE]              *
36   [NONE]              c3
36   [NONE]              =
36   [NONE]              UR"(This is a "raw UTF-32" string.)"
36   [NONE]              ;
36   [NONE]              
38   [COMMENT_WHOLE]     /* user-defined */
38   [NONE]              
39   [FUNC_PROTO]        OutputType
39   [FUNC_PROTO]        operator
39   [OPERATOR]          "" _Suffix
39   [FUNC_PROTO]        (
39   [NONE]              unsigned
39   [NONE]              long
39   [NONE]              long
39   [FUNC_PROTO]        )
39   [FUNC_PROTO]        ;
39   [NONE]              
40   [FUNC_PROTO]        OutputType
40   [FUNC_PROTO]        operator
40   [OPERATOR]          "" _Suffix
40   [FUNC_PROTO]        (
40   [NONE]              long
40   [NONE]              double
40   [FUNC_PROTO]        )
40   [FUNC_PROTO]        ;
40   [NONE]              
42   [NONE]              OutputType
42   [NONE]              some_variable
42   [NONE]              =
42   [NONE]              1234_Suffix
42   [NONE]              ;
42   [COMMENT_END]       // uses the first function
42   [NONE]              
43   [NONE]              OutputType
43   [NONE]              another_variable
43   [NONE]              =
43   [NONE]              3.1416_Suffix
43   [NONE]              ;
43   [COMMENT_END]       // uses the second function
43   [NONE]              
45   [FUNC_PROTO]        OutputType
45   [FUNC_PROTO]        operator
45   [OPERATOR]          "" _Suffix
45   [FUNC_PROTO]        (
45   [NONE]              const
45   [NONE]              char
45   [NONE]              *
45   [NONE]              string_values
45   [NONE]              ,
45   [NONE]              size_t
45   [NONE]              num_chars
45   [FUNC_PROTO]        )
45   [FUNC_PROTO]        ;
45   [NONE]              
46   [FUNC_PROTO]        OutputType
46   [FUNC_PROTO]        operator
46   [OPERATOR]          "" _Suffix
46   [FUNC_PROTO]        (
46   [NONE]              const
46   [NONE]              wchar_t
46   [NONE]              *
46   [NONE]              string_values
46   [NONE]              ,
46   [NONE]              size_t
46   [NONE]              num_chars
46   [FUNC_PROTO]        )
46   [FUNC_PROTO]        ;
46   [NONE]              
47   [FUNC_PROTO]        OutputType
47   [FUNC_PROTO]        operator
47   [OPERATOR]          "" _Suffix
47   [FUNC_PROTO]        (
47   [NONE]              const
47   [NONE]              char16_t
47   [NONE]              *
47   [NONE]              string_values
47   [NONE]              ,
47   [NONE]              size_t
47   [NONE]              num_chars
47   [FUNC_PROTO]        )
47   [FUNC_PROTO]        ;
47   [NONE]              
48   [FUNC_PROTO]        OutputType
48   [FUNC_PROTO]        operator
48   [OPERATOR]          "" _Suffix
48   [FUNC_PROTO]        (
48   [NONE]              const
48   [NONE]              char32_t
48   [NONE]              *
48   [NONE]              string_values
48   [NONE]              ,
48   [NONE]              size_t
48   [NONE]              num_chars
48   [FUNC_PROTO]        )
48   [FUNC_PROTO]        ;
48   [NONE]              
50   [NONE]              OutputType
50   [NONE]              some_variable
50   [NONE]              =
50   [NONE]              "1234"_Suffix
50   [NONE]              ;
50   [COMMENT_END]       //Calls the const char * version
50   [NONE]              
51   [NONE]              OutputType
51   [NONE]              some_variable
51   [NONE]              =
51   [NONE]              u8"1234"_Suffix
51   [NONE]              ;
51   [COMMENT_END]       //Calls the const char * version
51   [NONE]              
52   [NONE]              OutputType
52   [NONE]              some_variable
52   [NONE]              =
52   [NONE]              L"1234"_Suffix
52   [NONE]              ;
52   [COMMENT_END]       //Calls the const wchar_t * version
52   [NONE]              
53   [NONE]              OutputType
53   [NONE]              some_variable
53   [NONE]              =
53   [NONE]              u"1234"_Suffix
53   [NONE]              ;
53   [COMMENT_END]       //Calls the const char16_t * version
53   [NONE]              
54   [NONE]              OutputType
54   [NONE]              some_variable
54   [NONE]              =
54   [NONE]              U"1234"_Suffix
54   [NONE]              ;
54   [COMMENT_END]       //Calls the const char32_t * version
54   [NONE]              
56   [COMMENT_WHOLE]     /* Some stuff that should NOT be detected as a C++0x  user-defined literal */
56   [NONE]              
57   [NONE]              sscanf
57   [FUNC_CALL]         (
57   [NONE]              text
57   [NONE]              ,
57   [NONE]              "%"
57   [NONE]              SCNx64
57   [NONE]              ,
57   [NONE]              &
57   [NONE]              val
57   [FUNC_CALL]         )
57   [NONE]              ;
57   [NONE]              
58   [NONE]              printf
58   [FUNC_CALL]         (
58   [NONE]              "Val=%"
58   [NONE]              PRIx64
58   [NONE]              "\n"
58   [NONE]              ,
58   [NONE]              val
58   [FUNC_CALL]         )
58   [NONE]              ;
58   [NONE]              