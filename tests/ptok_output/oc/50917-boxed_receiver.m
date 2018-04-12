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
5    [NONE]              NSDictionary
5    [NONE]              *
5    [OC_MSG_DECL]       )
5    [OC_MSG_DECL]       constructUploadHeaders
5    [OC_MSG_DECL]       {
5    [NONE]              
6    [NONE]              NSDictionary
6    [NONE]              *
6    [NONE]              headers
6    [NONE]              ;
6    [NONE]              
8    [NONE]              headers
8    [NONE]              =
8    [NONE]              @
8    [OC_AT]             {
8    [NONE]              
9    [NONE]              @"Content-Length"
9    [NONE]              :
9    [OC_MSG]            [
9    [NONE]              @
9    [OC_AT]             (
9    [NONE]              contentLength
9    [OC_AT]             )
9    [NONE]              stringValue
9    [OC_MSG]            ]
9    [NONE]              ,
9    [NONE]              
10   [NONE]              @"Content-Length2"
10   [NONE]              :
10   [OC_MSG]            [
10   [NONE]              contentLength
10   [NONE]              stringValue
10   [OC_MSG]            ]
10   [NONE]              ,
10   [NONE]              
11   [NONE]              @"Content-Disposition"
11   [NONE]              :
11   [OC_MSG]            [
11   [NONE]              NSString
11   [NONE]              stringWithFormat
11   [NONE]              :
11   [NONE]              @"name=\"%@\"; filename=\"%@\""
11   [NONE]              ,
11   [NONE]              @"asset_data"
11   [NONE]              ,
11   [NONE]              identifier
11   [OC_MSG]            ]
11   [NONE]              ,
11   [NONE]              
12   [NONE]              @"Content-Type"
12   [NONE]              :
12   [NONE]              @"application/octet-stream"
12   [NONE]              ,
12   [NONE]              
13   [NONE]              @"ETag"
13   [NONE]              :
13   [NONE]              uploadEtag
13   [NONE]              
14   [OC_AT]             }
14   [NONE]              ;
14   [NONE]              
16   [NONE]              return
16   [NONE]              headers
16   [NONE]              ;
16   [NONE]              
17   [OC_MSG_DECL]       }
17   [NONE]              
19   [OC_MSG_DECL]       -
19   [OC_MSG_DECL]       (
19   [NONE]              BOOL
19   [OC_MSG_DECL]       )
19   [OC_MSG_DECL]       isStrimmed
19   [OC_MSG_DECL]       {
19   [NONE]              
20   [NONE]              if
20   [IF]                (
20   [OC_MSG]            [
20   [C_CAST]            (
20   [C_CAST]            TestClassVideoEditorView
20   [C_CAST]            *
20   [C_CAST]            )
20   [NONE]              (
20   [NONE]              self
20   [NONE]              .
20   [NONE]              parentComponentsView
20   [NONE]              .
20   [NONE]              superview
20   [NONE]              )
20   [NONE]              isTrimmed
20   [OC_MSG]            ]
20   [IF]                )
20   [IF]                {
20   [NONE]              
21   [NONE]              return
21   [NONE]              YES
21   [NONE]              ;
21   [NONE]              
22   [IF]                }
22   [NONE]              
23   [NONE]              if
23   [IF]                (
23   [OC_MSG]            [
23   [NONE]              (
23   [C_CAST]            (
23   [C_CAST]            TestClassVideoEditorView
23   [C_CAST]            *
23   [C_CAST]            )
23   [NONE]              self
23   [NONE]              .
23   [NONE]              parentComponentsView
23   [NONE]              .
23   [NONE]              superview
23   [NONE]              )
23   [NONE]              isTrimmed
23   [OC_MSG]            ]
23   [IF]                )
23   [IF]                {
23   [NONE]              
24   [NONE]              return
24   [NONE]              YES
24   [NONE]              ;
24   [NONE]              
25   [IF]                }
25   [NONE]              
26   [NONE]              return
26   [NONE]              NO
26   [NONE]              ;
26   [NONE]              
27   [OC_MSG_DECL]       }
27   [NONE]              
29   [OC_MSG_DECL]       -
29   [OC_MSG_DECL]       (
29   [NONE]              void
29   [OC_MSG_DECL]       )
29   [OC_MSG_DECL]       session
29   [OC_MSG_DECL]       {
29   [NONE]              
30   [NONE]              TestCaseSessionInstance
30   [NONE]              *
30   [NONE]              session
30   [NONE]              =
30   [NONE]              (
30   [C_CAST]            (
30   [C_CAST]            TestClassVideoEditorView
30   [C_CAST]            *
30   [C_CAST]            )
30   [NONE]              self
30   [NONE]              .
30   [NONE]              parentComponentsView
30   [NONE]              .
30   [NONE]              superview
30   [NONE]              )
30   [NONE]              .
30   [NONE]              session
30   [NONE]              ;
30   [NONE]              
32   [OC_MSG]            [
32   [C_CAST]            (
32   [C_CAST]            TestClassVideoEditorView
32   [C_CAST]            *
32   [C_CAST]            )
32   [NONE]              (
32   [NONE]              self
32   [NONE]              .
32   [NONE]              parentComponentsView
32   [NONE]              .
32   [NONE]              superview
32   [NONE]              )
32   [NONE]              closeEditor
32   [OC_MSG]            ]
32   [OC_MSG]            ;
32   [NONE]              
34   [OC_MSG]            [
34   [NONE]              menubutton
34   [NONE]              .
34   [NONE]              badge
34   [NONE]              setBadgeText
34   [NONE]              :
34   [OC_MSG]            [
34   [NONE]              @
34   [OC_AT]             (
34   [NONE]              count
34   [NONE]              +
34   [NONE]              1
34   [OC_AT]             )
34   [NONE]              stringValue
34   [OC_MSG]            ]
34   [OC_MSG]            ]
34   [OC_MSG]            ;
34   [NONE]              
35   [OC_MSG_DECL]       }
35   [NONE]              
37   [OC_IMPL]           @end
37   [NONE]              