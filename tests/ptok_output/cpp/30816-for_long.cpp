Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              for
3    [FOR]               (
3    [NONE]              std
3    [NONE]              ::
3    [NONE]              map
3    [TEMPLATE]          <
3    [NONE]              std
3    [NONE]              ::
3    [NONE]              string
3    [NONE]              ,
3    [NONE]              std
3    [NONE]              ::
3    [NONE]              string
3    [TEMPLATE]          >
3    [NONE]              ::
3    [NONE]              iterator
3    [NONE]              it
3    [NONE]              =
3    [NONE]              
3    [NONE]              m_stat_http_conn_total
3    [NONE]              .
3    [NONE]              m_stat_response_codes
3    [NONE]              .
3    [NONE]              begin
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [FOR]               ;
3    [NONE]              
3    [NONE]              it
3    [NONE]              !=
3    [NONE]              m_stat_http_conn_total
3    [NONE]              .
3    [NONE]              m_stat_response_codes
3    [NONE]              .
3    [NONE]              end
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [FOR]               ;
3    [NONE]              
3    [NONE]              ++
3    [NONE]              i
3    [FOR]               )
3    [NONE]              
4    [FOR]               {
4    [NONE]              
5    [NONE]              bar
5    [FUNC_CALL]         (
5    [NONE]              it
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [FOR]               }
6    [NONE]              
7    [FUNC_DEF]          }
7    [NONE]              