Line [Parent]            Text
1    [PP_DEFINE]         #
1    [NONE]              define
1    [NONE]              a
1    [NONE]              z
1    [NONE]              \
2    [NONE]              x
2    [NONE]              
4    [PP_DEFINE]         #
4    [NONE]              define
4    [NONE]              a
4    [MACRO_FUNC]        (
4    [NONE]              b
4    [MACRO_FUNC]        )
4    [NONE]              z
4    [NONE]              \
5    [NONE]              x
5    [NONE]              
7    [PP_DEFINE]         #
7    [NONE]              define
7    [NONE]              ab
7    [MACRO_FUNC]        (
7    [NONE]              b
7    [MACRO_FUNC]        )
7    [NONE]              z
7    [NONE]              \
8    [NONE]              x
8    [NONE]              
10   [PP_DEFINE]         #
10   [NONE]              define
10   [NONE]              abc
10   [MACRO_FUNC]        (
10   [NONE]              b
10   [MACRO_FUNC]        )
10   [NONE]              z
10   [NONE]              \
11   [NONE]              x
11   [NONE]              
13   [PP_DEFINE]         #
13   [NONE]              define
13   [NONE]              abcd
13   [MACRO_FUNC]        (
13   [NONE]              b
13   [MACRO_FUNC]        )
13   [NONE]              z
13   [NONE]              \
14   [NONE]              x
14   [NONE]              
17   [PP_IF]             #
17   [NONE]              if
17   [NONE]              FOO
17   [NONE]              
18   [PP_DEFINE]         #
18   [NONE]              define
18   [NONE]              D
18   [MACRO_FUNC]        (
18   [NONE]              a
18   [NONE]              ,
18   [NONE]              .
18   [C99_MEMBER]        .
18   [NONE]              .
18   [MACRO_FUNC]        )
18   [NONE]              B(FOO(a, __LINE__, __VA_ARGS__))
18   [NONE]              
19   [PP_DEFINE]         #
19   [NONE]              define
19   [NONE]              C
19   [MACRO_FUNC]        (
19   [NONE]              msg
19   [MACRO_FUNC]        )
19   [NONE]              \
20   [NONE]              PP_WRAP_CODE(
20   [NONE]              \
21   [NONE]              if (!msg)
21   [NONE]              \
22   [NONE]              {
22   [NONE]              \
23   [NONE]              BAR();
23   [NONE]              \
24   [NONE]              BARBAR();
24   [NONE]              \
25   [NONE]              BARBARBAR();
25   [NONE]              \
26   [NONE]              })
26   [NONE]              
27   [PP_ELSE]           #
27   [NONE]              else
27   [NONE]              
28   [PP_DEFINE]         #
28   [NONE]              define
28   [NONE]              C
28   [MACRO_FUNC]        (
28   [NONE]              msg
28   [NONE]              ,
28   [NONE]              .
28   [C99_MEMBER]        .
28   [NONE]              .
28   [MACRO_FUNC]        )
28   [NONE]              EMPTY
28   [NONE]              
29   [PP_ENDIF]          #
29   [NONE]              endif
29   [NONE]              