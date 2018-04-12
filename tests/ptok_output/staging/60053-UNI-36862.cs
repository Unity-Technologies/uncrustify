Line [Parent]            Text
1    [NONE]              public
1    [NONE]              unsafe
1    [NONE]              struct
1    [STRUCT]            QueryKeyNameCommand
1    [STRUCT]            :
1    [NONE]              IInputDeviceCommandInfo
1    [NONE]              
2    [STRUCT]            {
2    [NONE]              
3    [FUNC_DEF]          public
3    [FUNC_DEF]          string
3    [NONE]              ReadKeyName
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [FIXED]             fixed
5    [FUNC_DEF]          (
5    [NONE]              QueryKeyNameCommand
5    [NONE]              *
5    [NONE]              thisPtr
5    [FUNC_PROTO]        =
5    [NONE]              &
5    [NONE]              this
5    [FUNC_DEF]          )
5    [NONE]              
6    [FUNC_DEF]          {
6    [NONE]              
7    [NONE]              return
7    [NONE]              StringHelpers
7    [NONE]              .
7    [NONE]              ReadStringFromBuffer
7    [FUNC_CALL]         (
7    [NONE]              new
7    [NONE]              IntPtr
7    [FUNC_CALL]         (
7    [NONE]              thisPtr
7    [NONE]              ->
7    [NONE]              nameBuffer
7    [FUNC_CALL]         )
7    [NONE]              ,
7    [NONE]              kMaxNameLength
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              
9    [NONE]              return
9    [NONE]              array
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
11   [STRUCT]            }
11   [NONE]              