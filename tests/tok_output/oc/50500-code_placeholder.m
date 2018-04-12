Line [Token]             Text
1    [TYPE]              double
1    [WORD]              delayInSeconds
1    [ASSIGN]            =
1    [NUMBER_FP]         2.0
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPE]              dispatch_time_t
2    [WORD]              popTime
2    [ASSIGN]            =
2    [FUNC_CALL]         dispatch_time
2    [FPAREN_OPEN]       (
2    [WORD]              DISPATCH_TIME_NOW
2    [COMMA]             ,
2    [PAREN_OPEN]        (
2    [TYPE]              int64_t
2    [PAREN_CLOSE]       )
2    [PAREN_OPEN]        (
2    [WORD]              delayInSeconds
2    [ARITH]             *
2    [WORD]              NSEC_PER_SEC
2    [PAREN_CLOSE]       )
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [FUNC_CALL]         dispatch_after
3    [FPAREN_OPEN]       (
3    [WORD]              popTime
3    [COMMA]             ,
3    [FUNC_CALL]         dispatch_get_main_queue
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [COMMA]             ,
3    [OC_BLOCK_CARET]    ^
3    [FPAREN_OPEN]       (
3    [TYPE]              void
3    [FPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [WORD]              <#code to be executed on the main queue after delay#>
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           