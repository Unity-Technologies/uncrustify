Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * @file cmt_insert.m␤ * Description␤ *␤ * $Id$␤ */
6    [NONE]              
1    [NONE]              @protocol
1    [OC_PROTOCOL]       spacingProtocol
1    [NONE]              
3    [NONE]              @property
3    [NONE]              NSInteger
3    [NONE]              spacing
3    [NONE]              ;
3    [NONE]              
5    [OC_PROTOCOL]       @end
5    [NONE]              
7    [NONE]              @interface
7    [OC_INTF]           cmt_insert
7    [NONE]              
9    [OC_MSG_SPEC]       +
9    [OC_MSG_SPEC]       (
9    [NONE]              cmt_insert
9    [NONE]              *
9    [OC_MSG_SPEC]       )
9    [OC_MSG_SPEC]       shareInstance
9    [OC_MSG_SPEC]       ;
9    [NONE]              
11   [NONE]              @property
11   [OC_PROPERTY]       (
11   [NONE]              readonly
11   [OC_PROPERTY]       )
11   [NONE]              BOOL
11   [NONE]              isAvailable
11   [OC_PROPERTY]       ;
11   [NONE]              
13   [NONE]              @property
13   [OC_PROPERTY]       (
13   [NONE]              copy
13   [OC_PROPERTY]       )
13   [NONE]              NSArray
13   [OC_PROTO_LIST]     <
13   [OC_PROTO_LIST]     NSString
13   [OC_PROTO_LIST]     *
13   [OC_PROTO_LIST]     >
13   [NONE]              *
13   [NONE]              contents
13   [OC_PROPERTY]       ;
13   [NONE]              
15   [OC_MSG_SPEC]       -
15   [OC_MSG_SPEC]       (
15   [NONE]              void
15   [OC_MSG_SPEC]       )
15   [OC_MSG_SPEC]       updateContents
15   [OC_MSG_SPEC]       :
15   [OC_MSG_SPEC]       (
15   [NONE]              NSArray
15   [OC_PROTO_LIST]     <
15   [OC_PROTO_LIST]     NSString
15   [OC_PROTO_LIST]     *
15   [OC_PROTO_LIST]     >
15   [NONE]              *
15   [OC_MSG_SPEC]       )
15   [NONE]              inContents
15   [OC_MSG_SPEC]       andRefresh
15   [OC_MSG_SPEC]       :
15   [OC_MSG_SPEC]       (
15   [NONE]              BOOL
15   [OC_MSG_SPEC]       )
15   [NONE]              inRefresh
15   [OC_MSG_SPEC]       ;
15   [NONE]              
17   [OC_INTF]           @end
17   [NONE]              
19   [NONE]              @implementation
19   [OC_IMPL]           cmt_insert
19   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * +[cmt_insert sharedInstance]␤ *␤ * @return TODO␤ */
5    [NONE]              
21   [OC_MSG_DECL]       +
21   [OC_MSG_DECL]       (
21   [NONE]              cmt_insert
21   [NONE]              *
21   [OC_MSG_DECL]       )
21   [OC_MSG_DECL]       sharedInstance
21   [OC_MSG_DECL]       {
21   [NONE]              
22   [NONE]              return
22   [NONE]              nil
22   [NONE]              ;
22   [NONE]              
23   [OC_MSG_DECL]       }
23   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * -[cmt_insert isAvailable]␤ *␤ * @return TODO␤ */
5    [NONE]              
25   [OC_MSG_DECL]       -
25   [OC_MSG_DECL]       (
25   [NONE]              BOOL
25   [OC_MSG_DECL]       )
25   [OC_MSG_DECL]       isAvailable
25   [OC_MSG_DECL]       {
25   [NONE]              
26   [NONE]              return
26   [NONE]              YES
26   [NONE]              ;
26   [NONE]              
27   [OC_MSG_DECL]       }
27   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * -[cmt_insert contents]␤ *␤ * @return TODO␤ */
5    [NONE]              
29   [OC_MSG_DECL]       -
29   [OC_MSG_DECL]       (
29   [NONE]              NSArray
29   [OC_PROTO_LIST]     <
29   [OC_PROTO_LIST]     NSString
29   [OC_PROTO_LIST]     *
29   [OC_PROTO_LIST]     >
29   [NONE]              *
29   [OC_MSG_DECL]       )
29   [OC_MSG_DECL]       contents
29   [OC_MSG_DECL]       {
29   [NONE]              
30   [NONE]              return
30   [NONE]              @
30   [OC_AT]             []
30   [NONE]              ;
30   [NONE]              
31   [OC_MSG_DECL]       }
31   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * -[cmt_insert setContents:]␤ *␤ * @param inContents TODO␤ */
5    [NONE]              
33   [OC_MSG_DECL]       -
33   [OC_MSG_DECL]       (
33   [NONE]              void
33   [OC_MSG_DECL]       )
33   [OC_MSG_DECL]       setContents
33   [OC_MSG_DECL]       :
33   [OC_MSG_DECL]       (
33   [NONE]              NSArray
33   [OC_PROTO_LIST]     <
33   [OC_PROTO_LIST]     NSString
33   [OC_PROTO_LIST]     *
33   [OC_PROTO_LIST]     >
33   [NONE]              *
33   [OC_MSG_DECL]       )
33   [NONE]              inContents
33   [OC_MSG_DECL]       {
33   [NONE]              
34   [OC_MSG_DECL]       }
34   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * -[cmt_insert updateContents:andRefresh:]␤ *␤ * @param inContents TODO␤ * ��@param inRefresh TODO␤ */
5    [NONE]              
36   [OC_MSG_DECL]       -
36   [OC_MSG_DECL]       (
36   [NONE]              void
36   [OC_MSG_DECL]       )
36   [OC_MSG_DECL]       updateContents
36   [OC_MSG_DECL]       :
36   [OC_MSG_DECL]       (
36   [NONE]              NSArray
36   [OC_PROTO_LIST]     <
36   [OC_PROTO_LIST]     NSString
36   [OC_PROTO_LIST]     *
36   [OC_PROTO_LIST]     >
36   [NONE]              *
36   [OC_MSG_DECL]       )
36   [NONE]              inContents
36   [OC_MSG_DECL]       andRefresh
36   [OC_MSG_DECL]       :
36   [OC_MSG_DECL]       (
36   [NONE]              BOOL
36   [OC_MSG_DECL]       )
36   [NONE]              inRefresh
36   [OC_MSG_DECL]       {
36   [NONE]              
37   [OC_MSG_DECL]       }
37   [NONE]              
39   [OC_IMPL]           @end
39   [NONE]              
41   [NONE]              @interface
41   [OC_INTF]           cmt_insert_with_protocol
41   [OC_INTF]           (
41   [OC_INTF]           spacingProtocol
41   [OC_INTF]           )
41   [NONE]              
42   [OC_INTF]           @end
42   [NONE]              
44   [NONE]              @implementation
44   [OC_IMPL]           cmt_insert_with_protocol
44   [OC_IMPL]           (
44   [OC_IMPL]           spacingProtocol
44   [OC_IMPL]           )
44   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * -[cmt_insert_with_protocol(spacingProtocol) spacing]␤ *␤ * @return TODO␤ */
5    [NONE]              
46   [OC_MSG_DECL]       -
46   [OC_MSG_DECL]       (
46   [NONE]              NSInteger
46   [OC_MSG_DECL]       )
46   [OC_MSG_DECL]       spacing
46   [OC_MSG_DECL]       {
46   [NONE]              
47   [NONE]              return
47   [NONE]              0
47   [NONE]              ;
47   [NONE]              
48   [OC_MSG_DECL]       }
48   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * -[cmt_insert_with_protocol(spacingProtocol) setSpacing:]␤ *␤ * @param inSpacing TODO␤ */
5    [NONE]              
50   [OC_MSG_DECL]       -
50   [OC_MSG_DECL]       (
50   [NONE]              void
50   [OC_MSG_DECL]       )
50   [OC_MSG_DECL]       setSpacing
50   [OC_MSG_DECL]       :
50   [OC_MSG_DECL]       (
50   [NONE]              NSInteger
50   [OC_MSG_DECL]       )
50   [NONE]              inSpacing
50   [OC_MSG_DECL]       {
50   [NONE]              
51   [OC_MSG_DECL]       }
51   [NONE]              
53   [OC_IMPL]           @end
53   [NONE]              