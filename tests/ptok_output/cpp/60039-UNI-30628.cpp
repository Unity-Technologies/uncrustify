Line [Parent]            Text
1    [COMMENT_WHOLE]     // Regression 1 FAKE_METHOD expands to a function prototype. Could possibly use PROTO_WRAP like for FAKE_FUNCTION
1    [NONE]              
2    [NONE]              class
2    [CLASS]             Foo
2    [NONE]              
3    [CLASS]             {
3    [NONE]              
4    [NONE]              FAKE_FUNCTION
4    [FUNC_CALL]         (
4    [NONE]              Bar
4    [NONE]              ,
4    [NONE]              GetBarInfo
4    [NONE]              ,
4    [NONE]              const
4    [NONE]              BarInfo
4    [NONE]              &
4    [NONE]              (
4    [NONE]              )
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              FAKE_METHOD
5    [FUNC_CALL]         (
5    [NONE]              Bar
5    [NONE]              ,
5    [NONE]              GetBarInfo
5    [NONE]              ,
5    [NONE]              const
5    [NONE]              BarInfo
5    [NONE]              &
5    [NONE]              (
5    [NONE]              )
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [NONE]              FAKE_FUNCTION_WITH_LOCAL_NAME
6    [FUNC_CALL]         (
6    [NONE]              FakeGetCommonScriptingClasses
6    [NONE]              ,
6    [NONE]              GetCommonScriptingClasses
6    [NONE]              ,
6    [NONE]              const
6    [NONE]              CommonScriptingClasses
6    [NONE]              &
6    [NONE]              (
6    [NONE]              )
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [CLASS]             }
7    [NONE]              