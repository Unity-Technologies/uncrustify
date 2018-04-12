Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_IMPL]           @implementation
3    [OC_CLASS]          TestClass
3    [NEWLINE]           
5    [OC_SCOPE]          -
5    [PAREN_OPEN]        (
5    [TYPE]              NSDictionary
5    [PTR_TYPE]          *
5    [PAREN_CLOSE]       )
5    [OC_MSG_DECL]       constructUploadHeaders
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              NSDictionary
6    [PTR_TYPE]          *
6    [WORD]              headers
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [WORD]              headers
8    [ASSIGN]            =
8    [OC_AT]             @
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [STRING]            @"Content-Length"
9    [OC_DICT_COLON]     :
9    [SQUARE_OPEN]       [
9    [OC_AT]             @
9    [PAREN_OPEN]        (
9    [WORD]              contentLength
9    [PAREN_CLOSE]       )
9    [OC_MSG_FUNC]       stringValue
9    [SQUARE_CLOSE]      ]
9    [COMMA]             ,
9    [NEWLINE]           
10   [STRING]            @"Content-Length2"
10   [OC_DICT_COLON]     :
10   [SQUARE_OPEN]       [
10   [OC_MSG_CLASS]      contentLength
10   [OC_MSG_FUNC]       stringValue
10   [SQUARE_CLOSE]      ]
10   [COMMA]             ,
10   [NEWLINE]           
11   [STRING]            @"Content-Disposition"
11   [OC_DICT_COLON]     :
11   [SQUARE_OPEN]       [
11   [OC_MSG_CLASS]      NSString
11   [OC_MSG_FUNC]       stringWithFormat
11   [OC_COLON]          :
11   [STRING]            @"name=\"%@\"; filename=\"%@\""
11   [COMMA]             ,
11   [STRING]            @"asset_data"
11   [COMMA]             ,
11   [WORD]              identifier
11   [SQUARE_CLOSE]      ]
11   [COMMA]             ,
11   [NEWLINE]           
12   [STRING]            @"Content-Type"
12   [OC_DICT_COLON]     :
12   [STRING]            @"application/octet-stream"
12   [COMMA]             ,
12   [NEWLINE]           
13   [STRING]            @"ETag"
13   [OC_DICT_COLON]     :
13   [WORD]              uploadEtag
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [RETURN]            return
16   [WORD]              headers
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [OC_SCOPE]          -
19   [PAREN_OPEN]        (
19   [TYPE]              BOOL
19   [PAREN_CLOSE]       )
19   [OC_MSG_DECL]       isStrimmed
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [IF]                if
20   [SPAREN_OPEN]       (
20   [SQUARE_OPEN]       [
20   [PAREN_OPEN]        (
20   [TYPE]              TestClassVideoEditorView
20   [PTR_TYPE]          *
20   [PAREN_CLOSE]       )
20   [PAREN_OPEN]        (
20   [THIS]              self
20   [MEMBER]            .
20   [WORD]              parentComponentsView
20   [MEMBER]            .
20   [WORD]              superview
20   [PAREN_CLOSE]       )
20   [OC_MSG_FUNC]       isTrimmed
20   [SQUARE_CLOSE]      ]
20   [SPAREN_CLOSE]      )
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [RETURN]            return
21   [WORD]              YES
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [IF]                if
23   [SPAREN_OPEN]       (
23   [SQUARE_OPEN]       [
23   [PAREN_OPEN]        (
23   [PAREN_OPEN]        (
23   [TYPE]              TestClassVideoEditorView
23   [PTR_TYPE]          *
23   [PAREN_CLOSE]       )
23   [THIS]              self
23   [MEMBER]            .
23   [WORD]              parentComponentsView
23   [MEMBER]            .
23   [WORD]              superview
23   [PAREN_CLOSE]       )
23   [OC_MSG_FUNC]       isTrimmed
23   [SQUARE_CLOSE]      ]
23   [SPAREN_CLOSE]      )
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [RETURN]            return
24   [WORD]              YES
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
26   [RETURN]            return
26   [WORD]              NO
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [OC_SCOPE]          -
29   [PAREN_OPEN]        (
29   [TYPE]              void
29   [PAREN_CLOSE]       )
29   [OC_MSG_DECL]       session
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [TYPE]              TestCaseSessionInstance
30   [PTR_TYPE]          *
30   [WORD]              session
30   [ASSIGN]            =
30   [PAREN_OPEN]        (
30   [PAREN_OPEN]        (
30   [TYPE]              TestClassVideoEditorView
30   [PTR_TYPE]          *
30   [PAREN_CLOSE]       )
30   [THIS]              self
30   [MEMBER]            .
30   [WORD]              parentComponentsView
30   [MEMBER]            .
30   [WORD]              superview
30   [PAREN_CLOSE]       )
30   [MEMBER]            .
30   [WORD]              session
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [SQUARE_OPEN]       [
32   [PAREN_OPEN]        (
32   [TYPE]              TestClassVideoEditorView
32   [PTR_TYPE]          *
32   [PAREN_CLOSE]       )
32   [PAREN_OPEN]        (
32   [THIS]              self
32   [MEMBER]            .
32   [WORD]              parentComponentsView
32   [MEMBER]            .
32   [WORD]              superview
32   [PAREN_CLOSE]       )
32   [OC_MSG_FUNC]       closeEditor
32   [SQUARE_CLOSE]      ]
32   [SEMICOLON]         ;
32   [NEWLINE]           
34   [SQUARE_OPEN]       [
34   [OC_MSG_CLASS]      menubutton
34   [MEMBER]            .
34   [TYPE]              badge
34   [OC_MSG_FUNC]       setBadgeText
34   [OC_COLON]          :
34   [SQUARE_OPEN]       [
34   [OC_AT]             @
34   [PAREN_OPEN]        (
34   [WORD]              count
34   [ARITH]             +
34   [NUMBER]            1
34   [PAREN_CLOSE]       )
34   [OC_MSG_FUNC]       stringValue
34   [SQUARE_CLOSE]      ]
34   [SQUARE_CLOSE]      ]
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
37   [OC_END]            @end
37   [NEWLINE]           