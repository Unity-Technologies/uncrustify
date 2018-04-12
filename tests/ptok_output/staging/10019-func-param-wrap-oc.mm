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
3    [OC_MSG]            [
3    [OC_MSG]            [
3    [NONE]              NSBezierPath
3    [NONE]              bezierPathWithOvalInRect
3    [NONE]              :
3    [NONE]              NSMakeRect
3    [FUNC_CALL]         (
3    [NONE]              NSMinX
3    [FUNC_CALL]         (
3    [NONE]              pieRect
3    [FUNC_CALL]         )
3    [NONE]              +
3    [NONE]              stroke
3    [NONE]              ,
3    [NONE]              NSMinY
3    [FUNC_CALL]         (
3    [NONE]              pieRect
3    [FUNC_CALL]         )
3    [NONE]              +
3    [NONE]              stroke
3    [NONE]              ,
3    [NONE]              
4    [NONE]              NSWidth
4    [FUNC_CALL]         (
4    [NONE]              pieRect
4    [FUNC_CALL]         )
4    [NONE]              -
4    [NONE]              2
4    [NONE]              *
4    [NONE]              stroke
4    [NONE]              ,
4    [NONE]              NSHeight
4    [FUNC_CALL]         (
4    [NONE]              pieRect
4    [FUNC_CALL]         )
4    [NONE]              -
4    [NONE]              2
4    [NONE]              *
4    [NONE]              stroke
4    [FUNC_CALL]         )
4    [OC_MSG]            ]
4    [NONE]              fill
4    [OC_MSG]            ]
4    [OC_MSG]            ;
4    [NONE]              
5    [IF]                }
5    [NONE]              