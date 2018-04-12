Line [Parent]            Text
1    [NONE]              private
1    [NONE]              static
1    [NONE]              Type
1    [FUNC_DEF]          []
1    [NONE]              GetAllVisualElementTypes
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              return
3    [NONE]              typeof
3    [TYPE_CAST]         (
3    [NONE]              VisualElement
3    [TYPE_CAST]         )
3    [NONE]              .
3    [NONE]              Assembly
3    [NONE]              .
3    [NONE]              GetTypes
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              
4    [NONE]              .
4    [NONE]              Where
4    [FUNC_CALL]         (
4    [NONE]              t
4    [NONE]              =>
4    [NONE]              t
4    [NONE]              !=
4    [NONE]              typeof
4    [TYPE_CAST]         (
4    [NONE]              VisualElement
4    [TYPE_CAST]         )
4    [NONE]              &&
4    [NONE]              
5    [NONE]              t
5    [NONE]              !=
5    [NONE]              typeof
5    [TYPE_CAST]         (
5    [NONE]              Panel
5    [TYPE_CAST]         )
5    [NONE]              &&
5    [NONE]              
6    [NONE]              !
6    [NONE]              t
6    [NONE]              .
6    [NONE]              IsAbstract
6    [NONE]              &&
6    [NONE]              
7    [NONE]              !
7    [NONE]              typeof
7    [TYPE_CAST]         (
7    [NONE]              IMElement
7    [TYPE_CAST]         )
7    [NONE]              .
7    [NONE]              IsAssignableFrom
7    [FUNC_CALL]         (
7    [NONE]              t
7    [FUNC_CALL]         )
7    [NONE]              &&
7    [NONE]              
8    [NONE]              !
8    [NONE]              typeof
8    [TYPE_CAST]         (
8    [NONE]              IMContainer
8    [TYPE_CAST]         )
8    [NONE]              .
8    [NONE]              IsAssignableFrom
8    [FUNC_CALL]         (
8    [NONE]              t
8    [FUNC_CALL]         )
8    [NONE]              &&
8    [NONE]              
9    [NONE]              typeof
9    [TYPE_CAST]         (
9    [NONE]              VisualElement
9    [TYPE_CAST]         )
9    [NONE]              .
9    [NONE]              IsAssignableFrom
9    [FUNC_CALL]         (
9    [NONE]              t
9    [FUNC_CALL]         )
9    [FUNC_CALL]         )
9    [NONE]              .
9    [NONE]              ToArray
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
12   [COMMENT_WHOLE]     // to this
12   [NONE]              
13   [NONE]              private
13   [NONE]              static
13   [NONE]              Type
13   [FUNC_DEF]          []
13   [NONE]              GetAllVisualElementAssetTypes
13   [FUNC_DEF]          (
13   [FUNC_DEF]          )
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
15   [NONE]              return
15   [NONE]              typeof
15   [TYPE_CAST]         (
15   [NONE]              VisualElement
15   [TYPE_CAST]         )
15   [NONE]              .
15   [NONE]              Assembly
15   [NONE]              .
15   [NONE]              GetTypes
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              
16   [NONE]              .
16   [NONE]              Where
16   [FUNC_CALL]         (
16   [NONE]              t
16   [NONE]              =>
16   [NONE]              t
16   [NONE]              !=
16   [NONE]              typeof
16   [TYPE_CAST]         (
16   [NONE]              VisualElement
16   [TYPE_CAST]         )
16   [NONE]              &&
16   [NONE]              
17   [NONE]              t
17   [NONE]              !=
17   [NONE]              typeof
17   [TYPE_CAST]         (
17   [NONE]              Panel
17   [TYPE_CAST]         )
17   [NONE]              &&
17   [NONE]              
18   [NONE]              !
18   [NONE]              t
18   [NONE]              .
18   [NONE]              IsAbstract
18   [NONE]              &&
18   [NONE]              
19   [NONE]              !
19   [NONE]              typeof
19   [TYPE_CAST]         (
19   [NONE]              IMElement
19   [TYPE_CAST]         )
19   [NONE]              .
19   [NONE]              IsAssignableFrom
19   [FUNC_CALL]         (
19   [NONE]              t
19   [FUNC_CALL]         )
19   [NONE]              &&
19   [NONE]              
20   [NONE]              !
20   [NONE]              typeof
20   [TYPE_CAST]         (
20   [NONE]              IMContainer
20   [TYPE_CAST]         )
20   [NONE]              .
20   [NONE]              IsAssignableFrom
20   [FUNC_CALL]         (
20   [NONE]              t
20   [FUNC_CALL]         )
20   [NONE]              &&
20   [NONE]              
21   [NONE]              typeof
21   [TYPE_CAST]         (
21   [NONE]              VisualElement
21   [TYPE_CAST]         )
21   [NONE]              .
21   [NONE]              IsAssignableFrom
21   [FUNC_CALL]         (
21   [NONE]              t
21   [FUNC_CALL]         )
21   [FUNC_CALL]         )
21   [NONE]              .
21   [NONE]              ToArray
21   [FUNC_CALL]         (
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              