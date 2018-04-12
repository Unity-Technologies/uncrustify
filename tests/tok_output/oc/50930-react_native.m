Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      "FOOAddressBookManager.h"
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        import
2    [PREPROC_BODY]      <React/RCTBridge.h>
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_INCLUDE]        import
3    [PREPROC_BODY]      <React/RCTEventDispatcher.h>
3    [NEWLINE]           
5    [COMMENT_MULTI]     /*␤ * #define RCT_EXPORT_METHOD(method) \␤ *  - (void)__rct_export__##method { \␤ *    __attribute__((used, section("__DATA,RCTExport"))) \␤ *    static const char *__rct_export_entry__[] = { __func__, #method }; \␤ *  } \␤ *  - (void)method \␤ */
12   [NEWLINE]           
14   [OC_INTF]           @interface
14   [OC_CLASS]          FOOAddressBook
14   [CLASS_COLON]       :
14   [WORD]              NSObject
14   [NEWLINE]           
15   [OC_END]            @end
15   [NEWLINE]           
17   [OC_IMPL]           @implementation
17   [OC_CLASS]          FOOAddressBookManager
17   [NEWLINE]           
19   [FUNC_CALL]         RCT_EXPORT_MODULE
19   [FPAREN_OPEN]       (
19   [WORD]              FOOAddressBook
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
21   [FUNC_CALL]         RCT_EXPORT_METHOD
21   [FPAREN_OPEN]       (
21   [WORD]              getAddresses
21   [CLASS_COLON]       :
21   [PAREN_OPEN]        (
21   [TYPE]              NSDictionary
21   [PTR_TYPE]          *
21   [PAREN_CLOSE]       )
21   [TYPE]              data
21   [WORD]              callback
21   [CLASS_COLON]       :
21   [PAREN_OPEN]        (
21   [TYPE]              RCTResponseSenderBlock
21   [PAREN_CLOSE]       )
21   [WORD]              callback
21   [FPAREN_CLOSE]      )
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [TYPE]              NSMutableArray
23   [PTR_TYPE]          *
23   [WORD]              addresses
23   [ASSIGN]            =
23   [SQUARE_OPEN]       [
23   [SQUARE_OPEN]       [
23   [OC_MSG_CLASS]      FOOAddressBook
23   [OC_MSG_FUNC]       sharedInstance
23   [SQUARE_CLOSE]      ]
23   [OC_MSG_FUNC]       getAddresses
23   [OC_COLON]          :
23   [WORD]              data
23   [SQUARE_CLOSE]      ]
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [IF]                if
24   [SPAREN_OPEN]       (
24   [WORD]              addresses
24   [COMPARE]           !=
24   [WORD]              nil
24   [SPAREN_CLOSE]      )
24   [VBRACE_OPEN]       
24   [NEWLINE]           
25   [FUNC_CALL]         callback
25   [FPAREN_OPEN]       (
25   [OC_AT]             @
25   [SQUARE_OPEN]       [
25   [SQUARE_OPEN]       [
25   [OC_MSG_CLASS]      NSNull
25   [OC_MSG_FUNC]       null
25   [SQUARE_CLOSE]      ]
25   [COMMA]             ,
25   [WORD]              addresses
25   [SQUARE_CLOSE]      ]
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [VBRACE_CLOSE]      
25   [NEWLINE]           
26   [ELSE]              else
26   [VBRACE_OPEN]       
26   [NEWLINE]           
27   [FUNC_CALL]         callback
27   [FPAREN_OPEN]       (
27   [OC_AT]             @
27   [SQUARE_OPEN]       [
27   [STRING]            @"getAddresses returned nil."
27   [SQUARE_CLOSE]      ]
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [VBRACE_CLOSE]      
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
30   [FUNC_CALL]         RCT_EXPORT_METHOD
30   [FPAREN_OPEN]       (
30   [WORD]              getStatus
30   [CLASS_COLON]       :
30   [PAREN_OPEN]        (
30   [TYPE]              RCTResponseSenderBlock
30   [PAREN_CLOSE]       )
30   [WORD]              callback
30   [FPAREN_CLOSE]      )
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [FUNC_CALL]         callback
32   [FPAREN_OPEN]       (
32   [OC_AT]             @
32   [SQUARE_OPEN]       [
32   [SQUARE_OPEN]       [
32   [OC_MSG_CLASS]      NSNull
32   [OC_MSG_FUNC]       null
32   [SQUARE_CLOSE]      ]
32   [COMMA]             ,
32   [SQUARE_OPEN]       [
32   [SQUARE_OPEN]       [
32   [OC_MSG_CLASS]      FOOAddressBook
32   [OC_MSG_FUNC]       sharedInstance
32   [SQUARE_CLOSE]      ]
32   [OC_MSG_FUNC]       getStatus
32   [SQUARE_CLOSE]      ]
32   [SQUARE_CLOSE]      ]
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           
35   [FUNC_CALL]         RCT_EXPORT_METHOD
35   [FPAREN_OPEN]       (
35   [WORD]              requestAccess
35   [CLASS_COLON]       :
35   [PAREN_OPEN]        (
35   [TYPE]              RCTResponseSenderBlock
35   [PAREN_CLOSE]       )
35   [WORD]              callback
35   [FPAREN_CLOSE]      )
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [SQUARE_OPEN]       [
37   [SQUARE_OPEN]       [
37   [OC_MSG_CLASS]      FOOAddressBook
37   [OC_MSG_FUNC]       sharedInstance
37   [SQUARE_CLOSE]      ]
37   [OC_MSG_FUNC]       requestAccess
37   [OC_COLON]          :
37   [OC_BLOCK_CARET]    ^
37   [FPAREN_OPEN]       (
37   [TYPE]              NSString
37   [PTR_TYPE]          *
37   [WORD]              status
37   [FPAREN_CLOSE]      )
37   [BRACE_OPEN]        {
37   [NEWLINE]           
38   [FUNC_CALL]         callback
38   [FPAREN_OPEN]       (
38   [OC_AT]             @
38   [SQUARE_OPEN]       [
38   [SQUARE_OPEN]       [
38   [OC_MSG_CLASS]      NSNull
38   [OC_MSG_FUNC]       null
38   [SQUARE_CLOSE]      ]
38   [COMMA]             ,
38   [WORD]              status
38   [SQUARE_CLOSE]      ]
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [SQUARE_CLOSE]      ]
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [NEWLINE]           
42   [OC_END]            @end
42   [NEWLINE]           