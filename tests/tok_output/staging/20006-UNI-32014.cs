Line [Token]             Text
1    [COMMENT_CPP]       //TestCase-001
1    [NEWLINE]           
2    [NEW]               new
2    [FUNC_CALL]         WaveformStreamer
2    [FPAREN_OPEN]       (
2    [WORD]              s_sweepedClip
2    [COMMA]             ,
2    [NUMBER]            0
2    [COMMA]             ,
2    [WORD]              s_sweepedClip
2    [MEMBER]            .
2    [WORD]              length
2    [COMMA]             ,
2    [NUMBER]            1
2    [COMMA]             ,
2    [NEWLINE]           
3    [PAREN_OPEN]        (
3    [WORD]              streamer
3    [COMMA]             ,
3    [WORD]              floats
3    [COMMA]             ,
3    [WORD]              remaining
3    [PAREN_CLOSE]       )
3    [LAMBDA]            =>
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [RETURN]            return
5    [WORD]              false
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [COMMENT_CPP]       //TestCase-002
9    [NEWLINE]           
10   [TYPE]              var
10   [WORD]              streamer
10   [ASSIGN]            =
10   [NEW]               new
10   [FUNC_CALL]         WaveformStreamer
10   [FPAREN_OPEN]       (
10   [WORD]              s_sweepedClip
10   [COMMA]             ,
10   [NUMBER]            0
10   [COMMA]             ,
10   [WORD]              s_sweepedClip
10   [MEMBER]            .
10   [WORD]              length
10   [COMMA]             ,
10   [WORD]              s_sweepedClip
10   [MEMBER]            .
10   [WORD]              samples
10   [COMMA]             ,
10   [NEWLINE]           
11   [PAREN_OPEN]        (
11   [WORD]              s
11   [COMMA]             ,
11   [WORD]              floats
11   [COMMA]             ,
11   [WORD]              remaining
11   [PAREN_CLOSE]       )
11   [LAMBDA]            =>
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [RETURN]            return
13   [WORD]              false
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           