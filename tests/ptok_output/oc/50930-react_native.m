Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              "FOOAddressBookManager.h"
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              import
2    [NONE]              <React/RCTBridge.h>
2    [NONE]              
3    [PP_INCLUDE]        #
3    [NONE]              import
3    [NONE]              <React/RCTEventDispatcher.h>
3    [NONE]              
5    [COMMENT_WHOLE]     /*␤ * #define RCT_EXPORT_METHOD(method) \␤ *  - (void)__rct_export__##method { \␤ *    __attribute__((used, section("__DATA,RCTExport"))) \␤ *    static const char *__rct_export_entry__[] = { __func__, #method }; \␤ *  } \␤ *  - (void)method \␤ */
12   [NONE]              
14   [NONE]              @interface
14   [OC_INTF]           FOOAddressBook
14   [OC_CLASS]          :
14   [NONE]              NSObject
14   [NONE]              
15   [OC_INTF]           @end
15   [NONE]              
17   [NONE]              @implementation
17   [OC_IMPL]           FOOAddressBookManager
17   [NONE]              
19   [NONE]              RCT_EXPORT_MODULE
19   [FUNC_CALL]         (
19   [NONE]              FOOAddressBook
19   [FUNC_CALL]         )
19   [NONE]              
21   [NONE]              RCT_EXPORT_METHOD
21   [FUNC_CALL]         (
21   [NONE]              getAddresses
21   [OC_CLASS]          :
21   [C_CAST]            (
21   [C_CAST]            NSDictionary
21   [C_CAST]            *
21   [C_CAST]            )
21   [NONE]              data
21   [NONE]              callback
21   [OC_CLASS]          :
21   [C_CAST]            (
21   [C_CAST]            RCTResponseSenderBlock
21   [C_CAST]            )
21   [NONE]              callback
21   [FUNC_CALL]         )
21   [NONE]              
22   [FUNC_CALL]         {
22   [NONE]              
23   [NONE]              NSMutableArray
23   [NONE]              *
23   [NONE]              addresses
23   [NONE]              =
23   [OC_MSG]            [
23   [OC_MSG]            [
23   [NONE]              FOOAddressBook
23   [NONE]              sharedInstance
23   [OC_MSG]            ]
23   [NONE]              getAddresses
23   [NONE]              :
23   [NONE]              data
23   [OC_MSG]            ]
23   [OC_MSG]            ;
23   [NONE]              
24   [NONE]              if
24   [IF]                (
24   [NONE]              addresses
24   [NONE]              !=
24   [NONE]              nil
24   [IF]                )
24   [IF]                
24   [NONE]              
25   [NONE]              callback
25   [FUNC_CALL]         (
25   [NONE]              @
25   [OC_AT]             [
25   [OC_MSG]            [
25   [NONE]              NSNull
25   [NONE]              null
25   [OC_MSG]            ]
25   [NONE]              ,
25   [NONE]              addresses
25   [OC_AT]             ]
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [IF]                
25   [NONE]              
26   [NONE]              else
26   [ELSE]              
26   [NONE]              
27   [NONE]              callback
27   [FUNC_CALL]         (
27   [NONE]              @
27   [OC_AT]             [
27   [NONE]              @"getAddresses returned nil."
27   [OC_AT]             ]
27   [FUNC_CALL]         )
27   [NONE]              ;
27   [ELSE]              
27   [NONE]              
28   [FUNC_CALL]         }
28   [NONE]              
30   [NONE]              RCT_EXPORT_METHOD
30   [FUNC_CALL]         (
30   [NONE]              getStatus
30   [OC_CLASS]          :
30   [C_CAST]            (
30   [C_CAST]            RCTResponseSenderBlock
30   [C_CAST]            )
30   [NONE]              callback
30   [FUNC_CALL]         )
30   [NONE]              
31   [FUNC_CALL]         {
31   [NONE]              
32   [NONE]              callback
32   [FUNC_CALL]         (
32   [NONE]              @
32   [OC_AT]             [
32   [OC_MSG]            [
32   [NONE]              NSNull
32   [NONE]              null
32   [OC_MSG]            ]
32   [NONE]              ,
32   [OC_MSG]            [
32   [OC_MSG]            [
32   [NONE]              FOOAddressBook
32   [NONE]              sharedInstance
32   [OC_MSG]            ]
32   [NONE]              getStatus
32   [OC_MSG]            ]
32   [OC_AT]             ]
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [NONE]              
33   [FUNC_CALL]         }
33   [NONE]              
35   [NONE]              RCT_EXPORT_METHOD
35   [FUNC_CALL]         (
35   [NONE]              requestAccess
35   [OC_CLASS]          :
35   [C_CAST]            (
35   [C_CAST]            RCTResponseSenderBlock
35   [C_CAST]            )
35   [NONE]              callback
35   [FUNC_CALL]         )
35   [NONE]              
36   [FUNC_CALL]         {
36   [NONE]              
37   [OC_MSG]            [
37   [OC_MSG]            [
37   [NONE]              FOOAddressBook
37   [NONE]              sharedInstance
37   [OC_MSG]            ]
37   [NONE]              requestAccess
37   [NONE]              :
37   [OC_BLOCK_EXPR]     ^
37   [OC_BLOCK_EXPR]     (
37   [OC_BLOCK_EXPR]     NSString
37   [OC_BLOCK_EXPR]     *
37   [OC_BLOCK_EXPR]     status
37   [OC_BLOCK_EXPR]     )
37   [OC_BLOCK_EXPR]     {
37   [NONE]              
38   [NONE]              callback
38   [FUNC_CALL]         (
38   [NONE]              @
38   [OC_AT]             [
38   [OC_MSG]            [
38   [NONE]              NSNull
38   [NONE]              null
38   [OC_MSG]            ]
38   [NONE]              ,
38   [NONE]              status
38   [OC_AT]             ]
38   [FUNC_CALL]         )
38   [NONE]              ;
38   [NONE]              
39   [OC_BLOCK_EXPR]     }
39   [OC_MSG]            ]
39   [OC_MSG]            ;
39   [NONE]              
40   [FUNC_CALL]         }
40   [NONE]              
42   [OC_IMPL]           @end
42   [NONE]              