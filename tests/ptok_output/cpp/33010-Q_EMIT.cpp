Line [Parent]            Text
1    [FUNC_DEF]          bool
1    [FUNC_DEF]          Handler
1    [FUNC_DEF]          ::
1    [NONE]              failureResponse
1    [FUNC_DEF]          (
1    [NONE]              const
1    [NONE]              QByteArray
1    [NONE]              &
1    [NONE]              failureMessage
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              response
3    [NONE]              .
3    [NONE]              setString
3    [FUNC_CALL]         (
3    [NONE]              failureMessage
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
4    [NONE]              Q_EMIT
4    [NONE]              responseAvailable
4    [FUNC_CALL]         (
4    [NONE]              response
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [FUNC_DEF]          }
5    [NONE]              