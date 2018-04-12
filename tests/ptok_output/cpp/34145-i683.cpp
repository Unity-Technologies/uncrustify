Line [Parent]            Text
1    [PP_DEFINE]         #
1    [NONE]              define
1    [NONE]              concat0
1    [MACRO_FUNC]        (
1    [NONE]              a0
1    [NONE]              ,
1    [NONE]              a1
1    [MACRO_FUNC]        )
1    [NONE]              a0
1    [NONE]              ??=??=
1    [NONE]              a1
1    [COMMENT_END]       // trigraph ##
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              concat1
2    [MACRO_FUNC]        (
2    [NONE]              a0
2    [NONE]              ,
2    [NONE]              a1
2    [MACRO_FUNC]        )
2    [NONE]              a0
2    [NONE]              %:%:
2    [NONE]              a1
2    [COMMENT_END]       // digraph ##
2    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              STRINGIFY0
5    [MACRO_FUNC]        (
5    [NONE]              s
5    [MACRO_FUNC]        )
5    [NONE]              ??=
5    [NONE]              s
5    [COMMENT_END]       // trigraph #
5    [NONE]              
6    [PP_DEFINE]         #
6    [NONE]              define
6    [NONE]              STRINGIFY1
6    [MACRO_FUNC]        (
6    [NONE]              s
6    [MACRO_FUNC]        )
6    [NONE]              %:
6    [NONE]              s
6    [COMMENT_END]       // digraph #
6    [NONE]              
8    [PP_DEFINE]         #
8    [NONE]              define
8    [NONE]              msg0
8    [MACRO_FUNC]        (
8    [NONE]              x
8    [MACRO_FUNC]        )
8    [NONE]              printf
8    [FUNC_CALL]         (
8    [NONE]              "%c: %d\n"
8    [NONE]              ,
8    [NONE]              ??=@
8    [NONE]              x
8    [NONE]              ,
8    [NONE]              x
8    [FUNC_CALL]         )
8    [COMMENT_END]       // trigraph #@
8    [NONE]              
9    [PP_DEFINE]         #
9    [NONE]              define
9    [NONE]              msg1
9    [MACRO_FUNC]        (
9    [NONE]              x
9    [MACRO_FUNC]        )
9    [NONE]              printf
9    [FUNC_CALL]         (
9    [NONE]              "%c: %d\n"
9    [NONE]              ,
9    [NONE]              %:@
9    [NONE]              x
9    [NONE]              ,
9    [NONE]              x
9    [FUNC_CALL]         )
9    [COMMENT_END]       // digraph #@
9    [NONE]              
11   [COMMENT_WHOLE]     // trigraph {
11   [NONE]              
12   [FUNC_DEF]          void
12   [NONE]              x
12   [FUNC_DEF]          (
12   [FUNC_DEF]          )
12   [NONE]              
12   [FUNC_DEF]          ??<
12   [NONE]              
14   [COMMENT_WHOLE]     // trigraph []
14   [NONE]              
15   [NONE]              char
15   [NONE]              a
15   [NONE]              ??(??)
15   [NONE]              =
15   [NONE]              "a"
15   [NONE]              ;
15   [NONE]              
16   [COMMENT_WHOLE]     // diigraph []
16   [NONE]              
17   [NONE]              char
17   [NONE]              b
17   [NONE]              <::>
17   [NONE]              =
17   [NONE]              "b"
17   [NONE]              ;
17   [NONE]              
19   [NONE]              bool
19   [NONE]              f
19   [NONE]              ,
19   [NONE]              g
19   [NONE]              ,
19   [NONE]              h
19   [NONE]              ;
19   [NONE]              
20   [NONE]              f
20   [NONE]              =
20   [NONE]              g
20   [NONE]              =
20   [NONE]              h
20   [NONE]              =
20   [NONE]              true
20   [NONE]              ;
20   [NONE]              
22   [COMMENT_WHOLE]     // trigraph ||
22   [NONE]              
23   [NONE]              f
23   [NONE]              =
23   [NONE]              g
23   [NONE]              ??!??!
23   [NONE]              h
23   [NONE]              ;
23   [NONE]              
24   [COMMENT_WHOLE]     // trigraph |=
24   [NONE]              
25   [NONE]              f
25   [NONE]              ??!=
25   [NONE]              g
25   [NONE]              ;
25   [NONE]              
26   [COMMENT_WHOLE]     // trigraph |
26   [NONE]              
27   [NONE]              f
27   [NONE]              =
27   [NONE]              g
27   [NONE]              ??!
27   [NONE]              h
27   [NONE]              ;
27   [NONE]              
28   [COMMENT_WHOLE]     // trigraph ^=
28   [NONE]              
29   [NONE]              f
29   [NONE]              ??'=
29   [NONE]              g
29   [NONE]              ;
29   [NONE]              
30   [COMMENT_WHOLE]     // trigraph ^
30   [NONE]              
31   [NONE]              f
31   [NONE]              =
31   [NONE]              g
31   [NONE]              ??'
31   [NONE]              h
31   [NONE]              ;
31   [NONE]              
33   [COMMENT_WHOLE]     // trigraph [, ]
33   [NONE]              
34   [NONE]              int
34   [NONE]              m
34   [NONE]              ??(
34   [NONE]              5
34   [NONE]              ??)
34   [NONE]              ;
34   [NONE]              
35   [COMMENT_WHOLE]     // digraph [, ]
35   [NONE]              
36   [NONE]              int
36   [NONE]              n
36   [NONE]              <:
36   [NONE]              5
36   [NONE]              :>
36   [NONE]              ;
36   [NONE]              
38   [COMMENT_WHOLE]     // trigraph }
38   [NONE]              
39   [NONE]              return
39   [NONE]              ;
39   [NONE]              
39   [FUNC_DEF]          ??>
39   [NONE]              
41   [COMMENT_WHOLE]     // digraph {, }
41   [NONE]              
42   [FUNC_DEF]          int
42   [NONE]              y
42   [FUNC_DEF]          (
42   [FUNC_DEF]          )
42   [NONE]              
42   [FUNC_DEF]          <%
42   [NONE]              
42   [NONE]              return
42   [NONE]              1
42   [NONE]              ;
42   [NONE]              
42   [FUNC_DEF]          %>