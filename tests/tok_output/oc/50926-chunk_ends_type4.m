Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_INTF]           @interface
3    [OC_CLASS]          TestClass
3    [CLASS_COLON]       :
3    [WORD]              NSObject
3    [NEWLINE]           
4    [OC_END]            @end
4    [NEWLINE]           
6    [OC_IMPL]           @implementation
6    [OC_CLASS]          TestClass
6    [NEWLINE]           
8    [OC_SCOPE]          -
8    [PAREN_OPEN]        (
8    [TYPE]              void
8    [PAREN_CLOSE]       )
8    [OC_MSG_DECL]       session_thumbnail_url
8    [OC_COLON]          :
8    [PAREN_OPEN]        (
8    [TYPE]              NSDictionary
8    [PTR_TYPE]          *
8    [PAREN_CLOSE]       )
8    [WORD]              data
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      session
9    [OC_MSG_FUNC]       mergeCommonMovieItems
9    [OC_COLON]          :
9    [OC_BLOCK_CARET]    ^
9    [FPAREN_OPEN]       (
9    [TYPE]              NSURL
9    [PTR_TYPE]          *
9    [WORD]              exportURL
9    [COMMA]             ,
9    [TYPE]              NSError
9    [PTR_TYPE]          *
9    [WORD]              error
9    [FPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_IF]             if
10   [NUMBER]            0
10   [NEWLINE]           
11   [SQUARE_OPEN]       [
11   [OC_MSG_CLASS]      response
11   [OC_MSG_FUNC]       setValue
11   [OC_COLON]          :
11   [SQUARE_OPEN]       [
11   [OC_MSG_CLASS]      thumbnailUrl
11   [OC_MSG_FUNC]       absoluteString
11   [SQUARE_CLOSE]      ]
11   [OC_MSG_NAME]       forKey
11   [OC_COLON]          :
11   [STRING]            @"thumbnail_url"
11   [SQUARE_CLOSE]      ]
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_ELSE]           else
12   [NEWLINE]           
13   [WORD]              NSString
13   [PTR_TYPE]          *
13   [WORD]              extension
13   [ASSIGN]            =
13   [SQUARE_OPEN]       [
13   [OC_MSG_CLASS]      thumbnailUrl
13   [OC_MSG_FUNC]       pathExtension
13   [SQUARE_CLOSE]      ]
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [WORD]              NSData
14   [PTR_TYPE]          *
14   [WORD]              imageData
14   [ASSIGN]            =
14   [SQUARE_OPEN]       [
14   [OC_MSG_CLASS]      NSData
14   [OC_MSG_FUNC]       dataWithContentsOfURL
14   [OC_COLON]          :
14   [WORD]              thumbnailUrl
14   [SQUARE_CLOSE]      ]
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [WORD]              NSString
15   [PTR_TYPE]          *
15   [WORD]              base64EncodedImage
15   [ASSIGN]            =
15   [SQUARE_OPEN]       [
15   [OC_MSG_CLASS]      TestClassCommon
15   [OC_MSG_FUNC]       Base64Encode
15   [OC_COLON]          :
15   [WORD]              imageData
15   [SQUARE_CLOSE]      ]
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [WORD]              NSString
17   [PTR_TYPE]          *
17   [WORD]              base64Image
17   [ASSIGN]            =
17   [WORD]              nil
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [IF]                if
18   [SPAREN_OPEN]       (
18   [SQUARE_OPEN]       [
18   [OC_MSG_CLASS]      extension
18   [OC_MSG_FUNC]       isEqualToString
18   [OC_COLON]          :
18   [STRING]            @"jpg"
18   [SQUARE_CLOSE]      ]
18   [COMPARE]           ==
18   [WORD]              YES
18   [SPAREN_CLOSE]      )
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [WORD]              base64Image
19   [ASSIGN]            =
19   [SQUARE_OPEN]       [
19   [OC_MSG_CLASS]      NSString
19   [OC_MSG_FUNC]       stringWithFormat
19   [OC_COLON]          :
19   [STRING]            @"data:image/jpg;base64, %@"
19   [COMMA]             ,
19   [WORD]              base64EncodedImage
19   [SQUARE_CLOSE]      ]
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [ELSE]              else
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [WORD]              base64Image
21   [ASSIGN]            =
21   [SQUARE_OPEN]       [
21   [OC_MSG_CLASS]      NSString
21   [OC_MSG_FUNC]       stringWithFormat
21   [OC_COLON]          :
21   [STRING]            @"data:image/png;base64, %@"
21   [COMMA]             ,
21   [WORD]              base64EncodedImage
21   [SQUARE_CLOSE]      ]
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [SQUARE_OPEN]       [
23   [OC_MSG_CLASS]      response
23   [OC_MSG_FUNC]       setValue
23   [OC_COLON]          :
23   [TYPE]              base64Image
23   [OC_MSG_NAME]       forKey
23   [OC_COLON]          :
23   [STRING]            @"thumbnail_url"
23   [SQUARE_CLOSE]      ]
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [PREPROC]           #
24   [PP_ENDIF]          endif
24   [NEWLINE]           
26   [SQUARE_OPEN]       [
26   [OC_MSG_CLASS]      TestClassWebViewController
26   [OC_MSG_FUNC]       sendEvent
26   [OC_COLON]          :
26   [SQUARE_OPEN]       [
26   [OC_MSG_CLASS]      NSString
26   [OC_MSG_FUNC]       stringWithFormat
26   [OC_COLON]          :
26   [STRING]            @"session_thumbnail:%@"
26   [COMMA]             ,
26   [WORD]              sessionId
26   [SQUARE_CLOSE]      ]
26   [OC_MSG_NAME]       withArgs
26   [OC_COLON]          :
26   [WORD]              response
26   [SQUARE_CLOSE]      ]
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [SQUARE_CLOSE]      ]
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
30   [OC_SCOPE]          -
30   [PAREN_OPEN]        (
30   [TYPE]              void
30   [PAREN_CLOSE]       )
30   [OC_MSG_DECL]       addFoo
30   [OC_COLON]          :
30   [PAREN_OPEN]        (
30   [TYPE]              NSDictionary
30   [PTR_TYPE]          *
30   [PAREN_CLOSE]       )
30   [WORD]              postData
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [SQUARE_OPEN]       [
31   [OC_MSG_CLASS]      TestClassRequest
31   [OC_MSG_FUNC]       performMethod
31   [OC_COLON]          :
31   [TYPE]              TestClassRequestMethodPOST
31   [NEWLINE]           
32   [OC_MSG_NAME]       onResource
32   [OC_COLON]          :
32   [TYPE]              resource
32   [NEWLINE]           
33   [OC_MSG_NAME]       usingParameters
33   [OC_COLON]          :
33   [TYPE]              postData
33   [NEWLINE]           
34   [OC_MSG_NAME]       withAccount
34   [OC_COLON]          :
34   [SQUARE_OPEN]       [
34   [OC_MSG_CLASS]      TestClass
34   [OC_MSG_FUNC]       account
34   [SQUARE_CLOSE]      ]
34   [NEWLINE]           
35   [OC_MSG_NAME]       sendingProgressHandler
35   [OC_COLON]          :
35   [TYPE]              nil
35   [NEWLINE]           
36   [OC_MSG_NAME]       responseHandler
36   [OC_COLON]          :
36   [OC_BLOCK_CARET]    ^
36   [FPAREN_OPEN]       (
36   [TYPE]              NSURLResponse
36   [PTR_TYPE]          *
36   [WORD]              response
36   [COMMA]             ,
36   [TYPE]              NSData
36   [PTR_TYPE]          *
36   [WORD]              responseData
36   [COMMA]             ,
36   [TYPE]              NSError
36   [PTR_TYPE]          *
36   [WORD]              error
36   [FPAREN_CLOSE]      )
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [WORD]              NSHTTPURLResponse
37   [PTR_TYPE]          *
37   [WORD]              httpResponse
37   [ASSIGN]            =
37   [PAREN_OPEN]        (
37   [TYPE]              NSHTTPURLResponse
37   [PTR_TYPE]          *
37   [PAREN_CLOSE]       )
37   [WORD]              response
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [IF]                if
38   [SPAREN_OPEN]       (
38   [SQUARE_OPEN]       [
38   [OC_MSG_CLASS]      httpResponse
38   [OC_MSG_FUNC]       statusCode
38   [SQUARE_CLOSE]      ]
38   [COMPARE]           ==
38   [NUMBER]            200
38   [SPAREN_CLOSE]      )
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [PREPROC]           #
39   [PP_IF]             if
39   [TYPE]              DEBUG
39   [NEWLINE]           
40   [WORD]              NSString
40   [PTR_TYPE]          *
40   [WORD]              rsp
40   [ASSIGN]            =
40   [SQUARE_OPEN]       [
40   [SQUARE_OPEN]       [
40   [OC_MSG_CLASS]      NSString
40   [OC_MSG_FUNC]       alloc
40   [SQUARE_CLOSE]      ]
40   [OC_MSG_FUNC]       initWithData
40   [OC_COLON]          :
40   [TYPE]              responseData
40   [OC_MSG_NAME]       encoding
40   [OC_COLON]          :
40   [WORD]              NSUTF8StringEncoding
40   [SQUARE_CLOSE]      ]
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [FUNC_CALL]         TestClassLog
41   [FPAREN_OPEN]       (
41   [STRING]            @"TOGGLE CONNECTION ADDED response:%li responseData:%@ error:%@"
41   [COMMA]             ,
41   [PAREN_OPEN]        (
41   [TYPE]              long
41   [PAREN_CLOSE]       )
41   [SQUARE_OPEN]       [
41   [PAREN_OPEN]        (
41   [PAREN_OPEN]        (
41   [TYPE]              NSHTTPURLResponse
41   [PTR_TYPE]          *
41   [PAREN_CLOSE]       )
41   [WORD]              response
41   [PAREN_CLOSE]       )
41   [OC_MSG_FUNC]       statusCode
41   [SQUARE_CLOSE]      ]
41   [COMMA]             ,
41   [WORD]              rsp
41   [COMMA]             ,
41   [SQUARE_OPEN]       [
41   [OC_MSG_CLASS]      error
41   [OC_MSG_FUNC]       localizedDescription
41   [SQUARE_CLOSE]      ]
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [PREPROC]           #
42   [PP_ENDIF]          endif
42   [NEWLINE]           
43   [WORD]              NSJSONSerialization
43   [PTR_TYPE]          *
43   [WORD]              jsonConnection
43   [ASSIGN]            =
43   [SQUARE_OPEN]       [
43   [OC_MSG_CLASS]      responseData
43   [OC_MSG_FUNC]       TestClassJSONObject
43   [SQUARE_CLOSE]      ]
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [SQUARE_CLOSE]      ]
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
48   [OC_END]            @end
48   [NEWLINE]           