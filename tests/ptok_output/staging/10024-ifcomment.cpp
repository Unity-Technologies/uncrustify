Line [Parent]            Text
1    [NONE]              if
1    [IF]                (
1    [NONE]              true
1    [IF]                )
1    [IF]                
1    [COMMENT_END]       // indent_relative_single_line_comments = false
1    [NONE]              
2    [NONE]              return
2    [NONE]              ;
2    [IF]                
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              foo
3    [IF]                )
3    [COMMENT_END]       // true
3    [NONE]              
3    [IF]                {
3    [NONE]              
4    [NONE]              bar
4    [FUNC_CALL]         (
4    [NONE]              1
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [COMMENT_END]       // action 1
4    [NONE]              
5    [IF]                }
5    [NONE]              
5    [NONE]              else
5    [COMMENT_END]       // false
5    [NONE]              
5    [ELSE]              {
5    [NONE]              
6    [NONE]              bar
6    [FUNC_CALL]         (
6    [NONE]              2
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [COMMENT_END]       // action 2
6    [NONE]              
7    [ELSE]              }
7    [NONE]              