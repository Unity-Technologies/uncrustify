Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [NONE]              @interface
3    [OC_INTF]           TestClass
3    [OC_CLASS]          :
3    [NONE]              NSObject
3    [NONE]              
4    [OC_INTF]           @end
4    [NONE]              
6    [NONE]              @implementation
6    [OC_IMPL]           TestClass
6    [NONE]              
8    [OC_MSG_DECL]       -
8    [OC_MSG_DECL]       (
8    [NONE]              void
8    [OC_MSG_DECL]       )
8    [OC_MSG_DECL]       foo
9    [OC_MSG_DECL]       {
9    [NONE]              
10   [NONE]              previewViewController
10   [NONE]              .
10   [NONE]              previewControllerDelegate
10   [NONE]              =
10   [C_CAST]            (
10   [C_CAST]            id
10   [C_CAST]            <
10   [C_CAST]            TestClassDelegate
10   [C_CAST]            >
10   [C_CAST]            )
10   [OC_MSG]            [
10   [NONE]              TestClass
10   [NONE]              sharedInstance
10   [OC_MSG]            ]
10   [OC_MSG]            ;
10   [NONE]              
11   [OC_MSG_DECL]       }
11   [NONE]              
13   [OC_IMPL]           @end
13   [NONE]              