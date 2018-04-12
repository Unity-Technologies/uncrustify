Line [Parent]            Text
1    [COMMENT_WHOLE]     // The semicolons at the end of these declarations are not superfluous.
1    [NONE]              
2    [NONE]              typedef
2    [NONE]              NS_ENUM
2    [ENUM]              (
2    [NONE]              NSUInteger
2    [NONE]              ,
2    [NONE]              MyEnum
2    [ENUM]              )
2    [ENUM]              {
2    [NONE]              MyValue1
2    [NONE]              ,
2    [NONE]              MyValue2
2    [NONE]              ,
2    [NONE]              MyValue3
2    [ENUM]              }
2    [TYPEDEF]           ;
2    [NONE]              
3    [NONE]              typedef
3    [NONE]              NS_OPTIONS
3    [ENUM]              (
3    [NONE]              NSUInteger
3    [NONE]              ,
3    [NONE]              MyBitmask
3    [ENUM]              )
3    [ENUM]              {
3    [NONE]              MyBit1
3    [NONE]              ,
3    [NONE]              MyBit2
3    [NONE]              ,
3    [NONE]              MyBit3
3    [ENUM]              }
3    [TYPEDEF]           ;
3    [NONE]              
5    [COMMENT_WHOLE]     // NS_ENUM specifies the type and name of the enum.
5    [NONE]              
6    [NONE]              typedef
6    [NONE]              enum
6    [ENUM]              {
6    [NONE]              
7    [NONE]              MyValue1
7    [NONE]              ,
7    [NONE]              
8    [NONE]              MyValue2
8    [NONE]              ,
8    [NONE]              
9    [NONE]              MyValue3
9    [NONE]              
10   [ENUM]              }
10   [NONE]              MyEnum
10   [TYPEDEF]           ;
10   [NONE]              
11   [NONE]              typedef
11   [NONE]              NS_ENUM
11   [ENUM]              (
11   [NONE]              NSUInteger
11   [NONE]              ,
11   [NONE]              MyEnum
11   [ENUM]              )
11   [ENUM]              {
11   [NONE]              
12   [NONE]              MyValue1
12   [NONE]              ,
12   [NONE]              
13   [NONE]              MyValue2
13   [NONE]              ,
13   [NONE]              
14   [NONE]              MyValue3
14   [NONE]              
15   [ENUM]              }
15   [TYPEDEF]           ;
15   [NONE]              
17   [COMMENT_WHOLE]     // NS_OPTIONS is equivalent to NS_ENUM, but semantically used for bitmask enums.
17   [NONE]              
18   [NONE]              typedef
18   [NONE]              enum
18   [ENUM]              {
18   [NONE]              
19   [NONE]              MyBit1
19   [NONE]              =
19   [NONE]              (
19   [NONE]              1u
19   [NONE]              <<
19   [NONE]              0
19   [NONE]              )
19   [NONE]              ,
19   [NONE]              
20   [NONE]              MyBit2Longer
20   [NONE]              =
20   [NONE]              (
20   [NONE]              1u
20   [NONE]              <<
20   [NONE]              1
20   [NONE]              )
20   [NONE]              ,
20   [NONE]              
21   [NONE]              MyBit3ThatIsConsiderablyMoreVerbose
21   [NONE]              =
21   [NONE]              (
21   [NONE]              1u
21   [NONE]              <<
21   [NONE]              2
21   [NONE]              )
21   [NONE]              
22   [ENUM]              }
22   [NONE]              MyBitmask
22   [TYPEDEF]           ;
22   [NONE]              
23   [NONE]              typedef
23   [NONE]              NS_OPTIONS
23   [ENUM]              (
23   [NONE]              NSUInteger
23   [NONE]              ,
23   [NONE]              MyBitmask
23   [ENUM]              )
23   [ENUM]              {
23   [NONE]              
24   [NONE]              MyBit1
24   [NONE]              =
24   [NONE]              (
24   [NONE]              1u
24   [NONE]              <<
24   [NONE]              0
24   [NONE]              )
24   [NONE]              ,
24   [NONE]              
25   [NONE]              MyBit2Longer
25   [NONE]              =
25   [NONE]              (
25   [NONE]              1u
25   [NONE]              <<
25   [NONE]              1
25   [NONE]              )
25   [NONE]              ,
25   [NONE]              
26   [NONE]              MyBit3ThatIsConsiderablyMoreVerbose
26   [NONE]              =
26   [NONE]              (
26   [NONE]              1u
26   [NONE]              <<
26   [NONE]              2
26   [NONE]              )
26   [NONE]              
27   [ENUM]              }
27   [TYPEDEF]           ;
27   [NONE]              