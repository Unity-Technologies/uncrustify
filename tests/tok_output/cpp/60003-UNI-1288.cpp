Line [Token]             Text
1    [IF]                if
1    [SPAREN_OPEN]       (
1    [WORD]              Application
1    [MEMBER]            .
1    [WORD]              platform
1    [COMPARE]           ==
1    [WORD]              RuntimePlatform
1    [MEMBER]            .
1    [WORD]              LinuxEditor
1    [SPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [RETURN]            return
3    [NEW]               new
3    [FUNC_CALL]         ProcessStartInfo
3    [FPAREN_OPEN]       (
3    [STRING]            "smthg"
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [WORD]              Arguments
5    [ASSIGN]            =
5    [WORD]              string
5    [MEMBER]            .
5    [FUNC_CALL]         Format
5    [FPAREN_OPEN]       (
5    [STRING]            "-9 --ss -S aa \"{0}\""
5    [COMMA]             ,
5    [WORD]              file
5    [FPAREN_CLOSE]      )
5    [COMMA]             ,
5    [NEWLINE]           
6    [WORD]              WorkingDirectory
6    [ASSIGN]            =
6    [WORD]              Directory
6    [MEMBER]            .
6    [FUNC_CALL]         GetCurrentDirectory
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [COMMA]             ,
6    [NEWLINE]           
7    [WORD]              UseShellExecute
7    [ASSIGN]            =
7    [WORD]              false
7    [COMMA]             ,
7    [NEWLINE]           
8    [WORD]              CreateNoWindow
8    [ASSIGN]            =
8    [WORD]              true
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           