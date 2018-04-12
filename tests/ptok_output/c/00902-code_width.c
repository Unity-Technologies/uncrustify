Line [Parent]            Text
1    [NONE]              
2    [FUNC_PROTO]        static
2    [FUNC_PROTO]        int
2    [NONE]              short_function_name
2    [FUNC_PROTO]        (
2    [NONE]              struct
2    [STRUCT]            device
2    [STRUCT]            *
2    [NONE]              dev
2    [NONE]              ,
2    [NONE]              
2    [NONE]              struct
2    [NONE]              device_driver
2    [STRUCT]            *
2    [NONE]              drv
2    [FUNC_PROTO]        )
2    [FUNC_PROTO]        ;
2    [NONE]              
4    [COMMENT_WHOLE]     /* Assuming a 60-column limit */
4    [NONE]              
5    [FUNC_DEF]          static
5    [FUNC_DEF]          int
5    [NONE]              short_function_name
5    [FUNC_DEF]          (
5    [NONE]              struct
5    [STRUCT]            device
5    [STRUCT]            *
5    [NONE]              dev
5    [NONE]              ,
5    [NONE]              
5    [NONE]              struct
5    [NONE]              device_driver
5    [STRUCT]            *
5    [NONE]              drv
5    [FUNC_DEF]          )
5    [NONE]              
6    [FUNC_DEF]          {
6    [NONE]              
7    [NONE]              this
7    [NONE]              ->
7    [NONE]              translateLabels
7    [FUNC_CALL]         (
7    [NONE]              labelID
7    [NONE]              ,
7    [NONE]              completedLabelID
7    [NONE]              ,
7    [NONE]              
7    [NONE]              selectedLabelID
7    [NONE]              ,
7    [NONE]              text
7    [NONE]              ,
7    [NONE]              
7    [NONE]              selectedText
7    [NONE]              ,
7    [NONE]              completedText
7    [NONE]              ,
7    [NONE]              
7    [NONE]              fontId
7    [NONE]              ,
7    [NONE]              selectedFontId
7    [NONE]              ,
7    [NONE]              
7    [NONE]              completedFontId
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [NONE]              call_some_really_long_function
8    [NONE]              .
8    [NONE]              of_some_sort
8    [FUNC_CALL]         (
8    [NONE]              
8    [NONE]              some_long_parameter1
8    [NONE]              ,
8    [NONE]              some_long_parameter2
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
10   [NONE]              abc
10   [NONE]              =
10   [NONE]              call_some_other_really_long_function
10   [NONE]              .
10   [NONE]              of_some_sort
10   [FUNC_CALL]         (
10   [NONE]              
10   [NONE]              some_long_parameter1
10   [NONE]              ,
10   [NONE]              some_long_parameter2
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
12   [NONE]              abc
12   [NONE]              .
12   [NONE]              def
12   [NONE]              .
12   [NONE]              ghi
12   [NONE]              =
12   [NONE]              
12   [NONE]              call_some_other_really_long_function
12   [NONE]              .
12   [NONE]              of_some_sort
12   [FUNC_CALL]         (
12   [NONE]              
12   [NONE]              some_long_parameter1
12   [NONE]              ,
12   [NONE]              some_long_parameter2
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
14   [NONE]              abcdefghijklmnopqrstuvwxyz
14   [NONE]              =
14   [NONE]              abc
14   [NONE]              +
14   [NONE]              def
14   [NONE]              +
14   [NONE]              ghi
14   [NONE]              +
14   [NONE]              jkl
14   [NONE]              +
14   [NONE]              
14   [NONE]              mno
14   [NONE]              +
14   [NONE]              prq
14   [NONE]              +
14   [NONE]              stu
14   [NONE]              +
14   [NONE]              vwx
14   [NONE]              +
14   [NONE]              yz
14   [NONE]              ;
14   [NONE]              
16   [NONE]              return
16   [NONE]              1
16   [NONE]              ;
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
19   [NONE]              typedef
19   [NONE]              
19   [NONE]              xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
19   [NONE]              
19   [NONE]              yyyyyyyyyyyyyyyyyyyyyy
19   [TYPEDEF]           ;
19   [NONE]              
21   [NONE]              typedef
21   [FUNC_TYPE]         some_return_value
21   [FUNC_TYPE]         (
21   [NONE]              *
21   [TYPEDEF]           some_function_type
21   [FUNC_TYPE]         )
21   [FUNC_PROTO]        (
21   [NONE]              another_type
21   [NONE]              
21   [NONE]              parameter1
21   [NONE]              ,
21   [NONE]              
21   [NONE]              another_type
21   [NONE]              
21   [NONE]              parameter2
21   [FUNC_PROTO]        )
21   [TYPEDEF]           ;
21   [NONE]              
23   [NONE]              typedef
23   [NONE]              struct
23   [NONE]              
23   [NONE]              xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
23   [NONE]              
24   [STRUCT]            {
24   [NONE]              
25   [NONE]              int
25   [NONE]              yyyyyyyyyyyyyyyyyyyyyy
25   [NONE]              ;
25   [NONE]              
26   [STRUCT]            }
26   [NONE]              x_t
26   [TYPEDEF]           ;
26   [NONE]              
28   [FUNC_DEF]          static
28   [FUNC_DEF]          void
28   [NONE]              some_really_long_function_name
28   [FUNC_DEF]          (
28   [NONE]              
28   [NONE]              struct
28   [STRUCT]            device
28   [STRUCT]            *
28   [NONE]              dev
28   [NONE]              ,
28   [NONE]              struct
28   [NONE]              device_driver
28   [STRUCT]            *
28   [NONE]              drv
28   [FUNC_DEF]          )
28   [NONE]              
29   [FUNC_DEF]          {
29   [NONE]              
30   [NONE]              if
30   [IF]                (
30   [NONE]              (
30   [NONE]              some_variable_name
30   [NONE]              &&
30   [NONE]              
30   [NONE]              somefunction
30   [FUNC_CALL]         (
30   [NONE]              param1
30   [NONE]              ,
30   [NONE]              param2
30   [NONE]              ,
30   [NONE]              param3
30   [FUNC_CALL]         )
30   [NONE]              )
30   [IF]                )
31   [IF]                {
31   [NONE]              
32   [NONE]              asdfghjk
32   [NONE]              =
32   [NONE]              asdfasdfasd
32   [NONE]              .
32   [NONE]              aasdfasd
32   [NONE]              +
32   [NONE]              
32   [NONE]              (
32   [NONE]              asdfasd
32   [NONE]              .
32   [NONE]              asdas
32   [NONE]              *
32   [NONE]              1234.65
32   [NONE]              )
32   [NONE]              ;
32   [NONE]              
33   [IF]                }
33   [NONE]              
35   [NONE]              for
35   [FOR]               (
35   [NONE]              struct
35   [STRUCT]            something_really_really_excessive
35   [STRUCT]            *
35   [NONE]              
35   [NONE]              a_long_ptr_name
35   [NONE]              =
35   [NONE]              get_first_item
35   [FUNC_CALL]         (
35   [FUNC_CALL]         )
35   [FOR]               ;
35   [NONE]              
35   [NONE]              a_long_ptr_name
35   [NONE]              !=
35   [NONE]              NULL
35   [FOR]               ;
35   [NONE]              
35   [NONE]              a_long_ptr_name
35   [NONE]              =
35   [NONE]              get_next_item
35   [FUNC_CALL]         (
35   [NONE]              a_long_ptr_name
35   [FUNC_CALL]         )
35   [FOR]               )
35   [NONE]              
36   [FOR]               {
36   [NONE]              
37   [FOR]               }
37   [NONE]              
39   [NONE]              for
39   [FOR]               (
39   [NONE]              a
39   [NONE]              =
39   [NONE]              get_first
39   [FUNC_CALL]         (
39   [FUNC_CALL]         )
39   [FOR]               ;
39   [NONE]              a
39   [NONE]              !=
39   [NONE]              NULL
39   [FOR]               ;
39   [NONE]              a
39   [NONE]              =
39   [NONE]              get_next
39   [FUNC_CALL]         (
39   [NONE]              a
39   [FUNC_CALL]         )
39   [FOR]               )
39   [NONE]              
40   [FOR]               {
40   [NONE]              
41   [FOR]               }
41   [NONE]              
43   [NONE]              for
43   [FOR]               (
43   [NONE]              a_ptr
43   [NONE]              =
43   [NONE]              get_first
43   [FUNC_CALL]         (
43   [FUNC_CALL]         )
43   [FOR]               ;
43   [NONE]              
43   [NONE]              a_ptr
43   [NONE]              !=
43   [NONE]              NULL
43   [FOR]               ;
43   [NONE]              
43   [NONE]              a_ptr
43   [NONE]              =
43   [NONE]              get_next
43   [FUNC_CALL]         (
43   [NONE]              a
43   [FUNC_CALL]         )
43   [FOR]               )
43   [NONE]              
44   [FOR]               {
44   [NONE]              
45   [FOR]               }
45   [NONE]              
47   [NONE]              register_clcmd
47   [FUNC_CALL]         (
47   [NONE]              "examine"
47   [NONE]              ,
47   [NONE]              "do_examine"
47   [NONE]              ,
47   [NONE]              -
47   [NONE]              1
47   [NONE]              ,
47   [NONE]              
47   [NONE]              "-Allows a player to examine the health and armor of a teammate"
47   [FUNC_CALL]         )
47   [NONE]              ;
47   [NONE]              
48   [NONE]              register_clcmd
48   [FUNC_CALL]         (
48   [NONE]              "/examine"
48   [NONE]              ,
48   [NONE]              "do_examine"
48   [NONE]              ,
48   [NONE]              -
48   [NONE]              1
48   [NONE]              ,
48   [NONE]              
49   [NONE]              "-Allows a player to examine the health and armor of a teammate"
49   [FUNC_CALL]         )
49   [NONE]              ;
49   [NONE]              
50   [FUNC_DEF]          }
50   [NONE]              