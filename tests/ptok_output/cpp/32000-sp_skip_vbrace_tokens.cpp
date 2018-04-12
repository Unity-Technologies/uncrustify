Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              data
3    [IF]                )
3    [IF]                
3    [NONE]              go
3    [NONE]              =
3    [NONE]              new
3    [NONE]              ClassA
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [IF]                
3    [NONE]              
4    [NONE]              else
4    [ELSE]              
4    [NONE]              go
4    [NONE]              =
4    [NONE]              new
4    [NONE]              ClassB
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [ELSE]              
4    [NONE]              
6    [NONE]              if
6    [IF]                (
6    [NONE]              evt
6    [NONE]              .
6    [NONE]              alt
6    [IF]                )
6    [IF]                
6    [NONE]              modifiers
6    [NONE]              +=
6    [NONE]              "Alt+"
6    [NONE]              ;
6    [IF]                
6    [NONE]              
7    [NONE]              if
7    [IF]                (
7    [NONE]              evt
7    [NONE]              .
7    [NONE]              command
7    [IF]                )
7    [IF]                
7    [NONE]              modifiers
7    [NONE]              +=
7    [NONE]              "Cmd+"
7    [NONE]              ;
7    [IF]                
7    [NONE]              
8    [NONE]              if
8    [IF]                (
8    [NONE]              evt
8    [NONE]              .
8    [NONE]              control
8    [IF]                )
8    [IF]                
8    [NONE]              modifiers
8    [NONE]              +=
8    [NONE]              "Ctrl+"
8    [NONE]              ;
8    [IF]                
8    [NONE]              
9    [NONE]              if
9    [IF]                (
9    [NONE]              evt
9    [NONE]              .
9    [NONE]              shift
9    [IF]                )
9    [IF]                
9    [NONE]              modifiers
9    [NONE]              +=
9    [NONE]              "Shift+"
9    [NONE]              ;
9    [IF]                
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              