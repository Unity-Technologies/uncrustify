Line [Parent]            Text
1    [FUNC_DEF]          void
1    [FUNC_DEF]          AkonadiServer
1    [FUNC_DEF]          ::
1    [NONE]              createDatabase
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              DbConfig
3    [NONE]              ::
3    [NONE]              configuredDatabase
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ->
3    [NONE]              apply
3    [FUNC_CALL]         (
3    [NONE]              db
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
4    [NONE]              db
4    [NONE]              .
4    [NONE]              setDatabaseName
4    [FUNC_CALL]         (
4    [NONE]              DbConfig
4    [NONE]              ::
4    [NONE]              configuredDatabase
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [NONE]              ->
4    [NONE]              databaseName
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [FUNC_DEF]          }
5    [NONE]              