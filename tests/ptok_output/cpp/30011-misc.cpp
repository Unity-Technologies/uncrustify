Line [Parent]            Text
1    [NONE]              
2    [COMMENT_WHOLE]     /* Not detected as a prototype? Spacing wrong. */
2    [NONE]              
3    [FUNC_PROTO]        static
3    [FUNC_PROTO]        struct
3    [FUNC_PROTO]        my_entry
3    [FUNC_PROTO]        *
3    [NONE]              get_first_entry
3    [FUNC_PROTO]        (
3    [NONE]              const
3    [NONE]              CHAR
3    [NONE]              *
3    [NONE]              blah
3    [FUNC_PROTO]        )
3    [FUNC_PROTO]        ;
3    [NONE]              
4    [FUNC_PROTO]        static
4    [FUNC_PROTO]        CFooo
4    [FUNC_PROTO]        ::
4    [FUNC_PROTO]        entry
4    [FUNC_PROTO]        *
4    [NONE]              get_next_entry
4    [FUNC_PROTO]        (
4    [NONE]              const
4    [NONE]              CHAR
4    [NONE]              *
4    [NONE]              blah
4    [FUNC_PROTO]        )
4    [FUNC_PROTO]        ;
4    [NONE]              
5    [FUNC_PROTO]        static
5    [FUNC_PROTO]        struct
5    [FUNC_PROTO]        my_entry
5    [FUNC_PROTO]        *
5    [NONE]              get_next_entry
5    [FUNC_PROTO]        (
5    [NONE]              const
5    [NONE]              CHAR
5    [NONE]              *
5    [NONE]              blah
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [NONE]              
7    [COMMENT_WHOLE]     /* Not handling prototype params: */
7    [NONE]              
8    [NONE]              typedef
8    [FUNC_TYPE]         void
8    [FUNC_TYPE]         (
8    [NONE]              *
8    [TYPEDEF]           function_name
8    [FUNC_TYPE]         )
8    [FUNC_PROTO]        (
8    [NONE]              my_t
8    [NONE]              *
8    [NONE]              p_my
8    [NONE]              ,
8    [NONE]              int
8    [NONE]              foo
8    [FUNC_PROTO]        )
8    [TYPEDEF]           ;
8    [NONE]              
9    [NONE]              typedef
9    [FUNC_TYPE]         void
9    [FUNC_TYPE]         (
9    [NONE]              *
9    [TYPEDEF]           function_name
9    [FUNC_TYPE]         )
9    [FUNC_PROTO]        (
9    [NONE]              my_t
9    [NONE]              *
9    [NONE]              ,
9    [NONE]              int
9    [FUNC_PROTO]        )
9    [TYPEDEF]           ;
9    [NONE]              
11   [NONE]              typedef
11   [NONE]              enum
11   [NONE]              
12   [ENUM]              {
12   [NONE]              
13   [NONE]              one
13   [NONE]              =
13   [NONE]              1
13   [NONE]              ,
13   [NONE]              
14   [NONE]              three
14   [NONE]              =
14   [NONE]              3
14   [NONE]              ,
14   [NONE]              
15   [NONE]              five_hundred
15   [NONE]              =
15   [NONE]              5
15   [NONE]              ,
15   [NONE]              
16   [NONE]              a_really_really_big_number
16   [NONE]              =
16   [NONE]              6
16   [NONE]              ,
16   [NONE]              
17   [NONE]              two
17   [NONE]              =
17   [NONE]              7
17   [NONE]              ,
17   [NONE]              
18   [NONE]              a_really_really_really_big_number
18   [NONE]              =
18   [NONE]              8
18   [NONE]              ,
18   [NONE]              
19   [ENUM]              }
19   [NONE]              yuck_t
19   [TYPEDEF]           ;
19   [NONE]              
21   [NONE]              const
21   [NONE]              char
21   [NONE]              *
21   [NONE]              names
21   [NONE]              []
21   [NONE]              =
21   [NONE]              
22   [BRACED_INIT_LIST]    {
22   [NONE]              
23   [NONE]              one
23   [NONE]              =
23   [NONE]              "one"
23   [NONE]              ,
23   [NONE]              
24   [NONE]              three
24   [NONE]              =
24   [NONE]              "three"
24   [NONE]              ,
24   [NONE]              
25   [NONE]              five_hundred
25   [NONE]              =
25   [NONE]              "five_hundred"
25   [NONE]              ,
25   [NONE]              
26   [NONE]              a_really_really_big_number
26   [NONE]              =
26   [NONE]              "a_really_really_big_number"
26   [NONE]              ,
26   [NONE]              
27   [NONE]              two
27   [NONE]              =
27   [NONE]              "two"
27   [NONE]              ,
27   [NONE]              
28   [NONE]              a_really_really_really_big_number
28   [NONE]              =
28   [NONE]              "a_really_really_really_big_number"
28   [NONE]              ,
28   [NONE]              
29   [BRACED_INIT_LIST]    }
29   [NONE]              ;
29   [NONE]              
31   [FUNC_DEF]          bool
31   [NONE]              foo
31   [FUNC_DEF]          (
31   [NONE]              char
31   [NONE]              c
31   [FUNC_DEF]          )
31   [NONE]              
32   [FUNC_DEF]          {
32   [NONE]              
33   [NONE]              xWindow
33   [NONE]              *
33   [NONE]              pWindow
33   [NONE]              =
33   [NONE]              ::
33   [NONE]              RelatedWindow
33   [FUNC_CALL]         (
33   [FUNC_CALL]         )
33   [NONE]              ;
33   [NONE]              
35   [COMMENT_WHOLE]     /* space between ] and ( */
35   [NONE]              
36   [NONE]              function_list
36   [NONE]              [
36   [NONE]              idx
36   [NONE]              ]
36   [NONE]              (
36   [NONE]              param
36   [NONE]              )
36   [NONE]              ;
36   [NONE]              
38   [COMMENT_WHOLE]     /* Indenting with multiple members: */
38   [NONE]              
39   [NONE]              sass
39   [NONE]              .
39   [NONE]              asdfvas
39   [NONE]              ->
39   [NONE]              asdfasd
39   [NONE]              [
39   [NONE]              asdfasdf
39   [NONE]              ]
39   [NONE]              .
39   [NONE]              
40   [NONE]              asdfasdf
40   [NONE]              =
40   [NONE]              5
40   [NONE]              ;
40   [NONE]              
42   [NONE]              ::
42   [NONE]              asdasda
42   [NONE]              ::
42   [NONE]              adasd
42   [NONE]              ::
42   [NONE]              
43   [NONE]              asdfasdf
43   [NONE]              =
43   [NONE]              5
43   [NONE]              ;
43   [NONE]              
45   [NONE]              dookie
45   [NONE]              ::
45   [NONE]              wookie
45   [NONE]              <<
45   [NONE]              "asd"
45   [NONE]              
46   [NONE]              <<
46   [NONE]              "bag"
46   [NONE]              
47   [NONE]              <<
47   [NONE]              "sag"
47   [NONE]              ;
47   [NONE]              
49   [NONE]              sp_sign
49   [NONE]              =
49   [NONE]              4
49   [NONE]              -
49   [NONE]              -
49   [NONE]              5
49   [NONE]              ;
49   [NONE]              
50   [NONE]              sp_sign
50   [NONE]              =
50   [NONE]              -
50   [NONE]              sp_sign
50   [NONE]              ;
50   [NONE]              
51   [NONE]              sp_sign
51   [NONE]              =
51   [NONE]              4
51   [NONE]              +
51   [NONE]              +
51   [NONE]              7
51   [NONE]              ;
51   [NONE]              
52   [NONE]              sp_sign
52   [NONE]              =
52   [NONE]              +
52   [NONE]              sp_sign
52   [NONE]              ;
52   [NONE]              
53   [NONE]              sp_sign
53   [NONE]              =
53   [NONE]              4
53   [NONE]              +
53   [NONE]              +
53   [NONE]              sp_sign
53   [NONE]              ;
53   [NONE]              
54   [FUNC_DEF]          }
54   [NONE]              
56   [PP_IF]             #
56   [NONE]              ifndef
56   [NONE]              abc
56   [NONE]              
58   [PP_DEFINE]         #
58   [NONE]              define
58   [NONE]              abc
58   [NONE]              123
58   [COMMENT_END]       /* some comment */
58   [NONE]              
60   [PP_ENDIF]          #
60   [NONE]              endif
60   [COMMENT_END]       /* another comment␤