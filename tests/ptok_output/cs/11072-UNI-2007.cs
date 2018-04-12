Line [Parent]            Text
1    [NONE]              public
1    [NONE]              class
1    [CLASS]             MyGenericClass
1    [TEMPLATE]          <
1    [NONE]              T
1    [TEMPLATE]          >
1    [CLASS]             where
1    [NONE]              T
1    [NONE]              :
1    [NONE]              IComparable
1    [CLASS]             {
1    [CLASS]             }
1    [NONE]              
3    [NONE]              class
3    [CLASS]             MyClass
3    [TEMPLATE]          <
3    [NONE]              T
3    [NONE]              ,
3    [NONE]              U
3    [TEMPLATE]          >
3    [NONE]              
4    [CLASS]             where
4    [NONE]              T
4    [NONE]              :
4    [NONE]              class
4    [NONE]              
5    [CLASS]             where
5    [NONE]              U
5    [NONE]              :
5    [NONE]              struct
5    [NONE]              
6    [CLASS]             {
6    [CLASS]             }
6    [NONE]              
8    [NONE]              public
8    [NONE]              class
8    [CLASS]             MyGenericClass
8    [TEMPLATE]          <
8    [NONE]              T
8    [TEMPLATE]          >
8    [CLASS]             where
8    [NONE]              T
8    [NONE]              :
8    [NONE]              IComparable
8    [NONE]              ,
8    [NONE]              new
8    [NEW]               (
8    [NEW]               )
8    [NONE]              
9    [CLASS]             {
9    [NONE]              
10   [COMMENT_WHOLE]     // The following line is not possible without new() constraint:
10   [NONE]              
11   [NONE]              T
11   [NONE]              item
11   [NONE]              =
11   [NONE]              new
11   [NONE]              T
11   [FUNC_CALL]         (
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [CLASS]             }
12   [NONE]              
14   [NONE]              interface
14   [CLASS]             IMyInterface
14   [NONE]              
15   [CLASS]             {
15   [NONE]              
16   [CLASS]             }
16   [NONE]              
18   [NONE]              class
18   [CLASS]             Dictionary
18   [TEMPLATE]          <
18   [NONE]              TKey
18   [NONE]              ,
18   [NONE]              TVal
18   [TEMPLATE]          >
18   [NONE]              
19   [CLASS]             where
19   [NONE]              TKey
19   [NONE]              :
19   [NONE]              IComparable
19   [NONE]              ,
19   [NONE]              IEnumerable
19   [NONE]              
20   [CLASS]             where
20   [NONE]              TVal
20   [NONE]              :
20   [NONE]              IMyInterface
20   [NONE]              
21   [CLASS]             {
21   [NONE]              
22   [FUNC_DEF]          public
22   [FUNC_DEF]          void
22   [NONE]              Add
22   [FUNC_DEF]          (
22   [NONE]              TKey
22   [NONE]              key
22   [NONE]              ,
22   [NONE]              TVal
22   [NONE]              val
22   [FUNC_DEF]          )
22   [NONE]              
23   [FUNC_DEF]          {
23   [NONE]              
24   [FUNC_DEF]          }
24   [NONE]              
25   [CLASS]             }
25   [NONE]              
27   [NONE]              class
27   [CLASS]             List
27   [TEMPLATE]          <
27   [NONE]              T
27   [TEMPLATE]          >
27   [NONE]              
28   [CLASS]             {
28   [NONE]              
29   [FUNC_DEF]          void
29   [NONE]              Add
29   [TEMPLATE]          <
29   [NONE]              U
29   [TEMPLATE]          >
29   [FUNC_DEF]          (
29   [NONE]              List
29   [TEMPLATE]          <
29   [NONE]              U
29   [TEMPLATE]          >
29   [NONE]              items
29   [FUNC_DEF]          )
29   [FUNC_DEF]          where
29   [FUNC_DEF]          U
29   [FUNC_DEF]          :
29   [FUNC_DEF]          T
29   [FUNC_DEF]          {
29   [COMMENT_EMBED]     /*...*/
29   [FUNC_DEF]          }
29   [NONE]              
30   [FUNC_DEF]          void
30   [NONE]              Add
30   [TEMPLATE]          <
30   [NONE]              U
30   [TEMPLATE]          >
30   [FUNC_DEF]          (
30   [NONE]              List
30   [TEMPLATE]          <
30   [NONE]              U
30   [TEMPLATE]          >
30   [NONE]              items
30   [FUNC_DEF]          )
30   [FUNC_DEF]          where
30   [FUNC_DEF]          U
30   [FUNC_DEF]          :
30   [FUNC_DEF]          T
30   [FUNC_DEF]          {
30   [COMMENT_EMBED]     /*...*/
30   [FUNC_DEF]          }
30   [NONE]              
31   [CLASS]             }
31   [NONE]              
33   [FUNC_PROTO]        extern
33   [FUNC_PROTO]        T
33   [NONE]              GetNodeFromGuid
33   [TEMPLATE]          <
33   [NONE]              T
33   [TEMPLATE]          >
33   [FUNC_PROTO]        (
33   [NONE]              Guid
33   [NONE]              guid
33   [FUNC_PROTO]        )
33   [FUNC_PROTO]        where
33   [NONE]              T
33   [NONE]              :
33   [NONE]              INode
33   [FUNC_PROTO]        ;
33   [NONE]              
34   [FUNC_PROTO]        extern
34   [FUNC_PROTO]        T
34   [NONE]              GetNodeFromGuid
34   [TEMPLATE]          <
34   [NONE]              T
34   [TEMPLATE]          >
34   [FUNC_PROTO]        (
34   [NONE]              Guid
34   [NONE]              guid
34   [FUNC_PROTO]        )
34   [FUNC_PROTO]        where
34   [NONE]              T
34   [NONE]              :
34   [NONE]              INode
34   [FUNC_PROTO]        ;
34   [NONE]              