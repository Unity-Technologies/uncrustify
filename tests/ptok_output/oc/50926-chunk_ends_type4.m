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
8    [OC_MSG_DECL]       session_thumbnail_url
8    [OC_MSG_DECL]       :
8    [OC_MSG_DECL]       (
8    [NONE]              NSDictionary
8    [NONE]              *
8    [OC_MSG_DECL]       )
8    [NONE]              data
8    [OC_MSG_DECL]       {
8    [NONE]              
9    [OC_MSG]            [
9    [NONE]              session
9    [NONE]              mergeCommonMovieItems
9    [NONE]              :
9    [OC_BLOCK_EXPR]     ^
9    [OC_BLOCK_EXPR]     (
9    [OC_BLOCK_EXPR]     NSURL
9    [OC_BLOCK_EXPR]     *
9    [OC_BLOCK_EXPR]     exportURL
9    [OC_BLOCK_EXPR]     ,
9    [OC_BLOCK_EXPR]     NSError
9    [OC_BLOCK_EXPR]     *
9    [OC_BLOCK_EXPR]     error
9    [OC_BLOCK_EXPR]     )
9    [OC_BLOCK_EXPR]     {
9    [NONE]              
10   [PP_IF]             #
10   [NONE]              if
10   [NONE]              0
10   [NONE]              
11   [OC_MSG]            [
11   [NONE]              response
11   [NONE]              setValue
11   [NONE]              :
11   [OC_MSG]            [
11   [NONE]              thumbnailUrl
11   [NONE]              absoluteString
11   [OC_MSG]            ]
11   [NONE]              forKey
11   [OC_MSG_NAME]       :
11   [NONE]              @"thumbnail_url"
11   [OC_MSG]            ]
11   [OC_MSG]            ;
11   [NONE]              
12   [PP_ELSE]           #
12   [NONE]              else
12   [NONE]              
13   [NONE]              NSString
13   [NONE]              *
13   [NONE]              extension
13   [NONE]              =
13   [OC_MSG]            [
13   [NONE]              thumbnailUrl
13   [NONE]              pathExtension
13   [OC_MSG]            ]
13   [OC_MSG]            ;
13   [NONE]              
14   [NONE]              NSData
14   [NONE]              *
14   [NONE]              imageData
14   [NONE]              =
14   [OC_MSG]            [
14   [NONE]              NSData
14   [NONE]              dataWithContentsOfURL
14   [NONE]              :
14   [NONE]              thumbnailUrl
14   [OC_MSG]            ]
14   [OC_MSG]            ;
14   [NONE]              
15   [NONE]              NSString
15   [NONE]              *
15   [NONE]              base64EncodedImage
15   [NONE]              =
15   [OC_MSG]            [
15   [NONE]              TestClassCommon
15   [NONE]              Base64Encode
15   [NONE]              :
15   [NONE]              imageData
15   [OC_MSG]            ]
15   [OC_MSG]            ;
15   [NONE]              
17   [NONE]              NSString
17   [NONE]              *
17   [NONE]              base64Image
17   [NONE]              =
17   [NONE]              nil
17   [NONE]              ;
17   [NONE]              
18   [NONE]              if
18   [IF]                (
18   [OC_MSG]            [
18   [NONE]              extension
18   [NONE]              isEqualToString
18   [NONE]              :
18   [NONE]              @"jpg"
18   [OC_MSG]            ]
18   [NONE]              ==
18   [NONE]              YES
18   [IF]                )
18   [IF]                {
18   [NONE]              
19   [NONE]              base64Image
19   [NONE]              =
19   [OC_MSG]            [
19   [NONE]              NSString
19   [NONE]              stringWithFormat
19   [NONE]              :
19   [NONE]              @"data:image/jpg;base64, %@"
19   [NONE]              ,
19   [NONE]              base64EncodedImage
19   [OC_MSG]            ]
19   [OC_MSG]            ;
19   [NONE]              
20   [IF]                }
20   [NONE]              else
20   [ELSE]              {
20   [NONE]              
21   [NONE]              base64Image
21   [NONE]              =
21   [OC_MSG]            [
21   [NONE]              NSString
21   [NONE]              stringWithFormat
21   [NONE]              :
21   [NONE]              @"data:image/png;base64, %@"
21   [NONE]              ,
21   [NONE]              base64EncodedImage
21   [OC_MSG]            ]
21   [OC_MSG]            ;
21   [NONE]              
22   [ELSE]              }
22   [NONE]              
23   [OC_MSG]            [
23   [NONE]              response
23   [NONE]              setValue
23   [NONE]              :
23   [NONE]              base64Image
23   [NONE]              forKey
23   [OC_MSG_NAME]       :
23   [NONE]              @"thumbnail_url"
23   [OC_MSG]            ]
23   [OC_MSG]            ;
23   [NONE]              
24   [PP_ENDIF]          #
24   [NONE]              endif
24   [NONE]              
26   [OC_MSG]            [
26   [NONE]              TestClassWebViewController
26   [NONE]              sendEvent
26   [NONE]              :
26   [OC_MSG]            [
26   [NONE]              NSString
26   [NONE]              stringWithFormat
26   [NONE]              :
26   [NONE]              @"session_thumbnail:%@"
26   [NONE]              ,
26   [NONE]              sessionId
26   [OC_MSG]            ]
26   [NONE]              withArgs
26   [OC_MSG_NAME]       :
26   [NONE]              response
26   [OC_MSG]            ]
26   [OC_MSG]            ;
26   [NONE]              
27   [OC_BLOCK_EXPR]     }
27   [OC_MSG]            ]
27   [OC_MSG]            ;
27   [NONE]              
28   [OC_MSG_DECL]       }
28   [NONE]              
30   [OC_MSG_DECL]       -
30   [OC_MSG_DECL]       (
30   [NONE]              void
30   [OC_MSG_DECL]       )
30   [OC_MSG_DECL]       addFoo
30   [OC_MSG_DECL]       :
30   [OC_MSG_DECL]       (
30   [NONE]              NSDictionary
30   [NONE]              *
30   [OC_MSG_DECL]       )
30   [NONE]              postData
30   [OC_MSG_DECL]       {
30   [NONE]              
31   [OC_MSG]            [
31   [NONE]              TestClassRequest
31   [NONE]              performMethod
31   [NONE]              :
31   [NONE]              TestClassRequestMethodPOST
31   [NONE]              
32   [NONE]              onResource
32   [OC_MSG_NAME]       :
32   [NONE]              resource
32   [NONE]              
33   [NONE]              usingParameters
33   [OC_MSG_NAME]       :
33   [NONE]              postData
33   [NONE]              
34   [NONE]              withAccount
34   [OC_MSG_NAME]       :
34   [OC_MSG]            [
34   [NONE]              TestClass
34   [NONE]              account
34   [OC_MSG]            ]
34   [NONE]              
35   [NONE]              sendingProgressHandler
35   [OC_MSG_NAME]       :
35   [NONE]              nil
35   [NONE]              
36   [NONE]              responseHandler
36   [OC_MSG_NAME]       :
36   [OC_BLOCK_EXPR]     ^
36   [OC_BLOCK_EXPR]     (
36   [OC_BLOCK_EXPR]     NSURLResponse
36   [OC_BLOCK_EXPR]     *
36   [OC_BLOCK_EXPR]     response
36   [OC_BLOCK_EXPR]     ,
36   [OC_BLOCK_EXPR]     NSData
36   [OC_BLOCK_EXPR]     *
36   [OC_BLOCK_EXPR]     responseData
36   [OC_BLOCK_EXPR]     ,
36   [OC_BLOCK_EXPR]     NSError
36   [OC_BLOCK_EXPR]     *
36   [OC_BLOCK_EXPR]     error
36   [OC_BLOCK_EXPR]     )
36   [OC_BLOCK_EXPR]     {
36   [NONE]              
37   [NONE]              NSHTTPURLResponse
37   [NONE]              *
37   [NONE]              httpResponse
37   [NONE]              =
37   [C_CAST]            (
37   [C_CAST]            NSHTTPURLResponse
37   [C_CAST]            *
37   [C_CAST]            )
37   [NONE]              response
37   [NONE]              ;
37   [NONE]              
38   [NONE]              if
38   [IF]                (
38   [OC_MSG]            [
38   [NONE]              httpResponse
38   [NONE]              statusCode
38   [OC_MSG]            ]
38   [NONE]              ==
38   [NONE]              200
38   [IF]                )
38   [IF]                {
38   [NONE]              
39   [PP_IF]             #
39   [NONE]              if
39   [NONE]              DEBUG
39   [NONE]              
40   [NONE]              NSString
40   [NONE]              *
40   [NONE]              rsp
40   [NONE]              =
40   [OC_MSG]            [
40   [OC_MSG]            [
40   [NONE]              NSString
40   [NONE]              alloc
40   [OC_MSG]            ]
40   [NONE]              initWithData
40   [NONE]              :
40   [NONE]              responseData
40   [NONE]              encoding
40   [OC_MSG_NAME]       :
40   [NONE]              NSUTF8StringEncoding
40   [OC_MSG]            ]
40   [OC_MSG]            ;
40   [NONE]              
41   [NONE]              TestClassLog
41   [FUNC_CALL]         (
41   [NONE]              @"TOGGLE CONNECTION ADDED response:%li responseData:%@ error:%@"
41   [NONE]              ,
41   [C_CAST]            (
41   [C_CAST]            long
41   [C_CAST]            )
41   [OC_MSG]            [
41   [NONE]              (
41   [C_CAST]            (
41   [C_CAST]            NSHTTPURLResponse
41   [C_CAST]            *
41   [C_CAST]            )
41   [NONE]              response
41   [NONE]              )
41   [NONE]              statusCode
41   [OC_MSG]            ]
41   [NONE]              ,
41   [NONE]              rsp
41   [NONE]              ,
41   [OC_MSG]            [
41   [NONE]              error
41   [NONE]              localizedDescription
41   [OC_MSG]            ]
41   [FUNC_CALL]         )
41   [NONE]              ;
41   [NONE]              
42   [PP_ENDIF]          #
42   [NONE]              endif
42   [NONE]              
43   [NONE]              NSJSONSerialization
43   [NONE]              *
43   [NONE]              jsonConnection
43   [NONE]              =
43   [OC_MSG]            [
43   [NONE]              responseData
43   [NONE]              TestClassJSONObject
43   [OC_MSG]            ]
43   [OC_MSG]            ;
43   [NONE]              
44   [IF]                }
44   [NONE]              
45   [OC_BLOCK_EXPR]     }
45   [OC_MSG]            ]
45   [OC_MSG]            ;
45   [NONE]              
46   [OC_MSG_DECL]       }
46   [NONE]              
48   [OC_IMPL]           @end
48   [NONE]              