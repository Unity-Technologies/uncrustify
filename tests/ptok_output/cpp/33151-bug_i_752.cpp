Line [Parent]            Text
1    [FUNC_DEF]          int
1    [NONE]              a
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              for
3    [FOR]               (
3    [NONE]              QStringList
3    [NONE]              ::
3    [NONE]              const_iterator
3    [NONE]              codesIt
3    [NONE]              =
3    [NONE]              _codes
3    [NONE]              .
3    [NONE]              constBegin
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [FOR]               ;
3    [NONE]              codesIt
3    [NONE]              !=
3    [NONE]              _codes
3    [NONE]              .
3    [NONE]              constEnd
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [FOR]               ;
3    [NONE]              ++
3    [NONE]              codesIt
3    [FOR]               )
3    [FOR]               {
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [COMMENT_END]       // Current codes enough to compare:
4    [NONE]              
5    [NONE]              (
5    [NONE]              (
5    [NONE]              *
5    [NONE]              codesIt
5    [NONE]              )
5    [NONE]              .
5    [NONE]              size
5    [FUNC_CALL]         (
5    [FUNC_CALL]         )
5    [NONE]              <=
5    [NONE]              strId
5    [NONE]              )
5    [NONE]              ||
5    [NONE]              
6    [COMMENT_WHOLE]     // Character on this slot was not readable:
6    [NONE]              
7    [NONE]              (
7    [NONE]              (
7    [NONE]              *
7    [NONE]              codesIt
7    [NONE]              )
7    [NONE]              .
7    [NONE]              at
7    [FUNC_CALL]         (
7    [NONE]              strId
7    [FUNC_CALL]         )
7    [NONE]              ==
7    [NONE]              m_wildcard
7    [NONE]              )
7    [NONE]              ||
7    [NONE]              
8    [COMMENT_WHOLE]     // This character is matching:
8    [NONE]              
9    [NONE]              (
9    [NONE]              code
9    [NONE]              .
9    [NONE]              at
9    [FUNC_CALL]         (
9    [NONE]              strId
9    [FUNC_CALL]         )
9    [NONE]              ==
9    [NONE]              (
9    [NONE]              *
9    [NONE]              codesIt
9    [NONE]              )
9    [NONE]              .
9    [NONE]              at
9    [FUNC_CALL]         (
9    [NONE]              strId
9    [FUNC_CALL]         )
9    [NONE]              )
9    [IF]                )
9    [IF]                {
9    [NONE]              
10   [COMMENT_WHOLE]     // Ignore this slot:
10   [NONE]              
11   [NONE]              continue
11   [NONE]              ;
11   [NONE]              
12   [IF]                }
12   [NONE]              
13   [FOR]               }
13   [NONE]              
14   [FUNC_DEF]          }