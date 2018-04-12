Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              TestClass
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [QUALIFIER]         private
2    [TYPE]              Map
2    [ANGLE_OPEN]        <
2    [QUESTION]          ?
2    [COMMA]             ,
2    [QUESTION]          ?
2    [ANGLE_CLOSE]       >
2    [WORD]              map1
2    [ASSIGN]            =
2    [WORD]              null
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [QUALIFIER]         private
3    [TYPE]              Map
3    [ANGLE_OPEN]        <
3    [QUESTION]          ?
3    [COMMA]             ,
3    [QUESTION]          ?
3    [ANGLE_CLOSE]       >
3    [WORD]              map2
3    [ASSIGN]            =
3    [WORD]              null
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [QUALIFIER]         private
4    [TYPE]              Map
4    [ANGLE_OPEN]        <
4    [QUESTION]          ?
4    [COMMA]             ,
4    [QUESTION]          ?
4    [ANGLE_CLOSE]       >
4    [WORD]              map3
4    [ASSIGN]            =
4    [WORD]              null
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [QUALIFIER]         public
6    [QUALIFIER]         static
6    [TYPE]              HttpUriRequest
6    [FUNC_DEF]          getHttpUriRequest
6    [FPAREN_OPEN]       (
6    [TYPE]              TestClassAPIRequestMethod
6    [WORD]              method
6    [COMMA]             ,
6    [TYPE]              String
6    [WORD]              apiPath
6    [FPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [SWITCH]            switch
7    [SPAREN_OPEN]       (
7    [WORD]              method
7    [SPAREN_CLOSE]      )
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [CASE]              case
8    [WORD]              BOTTOM_LEFT
8    [CASE_COLON]        :
8    [NEWLINE]           
9    [BREAK]             break
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [CASE]              case
10   [WORD]              GET
10   [CASE_COLON]        :
10   [NEWLINE]           
11   [WORD]              req
11   [ASSIGN]            =
11   [NEW]               new
11   [FUNC_CALL]         HttpGet
11   [FPAREN_OPEN]       (
11   [WORD]              url
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BREAK]             break
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [CASE]              case
13   [WORD]              POST
13   [CASE_COLON]        :
13   [NEWLINE]           
14   [WORD]              req
14   [ASSIGN]            =
14   [NEW]               new
14   [FUNC_CALL]         HttpPost
14   [FPAREN_OPEN]       (
14   [WORD]              url
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BREAK]             break
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [CASE]              case
16   [WORD]              PUT
16   [CASE_COLON]        :
16   [NEWLINE]           
17   [WORD]              req
17   [ASSIGN]            =
17   [NEW]               new
17   [FUNC_CALL]         HttpPut
17   [FPAREN_OPEN]       (
17   [WORD]              url
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BREAK]             break
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [CASE]              case
19   [WORD]              DELETE
19   [CASE_COLON]        :
19   [NEWLINE]           
20   [WORD]              req
20   [ASSIGN]            =
20   [NEW]               new
20   [FUNC_CALL]         HttpDelete
20   [FPAREN_OPEN]       (
20   [WORD]              url
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BREAK]             break
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [RETURN]            return
23   [WORD]              req
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           