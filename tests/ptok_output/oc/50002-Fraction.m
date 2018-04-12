Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              "Fraction.h"
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              import
2    [NONE]              <stdio.h>
2    [NONE]              
4    [NONE]              @implementation
4    [OC_IMPL]           Fraction
4    [NONE]              
5    [OC_MSG_DECL]       -
5    [OC_MSG_DECL]       (
5    [NONE]              void
5    [OC_MSG_DECL]       )
5    [OC_MSG_DECL]       print
5    [NONE]              
5    [OC_MSG_DECL]       {
5    [NONE]              
6    [NONE]              printf
6    [FUNC_CALL]         (
6    [NONE]              "%i/%i"
6    [NONE]              ,
6    [NONE]              numerator
6    [NONE]              ,
6    [NONE]              denominator
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [OC_MSG_DECL]       }
7    [NONE]              
9    [OC_MSG_DECL]       -
9    [OC_MSG_DECL]       (
9    [NONE]              void
9    [OC_MSG_DECL]       )
9    [OC_MSG_DECL]       setNumerator
9    [OC_MSG_DECL]       :
9    [OC_MSG_DECL]       (
9    [NONE]              int
9    [OC_MSG_DECL]       )
9    [NONE]              n
9    [NONE]              
9    [OC_MSG_DECL]       {
9    [NONE]              
10   [NONE]              numerator
10   [NONE]              =
10   [NONE]              n
10   [NONE]              ;
10   [NONE]              
11   [OC_MSG_DECL]       }
11   [NONE]              
13   [OC_MSG_DECL]       -
13   [OC_MSG_DECL]       (
13   [NONE]              void
13   [OC_MSG_DECL]       )
13   [OC_MSG_DECL]       setDenominator
13   [OC_MSG_DECL]       :
13   [OC_MSG_DECL]       (
13   [NONE]              int
13   [OC_MSG_DECL]       )
13   [NONE]              d
13   [NONE]              
13   [OC_MSG_DECL]       {
13   [NONE]              
14   [NONE]              denominator
14   [NONE]              =
14   [NONE]              d
14   [NONE]              ;
14   [NONE]              
15   [OC_MSG_DECL]       }
15   [NONE]              
17   [OC_MSG_DECL]       -
17   [OC_MSG_DECL]       (
17   [NONE]              int
17   [OC_MSG_DECL]       )
17   [OC_MSG_DECL]       denominator
17   [NONE]              
17   [OC_MSG_DECL]       {
17   [NONE]              
18   [NONE]              return
18   [NONE]              denominator
18   [NONE]              ;
18   [NONE]              
19   [OC_MSG_DECL]       }
19   [NONE]              
21   [OC_MSG_DECL]       -
21   [OC_MSG_DECL]       (
21   [NONE]              int
21   [OC_MSG_DECL]       )
21   [OC_MSG_DECL]       numerator
21   [NONE]              
21   [OC_MSG_DECL]       {
21   [NONE]              
22   [NONE]              return
22   [NONE]              numerator
22   [NONE]              ;
22   [NONE]              
23   [OC_MSG_DECL]       }
23   [NONE]              
24   [OC_IMPL]           @end
24   [NONE]              