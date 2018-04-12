Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [PAREN_OPEN]        (
3    [WORD]              a
3    [COMPARE]           !=
3    [NUMBER]            0
3    [PAREN_CLOSE]       )
3    [BOOL]              &&
3    [NEWLINE]           
4    [PAREN_OPEN]        (
4    [WORD]              b
4    [COMPARE]           ==
4    [NUMBER]            0
4    [PAREN_CLOSE]       )
4    [BOOL]              &&
4    [NEWLINE]           
5    [PAREN_OPEN]        (
5    [WORD]              c
5    [COMPARE]           <
5    [NUMBER]            0
5    [PAREN_CLOSE]       )
5    [BOOL]              &&
5    [PAREN_OPEN]        (
5    [WORD]              d
5    [COMPARE]           >
5    [NUMBER]            0
5    [PAREN_CLOSE]       )
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL]         printf
7    [FPAREN_OPEN]       (
7    [STRING]            "hi"
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              flag1
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_IF]             ifdef
11   [WORD]              FLAG2
11   [NEWLINE]           
12   [BOOL]              ||
12   [WORD]              flag2
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_ENDIF]          endif
13   [NEWLINE]           
14   [SPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [FUNC_CALL]         printf
16   [FPAREN_OPEN]       (
16   [STRING]            "yar"
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [WORD]              flag1
19   [BOOL]              &&
19   [NEWLINE]           
20   [PREPROC]           #
20   [PP_IF]             ifdef
20   [TYPE]              FLAG2
20   [NEWLINE]           
21   [WORD]              flag2
21   [BOOL]              &&
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_ENDIF]          endif
22   [NEWLINE]           
23   [WORD]              flag3
23   [SPAREN_CLOSE]      )
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [FUNC_CALL]         printf
25   [FPAREN_OPEN]       (
25   [STRING]            "bo"
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
28   [IF]                if
28   [SPAREN_OPEN]       (
28   [PAREN_OPEN]        (
28   [WORD]              a
28   [COMPARE]           !=
28   [NUMBER]            0
28   [PAREN_CLOSE]       )
29   [BOOL]              &&
28   [NEWLINE]           
29   [PAREN_OPEN]        (
29   [WORD]              b
29   [COMPARE]           ==
29   [NUMBER]            0
29   [PAREN_CLOSE]       )
30   [BOOL]              &&
29   [NEWLINE]           
30   [PAREN_OPEN]        (
30   [WORD]              c
30   [COMPARE]           <
30   [NUMBER]            0
30   [PAREN_CLOSE]       )
30   [SPAREN_CLOSE]      )
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [FUNC_CALL]         printf
32   [FPAREN_OPEN]       (
32   [STRING]            "hi"
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           
35   [IF]                if
35   [SPAREN_OPEN]       (
35   [PAREN_OPEN]        (
35   [WORD]              a
35   [COMPARE]           !=
35   [NUMBER]            0
35   [PAREN_CLOSE]       )
35   [NEWLINE]           
36   [BOOL]              &&
36   [NEWLINE]           
37   [PAREN_OPEN]        (
37   [WORD]              b
37   [COMPARE]           ==
37   [NUMBER]            0
37   [PAREN_CLOSE]       )
37   [NEWLINE]           
38   [BOOL]              &&
38   [NEWLINE]           
39   [PAREN_OPEN]        (
39   [WORD]              c
39   [COMPARE]           <
39   [NUMBER]            0
39   [PAREN_CLOSE]       )
39   [SPAREN_CLOSE]      )
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [FUNC_CALL]         printf
41   [FPAREN_OPEN]       (
41   [STRING]            "hi"
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
44   [IF]                if
44   [SPAREN_OPEN]       (
44   [NOT]               !
44   [WORD]              this
44   [MEMBER]            ->
44   [FUNC_CALL]         writeOwiFile
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [BOOL]              ||
44   [COMMENT_CPP]       // comment1
44   [NEWLINE]           
45   [FUNC_CALL]         broken
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [BOOL]              ||
45   [NOT]               !
45   [FUNC_CALL]         saveArchiveData
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
46   [BOOL]              ||
45   [COMMENT]           /* comment2 */
45   [NEWLINE]           
46   [FUNC_CALL]         broken
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [BOOL]              ||
46   [NOT]               !
46   [FUNC_CALL]         deleteCentralArchive
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
47   [BOOL]              ||
46   [COMMENT_CPP]       // comment3
46   [NEWLINE]           
47   [FUNC_CALL]         broken
47   [FPAREN_OPEN]       (
47   [FPAREN_CLOSE]      )
47   [BOOL]              ||
47   [NOT]               !
47   [FUNC_CALL]         copyArchivFiles
47   [FPAREN_OPEN]       (
47   [FPAREN_CLOSE]      )
48   [BOOL]              ||
47   [COMMENT_CPP]       // comment4
47   [NEWLINE]           
48   [FUNC_CALL]         broken
48   [FPAREN_OPEN]       (
48   [FPAREN_CLOSE]      )
48   [BOOL]              ||
48   [NOT]               !
48   [FUNC_CALL]         appendToPlanetDb
48   [FPAREN_OPEN]       (
48   [FPAREN_CLOSE]      )
48   [SPAREN_CLOSE]      )
48   [COMMENT_CPP]       // comment5
48   [NEWLINE]           
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [BRACE_CLOSE]       }
51   [NEWLINE]           
53   [FUNC_CALL]         foobar
53   [FPAREN_OPEN]       (
53   [WORD]              param1
53   [COMMA]             ,
53   [NEWLINE]           
54   [WORD]              param2
54   [COMMA]             ,
54   [WORD]              param3
54   [COMMA]             ,
54   [NEWLINE]           
55   [WORD]              param4
55   [FPAREN_CLOSE]      )
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [FUNC_CALL]         foobar2
57   [FPAREN_OPEN]       (
57   [WORD]              param1
58   [COMMA]             ,
57   [NEWLINE]           
58   [WORD]              param2
58   [COMMA]             ,
58   [WORD]              param3
59   [COMMA]             ,
58   [NEWLINE]           
59   [WORD]              param4
59   [FPAREN_CLOSE]      )
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [BRACE_CLOSE]       }
60   [NEWLINE]           