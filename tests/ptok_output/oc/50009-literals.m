Line [Parent]            Text
1    [NONE]              
2    [NONE]              NSDictionary
2    [NONE]              *
2    [NONE]              dictionary
2    [NONE]              =
2    [NONE]              @
2    [OC_AT]             {
2    [NONE]              
2    [NONE]              @0
2    [NONE]              :
2    [NONE]              @"red"
2    [NONE]              ,
2    [NONE]              @1
2    [NONE]              :
2    [NONE]              @"green"
2    [NONE]              ,
2    [NONE]              @2
2    [NONE]              :
2    [NONE]              @"blue"
2    [NONE]              
2    [OC_AT]             }
2    [NONE]              ;
2    [NONE]              
4    [NONE]              NSArray
4    [NONE]              *
4    [NONE]              array
4    [NONE]              =
4    [NONE]              @
4    [OC_AT]             [
4    [NONE]              @0
4    [NONE]              ,
4    [NONE]              @1
4    [NONE]              ,
4    [NONE]              @2
4    [NONE]              ,
4    [NONE]              @YES
4    [NONE]              ,
4    [NONE]              @'Z'
4    [NONE]              ,
4    [NONE]              @42U
4    [OC_AT]             ]
4    [NONE]              ;
4    [NONE]              
6    [NONE]              NSArray
6    [NONE]              *
6    [NONE]              multilineArray
6    [NONE]              =
6    [NONE]              @
6    [OC_AT]             [
6    [NONE]              
7    [NONE]              @0
7    [NONE]              ,
7    [NONE]              @1
7    [NONE]              ,
7    [NONE]              @2
7    [NONE]              ,
7    [NONE]              @YES
7    [NONE]              ,
7    [NONE]              
8    [NONE]              @'Z'
8    [NONE]              ,
8    [NONE]              @42U
8    [NONE]              
9    [OC_AT]             ]
9    [NONE]              ;
9    [NONE]              
11   [FUNC_DEF]          void
11   [NONE]              main
11   [FUNC_DEF]          (
11   [NONE]              int
11   [NONE]              argc
11   [NONE]              ,
11   [NONE]              const
11   [NONE]              char
11   [NONE]              *
11   [NONE]              argv
11   [NONE]              []
11   [FUNC_DEF]          )
11   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [COMMENT_WHOLE]     // character literals.
12   [NONE]              
13   [NONE]              NSNumber
13   [NONE]              *
13   [NONE]              theLetterZ
13   [NONE]              =
13   [NONE]              @'Z'
13   [NONE]              ;
13   [COMMENT_END]       // equivalent to [NSNumber numberWithChar:'Z']
13   [NONE]              
15   [COMMENT_WHOLE]     // integral literals.
15   [NONE]              
16   [NONE]              NSNumber
16   [NONE]              *
16   [NONE]              fortyTwo
16   [NONE]              =
16   [NONE]              @42
16   [NONE]              ;
16   [COMMENT_END]       // equivalent to [NSNumber numberWithInt:42]
16   [NONE]              
17   [NONE]              NSNumber
17   [NONE]              *
17   [NONE]              fortyTwoUnsigned
17   [NONE]              =
17   [NONE]              @42U
17   [NONE]              ;
17   [COMMENT_END]       // equivalent to [NSNumber numberWithUnsignedInt:42U]
17   [NONE]              
18   [NONE]              NSNumber
18   [NONE]              *
18   [NONE]              fortyTwoLong
18   [NONE]              =
18   [NONE]              @42L
18   [NONE]              ;
18   [COMMENT_END]       // equivalent to [NSNumber numberWithLong:42L]
18   [NONE]              
19   [NONE]              NSNumber
19   [NONE]              *
19   [NONE]              fortyTwoLongLong
19   [NONE]              =
19   [NONE]              @42LL
19   [NONE]              ;
19   [COMMENT_END]       // equivalent to [NSNumber numberWithLongLong:42LL]
19   [NONE]              
21   [COMMENT_WHOLE]     // floating point literals.
21   [NONE]              
22   [NONE]              NSNumber
22   [NONE]              *
22   [NONE]              piFloat
22   [NONE]              =
22   [NONE]              @3.141592654F
22   [NONE]              ;
22   [COMMENT_END]       // equivalent to [NSNumber numberWithFloat:3.141592654F]
22   [NONE]              
23   [NONE]              NSNumber
23   [NONE]              *
23   [NONE]              piDouble
23   [NONE]              =
23   [NONE]              @3.1415926535
23   [NONE]              ;
23   [COMMENT_END]       // equivalent to [NSNumber numberWithDouble:3.1415926535]
23   [NONE]              
25   [COMMENT_WHOLE]     // BOOL literals.
25   [NONE]              
26   [NONE]              NSNumber
26   [NONE]              *
26   [NONE]              yesNumber
26   [NONE]              =
26   [NONE]              @YES
26   [NONE]              ;
26   [COMMENT_END]       // equivalent to [NSNumber numberWithBool:YES]
26   [NONE]              
27   [NONE]              NSNumber
27   [NONE]              *
27   [NONE]              noNumber
27   [NONE]              =
27   [NONE]              @NO
27   [NONE]              ;
27   [COMMENT_END]       // equivalent to [NSNumber numberWithBool:NO]
27   [NONE]              
29   [PP_IF]             #
29   [NONE]              ifdef
29   [NONE]              __cplusplus
29   [NONE]              
30   [NONE]              NSNumber
30   [NONE]              *
30   [NONE]              trueNumber
30   [NONE]              =
30   [NONE]              @true
30   [NONE]              ;
30   [COMMENT_END]       // equivalent to [NSNumber numberWithBool:(BOOL)true]
30   [NONE]              
31   [NONE]              NSNumber
31   [NONE]              *
31   [NONE]              falseNumber
31   [NONE]              =
31   [NONE]              @false
31   [NONE]              ;
31   [COMMENT_END]       // equivalent to [NSNumber numberWithBool:(BOOL)false]
31   [NONE]              
32   [PP_ENDIF]          #
32   [NONE]              endif
32   [NONE]              
33   [FUNC_DEF]          }
33   [NONE]              