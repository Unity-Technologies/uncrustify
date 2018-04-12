Line [Parent]            Text
1    [PP_IF]             #
1    [NONE]              ifndef
1    [NONE]              NL_CLASS_H_INCLUDED
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              NL_CLASS_H_INCLUDED
2    [NONE]              
4    [PP_INCLUDE]        #
4    [NONE]              include
4    [NONE]              <string>
4    [NONE]              
6    [NONE]              namespace
6    [NAMESPACE]         example
6    [NAMESPACE]         {
6    [NONE]              
8    [NONE]              class
8    [CLASS]             IStreamable
8    [NONE]              ;
8    [NONE]              
9    [NONE]              class
9    [CLASS]             InStream
9    [NONE]              ;
9    [NONE]              
10   [NONE]              class
10   [CLASS]             OutStream
10   [NONE]              ;
10   [NONE]              
12   [COMMENT_WHOLE]     /**␤ * Timestamp is a timestamp with nanosecond resolution.␤ */
14   [NONE]              
15   [NONE]              class
15   [CLASS]             Inher
15   [NONE]              
16   [NONE]              :
16   [NONE]              public
16   [NONE]              IStreamable
17   [CLASS]             {
17   [NONE]              
19   [NONE]              public
19   [NONE]              :
19   [NONE]              
20   [NONE]              Inher
20   [FUNC_CLASS_PROTO]    (
20   [FUNC_CLASS_PROTO]    )
20   [FUNC_CLASS_PROTO]    ;
20   [NONE]              
21   [NONE]              virtual
21   [NONE]              ~
21   [DESTRUCTOR]        Inher
21   [FUNC_CLASS_PROTO]    (
21   [FUNC_CLASS_PROTO]    )
21   [FUNC_CLASS_PROTO]    ;
21   [NONE]              
23   [CLASS]             }
23   [CLASS]             ;
23   [NONE]              
25   [COMMENT_WHOLE]     /**␤ * Timestamp is a timestamp with nanosecond resolution.␤ */
27   [NONE]              
28   [NONE]              class
28   [CLASS]             Inher2
28   [NONE]              
29   [NONE]              :
29   [NONE]              public
29   [NONE]              IStreamable
29   [CLASS]             {
29   [NONE]              
31   [NONE]              public
31   [NONE]              :
31   [NONE]              
33   [NONE]              Inher2
33   [FUNC_CLASS_PROTO]    (
33   [FUNC_CLASS_PROTO]    )
33   [FUNC_CLASS_PROTO]    ;
33   [NONE]              
34   [NONE]              Inher2
34   [FUNC_CLASS_PROTO]    (
34   [NONE]              long
34   [NONE]              sec
34   [NONE]              ,
34   [NONE]              unsigned
34   [NONE]              long
34   [NONE]              nsec
34   [FUNC_CLASS_PROTO]    )
34   [FUNC_CLASS_PROTO]    ;
34   [NONE]              
36   [CLASS]             }
36   [CLASS]             ;
36   [NONE]              
38   [NONE]              class
38   [CLASS]             Simple
38   [CLASS]             {
38   [NONE]              
40   [NONE]              public
40   [NONE]              :
40   [NONE]              
42   [NONE]              Simple
42   [FUNC_CLASS_PROTO]    (
42   [FUNC_CLASS_PROTO]    )
42   [FUNC_CLASS_PROTO]    ;
42   [NONE]              
43   [NONE]              virtual
43   [NONE]              ~
43   [DESTRUCTOR]        Simple
43   [FUNC_CLASS_PROTO]    (
43   [FUNC_CLASS_PROTO]    )
43   [FUNC_CLASS_PROTO]    ;
43   [NONE]              
45   [CLASS]             }
45   [CLASS]             ;
45   [NONE]              
47   [NONE]              class
47   [CLASS]             Simple2
48   [CLASS]             {
48   [NONE]              
50   [NONE]              public
50   [NONE]              :
50   [NONE]              
52   [NONE]              Simple2
52   [FUNC_CLASS_PROTO]    (
52   [FUNC_CLASS_PROTO]    )
52   [FUNC_CLASS_PROTO]    ;
52   [NONE]              
53   [NONE]              virtual
53   [NONE]              ~
53   [DESTRUCTOR]        Simple2
53   [FUNC_CLASS_PROTO]    (
53   [FUNC_CLASS_PROTO]    )
53   [FUNC_CLASS_PROTO]    ;
53   [NONE]              
55   [CLASS]             }
55   [CLASS]             ;
55   [NONE]              
57   [NAMESPACE]         }
57   [COMMENT_END]       // namespace
57   [NONE]              
59   [PP_ENDIF]          #
59   [NONE]              endif
59   [COMMENT_END]       // NL_CLASS_H_INCLUDED
59   [NONE]              