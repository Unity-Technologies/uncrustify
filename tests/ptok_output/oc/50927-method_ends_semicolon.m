Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [NONE]              @interface
3    [OC_INTF]           TestClass
3    [NONE]              
5    [OC_MSG_SPEC]       +
5    [OC_MSG_SPEC]       (
5    [NONE]              void
5    [OC_MSG_SPEC]       )
5    [OC_MSG_SPEC]       cancelRequest
5    [OC_MSG_SPEC]       :
5    [OC_MSG_SPEC]       (
5    [NONE]              id
5    [OC_MSG_SPEC]       )
5    [NONE]              request
5    [OC_MSG_SPEC]       ;
5    [NONE]              
7    [OC_INTF]           @end
7    [NONE]              
9    [NONE]              @implementation
9    [OC_IMPL]           TestClass
9    [NONE]              
11   [COMMENT_WHOLE]     // Occasionally there will be user errors where someone will
11   [NONE]              
12   [COMMENT_WHOLE]     // copy the interface method declaration to implementation
12   [NONE]              
13   [COMMENT_WHOLE]     // and leaves the semicolon
13   [NONE]              
14   [OC_MSG_SPEC]       +
14   [OC_MSG_SPEC]       (
14   [NONE]              void
14   [OC_MSG_SPEC]       )
14   [OC_MSG_SPEC]       cancelRequest
14   [OC_MSG_SPEC]       :
14   [OC_MSG_SPEC]       (
14   [NONE]              id
14   [OC_MSG_SPEC]       )
14   [NONE]              request
14   [OC_MSG_SPEC]       ;
15   [OC_CLASS]          {
15   [NONE]              
16   [OC_CLASS]          }
16   [NONE]              
18   [OC_IMPL]           @end
18   [NONE]              