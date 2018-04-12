Line [Parent]            Text
1    [COMMENT_WHOLE]     //It deletes the space after {
1    [NONE]              
2    [NONE]              class
2    [CLASS]             Foo
2    [NONE]              
3    [CLASS]             {
3    [NONE]              
4    [CS_PROPERTY]       extern
4    [CS_PROPERTY]       internal
4    [CS_PROPERTY]       bool
4    [NONE]              canAccess
4    [CS_PROPERTY]       {
4    [CS_SQ_STMT]        [
4    [CS_SQ_STMT]        NativeMethod
4    [FUNC_CALL]         (
4    [CS_SQ_STMT]        Name
4    [CS_SQ_STMT]        =
4    [CS_SQ_STMT]        "CanAccessFromScript"
4    [FUNC_CALL]         )
4    [CS_SQ_STMT]        ]
4    [NONE]              get
4    [NONE]              ;
4    [CS_PROPERTY]       }
4    [NONE]              
6    [CS_PROPERTY]       extern
6    [CS_PROPERTY]       public
6    [CS_PROPERTY]       int
6    [NONE]              subMeshCount
6    [CS_PROPERTY]       {
6    [NONE]              get
6    [GETSET]            ;
6    [CS_SQ_STMT]        [
6    [CS_SQ_STMT]        NativeMethod
6    [FUNC_CALL]         (
6    [CS_SQ_STMT]        Name
6    [CS_SQ_STMT]        =
6    [CS_SQ_STMT]        "CanAccessFromScript"
6    [FUNC_CALL]         )
6    [CS_SQ_STMT]        ]
6    [NONE]              set
6    [NONE]              ;
6    [CS_PROPERTY]       }
6    [NONE]              
8    [CS_SQ_STMT]        [
8    [CS_SQ_STMT]        TestCase
8    [FUNC_CALL]         (
8    [CS_SQ_STMT]        "tag1;tag2"
8    [CS_SQ_STMT]        ,
8    [CS_SQ_STMT]        new
8    [CS_SQ_STMT]        string
8    [CS_SQ_STMT]        []
8    [CS_SQ_STMT]        {
8    [CS_SQ_STMT]        "tag1"
8    [CS_SQ_STMT]        ,
8    [CS_SQ_STMT]        "tag2"
8    [CS_SQ_STMT]        }
8    [FUNC_CALL]         )
8    [CS_SQ_STMT]        ]
8    [NONE]              
9    [CS_SQ_STMT]        [
9    [CS_SQ_STMT]        TestCase
9    [FUNC_CALL]         (
9    [CS_SQ_STMT]        "tag1 ; tag2"
9    [CS_SQ_STMT]        ,
9    [CS_SQ_STMT]        new
9    [CS_SQ_STMT]        string
9    [CS_SQ_STMT]        []
9    [CS_SQ_STMT]        {
9    [CS_SQ_STMT]        "tag1"
9    [CS_SQ_STMT]        ,
9    [CS_SQ_STMT]        "tag2"
9    [CS_SQ_STMT]        }
9    [FUNC_CALL]         )
9    [CS_SQ_STMT]        ]
9    [NONE]              
10   [CS_SQ_STMT]        [
10   [CS_SQ_STMT]        TestCase
10   [FUNC_CALL]         (
10   [CS_SQ_STMT]        "tag1 ;"
10   [CS_SQ_STMT]        ,
10   [CS_SQ_STMT]        new
10   [CS_SQ_STMT]        string
10   [CS_SQ_STMT]        []
10   [CS_SQ_STMT]        {
10   [CS_SQ_STMT]        "tag1"
10   [CS_SQ_STMT]        }
10   [FUNC_CALL]         )
10   [CS_SQ_STMT]        ]
10   [NONE]              
11   [CS_SQ_STMT]        [
11   [CS_SQ_STMT]        TestCase
11   [FUNC_CALL]         (
11   [CS_SQ_STMT]        ""
11   [CS_SQ_STMT]        ,
11   [CS_SQ_STMT]        new
11   [CS_SQ_STMT]        string
11   [NONE]              [
11   [CS_SQ_STMT]        0
11   [NONE]              ]
11   [FUNC_CALL]         )
11   [CS_SQ_STMT]        ]
11   [NONE]              
12   [CS_SQ_STMT]        [
12   [CS_SQ_STMT]        TestCase
12   [FUNC_CALL]         (
12   [CS_SQ_STMT]        ";"
12   [CS_SQ_STMT]        ,
12   [CS_SQ_STMT]        new
12   [CS_SQ_STMT]        string
12   [NONE]              [
12   [CS_SQ_STMT]        0
12   [NONE]              ]
12   [FUNC_CALL]         )
12   [CS_SQ_STMT]        ]
12   [NONE]              
13   [FUNC_DEF]          public
13   [FUNC_DEF]          void
13   [NONE]              SetFlags_iOS
13   [FUNC_DEF]          (
13   [NONE]              string
13   [NONE]              flags
13   [NONE]              ,
13   [NONE]              string
13   [NONE]              []
13   [NONE]              expected
13   [FUNC_DEF]          )
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
16   [CLASS]             }
16   [NONE]              