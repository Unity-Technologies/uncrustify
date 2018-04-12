Line [Token]             Text
1    [FUNC_CALL]         MergeJSFiles
1    [FPAREN_OPEN]       (
1    [NEW]               new
1    [WORD]              string
1    [TSQUARE]           []
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [FUNC_CALL]         GetDecompressor
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [COMMA]             ,
2    [NEWLINE]           
3    [WORD]              Paths
3    [MEMBER]            .
3    [FUNC_CALL]         Combine
3    [FPAREN_OPEN]       (
3    [WORD]              buildToolsDir
3    [COMMA]             ,
3    [STRING]            "UnityConfig"
3    [FPAREN_CLOSE]      )
3    [COMMA]             ,
3    [NEWLINE]           
4    [WORD]              Paths
4    [MEMBER]            .
4    [FUNC_CALL]         Combine
4    [FPAREN_OPEN]       (
4    [WORD]              args
4    [MEMBER]            .
4    [WORD]              stagingAreaData
4    [COMMA]             ,
4    [WORD]              kOutputFileLoaderFileName
4    [FPAREN_CLOSE]      )
4    [COMMA]             ,
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [COMMA]             ,
5    [WORD]              unityLoader
5    [NEWLINE]           
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
9    [THROW]             throw
9    [NEW]               new
9    [WORD]              System
9    [MEMBER]            .
9    [FUNC_CALL]         Exception
9    [FPAREN_OPEN]       (
9    [NEWLINE]           
10   [STRING]            "'Fast Rebuild' option requires prebuilt JavaScript version of Unity engine. The following files are missing: "
10   [NEWLINE]           
11   [ARITH]             +
11   [PAREN_OPEN]        (
11   [NOT]               !
11   [WORD]              File
11   [MEMBER]            .
11   [FUNC_CALL]         Exists
11   [FPAREN_OPEN]       (
11   [WORD]              UnityNativeJs
11   [FPAREN_CLOSE]      )
11   [QUESTION]          ?
11   [STRING]            "\n"
11   [ARITH]             +
11   [WORD]              UnityNativeJs
11   [COND_COLON]        :
11   [STRING]            ""
11   [PAREN_CLOSE]       )
11   [NEWLINE]           
12   [ARITH]             +
12   [PAREN_OPEN]        (
12   [NOT]               !
12   [WORD]              File
12   [MEMBER]            .
12   [FUNC_CALL]         Exists
12   [FPAREN_OPEN]       (
12   [WORD]              UnityNativeJs
12   [ARITH]             +
12   [STRING]            ".mem"
12   [FPAREN_CLOSE]      )
12   [QUESTION]          ?
12   [STRING]            "\n"
12   [ARITH]             +
12   [WORD]              UnityNativeJs
12   [ARITH]             +
12   [STRING]            ".mem"
12   [COND_COLON]        :
12   [STRING]            ""
12   [PAREN_CLOSE]       )
12   [NEWLINE]           
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           