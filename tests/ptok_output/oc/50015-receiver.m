Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Cocoa/Cocoa.h>
1    [NONE]              
3    [NONE]              @implementation
3    [OC_IMPL]           MyDocument
3    [NONE]              
5    [OC_MSG_DECL]       -
5    [OC_MSG_DECL]       (
5    [NONE]              NSString
5    [NONE]              *
5    [OC_MSG_DECL]       )
5    [OC_MSG_DECL]       appPath
5    [NONE]              
5    [OC_MSG_DECL]       {
5    [NONE]              
6    [OC_MSG]            [
6    [NONE]              AClass
6    [NONE]              AFunc
6    [OC_MSG]            ]
6    [OC_MSG]            ;
6    [NONE]              
7    [NONE]              return
7    [OC_MSG]            [
7    [NONE]              NSSearchPathForDirectoriesInDomains
7    [FUNC_CALL]         (
7    [NONE]              NSDocumentDirectory
7    [NONE]              ,
7    [NONE]              NSUserDomainMask
7    [NONE]              ,
7    [NONE]              YES
7    [FUNC_CALL]         )
7    [NONE]              lastObject
7    [OC_MSG]            ]
7    [OC_MSG]            ;
7    [NONE]              
8    [OC_MSG_DECL]       }
8    [NONE]              
10   [OC_IMPL]           @end
10   [NONE]              