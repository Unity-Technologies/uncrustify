Line [Token]             Text
1    [NEWLINE]           
2    [QUALIFIER]         static
2    [TYPE]              int
2    [FUNC_PROTO]        short_function_name
2    [FPAREN_OPEN]       (
2    [STRUCT]            struct
2    [TYPE]              device
2    [PTR_TYPE]          *
2    [WORD]              dev
2    [COMMA]             ,
2    [NEWLINE]           
2    [STRUCT]            struct
2    [TYPE]              device_driver
2    [PTR_TYPE]          *
2    [WORD]              drv
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [COMMENT]           /* Assuming a 60-column limit */
4    [NEWLINE]           
5    [QUALIFIER]         static
5    [TYPE]              int
5    [FUNC_DEF]          short_function_name
5    [FPAREN_OPEN]       (
5    [STRUCT]            struct
5    [TYPE]              device
5    [PTR_TYPE]          *
5    [WORD]              dev
5    [COMMA]             ,
5    [NEWLINE]           
5    [STRUCT]            struct
5    [TYPE]              device_driver
5    [PTR_TYPE]          *
5    [WORD]              drv
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              this
7    [MEMBER]            ->
7    [FUNC_CALL]         translateLabels
7    [FPAREN_OPEN]       (
7    [WORD]              labelID
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              completedLabelID
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              selectedLabelID
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              text
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              selectedText
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              completedText
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              fontId
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              selectedFontId
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              completedFontId
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              call_some_really_long_function
8    [MEMBER]            .
8    [FUNC_CALL]         of_some_sort
8    [FPAREN_OPEN]       (
8    [NEWLINE]           
8    [WORD]              some_long_parameter1
8    [COMMA]             ,
8    [NEWLINE]           
8    [WORD]              some_long_parameter2
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [WORD]              abc
10   [ASSIGN]            =
10   [WORD]              call_some_other_really_long_function
10   [MEMBER]            .
10   [FUNC_CALL]         of_some_sort
10   [FPAREN_OPEN]       (
10   [NEWLINE]           
10   [WORD]              some_long_parameter1
10   [COMMA]             ,
10   [NEWLINE]           
10   [WORD]              some_long_parameter2
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [TYPE]              abc
12   [MEMBER]            .
12   [TYPE]              def
12   [MEMBER]            .
12   [WORD]              ghi
12   [ASSIGN]            =
12   [NEWLINE]           
12   [WORD]              call_some_other_really_long_function
12   [MEMBER]            .
12   [FUNC_CALL]         of_some_sort
12   [FPAREN_OPEN]       (
12   [NEWLINE]           
12   [WORD]              some_long_parameter1
12   [COMMA]             ,
12   [NEWLINE]           
12   [WORD]              some_long_parameter2
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [WORD]              abcdefghijklmnopqrstuvwxyz
14   [ASSIGN]            =
14   [WORD]              abc
14   [ARITH]             +
14   [WORD]              def
14   [ARITH]             +
14   [WORD]              ghi
14   [ARITH]             +
14   [WORD]              jkl
14   [ARITH]             +
14   [NEWLINE]           
14   [WORD]              mno
14   [ARITH]             +
14   [WORD]              prq
14   [ARITH]             +
14   [WORD]              stu
14   [ARITH]             +
14   [WORD]              vwx
14   [ARITH]             +
14   [WORD]              yz
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [RETURN]            return
16   [NUMBER]            1
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [TYPEDEF]           typedef
19   [NEWLINE]           
19   [TYPE]              xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
19   [NEWLINE]           
19   [TYPE]              yyyyyyyyyyyyyyyyyyyyyy
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [TYPEDEF]           typedef
21   [TYPE]              some_return_value
21   [TPAREN_OPEN]       (
21   [PTR_TYPE]          *
21   [TYPE]              some_function_type
21   [TPAREN_CLOSE]      )
21   [FPAREN_OPEN]       (
21   [TYPE]              another_type
21   [NEWLINE]           
21   [WORD]              parameter1
21   [COMMA]             ,
21   [NEWLINE]           
21   [TYPE]              another_type
21   [NEWLINE]           
21   [WORD]              parameter2
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [TYPEDEF]           typedef
23   [STRUCT]            struct
23   [NEWLINE]           
23   [TYPE]              xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [TYPE]              int
25   [WORD]              yyyyyyyyyyyyyyyyyyyyyy
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [TYPE]              x_t
26   [SEMICOLON]         ;
26   [NEWLINE]           
28   [QUALIFIER]         static
28   [TYPE]              void
28   [FUNC_DEF]          some_really_long_function_name
28   [FPAREN_OPEN]       (
28   [NEWLINE]           
28   [STRUCT]            struct
28   [TYPE]              device
28   [PTR_TYPE]          *
28   [WORD]              dev
28   [COMMA]             ,
28   [NEWLINE]           
28   [STRUCT]            struct
28   [TYPE]              device_driver
28   [PTR_TYPE]          *
28   [WORD]              drv
28   [FPAREN_CLOSE]      )
28   [NEWLINE]           
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [IF]                if
30   [SPAREN_OPEN]       (
30   [PAREN_OPEN]        (
30   [WORD]              some_variable_name
30   [BOOL]              &&
30   [NEWLINE]           
30   [FUNC_CALL]         somefunction
30   [FPAREN_OPEN]       (
30   [WORD]              param1
30   [COMMA]             ,
30   [WORD]              param2
30   [COMMA]             ,
30   [WORD]              param3
30   [FPAREN_CLOSE]      )
30   [PAREN_CLOSE]       )
30   [SPAREN_CLOSE]      )
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [WORD]              asdfghjk
32   [ASSIGN]            =
32   [WORD]              asdfasdfasd
32   [MEMBER]            .
32   [WORD]              aasdfasd
32   [ARITH]             +
32   [NEWLINE]           
32   [PAREN_OPEN]        (
32   [WORD]              asdfasd
32   [MEMBER]            .
32   [WORD]              asdas
32   [ARITH]             *
32   [NUMBER_FP]         1234.65
32   [PAREN_CLOSE]       )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           
35   [FOR]               for
35   [SPAREN_OPEN]       (
35   [STRUCT]            struct
35   [TYPE]              something_really_really_excessive
35   [PTR_TYPE]          *
35   [NEWLINE]           
35   [WORD]              a_long_ptr_name
35   [ASSIGN]            =
35   [FUNC_CALL]         get_first_item
35   [FPAREN_OPEN]       (
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
35   [WORD]              a_long_ptr_name
35   [COMPARE]           !=
35   [WORD]              NULL
35   [SEMICOLON]         ;
35   [NEWLINE]           
35   [WORD]              a_long_ptr_name
35   [ASSIGN]            =
35   [FUNC_CALL]         get_next_item
35   [FPAREN_OPEN]       (
35   [WORD]              a_long_ptr_name
35   [FPAREN_CLOSE]      )
35   [SPAREN_CLOSE]      )
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [FOR]               for
39   [SPAREN_OPEN]       (
39   [WORD]              a
39   [ASSIGN]            =
39   [FUNC_CALL]         get_first
39   [FPAREN_OPEN]       (
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [WORD]              a
39   [COMPARE]           !=
39   [WORD]              NULL
39   [SEMICOLON]         ;
39   [WORD]              a
39   [ASSIGN]            =
39   [FUNC_CALL]         get_next
39   [FPAREN_OPEN]       (
39   [WORD]              a
39   [FPAREN_CLOSE]      )
39   [SPAREN_CLOSE]      )
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [NEWLINE]           
43   [FOR]               for
43   [SPAREN_OPEN]       (
43   [WORD]              a_ptr
43   [ASSIGN]            =
43   [FUNC_CALL]         get_first
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [WORD]              a_ptr
43   [COMPARE]           !=
43   [WORD]              NULL
43   [SEMICOLON]         ;
43   [NEWLINE]           
43   [WORD]              a_ptr
43   [ASSIGN]            =
43   [FUNC_CALL]         get_next
43   [FPAREN_OPEN]       (
43   [WORD]              a
43   [FPAREN_CLOSE]      )
43   [SPAREN_CLOSE]      )
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
47   [FUNC_CALL]         register_clcmd
47   [FPAREN_OPEN]       (
47   [STRING]            "examine"
47   [COMMA]             ,
47   [NEWLINE]           
47   [STRING]            "do_examine"
47   [COMMA]             ,
47   [NEWLINE]           
47   [NEG]               -
47   [NUMBER]            1
47   [COMMA]             ,
47   [NEWLINE]           
47   [STRING]            "-Allows a player to examine the health and armor of a teammate"
47   [FPAREN_CLOSE]      )
47   [SEMICOLON]         ;
47   [NEWLINE]           
48   [FUNC_CALL]         register_clcmd
48   [FPAREN_OPEN]       (
48   [STRING]            "/examine"
48   [COMMA]             ,
48   [NEWLINE]           
48   [STRING]            "do_examine"
48   [COMMA]             ,
48   [NEWLINE]           
48   [NEG]               -
48   [NUMBER]            1
48   [COMMA]             ,
48   [NEWLINE]           
49   [STRING]            "-Allows a player to examine the health and armor of a teammate"
49   [FPAREN_CLOSE]      )
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [NEWLINE]           