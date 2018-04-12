Line [Parent]            Text
1    [COMMENT_WHOLE]     /*␤2) There seems to be a problem handling .h-files compared to .cpp-files.␤The following problem only occurs in header-files, in source-files the␤output is as desired.␤*/
5    [NONE]              
7    [FUNC_DEF]          static
7    [FUNC_DEF]          inline
7    [FUNC_DEF]          void
7    [NONE]              foo
7    [FUNC_DEF]          (
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [COMMENT_WHOLE]     //BEFORE:
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              cond
10   [IF]                )
10   [IF]                {
10   [NONE]              
10   [NONE]              callFunc
10   [FUNC_CALL]         (
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
10   [IF]                }
10   [NONE]              
11   [COMMENT_WHOLE]     // DESIRED:
11   [NONE]              
12   [NONE]              if
12   [IF]                (
12   [NONE]              cond
12   [IF]                )
12   [IF]                {
12   [NONE]              
13   [NONE]              callFunc
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [IF]                }
14   [NONE]              
15   [COMMENT_WHOLE]     // AFTER:
15   [NONE]              
16   [NONE]              if
16   [IF]                (
16   [NONE]              cond
16   [IF]                )
16   [IF]                {
16   [NONE]              
16   [NONE]              callFunc
16   [FUNC_CALL]         (
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
16   [IF]                }
16   [NONE]              
19   [COMMENT_WHOLE]     /*␤3) The spacing around pointer stars is not always maintained as desired.␤*/
21   [NONE]              
22   [COMMENT_WHOLE]     //BEFORE:
22   [NONE]              
23   [NONE]              Buffer
23   [TEMPLATE]          <
23   [NONE]              T
23   [TEMPLATE]          >
23   [NONE]              *
23   [NONE]              buffer
23   [NONE]              ;
23   [NONE]              
24   [COMMENT_WHOLE]     //AFTER:
24   [NONE]              
25   [NONE]              Buffer
25   [TEMPLATE]          <
25   [NONE]              T
25   [TEMPLATE]          >
25   [NONE]              *
25   [NONE]              buffer
25   [NONE]              ;
25   [NONE]              
28   [COMMENT_WHOLE]     /*␤4) Inside of casts the types are not formatted as outside.␤*/
30   [NONE]              
31   [COMMENT_WHOLE]     //BEFORE:
31   [NONE]              
32   [NONE]              T
32   [NONE]              *
32   [NONE]              t
32   [NONE]              =
32   [NONE]              dynamic_cast
32   [TYPE_CAST]         <
32   [NONE]              T
32   [NONE]              *
32   [TYPE_CAST]         >
32   [TYPE_CAST]         (
32   [NONE]              obj
32   [TYPE_CAST]         )
32   [NONE]              ;
32   [NONE]              
33   [COMMENT_WHOLE]     //AFTER:
33   [NONE]              
34   [NONE]              T
34   [NONE]              *
34   [NONE]              t
34   [NONE]              =
34   [NONE]              dynamic_cast
34   [TYPE_CAST]         <
34   [NONE]              T
34   [NONE]              *
34   [TYPE_CAST]         >
34   [TYPE_CAST]         (
34   [NONE]              obj
34   [TYPE_CAST]         )
34   [NONE]              ;
34   [NONE]              
36   [COMMENT_WHOLE]     /*␤5) Inside some template-stuff the spacing goes weird. Multiple spaces␤are inserted, although the configuration (should) say otherwise.␤*/
39   [NONE]              
40   [COMMENT_WHOLE]     //BEFORE:
40   [NONE]              
41   [NONE]              for
41   [FOR]               (
41   [NONE]              std
41   [NONE]              ::
41   [NONE]              map
41   [TEMPLATE]          <
41   [NONE]              Key
41   [NONE]              ,
41   [NONE]              Value
41   [NONE]              *
41   [TEMPLATE]          >
41   [NONE]              ::
41   [NONE]              iterator
41   [NONE]              it
41   [NONE]              =
41   [NONE]              map
41   [NONE]              .
41   [NONE]              begin
41   [FUNC_CALL]         (
41   [FUNC_CALL]         )
41   [FOR]               ;
41   [NONE]              it
41   [NONE]              !=
41   [NONE]              map
41   [NONE]              .
41   [NONE]              end
41   [FUNC_CALL]         (
41   [FUNC_CALL]         )
41   [FOR]               ;
41   [NONE]              it
41   [NONE]              ++
41   [FOR]               )
41   [FOR]               {
41   [NONE]              
42   [NONE]              bar
42   [FUNC_CALL]         (
42   [NONE]              it
42   [FUNC_CALL]         )
42   [NONE]              ;
42   [NONE]              
43   [FOR]               }
43   [NONE]              
44   [COMMENT_WHOLE]     //AFTER:
44   [NONE]              
45   [NONE]              for
45   [FOR]               (
45   [NONE]              std
45   [NONE]              ::
45   [NONE]              map
45   [TEMPLATE]          <
45   [NONE]              Key
45   [NONE]              ,
45   [NONE]              Value
45   [NONE]              *
45   [TEMPLATE]          >
45   [NONE]              ::
45   [NONE]              iterator
45   [NONE]              it
45   [NONE]              =
45   [NONE]              map
45   [NONE]              .
45   [NONE]              begin
45   [FUNC_CALL]         (
45   [FUNC_CALL]         )
45   [FOR]               ;
45   [NONE]              it
45   [NONE]              !=
45   [NONE]              map
45   [NONE]              .
45   [NONE]              end
45   [FUNC_CALL]         (
45   [FUNC_CALL]         )
45   [FOR]               ;
45   [NONE]              it
45   [NONE]              ++
45   [FOR]               )
45   [FOR]               {
45   [NONE]              
46   [NONE]              bar
46   [FUNC_CALL]         (
46   [NONE]              it
46   [FUNC_CALL]         )
46   [NONE]              ;
46   [NONE]              
47   [FOR]               }
47   [NONE]              
48   [FUNC_DEF]          }
48   [NONE]              