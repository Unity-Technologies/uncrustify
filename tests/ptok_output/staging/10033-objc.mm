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
3    [NONE]              key
3    [IF]                )
3    [IF]                
3    [NONE]              
4    [NONE]              ret
4    [NONE]              .
4    [NONE]              key
4    [NONE]              =
4    [OC_MSG]            [
4    [NONE]              NSString
4    [NONE]              stringWithCharacters
4    [NONE]              :
4    [NONE]              &
4    [NONE]              key
4    [NONE]              length
4    [OC_MSG_NAME]       :
4    [NONE]              1
4    [OC_MSG]            ]
4    [OC_MSG]            ;
4    [IF]                
4    [NONE]              
6    [OC_MSG]            [
6    [NONE]              gUndoMenu
6    [NONE]              ->
6    [NONE]              m_UndoItem
6    [NONE]              setTitle
6    [NONE]              :
6    [OC_MSG]            [
6    [NONE]              NSString
6    [NONE]              stringWithFormat
6    [NONE]              :
6    [OC_MSG]            [
6    [NONE]              NSString
6    [NONE]              stringWithUTF8String
6    [NONE]              :
6    [NONE]              localizedUndo
6    [OC_MSG]            ]
6    [NONE]              ,
6    [NONE]              undoName
6    [NONE]              .
6    [NONE]              c_str
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [OC_MSG]            ]
6    [OC_MSG]            ]
6    [OC_MSG]            ;
6    [NONE]              
7    [OC_MSG]            [
7    [NONE]              gUndoMenu
7    [NONE]              ->
7    [NONE]              m_RedoItem
7    [NONE]              setTitle
7    [NONE]              :
7    [OC_MSG]            [
7    [NONE]              NSString
7    [NONE]              stringWithFormat
7    [NONE]              :
7    [OC_MSG]            [
7    [NONE]              NSString
7    [NONE]              stringWithUTF8String
7    [NONE]              :
7    [NONE]              localizedRedo
7    [OC_MSG]            ]
7    [NONE]              ,
7    [NONE]              redoName
7    [NONE]              .
7    [NONE]              c_str
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [OC_MSG]            ]
7    [OC_MSG]            ]
7    [OC_MSG]            ;
7    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              