Line [Parent]            Text
1    [NONE]              if
1    [IF]                (
1    [NONE]              m_Preview
1    [NONE]              .
1    [NONE]              GetExpanded
1    [FUNC_CALL]         (
1    [FUNC_CALL]         )
1    [IF]                )
1    [NONE]              
2    [IF]                {
2    [NONE]              
3    [NONE]              m_EventSearchString
3    [NONE]              =
3    [NONE]              EditorGUI
3    [NONE]              .
3    [NONE]              TextField
3    [FUNC_CALL]         (
3    [NONE]              searchRect
3    [NONE]              ,
3    [NONE]              m_EventSearchString
3    [NONE]              ,
3    [NONE]              Styles
3    [NONE]              .
3    [NONE]              toolbarSearchField
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [NONE]              GUILayout
4    [NONE]              .
4    [NONE]              Button
4    [FUNC_CALL]         (
4    [NONE]              
5    [NONE]              GUIContent
5    [NONE]              .
5    [NONE]              none
5    [NONE]              ,
5    [NONE]              
6    [NONE]              m_EventSearchString
6    [NONE]              ==
6    [NONE]              string
6    [NONE]              .
6    [NONE]              Empty
6    [NONE]              ?
6    [NONE]              Styles
6    [NONE]              .
6    [NONE]              toolbarSearchFieldCancelEmpty
6    [NONE]              :
6    [NONE]              Styles
6    [NONE]              .
6    [NONE]              toolbarSearchFieldCancel
6    [FUNC_CALL]         )
6    [IF]                )
6    [NONE]              
7    [IF]                {
7    [NONE]              
8    [IF]                }
8    [NONE]              
9    [IF]                }
9    [NONE]              
11   [COMMENT_WHOLE]     // The closing parenthesis is being indented twice.
11   [NONE]              
12   [NONE]              bool
12   [NONE]              success
12   [NONE]              =
12   [NONE]              GenerateSecondaryUVSet
12   [FUNC_CALL]         (
12   [NONE]              
13   [NONE]              &
13   [NONE]              mesh
13   [NONE]              .
13   [NONE]              vertices
13   [NONE]              [
13   [NONE]              0
13   [NONE]              ]
13   [NONE]              .
13   [NONE]              x
13   [NONE]              ,
13   [NONE]              mesh
13   [NONE]              .
13   [NONE]              vertices
13   [NONE]              .
13   [NONE]              size
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              ,
13   [NONE]              
14   [NONE]              &
14   [NONE]              triUV
14   [NONE]              [
14   [NONE]              0
14   [NONE]              ]
14   [NONE]              .
14   [NONE]              x
14   [NONE]              ,
14   [NONE]              &
14   [NONE]              triList
14   [NONE]              [
14   [NONE]              0
14   [NONE]              ]
14   [NONE]              ,
14   [NONE]              triSrcPoly
14   [NONE]              .
14   [NONE]              size
14   [FUNC_CALL]         (
14   [FUNC_CALL]         )
14   [NONE]              ?
14   [NONE]              &
14   [NONE]              triSrcPoly
14   [NONE]              [
14   [NONE]              0
14   [NONE]              ]
14   [NONE]              :
14   [NONE]              0
14   [NONE]              ,
14   [NONE]              triCount
14   [NONE]              ,
14   [NONE]              
15   [NONE]              &
15   [NONE]              outUV
15   [NONE]              [
15   [NONE]              0
15   [NONE]              ]
15   [NONE]              .
15   [NONE]              x
15   [NONE]              ,
15   [NONE]              param
15   [NONE]              ,
15   [NONE]              errorBuffer
15   [NONE]              ,
15   [NONE]              bufferSize
15   [NONE]              
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              