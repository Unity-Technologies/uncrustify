Line [Parent]            Text
1    [NONE]              class
1    [CLASS]             Foo
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [CS_PROPERTY]       public
3    [CS_PROPERTY]       static
3    [CS_PROPERTY]       IEnumerable
3    [CS_PROPERTY]       <
3    [NONE]              NPath
3    [CS_PROPERTY]       >
3    [NONE]              RuntimeIncludes
3    [CS_PROPERTY]       {
3    [NONE]              get
3    [GETSET]            ;
3    [CS_PROPERTY]       }
3    [NONE]              
4    [NONE]              =
4    [NONE]              new
4    [NEW]               []
4    [NONE]              
5    [NEW]               {
5    [NONE]              
6    [NONE]              new
6    [NONE]              NPath
6    [FUNC_CALL]         (
6    [NONE]              "Projects/PrecompiledHeaders"
6    [FUNC_CALL]         )
6    [NONE]              
7    [NEW]               }
7    [NONE]              ;
7    [NONE]              
9    [NONE]              void
9    [NONE]              Foo
9    [FUNC_CLASS_DEF]    (
9    [NONE]              string
9    [NONE]              file
9    [FUNC_CLASS_DEF]    )
9    [NONE]              
10   [FUNC_CLASS_DEF]    {
10   [NONE]              
11   [NONE]              var
11   [NONE]              type
11   [NONE]              =
11   [NONE]              Path
11   [NONE]              .
11   [NONE]              GetFileNameWithoutExtension
11   [FUNC_CALL]         (
11   [NONE]              file
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [NONE]              switch
12   [SWITCH]            (
12   [NONE]              Path
12   [NONE]              .
12   [NONE]              GetExtension
12   [FUNC_CALL]         (
12   [NONE]              file
12   [FUNC_CALL]         )
12   [SWITCH]            )
12   [NONE]              
13   [SWITCH]            {
13   [NONE]              
14   [NONE]              case
14   [NONE]              ".cs"
14   [NONE]              :
14   [NONE]              
15   [NONE]              resource
15   [NONE]              =
15   [NONE]              new
15   [NONE]              Bar
15   [FUNC_CALL]         (
15   [NONE]              string
15   [NONE]              .
15   [NONE]              Format
15   [FUNC_CALL]         (
15   [NONE]              "test output"
15   [NONE]              ,
15   [NONE]              
16   [NONE]              type
16   [FUNC_CALL]         )
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [NONE]              break
17   [NONE]              ;
17   [NONE]              
18   [NONE]              case
18   [NONE]              ".baz"
18   [NONE]              :
18   [NONE]              
19   [NONE]              resource
19   [NONE]              =
19   [NONE]              new
19   [NONE]              Baz
19   [FUNC_CALL]         (
19   [NONE]              type
19   [NONE]              ,
19   [NONE]              
20   [NONE]              string
20   [NONE]              .
20   [NONE]              Format
20   [FUNC_CALL]         (
20   [NONE]              @"test output␍␤with multiple␍␤lines␍␤"
23   [NONE]              ,
23   [NONE]              
24   [NONE]              type
24   [FUNC_CALL]         )
24   [FUNC_CALL]         )
24   [NONE]              ;
24   [NONE]              
25   [NONE]              break
25   [NONE]              ;
25   [NONE]              
26   [SWITCH]            }
26   [NONE]              
27   [FUNC_CLASS_DEF]    }
27   [NONE]              
28   [CLASS]             }
28   [NONE]              
30   [NONE]              public
30   [NONE]              class
30   [CLASS]             Bar
30   [NONE]              
31   [CLASS]             {
31   [NONE]              
32   [CS_PROPERTY]       private
32   [CS_PROPERTY]       static
32   [CS_PROPERTY]       FooBar
32   [NONE]              Baz
32   [CS_PROPERTY]       {
32   [NONE]              get
32   [GETSET]            ;
32   [CS_PROPERTY]       }
32   [NONE]              
33   [NONE]              =
33   [NONE]              new
33   [NONE]              FooBar
33   [FUNC_CALL]         (
33   [FUNC_CALL]         )
33   [NONE]              
34   [NONE]              .
34   [NONE]              WithPath
34   [FUNC_CALL]         (
34   [NONE]              "foo/bar/baz"
34   [FUNC_CALL]         )
34   [NONE]              
35   [NONE]              .
35   [NONE]              WithSource
35   [FUNC_CALL]         (
35   [NONE]              "qux/quux/quuz"
35   [FUNC_CALL]         )
35   [NONE]              
36   [NONE]              .
36   [NONE]              WithPrebuiltReference
36   [FUNC_CALL]         (
36   [NONE]              FooBar
36   [NONE]              .
36   [NONE]              Baz
36   [FUNC_CALL]         )
36   [NONE]              
37   [NONE]              .
37   [NONE]              WithBaz
37   [FUNC_CALL]         (
37   [NONE]              "2"
37   [FUNC_CALL]         )
37   [NONE]              
38   [NONE]              .
38   [NONE]              Complete
38   [FUNC_CALL]         (
38   [FUNC_CALL]         )
38   [NONE]              ;
38   [NONE]              
39   [CLASS]             }
39   [NONE]              