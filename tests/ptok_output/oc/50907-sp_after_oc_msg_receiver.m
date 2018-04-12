Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [NONE]              @implementation
3    [OC_IMPL]           TestClass
3    [NONE]              
5    [OC_MSG_DECL]       -
5    [OC_MSG_DECL]       (
5    [NONE]              void
5    [OC_MSG_DECL]       )
5    [OC_MSG_DECL]       testMethod
5    [OC_MSG_DECL]       {
5    [NONE]              
6    [NONE]              NSData
6    [NONE]              *
6    [NONE]              jsonData
6    [NONE]              =
6    [OC_MSG]            [
6    [NONE]              self
6    [NONE]              dataUsingEncoding
6    [NONE]              :
6    [NONE]              NSUTF8StringEncoding
6    [OC_MSG]            ]
6    [OC_MSG]            ;
6    [NONE]              
7    [NONE]              id
7    [NONE]              jsonParsedObj
7    [NONE]              =
7    [OC_MSG]            [
7    [NONE]              jsonSerializationClass
7    [NONE]              JSONObjectWithData
7    [NONE]              :
7    [NONE]              jsonData
7    [NONE]              options
7    [OC_MSG_NAME]       :
7    [NONE]              0
7    [NONE]              error
7    [OC_MSG_NAME]       :
7    [NONE]              &
7    [NONE]              jsonError
7    [OC_MSG]            ]
7    [OC_MSG]            ;
7    [NONE]              
8    [NONE]              NSString
8    [NONE]              *
8    [NONE]              ret
8    [NONE]              =
8    [OC_MSG]            [
8    [OC_MSG]            [
8    [NONE]              TestClass
8    [NONE]              sharedInstance
8    [OC_MSG]            ]
8    [NONE]              testString
8    [OC_MSG]            ]
8    [OC_MSG]            ;
8    [NONE]              
9    [OC_MSG_DECL]       }
9    [NONE]              
11   [OC_IMPL]           @end
11   [NONE]              