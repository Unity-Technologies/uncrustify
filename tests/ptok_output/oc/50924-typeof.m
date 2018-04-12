Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.m>
1    [NONE]              
3    [NONE]              @implementation
3    [OC_IMPL]           MyViewController
3    [NONE]              
5    [OC_MSG_DECL]       -
5    [OC_MSG_DECL]       (
5    [NONE]              void
5    [OC_MSG_DECL]       )
5    [OC_MSG_DECL]       method1
5    [OC_MSG_DECL]       {
5    [NONE]              
6    [NONE]              __weak
6    [NONE]              __typeof
6    [TYPE_CAST]         (
6    [NONE]              self
6    [TYPE_CAST]         )
6    [NONE]              weakSelf1
6    [NONE]              =
6    [NONE]              self
6    [NONE]              ;
6    [NONE]              
7    [NONE]              __weak
7    [NONE]              typeof
7    [TYPE_CAST]         (
7    [NONE]              self
7    [TYPE_CAST]         )
7    [NONE]              weakSelf2
7    [NONE]              =
7    [NONE]              self
7    [NONE]              ;
7    [NONE]              
8    [NONE]              __weak
8    [NONE]              MyViewController
8    [NONE]              *
8    [NONE]              weakSelf3
8    [NONE]              =
8    [NONE]              self
8    [NONE]              ;
8    [NONE]              
9    [NONE]              NSString
9    [NONE]              *
9    [NONE]              srcStr
9    [NONE]              =
9    [OC_MSG]            [
9    [OC_MSG]            [
9    [NONE]              NSString
9    [NONE]              alloc
9    [OC_MSG]            ]
9    [NONE]              initWithBytes
9    [NONE]              :
9    [NONE]              kShaderSource
9    [NONE]              length
9    [OC_MSG_NAME]       :
9    [NONE]              sizeof
9    [TYPE_CAST]         (
9    [NONE]              kShaderSource
9    [TYPE_CAST]         )
9    [NONE]              encoding
9    [OC_MSG_NAME]       :
9    [NONE]              NSASCIIStringEncoding
9    [OC_MSG]            ]
9    [OC_MSG]            ;
9    [NONE]              
10   [OC_MSG_DECL]       }
10   [NONE]              
12   [OC_IMPL]           @end
12   [NONE]              