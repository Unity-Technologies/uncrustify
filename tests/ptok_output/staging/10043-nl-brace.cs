Line [Parent]            Text
1    [NONE]              public
1    [NONE]              class
1    [CLASS]             Foo
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [FUNC_DEF]          public
3    [FUNC_DEF]          void
3    [NONE]              foo
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [COMMENT_WHOLE]     // nl_brace_catch=force
5    [NONE]              
6    [NONE]              try
6    [TRY]               {
6    [NONE]              return
6    [NONE]              1
6    [NONE]              ;
6    [TRY]               }
6    [NONE]              catch
6    [SPAREN_OPEN]       (
6    [NONE]              Exception
6    [SPAREN_OPEN]       )
6    [SPAREN_OPEN]       {
6    [SPAREN_OPEN]       }
6    [NONE]              
8    [COMMENT_WHOLE]     // nl_brace_finally=force
8    [NONE]              
9    [NONE]              try
9    [TRY]               {
9    [NONE]              bar
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [TRY]               }
9    [NONE]              finally
9    [FINALLY]           {
9    [NONE]              barr
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [FINALLY]           }
9    [NONE]              
11   [NONE]              var
11   [NONE]              v
11   [NONE]              =
11   [NONE]              foo
11   [FUNC_CALL]         (
11   [NONE]              yolo
11   [NONE]              ,
11   [NONE]              
12   [NONE]              new
12   [NONE]              List
12   [TEMPLATE]          <
12   [NONE]              Type
12   [TEMPLATE]          >
12   [FUNC_CALL]         (
12   [FUNC_CALL]         )
12   [NONE]              
12   [FUNC_CALL]         {
12   [NONE]              
13   [NONE]              new
13   [NONE]              Type
13   [NONE]              
13   [CS_PROPERTY]       {
13   [NONE]              
13   [NONE]              Value
13   [NONE]              =
13   [NONE]              prop
13   [NONE]              ;
13   [NONE]              
13   [CS_PROPERTY]       }
13   [NONE]              
13   [FUNC_CALL]         }
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [FUNC_DEF]          }
14   [NONE]              
15   [CLASS]             }
15   [NONE]              