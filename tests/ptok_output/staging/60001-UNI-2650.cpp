Line [Parent]            Text
1    [NONE]              MergeJSFiles
1    [FUNC_CALL]         (
1    [NONE]              new
1    [NONE]              string
1    [NONE]              []
1    [BRACED_INIT_LIST]    {
1    [NONE]              
2    [NONE]              GetDecompressor
2    [FUNC_CALL]         (
2    [FUNC_CALL]         )
2    [NONE]              ,
2    [NONE]              
3    [NONE]              Paths
3    [NONE]              .
3    [NONE]              Combine
3    [FUNC_CALL]         (
3    [NONE]              buildToolsDir
3    [NONE]              ,
3    [NONE]              "UnityConfig"
3    [FUNC_CALL]         )
3    [NONE]              ,
3    [NONE]              
4    [NONE]              Paths
4    [NONE]              .
4    [NONE]              Combine
4    [FUNC_CALL]         (
4    [NONE]              args
4    [NONE]              .
4    [NONE]              stagingAreaData
4    [NONE]              ,
4    [NONE]              kOutputFileLoaderFileName
4    [FUNC_CALL]         )
4    [NONE]              ,
4    [NONE]              
5    [BRACED_INIT_LIST]    }
5    [NONE]              ,
5    [NONE]              unityLoader
5    [NONE]              
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
9    [NONE]              throw
9    [NONE]              new
9    [NONE]              System
9    [NONE]              .
9    [NONE]              Exception
9    [FUNC_CALL]         (
9    [NONE]              
10   [NONE]              "'Fast Rebuild' option requires prebuilt JavaScript version of Unity engine. The following files are missing: "
10   [NONE]              
11   [NONE]              +
11   [NONE]              (
11   [NONE]              !
11   [NONE]              File
11   [NONE]              .
11   [NONE]              Exists
11   [FUNC_CALL]         (
11   [NONE]              UnityNativeJs
11   [FUNC_CALL]         )
11   [NONE]              ?
11   [NONE]              "\n"
11   [NONE]              +
11   [NONE]              UnityNativeJs
11   [NONE]              :
11   [NONE]              ""
11   [NONE]              )
11   [NONE]              
12   [NONE]              +
12   [NONE]              (
12   [NONE]              !
12   [NONE]              File
12   [NONE]              .
12   [NONE]              Exists
12   [FUNC_CALL]         (
12   [NONE]              UnityNativeJs
12   [NONE]              +
12   [NONE]              ".mem"
12   [FUNC_CALL]         )
12   [NONE]              ?
12   [NONE]              "\n"
12   [NONE]              +
12   [NONE]              UnityNativeJs
12   [NONE]              +
12   [NONE]              ".mem"
12   [NONE]              :
12   [NONE]              ""
12   [NONE]              )
12   [NONE]              
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              