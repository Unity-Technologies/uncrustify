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
8    [COMMENT_WHOLE]     /* The 'u8', 'u', and 'U' prefixes */
8    [NONE]              
9    [NONE]              const
9    [NONE]              char
9    [NONE]              *
9    [NONE]              s1
9    [NONE]              =
9    [NONE]              u8"I'm a UTF-8 string."
9    [NONE]              ;
9    [NONE]              
10   [NONE]              const
10   [NONE]              char16_t
10   [NONE]              *
10   [NONE]              s2
10   [NONE]              =
10   [NONE]              u"This is a UTF-16 string."
10   [NONE]              ;
10   [NONE]              
11   [NONE]              const
11   [NONE]              char32_t
11   [NONE]              *
11   [NONE]              s3
11   [NONE]              =
11   [NONE]              U"This is a UTF-32 string."
11   [NONE]              ;
11   [NONE]              
13   [NONE]              const
13   [NONE]              char
13   [NONE]              c1
13   [NONE]              =
13   [NONE]              u8'1'
13   [NONE]              ;
13   [NONE]              
14   [NONE]              const
14   [NONE]              char16_t
14   [NONE]              c2
14   [NONE]              =
14   [NONE]              u'2'
14   [NONE]              ;
14   [NONE]              
15   [NONE]              const
15   [NONE]              char32_t
15   [NONE]              c3
15   [NONE]              =
15   [NONE]              U'4'
15   [NONE]              ;
15   [NONE]              
16   [NONE]              const
16   [NONE]              wchar_t
16   [NONE]              c4
16   [NONE]              =
16   [NONE]              L'w'
16   [NONE]              ;
16   [NONE]              
17   [NONE]              const
17   [NONE]              char16_t
17   [NONE]              u
17   [NONE]              =
17   [NONE]              u'\u007f'
17   [NONE]              ;
17   [NONE]              
19   [NONE]              OutputType
19   [NONE]              some_variable
19   [NONE]              =
19   [NONE]              "1234"_Suffix
19   [NONE]              ;
19   [COMMENT_END]       //Calls the const char * version
19   [NONE]              
20   [NONE]              OutputType
20   [NONE]              some_variable
20   [NONE]              =
20   [NONE]              u8"1234"_Suffix
20   [NONE]              ;
20   [COMMENT_END]       //Calls the const char * version
20   [NONE]              
21   [NONE]              OutputType
21   [NONE]              some_variable
21   [NONE]              =
21   [NONE]              L"1234"_Suffix
21   [NONE]              ;
21   [COMMENT_END]       //Calls the const wchar_t * version
21   [NONE]              
22   [NONE]              OutputType
22   [NONE]              some_variable
22   [NONE]              =
22   [NONE]              u"1234"_Suffix
22   [NONE]              ;
22   [COMMENT_END]       //Calls the const char16_t * version
22   [NONE]              
23   [NONE]              OutputType
23   [NONE]              some_variable
23   [NONE]              =
23   [NONE]              U"1234"_Suffix
23   [NONE]              ;
23   [COMMENT_END]       //Calls the const char32_t * version