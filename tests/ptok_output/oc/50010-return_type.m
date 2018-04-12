Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/NSObject.h>
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              import
2    [NONE]              <stdio.h>
2    [NONE]              
4    [NONE]              @interface
4    [OC_INTF]           Fraction
4    [OC_CLASS]          :
4    [NONE]              NSObject
4    [NONE]              
4    [OC_CLASS]          {
4    [NONE]              
5    [NONE]              int
5    [NONE]              numerator
5    [NONE]              ;
5    [NONE]              
6    [NONE]              int
6    [NONE]              denominator
6    [NONE]              ;
6    [NONE]              
7    [OC_CLASS]          }
7    [NONE]              
8    [OC_MSG_SPEC]       -
8    [OC_MSG_SPEC]       (
8    [NONE]              void
8    [OC_MSG_SPEC]       )
8    [OC_MSG_SPEC]       print
8    [OC_MSG_SPEC]       ;
8    [NONE]              
9    [OC_MSG_SPEC]       -
9    [OC_MSG_SPEC]       (
9    [NONE]              void
9    [OC_MSG_SPEC]       )
9    [OC_MSG_SPEC]       setNumerator
9    [OC_MSG_SPEC]       :
9    [OC_MSG_SPEC]       (
9    [NONE]              int
9    [OC_MSG_SPEC]       )
9    [NONE]              d
9    [OC_MSG_SPEC]       ;
9    [NONE]              
10   [OC_MSG_SPEC]       -
10   [OC_MSG_SPEC]       (
10   [NONE]              void
10   [OC_MSG_SPEC]       )
10   [OC_MSG_SPEC]       setDenominator
10   [OC_MSG_SPEC]       :
10   [OC_MSG_SPEC]       (
10   [NONE]              int
10   [OC_MSG_SPEC]       )
10   [NONE]              d
10   [OC_MSG_SPEC]       ;
10   [NONE]              
11   [OC_MSG_SPEC]       -
11   [OC_MSG_SPEC]       (
11   [NONE]              int
11   [OC_MSG_SPEC]       )
11   [OC_MSG_SPEC]       numerator
11   [OC_MSG_SPEC]       ;
11   [NONE]              
12   [OC_MSG_SPEC]       -
12   [OC_MSG_SPEC]       (
12   [NONE]              int
12   [OC_MSG_SPEC]       )
12   [OC_MSG_SPEC]       denominator
12   [OC_MSG_SPEC]       ;
12   [NONE]              
13   [OC_MSG_SPEC]       -
13   [OC_MSG_SPEC]       (
13   [NONE]              void
13   [OC_MSG_SPEC]       )
13   [OC_MSG_SPEC]       setNumDen
13   [OC_MSG_SPEC]       :
13   [OC_MSG_SPEC]       (
13   [NONE]              int
13   [OC_MSG_SPEC]       )
13   [NONE]              n
13   [OC_MSG_SPEC]       :
13   [OC_MSG_SPEC]       (
13   [NONE]              int
13   [OC_MSG_SPEC]       )
13   [NONE]              d
13   [OC_MSG_SPEC]       ;
13   [NONE]              
14   [OC_INTF]           @end
14   [NONE]              
16   [NONE]              @implementation
16   [OC_IMPL]           Fraction
16   [NONE]              
17   [OC_MSG_DECL]       -
17   [OC_MSG_DECL]       (
17   [NONE]              void
17   [OC_MSG_DECL]       )
17   [OC_MSG_DECL]       print
17   [NONE]              
17   [OC_MSG_DECL]       {
17   [NONE]              
18   [NONE]              printf
18   [FUNC_CALL]         (
18   [NONE]              "%i/%i"
18   [NONE]              ,
18   [NONE]              numerator
18   [NONE]              ,
18   [NONE]              denominator
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [OC_MSG_DECL]       }
19   [NONE]              
21   [OC_MSG_DECL]       -
21   [OC_MSG_DECL]       (
21   [NONE]              void
21   [OC_MSG_DECL]       )
21   [OC_MSG_DECL]       setNumerator
21   [OC_MSG_DECL]       :
21   [OC_MSG_DECL]       (
21   [NONE]              int
21   [OC_MSG_DECL]       )
21   [NONE]              n
21   [NONE]              
21   [OC_MSG_DECL]       {
21   [NONE]              
22   [NONE]              numerator
22   [NONE]              =
22   [NONE]              n
22   [NONE]              ;
22   [NONE]              
23   [OC_MSG_DECL]       }
23   [NONE]              
25   [OC_MSG_DECL]       -
25   [OC_MSG_DECL]       (
25   [NONE]              void
25   [OC_MSG_DECL]       )
25   [OC_MSG_DECL]       setDenominator
25   [OC_MSG_DECL]       :
25   [OC_MSG_DECL]       (
25   [NONE]              int
25   [OC_MSG_DECL]       )
25   [NONE]              d
25   [NONE]              
25   [OC_MSG_DECL]       {
25   [NONE]              
26   [NONE]              denominator
26   [NONE]              =
26   [NONE]              d
26   [NONE]              ;
26   [NONE]              
27   [OC_MSG_DECL]       }
27   [NONE]              
29   [OC_MSG_DECL]       -
29   [OC_MSG_DECL]       (
29   [NONE]              int
29   [OC_MSG_DECL]       )
29   [OC_MSG_DECL]       denominator
29   [NONE]              
29   [OC_MSG_DECL]       {
29   [NONE]              
30   [NONE]              return
30   [RETURN]            (
30   [NONE]              denominator
30   [RETURN]            )
30   [NONE]              ;
30   [NONE]              
31   [OC_MSG_DECL]       }
31   [NONE]              
33   [OC_MSG_DECL]       -
33   [OC_MSG_DECL]       (
33   [NONE]              int
33   [OC_MSG_DECL]       )
33   [OC_MSG_DECL]       numerator
33   [NONE]              
33   [OC_MSG_DECL]       {
33   [NONE]              
34   [NONE]              return
34   [RETURN]            (
34   [NONE]              numerator
34   [RETURN]            )
34   [NONE]              ;
34   [NONE]              
35   [OC_MSG_DECL]       }
35   [NONE]              
36   [OC_IMPL]           @end
36   [NONE]              