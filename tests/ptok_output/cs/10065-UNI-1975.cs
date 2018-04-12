Line [Parent]            Text
1    [COMMENT_WHOLE]     // typeof(Dictionary<, >)
1    [NONE]              
3    [COMMENT_WHOLE]     // is getting changed to
3    [NONE]              
5    [COMMENT_WHOLE]     // typeof(Dictionary<, >)
5    [NONE]              
7    [COMMENT_WHOLE]     // (space added after comma)
7    [NONE]              
9    [COMMENT_WHOLE]     // Definitely not typical for C#. Needs special handling.
9    [NONE]              
11   [NONE]              public
11   [NONE]              class
11   [CLASS]             Class
11   [NONE]              
12   [CLASS]             {
12   [NONE]              
13   [FUNC_DEF]          public
13   [FUNC_DEF]          void
13   [NONE]              foo
13   [FUNC_DEF]          (
13   [NONE]              Type
13   [NONE]              type
13   [FUNC_DEF]          )
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
15   [NONE]              if
15   [IF]                (
15   [NONE]              type
15   [NONE]              ==
15   [NONE]              typeof
15   [TYPE_CAST]         (
15   [NONE]              List
15   [TEMPLATE]          <
15   [TEMPLATE]          >
15   [TYPE_CAST]         )
15   [IF]                )
15   [NONE]              
16   [IF]                {
16   [NONE]              
17   [IF]                }
17   [NONE]              
18   [NONE]              else
18   [NONE]              if
18   [ELSEIF]            (
18   [NONE]              type
18   [NONE]              ==
18   [NONE]              typeof
18   [TYPE_CAST]         (
18   [NONE]              Dictionary
18   [TEMPLATE]          <
18   [NONE]              ,
18   [TEMPLATE]          >
18   [TYPE_CAST]         )
18   [ELSEIF]            )
18   [NONE]              
19   [ELSEIF]            {
19   [NONE]              
20   [NONE]              var
20   [NONE]              bar
20   [NONE]              =
20   [NONE]              typeof
20   [TYPE_CAST]         (
20   [NONE]              Dictionary
20   [TEMPLATE]          <
20   [NONE]              ,
20   [TEMPLATE]          >
20   [TYPE_CAST]         )
20   [NONE]              .
20   [NONE]              Bar
20   [FUNC_CALL]         (
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [ELSEIF]            }
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
23   [CLASS]             }
23   [NONE]              