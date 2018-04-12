Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * @file cmt_insert.m␤ * Description␤ *␤ * $Id$␤ */
6    [NEWLINE]           
1    [OC_PROTOCOL]       @protocol
1    [OC_CLASS]          spacingProtocol
1    [NEWLINE]           
3    [OC_PROPERTY]       @property
3    [TYPE]              NSInteger
3    [WORD]              spacing
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [OC_END]            @end
5    [NEWLINE]           
7    [OC_INTF]           @interface
7    [OC_CLASS]          cmt_insert
7    [NEWLINE]           
9    [OC_SCOPE]          +
9    [PAREN_OPEN]        (
9    [TYPE]              cmt_insert
9    [PTR_TYPE]          *
9    [PAREN_CLOSE]       )
9    [OC_MSG_SPEC]       shareInstance
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [OC_PROPERTY]       @property
11   [PAREN_OPEN]        (
11   [OC_PROPERTY_ATTR]    readonly
11   [PAREN_CLOSE]       )
11   [TYPE]              BOOL
11   [WORD]              isAvailable
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [OC_PROPERTY]       @property
13   [PAREN_OPEN]        (
13   [OC_PROPERTY_ATTR]    copy
13   [PAREN_CLOSE]       )
13   [TYPE]              NSArray
13   [ANGLE_OPEN]        <
13   [TYPE]              NSString
13   [PTR_TYPE]          *
13   [ANGLE_CLOSE]       >
13   [PTR_TYPE]          *
13   [WORD]              contents
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [OC_SCOPE]          -
15   [PAREN_OPEN]        (
15   [TYPE]              void
15   [PAREN_CLOSE]       )
15   [OC_MSG_SPEC]       updateContents
15   [OC_COLON]          :
15   [PAREN_OPEN]        (
15   [TYPE]              NSArray
15   [ANGLE_OPEN]        <
15   [TYPE]              NSString
15   [PTR_TYPE]          *
15   [ANGLE_CLOSE]       >
15   [PTR_TYPE]          *
15   [PAREN_CLOSE]       )
15   [TYPE]              inContents
15   [WORD]              andRefresh
15   [OC_COLON]          :
15   [PAREN_OPEN]        (
15   [TYPE]              BOOL
15   [PAREN_CLOSE]       )
15   [WORD]              inRefresh
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [OC_END]            @end
17   [NEWLINE]           
19   [OC_IMPL]           @implementation
19   [OC_CLASS]          cmt_insert
19   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * +[cmt_insert sharedInstance]␤ *␤ * @return TODO␤ */
5    [NEWLINE]           
21   [OC_SCOPE]          +
21   [PAREN_OPEN]        (
21   [TYPE]              cmt_insert
21   [PTR_TYPE]          *
21   [PAREN_CLOSE]       )
21   [OC_MSG_DECL]       sharedInstance
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [RETURN]            return
22   [WORD]              nil
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * -[cmt_insert isAvailable]␤ *␤ * @return TODO␤ */
5    [NEWLINE]           
25   [OC_SCOPE]          -
25   [PAREN_OPEN]        (
25   [TYPE]              BOOL
25   [PAREN_CLOSE]       )
25   [OC_MSG_DECL]       isAvailable
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [RETURN]            return
26   [WORD]              YES
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * -[cmt_insert contents]␤ *␤ * @return TODO␤ */
5    [NEWLINE]           
29   [OC_SCOPE]          -
29   [PAREN_OPEN]        (
29   [TYPE]              NSArray
29   [ANGLE_OPEN]        <
29   [TYPE]              NSString
29   [PTR_TYPE]          *
29   [ANGLE_CLOSE]       >
29   [PTR_TYPE]          *
29   [PAREN_CLOSE]       )
29   [OC_MSG_DECL]       contents
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [RETURN]            return
30   [OC_AT]             @
30   [TSQUARE]           []
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * -[cmt_insert setContents:]␤ *␤ * @param inContents TODO␤ */
5    [NEWLINE]           
33   [OC_SCOPE]          -
33   [PAREN_OPEN]        (
33   [TYPE]              void
33   [PAREN_CLOSE]       )
33   [OC_MSG_DECL]       setContents
33   [OC_COLON]          :
33   [PAREN_OPEN]        (
33   [TYPE]              NSArray
33   [ANGLE_OPEN]        <
33   [TYPE]              NSString
33   [PTR_TYPE]          *
33   [ANGLE_CLOSE]       >
33   [PTR_TYPE]          *
33   [PAREN_CLOSE]       )
33   [WORD]              inContents
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * -[cmt_insert updateContents:andRefresh:]␤ *␤ * @param inContents TODO␤ * ��@param inRefresh TODO␤ */
5    [NEWLINE]           
36   [OC_SCOPE]          -
36   [PAREN_OPEN]        (
36   [TYPE]              void
36   [PAREN_CLOSE]       )
36   [OC_MSG_DECL]       updateContents
36   [OC_COLON]          :
36   [PAREN_OPEN]        (
36   [TYPE]              NSArray
36   [ANGLE_OPEN]        <
36   [TYPE]              NSString
36   [PTR_TYPE]          *
36   [ANGLE_CLOSE]       >
36   [PTR_TYPE]          *
36   [PAREN_CLOSE]       )
36   [TYPE]              inContents
36   [WORD]              andRefresh
36   [OC_COLON]          :
36   [PAREN_OPEN]        (
36   [TYPE]              BOOL
36   [PAREN_CLOSE]       )
36   [WORD]              inRefresh
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [OC_END]            @end
39   [NEWLINE]           
41   [OC_INTF]           @interface
41   [OC_CLASS]          cmt_insert_with_protocol
41   [PAREN_OPEN]        (
41   [OC_CATEGORY]       spacingProtocol
41   [PAREN_CLOSE]       )
41   [NEWLINE]           
42   [OC_END]            @end
42   [NEWLINE]           
44   [OC_IMPL]           @implementation
44   [OC_CLASS]          cmt_insert_with_protocol
44   [PAREN_OPEN]        (
44   [OC_CATEGORY]       spacingProtocol
44   [PAREN_CLOSE]       )
44   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * -[cmt_insert_with_protocol(spacingProtocol) spacing]␤ *␤ * @return TODO␤ */
5    [NEWLINE]           
46   [OC_SCOPE]          -
46   [PAREN_OPEN]        (
46   [TYPE]              NSInteger
46   [PAREN_CLOSE]       )
46   [OC_MSG_DECL]       spacing
46   [BRACE_OPEN]        {
46   [NEWLINE]           
47   [RETURN]            return
47   [NUMBER]            0
47   [SEMICOLON]         ;
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
1    [COMMENT_MULTI]     /**␤ * -[cmt_insert_with_protocol(spacingProtocol) setSpacing:]␤ *␤ * @param inSpacing TODO␤ */
5    [NEWLINE]           
50   [OC_SCOPE]          -
50   [PAREN_OPEN]        (
50   [TYPE]              void
50   [PAREN_CLOSE]       )
50   [OC_MSG_DECL]       setSpacing
50   [OC_COLON]          :
50   [PAREN_OPEN]        (
50   [TYPE]              NSInteger
50   [PAREN_CLOSE]       )
50   [WORD]              inSpacing
50   [BRACE_OPEN]        {
50   [NEWLINE]           
51   [BRACE_CLOSE]       }
51   [NEWLINE]           
53   [OC_END]            @end
53   [NEWLINE]           