Line [Parent]            Text
1    [NONE]              NSArray
1    [NONE]              *
1    [NONE]              test
1    [NONE]              =
1    [NONE]              @
1    [OC_AT]             []
1    [NONE]              ;
1    [NONE]              
2    [NONE]              NSNumber
2    [NONE]              *
2    [NONE]              test
2    [NONE]              =
2    [NONE]              @
2    [OC_AT]             (
2    [NONE]              42
2    [NONE]              *
2    [NONE]              2
2    [OC_AT]             )
2    [NONE]              ;
2    [NONE]              
3    [NONE]              NSNumber
3    [NONE]              *
3    [NONE]              test
3    [NONE]              =
3    [NONE]              @4.0
3    [NONE]              ;
3    [NONE]              
4    [NONE]              NSDictionary
4    [NONE]              *
4    [NONE]              test
4    [NONE]              =
4    [NONE]              @
4    [OC_AT]             {
4    [NONE]              
4    [NONE]              @"foo"
4    [NONE]              :
4    [NONE]              @"bar"
4    [NONE]              
4    [OC_AT]             }
4    [NONE]              ;
4    [NONE]              
6    [NONE]              @implementation
6    [OC_IMPL]           UrlTemplateTest
6    [NONE]              
7    [OC_MSG_DECL]       -
7    [OC_MSG_DECL]       (
7    [NONE]              void
7    [OC_MSG_DECL]       )
7    [OC_MSG_DECL]       test
7    [NONE]              
7    [OC_MSG_DECL]       {
7    [NONE]              
8    [NONE]              NSString
8    [NONE]              *
8    [NONE]              test
8    [NONE]              =
8    [NONE]              @""
8    [NONE]              ;
8    [NONE]              
9    [NONE]              NSString
9    [NONE]              *
9    [NONE]              string
9    [NONE]              =
9    [OC_MSG]            [
9    [OC_MSG]            [
9    [NONE]              NSMutableString
9    [NONE]              alloc
9    [OC_MSG]            ]
9    [NONE]              initWithString
9    [NONE]              :
9    [NONE]              @""
9    [OC_MSG]            ]
9    [OC_MSG]            ;
9    [NONE]              
10   [NONE]              STAssertEqualObjects
10   [FUNC_CALL]         (
10   [NONE]              string
10   [NONE]              ,
10   [NONE]              @""
10   [NONE]              ,
10   [NONE]              nil
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [OC_MSG_DECL]       }
11   [NONE]              
12   [OC_IMPL]           @end
12   [NONE]              