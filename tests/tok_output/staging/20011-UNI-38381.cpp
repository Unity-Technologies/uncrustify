Line [Token]             Text
1    [COMMENT_CPP]       //TestCase-001
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_IF]             if
2    [TYPE]              UNITY_DEFER_GRAPHICS_JOBS_SCHEDULE
2    [NEWLINE]           
3    [TYPE]              void
3    [TYPE]              GfxDevice
3    [DC_MEMBER]         ::
3    [FUNC_DEF]          ScheduleAsyncJob
3    [FPAREN_OPEN]       (
3    [TYPE]              AsyncCommandJobFunc
3    [PTR_TYPE]          *
3    [TYPE]              jobFunc
3    [COMMA]             ,
3    [TYPE]              GfxDeviceAsyncCommand
3    [PTR_TYPE]          *
3    [TYPE]              cmd
3    [COMMA]             ,
3    [QUALIFIER]         const
3    [TYPE]              JobFence
3    [BYREF]             &
3    [TYPE]              depends
3    [COMMA]             ,
3    [TYPE]              JobBatchDispatcher
3    [BYREF]             &
3    [TYPE]              dispatcher
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_ELSE]           else
4    [NEWLINE]           
5    [TYPE]              JobFence
5    [BYREF]             &
5    [TYPE]              GfxDevice
5    [DC_MEMBER]         ::
5    [FUNC_DEF]          ScheduleAsyncJob
5    [FPAREN_OPEN]       (
5    [TYPE]              AsyncCommandJobFunc
5    [PTR_TYPE]          *
5    [WORD]              jobFunc
5    [COMMA]             ,
5    [TYPE]              GfxDeviceAsyncCommand
5    [PTR_TYPE]          *
5    [WORD]              cmd
5    [COMMA]             ,
5    [QUALIFIER]         const
5    [TYPE]              JobFence
5    [BYREF]             &
5    [WORD]              depends
5    [COMMA]             ,
5    [TYPE]              JobBatchDispatcher
5    [BYREF]             &
5    [WORD]              dispatcher
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ENDIF]          endif
6    [COMMENT_CPP]       // #if UNITY_DEFER_GRAPHICS_JOBS_SCHEDULE
6    [NEWLINE]           