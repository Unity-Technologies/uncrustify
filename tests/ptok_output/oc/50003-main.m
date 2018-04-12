Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <stdio.h>
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              import
2    [NONE]              "Fraction.h"
2    [NONE]              
4    [FUNC_DEF]          int
4    [NONE]              main
4    [FUNC_DEF]          (
4    [NONE]              int
4    [NONE]              argc
4    [NONE]              ,
4    [NONE]              const
4    [NONE]              char
4    [NONE]              *
4    [NONE]              argv
4    [NONE]              []
4    [FUNC_DEF]          )
4    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [COMMENT_WHOLE]     // create a new instance
5    [NONE]              
6    [NONE]              Fraction
6    [NONE]              *
6    [NONE]              frac
6    [NONE]              =
6    [OC_MSG]            [
6    [OC_MSG]            [
6    [NONE]              Fraction
6    [NONE]              alloc
6    [OC_MSG]            ]
6    [NONE]              init
6    [OC_MSG]            ]
6    [OC_MSG]            ;
6    [NONE]              
8    [COMMENT_WHOLE]     // set the values
8    [NONE]              
9    [OC_MSG]            [
9    [NONE]              frac
9    [NONE]              setNumerator
9    [NONE]              :
9    [NONE]              1
9    [OC_MSG]            ]
9    [OC_MSG]            ;
9    [NONE]              
10   [OC_MSG]            [
10   [NONE]              frac
10   [NONE]              setDenominator
10   [NONE]              :
10   [NONE]              3
10   [OC_MSG]            ]
10   [OC_MSG]            ;
10   [NONE]              
12   [COMMENT_WHOLE]     // print it
12   [NONE]              
13   [NONE]              printf
13   [FUNC_CALL]         (
13   [NONE]              "The fraction is: "
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [OC_MSG]            [
14   [NONE]              frac
14   [NONE]              print
14   [OC_MSG]            ]
14   [OC_MSG]            ;
14   [NONE]              
15   [NONE]              printf
15   [FUNC_CALL]         (
15   [NONE]              "\n"
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
17   [COMMENT_WHOLE]     // free memory
17   [NONE]              
18   [OC_MSG]            [
18   [NONE]              frac
18   [NONE]              release
18   [OC_MSG]            ]
18   [OC_MSG]            ;
18   [NONE]              
20   [NONE]              return
20   [NONE]              0
20   [NONE]              ;
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              