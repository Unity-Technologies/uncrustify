Line [Parent]            Text
1    [NONE]              namespace
1    [NAMESPACE]         ns
1    [NAMESPACE]         {
1    [NONE]              
3    [NONE]              template
3    [TEMPLATE]          <
3    [NONE]              typename
3    [NONE]              T
3    [NONE]              ,
3    [NONE]              template
3    [TEMPLATE]          <
3    [NONE]              typename
3    [TEMPLATE]          >
3    [NONE]              class
3    [NONE]              TOtherClass
3    [TEMPLATE]          >
3    [NONE]              
3    [TEMPLATE]          class
3    [CLASS]             Example
3    [NONE]              
4    [CLASS]             {
4    [NONE]              
5    [NONE]              int
5    [NONE]              foo
5    [NONE]              ;
5    [NONE]              
6    [CLASS]             }
6    [NONE]              
8    [NAMESPACE]         }
8    [NONE]              
10   [NONE]              template
10   [TEMPLATE]          <
10   [NONE]              class
10   [NONE]              T
10   [TEMPLATE]          >
10   [NONE]              
10   [TEMPLATE]          class
10   [CLASS]             Example
10   [NONE]              
11   [CLASS]             {
11   [NONE]              
13   [FUNC_PROTO]        T
13   [NONE]              getValue
13   [FUNC_PROTO]        (
13   [FUNC_PROTO]        )
13   [NONE]              const
13   [FUNC_PROTO]        ;
13   [NONE]              
15   [COMMENT_WHOLE]     /** A pointer to a T returning function in the software environment */
15   [NONE]              
16   [FUNC_VAR]          T
16   [FUNC_VAR]          (
16   [NONE]              FunctionProvider
16   [NONE]              ::
16   [NONE]              *
16   [NONE]              pF
16   [FUNC_VAR]          )
16   [FUNC_PROTO]        (
16   [FUNC_PROTO]        )
16   [FUNC_VAR]          ;
16   [NONE]              
18   [CLASS]             }
18   [CLASS]             ;
18   [NONE]              
21   [PP_IF]             #
21   [NONE]              if
21   [NONE]              !
21   [NONE]              defined
21   [NONE]              (
21   [NONE]              EVERYTHING_OK
21   [NONE]              )
21   [NONE]              
22   [PP_OTHER]          #
22   [NONE]              error
22   [NONE]              Define EVERYTHING_OK if you would like to compile your code
22   [NONE]              \
23   [NONE]              or not if you would like to stop!
23   [NONE]              
24   [PP_ENDIF]          #
24   [NONE]              endif
24   [NONE]              
27   [NONE]              template
27   [TEMPLATE]          <
27   [NONE]              class
27   [NONE]              V
27   [TEMPLATE]          >
27   [NONE]              
28   [TEMPLATE]          class
28   [CLASS]             Example
28   [NONE]              
29   [CLASS]             {
29   [NONE]              
31   [NONE]              Vector2
31   [TEMPLATE]          <
31   [NONE]              V
31   [TEMPLATE]          >
31   [FUNC_CALL]         (
31   [FUNC_CALL]         )
32   [NONE]              :
31   [NONE]              
32   [NONE]              x
32   [FUNC_CALL]         (
32   [NONE]              1
32   [FUNC_CALL]         )
32   [NONE]              ,
32   [NONE]              
33   [NONE]              y
33   [FUNC_CALL]         (
33   [NONE]              1
33   [FUNC_CALL]         )
33   [NONE]              
34   [FUNC_CALL]         {
34   [FUNC_CALL]         }
34   [NONE]              
36   [NONE]              Vector2
36   [TEMPLATE]          <
36   [NONE]              double
36   [TEMPLATE]          >
36   [FUNC_CALL]         (
36   [FUNC_CALL]         )
37   [NONE]              :
36   [NONE]              
37   [NONE]              x
37   [FUNC_CALL]         (
37   [NONE]              1.0
37   [FUNC_CALL]         )
37   [NONE]              ,
37   [NONE]              
38   [NONE]              y
38   [FUNC_CALL]         (
38   [NONE]              1.0
38   [FUNC_CALL]         )
38   [NONE]              
39   [FUNC_CALL]         {
39   [FUNC_CALL]         }
39   [NONE]              
41   [NONE]              Vector2
41   [TEMPLATE]          <
41   [NONE]              float
41   [TEMPLATE]          >
41   [FUNC_CALL]         (
41   [FUNC_CALL]         )
42   [NONE]              :
41   [NONE]              
42   [NONE]              x
42   [FUNC_CALL]         (
42   [NONE]              1.0f
42   [FUNC_CALL]         )
42   [NONE]              ,
42   [NONE]              
43   [NONE]              y
43   [FUNC_CALL]         (
43   [NONE]              1.0f
43   [FUNC_CALL]         )
43   [NONE]              
44   [FUNC_CALL]         {
44   [FUNC_CALL]         }
44   [NONE]              
46   [NONE]              V
46   [NONE]              x
46   [NONE]              ;
46   [NONE]              
47   [NONE]              V
47   [NONE]              y
47   [NONE]              ;
47   [NONE]              
49   [CLASS]             }
49   [CLASS]             ;
49   [NONE]              