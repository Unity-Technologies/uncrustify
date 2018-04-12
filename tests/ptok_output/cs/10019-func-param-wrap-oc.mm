Line [Parent]            Text
1    [NONE]              if
1    [IF]                (
1    [NONE]              progress
1    [NONE]              <=
1    [NONE]              0
1    [IF]                )
1    [NONE]              
2    [IF]                {
2    [NONE]              
3    [CS_SQ_STMT]        [
3    [CS_SQ_STMT]        [
3    [CS_SQ_STMT]        NSBezierPath
3    [CS_SQ_STMT]        bezierPathWithOvalInRect
3    [CS_SQ_STMT]        :
3    [CS_SQ_STMT]        NSMakeRect
3    [FUNC_CALL]         (
3    [CS_SQ_STMT]        NSMinX
3    [FUNC_CALL]         (
3    [CS_SQ_STMT]        pieRect
3    [FUNC_CALL]         )
3    [CS_SQ_STMT]        +
3    [CS_SQ_STMT]        stroke
3    [CS_SQ_STMT]        ,
3    [CS_SQ_STMT]        NSMinY
3    [FUNC_CALL]         (
3    [CS_SQ_STMT]        pieRect
3    [FUNC_CALL]         )
3    [CS_SQ_STMT]        +
3    [CS_SQ_STMT]        stroke
3    [CS_SQ_STMT]        ,
3    [CS_SQ_STMT]        
4    [CS_SQ_STMT]        NSWidth
4    [FUNC_CALL]         (
4    [CS_SQ_STMT]        pieRect
4    [FUNC_CALL]         )
4    [CS_SQ_STMT]        -
4    [CS_SQ_STMT]        2
4    [CS_SQ_STMT]        *
4    [CS_SQ_STMT]        stroke
4    [CS_SQ_STMT]        ,
4    [CS_SQ_STMT]        NSHeight
4    [FUNC_CALL]         (
4    [CS_SQ_STMT]        pieRect
4    [FUNC_CALL]         )
4    [CS_SQ_STMT]        -
4    [CS_SQ_STMT]        2
4    [CS_SQ_STMT]        *
4    [CS_SQ_STMT]        stroke
4    [FUNC_CALL]         )
4    [CS_SQ_STMT]        ]
4    [CS_SQ_STMT]        fill
4    [CS_SQ_STMT]        ]
4    [NONE]              ;
4    [NONE]              
5    [IF]                }
5    [NONE]              