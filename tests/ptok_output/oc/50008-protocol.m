Line [Parent]            Text
1    [NONE]              
2    [NONE]              NSAssert
2    [FUNC_CALL]         (
2    [OC_MSG]            [
2    [NONE]              self
2    [NONE]              .
2    [NONE]              delegate
2    [NONE]              conformsToProtocol
2    [NONE]              :
2    [NONE]              @protocol
2    [OC_PROTOCOL]       (
2    [NONE]              UISearchBarDelegate
2    [OC_PROTOCOL]       )
2    [OC_MSG]            ]
2    [NONE]              ,
2    [NONE]              @"Some Error."
2    [FUNC_CALL]         )
2    [NONE]              ;
2    [NONE]              
4    [NONE]              Protocol
4    [NONE]              *
4    [NONE]              counter
4    [NONE]              =
4    [NONE]              @protocol
4    [OC_PROTOCOL]       (
4    [NONE]              ReferenceCounting
4    [OC_PROTOCOL]       )
4    [NONE]              ;
4    [NONE]              
6    [NONE]              @protocol
6    [OC_PROTOCOL]       ReferenceCounting
6    [NONE]              
8    [NONE]              -
8    [NONE]              setRefCount
8    [NONE]              :
8    [C_CAST]            (
8    [C_CAST]            int
8    [C_CAST]            )
8    [NONE]              count
8    [NONE]              ;
8    [NONE]              
10   [OC_MSG_SPEC]       -
10   [OC_MSG_SPEC]       (
10   [NONE]              int
10   [OC_MSG_SPEC]       )
10   [OC_MSG_SPEC]       refCount
10   [OC_MSG_SPEC]       ;
10   [NONE]              
12   [NONE]              -
12   [NONE]              incrementCount
12   [NONE]              ;
12   [NONE]              
14   [NONE]              -
14   [NONE]              decrementCount
14   [NONE]              ;
14   [NONE]              
16   [OC_PROTOCOL]       @end
16   [NONE]              
18   [NONE]              @interface
18   [OC_INTF]           Formatter
18   [OC_CLASS]          :
18   [NONE]              NSObject
18   [OC_PROTO_LIST]     <
18   [OC_PROTO_LIST]     Formatting
18   [OC_PROTO_LIST]     ,
18   [OC_PROTO_LIST]     Prettifying
18   [OC_PROTO_LIST]     >
18   [NONE]              
20   [OC_INTF]           @end
20   [NONE]              
22   [NONE]              if
22   [IF]                (
22   [OC_MSG]            [
22   [NONE]              receiver
22   [NONE]              conformsTo
22   [NONE]              :
22   [NONE]              @protocol
22   [OC_PROTOCOL]       (
22   [NONE]              ReferenceCounting
22   [OC_PROTOCOL]       )
22   [OC_MSG]            ]
22   [IF]                )
22   [NONE]              
22   [IF]                {
22   [NONE]              
23   [OC_MSG]            [
23   [NONE]              receiver
23   [NONE]              incrementCount
23   [OC_MSG]            ]
23   [OC_MSG]            ;
23   [NONE]              
23   [IF]                }
23   [NONE]              
25   [NONE]              @protocol
25   [OC_PROTOCOL]       B
25   [OC_PROTOCOL]       ;
25   [NONE]              
27   [NONE]              @protocol
27   [OC_PROTOCOL]       A
27   [NONE]              
28   [NONE]              -
28   [NONE]              Foo
28   [NONE]              :
28   [C_CAST]            (
28   [C_CAST]            id
28   [C_CAST]            <
28   [C_CAST]            B
28   [C_CAST]            >
28   [C_CAST]            )
28   [NONE]              anObject
28   [NONE]              ;
28   [NONE]              
29   [OC_PROTOCOL]       @end
29   [NONE]              