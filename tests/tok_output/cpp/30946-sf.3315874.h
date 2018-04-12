Line [Token]             Text
1    [PREPROC]           #
1    [PP_UNDEF]          undef
1    [WORD]              dot
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_UNDEF]          undef
2    [WORD]              cross
2    [NEWLINE]           
4    [EXTERN]            extern
4    [STRING]            "C"
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_INCLUDE]        include
5    [PREPROC_BODY]      "data_types.h"
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [TYPE]              vec_
7    [OPERATOR]          operator
7    [FUNC_PROTO]        +
7    [FPAREN_OPEN]       (
7    [QUALIFIER]         const
7    [TYPE]              vec_
7    [BYREF]             &
7    [COMMA]             ,
7    [QUALIFIER]         const
7    [TYPE]              vec_
7    [BYREF]             &
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [COMMENT]           /* v = v1 + v2   */
7    [NEWLINE]           
8    [TYPE]              vec_
8    [OPERATOR]          operator
8    [FUNC_PROTO]        -
8    [FPAREN_OPEN]       (
8    [QUALIFIER]         const
8    [TYPE]              vec_
8    [BYREF]             &
8    [COMMA]             ,
8    [QUALIFIER]         const
8    [TYPE]              vec_
8    [BYREF]             &
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [COMMENT]           /* v = v1 - v2    */
8    [NEWLINE]           
9    [TYPE]              mat_
9    [OPERATOR]          operator
9    [FUNC_PROTO]        +
9    [FPAREN_OPEN]       (
9    [QUALIFIER]         const
9    [TYPE]              mat_
9    [BYREF]             &
9    [COMMA]             ,
9    [QUALIFIER]         const
9    [TYPE]              mat_
9    [BYREF]             &
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [COMMENT]           /* m = m1 + m2    */
9    [NEWLINE]           
10   [TYPE]              mat_
10   [OPERATOR]          operator
10   [FUNC_PROTO]        -
10   [FPAREN_OPEN]       (
10   [QUALIFIER]         const
10   [TYPE]              mat_
10   [BYREF]             &
10   [COMMA]             ,
10   [QUALIFIER]         const
10   [TYPE]              mat_
10   [BYREF]             &
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [COMMENT]           /* m = m1 - m2    */
10   [NEWLINE]           
11   [TYPE]              vec_
11   [BYREF]             &
11   [OPERATOR]          operator
11   [FUNC_PROTO]        +=
11   [FPAREN_OPEN]       (
11   [TYPE]              vec_
11   [BYREF]             &
11   [COMMA]             ,
11   [QUALIFIER]         const
11   [TYPE]              vec_
11   [BYREF]             &
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [COMMENT]           /* v += v2    */
11   [NEWLINE]           
12   [TYPE]              mat_
12   [BYREF]             &
12   [OPERATOR]          operator
12   [FUNC_PROTO]        +=
12   [FPAREN_OPEN]       (
12   [TYPE]              mat_
12   [BYREF]             &
12   [COMMA]             ,
12   [QUALIFIER]         const
12   [TYPE]              mat_
12   [BYREF]             &
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [COMMENT]           /* m += m2    */
12   [NEWLINE]           
13   [TYPE]              vec_
13   [BYREF]             &
13   [OPERATOR]          operator
13   [FUNC_PROTO]        -=
13   [FPAREN_OPEN]       (
13   [TYPE]              vec_
13   [BYREF]             &
13   [COMMA]             ,
13   [QUALIFIER]         const
13   [TYPE]              vec_
13   [BYREF]             &
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [COMMENT]           /* v -= v2    */
13   [NEWLINE]           
14   [TYPE]              mat_
14   [BYREF]             &
14   [OPERATOR]          operator
14   [FUNC_PROTO]        -=
14   [FPAREN_OPEN]       (
14   [TYPE]              mat_
14   [BYREF]             &
14   [COMMA]             ,
14   [QUALIFIER]         const
14   [TYPE]              mat_
14   [BYREF]             &
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [COMMENT]           /* m -= m2    */
14   [NEWLINE]           
15   [TYPE]              vec_
15   [OPERATOR]          operator
15   [FUNC_PROTO]        *
15   [FPAREN_OPEN]       (
15   [TYPE]              double
15   [COMMA]             ,
15   [QUALIFIER]         const
15   [TYPE]              vec_
15   [BYREF]             &
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [COMMENT]           /* v = a * v1     */
15   [NEWLINE]           
16   [TYPE]              mat_
16   [OPERATOR]          operator
16   [FUNC_PROTO]        *
16   [FPAREN_OPEN]       (
16   [TYPE]              double
16   [COMMA]             ,
16   [QUALIFIER]         const
16   [TYPE]              mat_
16   [BYREF]             &
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [COMMENT]           /* m = a * m1     */
16   [NEWLINE]           
17   [TYPE]              vec_
17   [OPERATOR]          operator
17   [FUNC_PROTO]        *
17   [FPAREN_OPEN]       (
17   [QUALIFIER]         const
17   [TYPE]              vec_
17   [BYREF]             &
17   [COMMA]             ,
17   [TYPE]              double
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [COMMENT]           /* v = v1 * a    */
17   [NEWLINE]           
18   [TYPE]              mat_
18   [OPERATOR]          operator
18   [FUNC_PROTO]        *
18   [FPAREN_OPEN]       (
18   [QUALIFIER]         const
18   [TYPE]              mat_
18   [BYREF]             &
18   [COMMA]             ,
18   [TYPE]              double
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [COMMENT]           /* m = m1 * a    */
18   [NEWLINE]           
19   [TYPE]              vec_
19   [OPERATOR]          operator
19   [FUNC_PROTO]        /
19   [FPAREN_OPEN]       (
19   [QUALIFIER]         const
19   [TYPE]              vec_
19   [BYREF]             &
19   [COMMA]             ,
19   [TYPE]              double
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [COMMENT]           /* v = v1 / a    */
19   [NEWLINE]           
20   [TYPE]              mat_
20   [OPERATOR]          operator
20   [FUNC_PROTO]        /
20   [FPAREN_OPEN]       (
20   [QUALIFIER]         const
20   [TYPE]              mat_
20   [BYREF]             &
20   [COMMA]             ,
20   [TYPE]              double
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [COMMENT]           /* m = m1 / a  */
20   [NEWLINE]           
21   [TYPE]              vec_
21   [OPERATOR]          operator
21   [FUNC_PROTO]        *=
21   [FPAREN_OPEN]       (
21   [TYPE]              vec_
21   [BYREF]             &
21   [COMMA]             ,
21   [QUALIFIER]         const
21   [TYPE]              double
21   [WORD]              a
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [COMMENT]           /* v *= a     */
21   [NEWLINE]           
22   [TYPE]              vec_
22   [OPERATOR]          operator
22   [FUNC_PROTO]        /=
22   [FPAREN_OPEN]       (
22   [TYPE]              vec_
22   [BYREF]             &
22   [COMMA]             ,
22   [QUALIFIER]         const
22   [TYPE]              double
22   [WORD]              a
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [COMMENT]           /* v /= a       */
22   [NEWLINE]           
23   [TYPE]              vec_
23   [OPERATOR]          operator
23   [FUNC_PROTO]        *
23   [FPAREN_OPEN]       (
23   [QUALIFIER]         const
23   [TYPE]              mat_
23   [BYREF]             &
23   [COMMA]             ,
23   [QUALIFIER]         const
23   [TYPE]              vec_
23   [BYREF]             &
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [COMMENT]           /* v = m1 * v1  */
23   [NEWLINE]           
24   [TYPE]              mat_
24   [OPERATOR]          operator
24   [FUNC_PROTO]        *
24   [FPAREN_OPEN]       (
24   [QUALIFIER]         const
24   [TYPE]              mat_
24   [BYREF]             &
24   [COMMA]             ,
24   [QUALIFIER]         const
24   [TYPE]              mat_
24   [BYREF]             &
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [COMMENT]           /* m = m1 * m2  */
24   [NEWLINE]           
25   [TYPE]              quat_
25   [OPERATOR]          operator
25   [FUNC_PROTO]        *
25   [FPAREN_OPEN]       (
25   [QUALIFIER]         const
25   [TYPE]              quat_
25   [BYREF]             &
25   [COMMA]             ,
25   [QUALIFIER]         const
25   [TYPE]              quat_
25   [BYREF]             &
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [COMMENT]           /* q = q1 * q2  */
25   [NEWLINE]           
26   [TYPE]              quat_
26   [OPERATOR]          operator
26   [FUNC_PROTO]        *
26   [FPAREN_OPEN]       (
26   [TYPE]              double
26   [COMMA]             ,
26   [QUALIFIER]         const
26   [TYPE]              quat_
26   [BYREF]             &
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [COMMENT]           /* q = a * q1  */
26   [NEWLINE]           
27   [TYPE]              quat_
27   [OPERATOR]          operator
27   [FUNC_PROTO]        *
27   [FPAREN_OPEN]       (
27   [QUALIFIER]         const
27   [TYPE]              quat_
27   [BYREF]             &
27   [COMMA]             ,
27   [TYPE]              double
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [COMMENT]           /* q = q1 * a  */
27   [NEWLINE]           
28   [TYPE]              quat_
28   [OPERATOR]          operator
28   [FUNC_PROTO]        /
28   [FPAREN_OPEN]       (
28   [QUALIFIER]         const
28   [TYPE]              quat_
28   [BYREF]             &
28   [COMMA]             ,
28   [TYPE]              double
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [COMMENT]           /* q = q1 / a  */
28   [NEWLINE]           
29   [TYPE]              vec_
29   [OPERATOR]          operator
29   [FUNC_PROTO]        -
29   [FPAREN_OPEN]       (
29   [QUALIFIER]         const
29   [TYPE]              vec_
29   [BYREF]             &
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [COMMENT]           /* v = - v1    */
29   [NEWLINE]           
30   [TYPE]              vec_
30   [OPERATOR]          operator
30   [FUNC_PROTO]        +
30   [FPAREN_OPEN]       (
30   [QUALIFIER]         const
30   [TYPE]              vec_
30   [BYREF]             &
30   [FPAREN_CLOSE]      )
30   [SEMICOLON]         ;
30   [COMMENT]           /* v = + v1    */
30   [NEWLINE]           
31   [TYPE]              mat_
31   [OPERATOR]          operator
31   [FUNC_PROTO]        -
31   [FPAREN_OPEN]       (
31   [QUALIFIER]         const
31   [TYPE]              mat_
31   [BYREF]             &
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [COMMENT]           /* m = - m1    */
31   [NEWLINE]           
32   [TYPE]              mat_
32   [OPERATOR]          operator
32   [FUNC_PROTO]        +
32   [FPAREN_OPEN]       (
32   [QUALIFIER]         const
32   [TYPE]              mat_
32   [BYREF]             &
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [COMMENT]           /* m = + m1    */
32   [NEWLINE]           
33   [TYPE]              quat_
33   [OPERATOR]          operator
33   [FUNC_PROTO]        +
33   [FPAREN_OPEN]       (
33   [QUALIFIER]         const
33   [TYPE]              quat_
33   [BYREF]             &
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [COMMENT]           /* q = + q    */
33   [NEWLINE]           
34   [TYPE]              quat_
34   [OPERATOR]          operator
34   [FUNC_PROTO]        -
34   [FPAREN_OPEN]       (
34   [QUALIFIER]         const
34   [TYPE]              quat_
34   [BYREF]             &
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [COMMENT]           /* q = - q    */
34   [NEWLINE]           
35   [TYPE]              quat_
35   [BYREF]             &
35   [OPERATOR]          operator
35   [FUNC_PROTO]        *=
35   [FPAREN_OPEN]       (
35   [TYPE]              quat_
35   [BYREF]             &
35   [COMMA]             ,
35   [QUALIFIER]         const
35   [TYPE]              quat_
35   [BYREF]             &
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [COMMENT]           /* q1 *= q2;  */
35   [NEWLINE]           
36   [TYPE]              quat_
36   [BYREF]             &
36   [OPERATOR]          operator
36   [FUNC_PROTO]        +=
36   [FPAREN_OPEN]       (
36   [TYPE]              quat_
36   [BYREF]             &
36   [COMMA]             ,
36   [QUALIFIER]         const
36   [TYPE]              quat_
36   [BYREF]             &
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [COMMENT]           /* q1 += q2;  */
36   [NEWLINE]           
37   [TYPE]              quat_
37   [BYREF]             &
37   [OPERATOR]          operator
37   [FUNC_PROTO]        *=
37   [FPAREN_OPEN]       (
37   [TYPE]              quat_
37   [BYREF]             &
37   [COMMA]             ,
37   [QUALIFIER]         const
37   [TYPE]              double
37   [WORD]              a
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [COMMENT]           /* q1 *= a;   */
37   [NEWLINE]           
38   [TYPE]              quat_
38   [OPERATOR]          operator
38   [FUNC_PROTO]        +
38   [FPAREN_OPEN]       (
38   [QUALIFIER]         const
38   [TYPE]              quat_
38   [BYREF]             &
38   [WORD]              q1
38   [COMMA]             ,
38   [QUALIFIER]         const
38   [TYPE]              quat_
38   [BYREF]             &
38   [WORD]              q2
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [COMMENT]           /* q3  = q1 + q2  */
38   [NEWLINE]           
39   [TYPE]              vec_
39   [FUNC_PROTO]        unit
39   [FPAREN_OPEN]       (
39   [QUALIFIER]         const
39   [TYPE]              vec_
39   [BYREF]             &
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [COMMENT]           /* unitize vec    */
39   [NEWLINE]           
40   [TYPE]              quat_
40   [FUNC_PROTO]        unit
40   [FPAREN_OPEN]       (
40   [QUALIFIER]         const
40   [TYPE]              quat_
40   [BYREF]             &
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [COMMENT]           /* unitize quat   */
40   [NEWLINE]           
41   [TYPE]              mat_
41   [FUNC_PROTO]        trans
41   [FPAREN_OPEN]       (
41   [QUALIFIER]         const
41   [TYPE]              mat_
41   [BYREF]             &
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [COMMENT]           /* transpose matrix  */
41   [NEWLINE]           
42   [TYPE]              quat_
42   [FUNC_PROTO]        trans
42   [FPAREN_OPEN]       (
42   [QUALIFIER]         const
42   [TYPE]              quat_
42   [BYREF]             &
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [COMMENT]           /* transpose quat   */
42   [NEWLINE]           
43   [TYPE]              double
43   [FUNC_PROTO]        dot
43   [FPAREN_OPEN]       (
43   [QUALIFIER]         const
43   [TYPE]              vec_
43   [COMMA]             ,
43   [QUALIFIER]         const
43   [TYPE]              vec_
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [COMMENT]           /* vector dot product  */
43   [NEWLINE]           
44   [TYPE]              vec_
44   [FUNC_PROTO]        cross
44   [FPAREN_OPEN]       (
44   [QUALIFIER]         const
44   [TYPE]              vec_
44   [COMMA]             ,
44   [QUALIFIER]         const
44   [TYPE]              vec_
44   [FPAREN_CLOSE]      )
44   [SEMICOLON]         ;
44   [COMMENT]           /* vector cross product  */
44   [NEWLINE]           