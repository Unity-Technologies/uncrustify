Line [Parent]            Text
1    [NONE]              
2    [NONE]              const
2    [NONE]              char
2    [NONE]              *
2    [NONE]              token_names
2    [NONE]              []
2    [NONE]              =
2    [NONE]              
3    [ASSIGN]            {
3    [NONE]              
4    [TSQUARE]           [
4    [NONE]              CT_POUND
4    [NONE]              ]
4    [NONE]              =
4    [NONE]              "POUND"
4    [NONE]              ,
4    [NONE]              
5    [TSQUARE]           [
5    [NONE]              CT_PREPROC
5    [NONE]              ]
5    [NONE]              =
5    [NONE]              "PREPROC"
5    [NONE]              ,
5    [NONE]              
6    [TSQUARE]           [
6    [NONE]              CT_PREPROC_BODY
6    [NONE]              ]
6    [NONE]              =
6    [NONE]              "PREPROC_BODY"
6    [NONE]              ,
6    [NONE]              
7    [TSQUARE]           [
7    [NONE]              CT_PP
7    [NONE]              ]
7    [NONE]              =
7    [NONE]              "PP"
7    [NONE]              ,
7    [NONE]              
8    [TSQUARE]           [
8    [NONE]              CT_ELIPSIS
8    [NONE]              ]
8    [NONE]              =
8    [NONE]              "ELIPSIS"
8    [NONE]              ,
8    [NONE]              
9    [TSQUARE]           [
9    [NONE]              CT_NAMESPACE
9    [NONE]              ]
9    [NONE]              =
9    [NONE]              "NAMESPACE"
9    [NONE]              ,
9    [NONE]              
10   [TSQUARE]           [
10   [NONE]              CT_NEW
10   [NONE]              ]
10   [NONE]              =
10   [NONE]              "NEW"
10   [NONE]              ,
10   [NONE]              
11   [TSQUARE]           [
11   [NONE]              CT_OPERATOR
11   [NONE]              ]
11   [NONE]              =
11   [NONE]              "OPERATOR"
11   [NONE]              ,
11   [NONE]              
12   [TSQUARE]           [
12   [NONE]              CT_THROW
12   [NONE]              ]
12   [NONE]              =
12   [NONE]              "THROW"
12   [NONE]              ,
12   [NONE]              
13   [TSQUARE]           [
13   [NONE]              CT_TRY
13   [NONE]              ]
13   [NONE]              =
13   [NONE]              "TRY"
13   [NONE]              ,
13   [NONE]              
14   [TSQUARE]           [
14   [NONE]              CT_USING
14   [NONE]              ]
14   [NONE]              =
14   [NONE]              "USING"
14   [NONE]              ,
14   [NONE]              
15   [TSQUARE]           [
15   [NONE]              CT_PAREN_OPEN
15   [NONE]              ]
15   [NONE]              =
15   [NONE]              "PAREN_OPEN"
15   [NONE]              ,
15   [NONE]              
16   [ASSIGN]            }
16   [NONE]              ;
16   [NONE]              
19   [FUNC_DEF]          int
19   [NONE]              main
19   [FUNC_DEF]          (
19   [NONE]              int
19   [NONE]              argc
19   [NONE]              ,
19   [NONE]              char
19   [NONE]              *
19   [NONE]              argv
19   [NONE]              []
19   [FUNC_DEF]          )
19   [NONE]              
20   [FUNC_DEF]          {
20   [NONE]              
21   [NONE]              struct
21   [STRUCT]            junk
21   [STRUCT]            a
21   [NONE]              []
21   [NONE]              =
21   [NONE]              
21   [ASSIGN]            {
21   [NONE]              
22   [NONE]              {
22   [NONE]              "version"
22   [NONE]              ,
22   [NONE]              0
22   [NONE]              ,
22   [NONE]              0
22   [NONE]              ,
22   [NONE]              0
22   [NONE]              }
22   [NONE]              ,
22   [NONE]              
23   [NONE]              {
23   [NONE]              "file"
23   [NONE]              ,
23   [NONE]              1
23   [NONE]              ,
23   [NONE]              150
23   [NONE]              ,
23   [NONE]              'f'
23   [NONE]              }
23   [NONE]              ,
23   [NONE]              
24   [NONE]              {
24   [NONE]              "config"
24   [NONE]              ,
24   [NONE]              1
24   [NONE]              ,
24   [NONE]              0
24   [NONE]              ,
24   [NONE]              'c'
24   [NONE]              }
24   [NONE]              ,
24   [NONE]              
25   [NONE]              {
25   [NONE]              "parsed"
25   [NONE]              ,
25   [NONE]              25
25   [NONE]              ,
25   [NONE]              0
25   [NONE]              ,
25   [NONE]              'p'
25   [NONE]              }
25   [NONE]              ,
25   [NONE]              
26   [NONE]              {
26   [NONE]              NULL
26   [NONE]              ,
26   [NONE]              0
26   [NONE]              ,
26   [NONE]              0
26   [NONE]              ,
26   [NONE]              0
26   [NONE]              }
26   [NONE]              
27   [ASSIGN]            }
27   [NONE]              ;
27   [NONE]              
28   [FUNC_DEF]          }
28   [NONE]              
30   [NONE]              color_t
30   [NONE]              colors
30   [NONE]              []
30   [NONE]              =
30   [NONE]              
30   [ASSIGN]            {
30   [NONE]              
31   [NONE]              {
31   [NONE]              "red"
31   [NONE]              ,
31   [NONE]              {
31   [NONE]              255
31   [NONE]              ,
31   [NONE]              0
31   [NONE]              ,
31   [NONE]              0
31   [NONE]              }
31   [NONE]              }
31   [NONE]              ,
31   [NONE]              {
31   [NONE]              "blue"
31   [NONE]              ,
31   [NONE]              {
31   [NONE]              0
31   [NONE]              ,
31   [NONE]              255
31   [NONE]              ,
31   [NONE]              0
31   [NONE]              }
31   [NONE]              }
31   [NONE]              ,
31   [NONE]              
32   [NONE]              {
32   [NONE]              "green"
32   [NONE]              ,
32   [NONE]              {
32   [NONE]              0
32   [NONE]              ,
32   [NONE]              0
32   [NONE]              ,
32   [NONE]              255
32   [NONE]              }
32   [NONE]              }
32   [NONE]              ,
32   [NONE]              {
32   [NONE]              "purple"
32   [NONE]              ,
32   [NONE]              {
32   [NONE]              255
32   [NONE]              ,
32   [NONE]              255
32   [NONE]              ,
32   [NONE]              0
32   [NONE]              }
32   [NONE]              }
32   [NONE]              ,
32   [NONE]              
33   [ASSIGN]            }
33   [NONE]              ;
33   [NONE]              
35   [NONE]              struct
35   [STRUCT]            foo_t
35   [STRUCT]            bar
35   [NONE]              =
35   [NONE]              
35   [ASSIGN]            {
35   [NONE]              
36   [NONE]              .
36   [C99_MEMBER]        name
36   [NONE]              =
36   [NONE]              "bar"
36   [NONE]              ,
36   [NONE]              
37   [NONE]              .
37   [C99_MEMBER]        age
37   [NONE]              =
37   [NONE]              21
37   [NONE]              
38   [ASSIGN]            }
38   [NONE]              ;
38   [NONE]              
42   [NONE]              struct
42   [STRUCT]            foo_t
42   [STRUCT]            bars
42   [NONE]              []
42   [NONE]              =
42   [NONE]              
42   [ASSIGN]            {
42   [NONE]              
43   [TSQUARE]           [
43   [NONE]              0
43   [NONE]              ]
43   [NONE]              =
43   [ASSIGN]            {
43   [NONE]              .
43   [C99_MEMBER]        name
43   [NONE]              =
43   [NONE]              "bar"
43   [NONE]              ,
43   [NONE]              
44   [NONE]              .
44   [C99_MEMBER]        age
44   [NONE]              =
44   [NONE]              21
44   [ASSIGN]            }
44   [NONE]              ,
44   [NONE]              
45   [TSQUARE]           [
45   [NONE]              1
45   [NONE]              ]
45   [NONE]              =
45   [ASSIGN]            {
45   [NONE]              .
45   [C99_MEMBER]        name
45   [NONE]              =
45   [NONE]              "barley"
45   [NONE]              ,
45   [NONE]              
46   [NONE]              .
46   [C99_MEMBER]        age
46   [NONE]              =
46   [NONE]              55
46   [ASSIGN]            }
46   [NONE]              ,
46   [NONE]              
47   [ASSIGN]            }
47   [NONE]              ;
47   [NONE]              