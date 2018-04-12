Line [Parent]            Text
1    [PP_UNDEF]          #
1    [NONE]              undef
1    [NONE]              dot
1    [NONE]              
2    [PP_UNDEF]          #
2    [NONE]              undef
2    [NONE]              cross
2    [NONE]              
4    [NONE]              extern
4    [EXTERN]            "C"
4    [EXTERN]            {
4    [NONE]              
5    [PP_INCLUDE]        #
5    [NONE]              include
5    [NONE]              "data_types.h"
5    [NONE]              
6    [EXTERN]            }
6    [NONE]              
7    [FUNC_PROTO]        vec_
7    [FUNC_PROTO]        operator
7    [OPERATOR]          +
7    [FUNC_PROTO]        (
7    [NONE]              const
7    [NONE]              vec_
7    [NONE]              &
7    [NONE]              ,
7    [NONE]              const
7    [NONE]              vec_
7    [NONE]              &
7    [FUNC_PROTO]        )
7    [FUNC_PROTO]        ;
7    [COMMENT_END]       /* v = v1 + v2   */
7    [NONE]              
8    [FUNC_PROTO]        vec_
8    [FUNC_PROTO]        operator
8    [OPERATOR]          -
8    [FUNC_PROTO]        (
8    [NONE]              const
8    [NONE]              vec_
8    [NONE]              &
8    [NONE]              ,
8    [NONE]              const
8    [NONE]              vec_
8    [NONE]              &
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [COMMENT_END]       /* v = v1 - v2    */
8    [NONE]              
9    [FUNC_PROTO]        mat_
9    [FUNC_PROTO]        operator
9    [OPERATOR]          +
9    [FUNC_PROTO]        (
9    [NONE]              const
9    [NONE]              mat_
9    [NONE]              &
9    [NONE]              ,
9    [NONE]              const
9    [NONE]              mat_
9    [NONE]              &
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [COMMENT_END]       /* m = m1 + m2    */
9    [NONE]              
10   [FUNC_PROTO]        mat_
10   [FUNC_PROTO]        operator
10   [OPERATOR]          -
10   [FUNC_PROTO]        (
10   [NONE]              const
10   [NONE]              mat_
10   [NONE]              &
10   [NONE]              ,
10   [NONE]              const
10   [NONE]              mat_
10   [NONE]              &
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [COMMENT_END]       /* m = m1 - m2    */
10   [NONE]              
11   [FUNC_PROTO]        vec_
11   [FUNC_PROTO]        &
11   [FUNC_PROTO]        operator
11   [OPERATOR]          +=
11   [FUNC_PROTO]        (
11   [NONE]              vec_
11   [NONE]              &
11   [NONE]              ,
11   [NONE]              const
11   [NONE]              vec_
11   [NONE]              &
11   [FUNC_PROTO]        )
11   [FUNC_PROTO]        ;
11   [COMMENT_END]       /* v += v2    */
11   [NONE]              
12   [FUNC_PROTO]        mat_
12   [FUNC_PROTO]        &
12   [FUNC_PROTO]        operator
12   [OPERATOR]          +=
12   [FUNC_PROTO]        (
12   [NONE]              mat_
12   [NONE]              &
12   [NONE]              ,
12   [NONE]              const
12   [NONE]              mat_
12   [NONE]              &
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        ;
12   [COMMENT_END]       /* m += m2    */
12   [NONE]              
13   [FUNC_PROTO]        vec_
13   [FUNC_PROTO]        &
13   [FUNC_PROTO]        operator
13   [OPERATOR]          -=
13   [FUNC_PROTO]        (
13   [NONE]              vec_
13   [NONE]              &
13   [NONE]              ,
13   [NONE]              const
13   [NONE]              vec_
13   [NONE]              &
13   [FUNC_PROTO]        )
13   [FUNC_PROTO]        ;
13   [COMMENT_END]       /* v -= v2    */
13   [NONE]              
14   [FUNC_PROTO]        mat_
14   [FUNC_PROTO]        &
14   [FUNC_PROTO]        operator
14   [OPERATOR]          -=
14   [FUNC_PROTO]        (
14   [NONE]              mat_
14   [NONE]              &
14   [NONE]              ,
14   [NONE]              const
14   [NONE]              mat_
14   [NONE]              &
14   [FUNC_PROTO]        )
14   [FUNC_PROTO]        ;
14   [COMMENT_END]       /* m -= m2    */
14   [NONE]              
15   [FUNC_PROTO]        vec_
15   [FUNC_PROTO]        operator
15   [OPERATOR]          *
15   [FUNC_PROTO]        (
15   [NONE]              double
15   [NONE]              ,
15   [NONE]              const
15   [NONE]              vec_
15   [NONE]              &
15   [FUNC_PROTO]        )
15   [FUNC_PROTO]        ;
15   [COMMENT_END]       /* v = a * v1     */
15   [NONE]              
16   [FUNC_PROTO]        mat_
16   [FUNC_PROTO]        operator
16   [OPERATOR]          *
16   [FUNC_PROTO]        (
16   [NONE]              double
16   [NONE]              ,
16   [NONE]              const
16   [NONE]              mat_
16   [NONE]              &
16   [FUNC_PROTO]        )
16   [FUNC_PROTO]        ;
16   [COMMENT_END]       /* m = a * m1     */
16   [NONE]              
17   [FUNC_PROTO]        vec_
17   [FUNC_PROTO]        operator
17   [OPERATOR]          *
17   [FUNC_PROTO]        (
17   [NONE]              const
17   [NONE]              vec_
17   [NONE]              &
17   [NONE]              ,
17   [NONE]              double
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [COMMENT_END]       /* v = v1 * a    */
17   [NONE]              
18   [FUNC_PROTO]        mat_
18   [FUNC_PROTO]        operator
18   [OPERATOR]          *
18   [FUNC_PROTO]        (
18   [NONE]              const
18   [NONE]              mat_
18   [NONE]              &
18   [NONE]              ,
18   [NONE]              double
18   [FUNC_PROTO]        )
18   [FUNC_PROTO]        ;
18   [COMMENT_END]       /* m = m1 * a    */
18   [NONE]              
19   [FUNC_PROTO]        vec_
19   [FUNC_PROTO]        operator
19   [OPERATOR]          /
19   [FUNC_PROTO]        (
19   [NONE]              const
19   [NONE]              vec_
19   [NONE]              &
19   [NONE]              ,
19   [NONE]              double
19   [FUNC_PROTO]        )
19   [FUNC_PROTO]        ;
19   [COMMENT_END]       /* v = v1 / a    */
19   [NONE]              
20   [FUNC_PROTO]        mat_
20   [FUNC_PROTO]        operator
20   [OPERATOR]          /
20   [FUNC_PROTO]        (
20   [NONE]              const
20   [NONE]              mat_
20   [NONE]              &
20   [NONE]              ,
20   [NONE]              double
20   [FUNC_PROTO]        )
20   [FUNC_PROTO]        ;
20   [COMMENT_END]       /* m = m1 / a  */
20   [NONE]              
21   [FUNC_PROTO]        vec_
21   [FUNC_PROTO]        operator
21   [OPERATOR]          *=
21   [FUNC_PROTO]        (
21   [NONE]              vec_
21   [NONE]              &
21   [NONE]              ,
21   [NONE]              const
21   [NONE]              double
21   [NONE]              a
21   [FUNC_PROTO]        )
21   [FUNC_PROTO]        ;
21   [COMMENT_END]       /* v *= a     */
21   [NONE]              
22   [FUNC_PROTO]        vec_
22   [FUNC_PROTO]        operator
22   [OPERATOR]          /=
22   [FUNC_PROTO]        (
22   [NONE]              vec_
22   [NONE]              &
22   [NONE]              ,
22   [NONE]              const
22   [NONE]              double
22   [NONE]              a
22   [FUNC_PROTO]        )
22   [FUNC_PROTO]        ;
22   [COMMENT_END]       /* v /= a       */
22   [NONE]              
23   [FUNC_PROTO]        vec_
23   [FUNC_PROTO]        operator
23   [OPERATOR]          *
23   [FUNC_PROTO]        (
23   [NONE]              const
23   [NONE]              mat_
23   [NONE]              &
23   [NONE]              ,
23   [NONE]              const
23   [NONE]              vec_
23   [NONE]              &
23   [FUNC_PROTO]        )
23   [FUNC_PROTO]        ;
23   [COMMENT_END]       /* v = m1 * v1  */
23   [NONE]              
24   [FUNC_PROTO]        mat_
24   [FUNC_PROTO]        operator
24   [OPERATOR]          *
24   [FUNC_PROTO]        (
24   [NONE]              const
24   [NONE]              mat_
24   [NONE]              &
24   [NONE]              ,
24   [NONE]              const
24   [NONE]              mat_
24   [NONE]              &
24   [FUNC_PROTO]        )
24   [FUNC_PROTO]        ;
24   [COMMENT_END]       /* m = m1 * m2  */
24   [NONE]              
25   [FUNC_PROTO]        quat_
25   [FUNC_PROTO]        operator
25   [OPERATOR]          *
25   [FUNC_PROTO]        (
25   [NONE]              const
25   [NONE]              quat_
25   [NONE]              &
25   [NONE]              ,
25   [NONE]              const
25   [NONE]              quat_
25   [NONE]              &
25   [FUNC_PROTO]        )
25   [FUNC_PROTO]        ;
25   [COMMENT_END]       /* q = q1 * q2  */
25   [NONE]              
26   [FUNC_PROTO]        quat_
26   [FUNC_PROTO]        operator
26   [OPERATOR]          *
26   [FUNC_PROTO]        (
26   [NONE]              double
26   [NONE]              ,
26   [NONE]              const
26   [NONE]              quat_
26   [NONE]              &
26   [FUNC_PROTO]        )
26   [FUNC_PROTO]        ;
26   [COMMENT_END]       /* q = a * q1  */
26   [NONE]              
27   [FUNC_PROTO]        quat_
27   [FUNC_PROTO]        operator
27   [OPERATOR]          *
27   [FUNC_PROTO]        (
27   [NONE]              const
27   [NONE]              quat_
27   [NONE]              &
27   [NONE]              ,
27   [NONE]              double
27   [FUNC_PROTO]        )
27   [FUNC_PROTO]        ;
27   [COMMENT_END]       /* q = q1 * a  */
27   [NONE]              
28   [FUNC_PROTO]        quat_
28   [FUNC_PROTO]        operator
28   [OPERATOR]          /
28   [FUNC_PROTO]        (
28   [NONE]              const
28   [NONE]              quat_
28   [NONE]              &
28   [NONE]              ,
28   [NONE]              double
28   [FUNC_PROTO]        )
28   [FUNC_PROTO]        ;
28   [COMMENT_END]       /* q = q1 / a  */
28   [NONE]              
29   [FUNC_PROTO]        vec_
29   [FUNC_PROTO]        operator
29   [OPERATOR]          -
29   [FUNC_PROTO]        (
29   [NONE]              const
29   [NONE]              vec_
29   [NONE]              &
29   [FUNC_PROTO]        )
29   [FUNC_PROTO]        ;
29   [COMMENT_END]       /* v = - v1    */
29   [NONE]              
30   [FUNC_PROTO]        vec_
30   [FUNC_PROTO]        operator
30   [OPERATOR]          +
30   [FUNC_PROTO]        (
30   [NONE]              const
30   [NONE]              vec_
30   [NONE]              &
30   [FUNC_PROTO]        )
30   [FUNC_PROTO]        ;
30   [COMMENT_END]       /* v = + v1    */
30   [NONE]              
31   [FUNC_PROTO]        mat_
31   [FUNC_PROTO]        operator
31   [OPERATOR]          -
31   [FUNC_PROTO]        (
31   [NONE]              const
31   [NONE]              mat_
31   [NONE]              &
31   [FUNC_PROTO]        )
31   [FUNC_PROTO]        ;
31   [COMMENT_END]       /* m = - m1    */
31   [NONE]              
32   [FUNC_PROTO]        mat_
32   [FUNC_PROTO]        operator
32   [OPERATOR]          +
32   [FUNC_PROTO]        (
32   [NONE]              const
32   [NONE]              mat_
32   [NONE]              &
32   [FUNC_PROTO]        )
32   [FUNC_PROTO]        ;
32   [COMMENT_END]       /* m = + m1    */
32   [NONE]              
33   [FUNC_PROTO]        quat_
33   [FUNC_PROTO]        operator
33   [OPERATOR]          +
33   [FUNC_PROTO]        (
33   [NONE]              const
33   [NONE]              quat_
33   [NONE]              &
33   [FUNC_PROTO]        )
33   [FUNC_PROTO]        ;
33   [COMMENT_END]       /* q = + q    */
33   [NONE]              
34   [FUNC_PROTO]        quat_
34   [FUNC_PROTO]        operator
34   [OPERATOR]          -
34   [FUNC_PROTO]        (
34   [NONE]              const
34   [NONE]              quat_
34   [NONE]              &
34   [FUNC_PROTO]        )
34   [FUNC_PROTO]        ;
34   [COMMENT_END]       /* q = - q    */
34   [NONE]              
35   [FUNC_PROTO]        quat_
35   [FUNC_PROTO]        &
35   [FUNC_PROTO]        operator
35   [OPERATOR]          *=
35   [FUNC_PROTO]        (
35   [NONE]              quat_
35   [NONE]              &
35   [NONE]              ,
35   [NONE]              const
35   [NONE]              quat_
35   [NONE]              &
35   [FUNC_PROTO]        )
35   [FUNC_PROTO]        ;
35   [COMMENT_END]       /* q1 *= q2;  */
35   [NONE]              
36   [FUNC_PROTO]        quat_
36   [FUNC_PROTO]        &
36   [FUNC_PROTO]        operator
36   [OPERATOR]          +=
36   [FUNC_PROTO]        (
36   [NONE]              quat_
36   [NONE]              &
36   [NONE]              ,
36   [NONE]              const
36   [NONE]              quat_
36   [NONE]              &
36   [FUNC_PROTO]        )
36   [FUNC_PROTO]        ;
36   [COMMENT_END]       /* q1 += q2;  */
36   [NONE]              
37   [FUNC_PROTO]        quat_
37   [FUNC_PROTO]        &
37   [FUNC_PROTO]        operator
37   [OPERATOR]          *=
37   [FUNC_PROTO]        (
37   [NONE]              quat_
37   [NONE]              &
37   [NONE]              ,
37   [NONE]              const
37   [NONE]              double
37   [NONE]              a
37   [FUNC_PROTO]        )
37   [FUNC_PROTO]        ;
37   [COMMENT_END]       /* q1 *= a;   */
37   [NONE]              
38   [FUNC_PROTO]        quat_
38   [FUNC_PROTO]        operator
38   [OPERATOR]          +
38   [FUNC_PROTO]        (
38   [NONE]              const
38   [NONE]              quat_
38   [NONE]              &
38   [NONE]              q1
38   [NONE]              ,
38   [NONE]              const
38   [NONE]              quat_
38   [NONE]              &
38   [NONE]              q2
38   [FUNC_PROTO]        )
38   [FUNC_PROTO]        ;
38   [COMMENT_END]       /* q3  = q1 + q2  */
38   [NONE]              
39   [FUNC_PROTO]        vec_
39   [NONE]              unit
39   [FUNC_PROTO]        (
39   [NONE]              const
39   [NONE]              vec_
39   [NONE]              &
39   [FUNC_PROTO]        )
39   [FUNC_PROTO]        ;
39   [COMMENT_END]       /* unitize vec    */
39   [NONE]              
40   [FUNC_PROTO]        quat_
40   [NONE]              unit
40   [FUNC_PROTO]        (
40   [NONE]              const
40   [NONE]              quat_
40   [NONE]              &
40   [FUNC_PROTO]        )
40   [FUNC_PROTO]        ;
40   [COMMENT_END]       /* unitize quat   */
40   [NONE]              
41   [FUNC_PROTO]        mat_
41   [NONE]              trans
41   [FUNC_PROTO]        (
41   [NONE]              const
41   [NONE]              mat_
41   [NONE]              &
41   [FUNC_PROTO]        )
41   [FUNC_PROTO]        ;
41   [COMMENT_END]       /* transpose matrix  */
41   [NONE]              
42   [FUNC_PROTO]        quat_
42   [NONE]              trans
42   [FUNC_PROTO]        (
42   [NONE]              const
42   [NONE]              quat_
42   [NONE]              &
42   [FUNC_PROTO]        )
42   [FUNC_PROTO]        ;
42   [COMMENT_END]       /* transpose quat   */
42   [NONE]              
43   [FUNC_PROTO]        double
43   [NONE]              dot
43   [FUNC_PROTO]        (
43   [NONE]              const
43   [NONE]              vec_
43   [NONE]              ,
43   [NONE]              const
43   [NONE]              vec_
43   [FUNC_PROTO]        )
43   [FUNC_PROTO]        ;
43   [COMMENT_END]       /* vector dot product  */
43   [NONE]              
44   [FUNC_PROTO]        vec_
44   [NONE]              cross
44   [FUNC_PROTO]        (
44   [NONE]              const
44   [NONE]              vec_
44   [NONE]              ,
44   [NONE]              const
44   [NONE]              vec_
44   [FUNC_PROTO]        )
44   [FUNC_PROTO]        ;
44   [COMMENT_END]       /* vector cross product  */
44   [NONE]              