Line [Parent]            Text
1    [NONE]              if
1    [IF]                (
1    [NONE]              Application
1    [NONE]              .
1    [NONE]              platform
1    [NONE]              ==
1    [NONE]              RuntimePlatform
1    [NONE]              .
1    [NONE]              LinuxEditor
1    [IF]                )
1    [NONE]              
2    [IF]                {
2    [NONE]              
3    [NONE]              return
3    [NONE]              new
3    [NONE]              ProcessStartInfo
3    [FUNC_CALL]         (
3    [NONE]              "smthg"
3    [FUNC_CALL]         )
3    [NONE]              
4    [FUNC_CALL]         {
4    [NONE]              
5    [NONE]              Arguments
5    [NONE]              =
5    [NONE]              string
5    [NONE]              .
5    [NONE]              Format
5    [FUNC_CALL]         (
5    [NONE]              "-9 --ss -S aa \"{0}\""
5    [NONE]              ,
5    [NONE]              file
5    [FUNC_CALL]         )
5    [NONE]              ,
5    [NONE]              
6    [NONE]              WorkingDirectory
6    [NONE]              =
6    [NONE]              Directory
6    [NONE]              .
6    [NONE]              GetCurrentDirectory
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [NONE]              ,
6    [NONE]              
7    [NONE]              UseShellExecute
7    [NONE]              =
7    [NONE]              false
7    [NONE]              ,
7    [NONE]              
8    [NONE]              CreateNoWindow
8    [NONE]              =
8    [NONE]              true
8    [NONE]              
9    [FUNC_CALL]         }
9    [NONE]              ;
9    [NONE]              
10   [IF]                }
10   [NONE]              