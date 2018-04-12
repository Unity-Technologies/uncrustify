Line [Parent]            Text
1    [NONE]              double
1    [NONE]              delayInSeconds
1    [NONE]              =
1    [NONE]              2.0
1    [NONE]              ;
1    [NONE]              
2    [NONE]              dispatch_time_t
2    [NONE]              popTime
2    [NONE]              =
2    [NONE]              dispatch_time
2    [FUNC_CALL]         (
2    [NONE]              DISPATCH_TIME_NOW
2    [NONE]              ,
2    [C_CAST]            (
2    [C_CAST]            int64_t
2    [C_CAST]            )
2    [NONE]              (
2    [NONE]              delayInSeconds
2    [NONE]              *
2    [NONE]              NSEC_PER_SEC
2    [NONE]              )
2    [FUNC_CALL]         )
2    [NONE]              ;
2    [NONE]              
3    [NONE]              dispatch_after
3    [FUNC_CALL]         (
3    [NONE]              popTime
3    [NONE]              ,
3    [NONE]              dispatch_get_main_queue
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ,
3    [OC_BLOCK_EXPR]     ^
3    [OC_BLOCK_EXPR]     (
3    [OC_BLOCK_EXPR]     void
3    [OC_BLOCK_EXPR]     )
3    [OC_BLOCK_EXPR]     {
3    [NONE]              
4    [NONE]              <#code to be executed on the main queue after delay#>
4    [NONE]              
5    [OC_BLOCK_EXPR]     }
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              