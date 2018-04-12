Line [Parent]            Text
1    [COMMENT_WHOLE]     //TestCase-001
1    [NONE]              
2    [PP_IF]             #
2    [NONE]              if
2    [NONE]              UNITY_DEFER_GRAPHICS_JOBS_SCHEDULE
2    [NONE]              
3    [FUNC_DEF]          void
3    [FUNC_DEF]          GfxDevice
3    [FUNC_DEF]          ::
3    [NONE]              ScheduleAsyncJob
3    [FUNC_DEF]          (
3    [NONE]              AsyncCommandJobFunc
3    [NONE]              *
3    [NONE]              jobFunc
3    [NONE]              ,
3    [NONE]              GfxDeviceAsyncCommand
3    [NONE]              *
3    [NONE]              cmd
3    [NONE]              ,
3    [NONE]              const
3    [NONE]              JobFence
3    [NONE]              &
3    [NONE]              depends
3    [NONE]              ,
3    [NONE]              JobBatchDispatcher
3    [NONE]              &
3    [NONE]              dispatcher
3    [FUNC_DEF]          )
3    [NONE]              
4    [PP_ELSE]           #
4    [FUNC_DEF]          else
4    [NONE]              
5    [FUNC_DEF]          JobFence
5    [FUNC_DEF]          &
5    [FUNC_DEF]          GfxDevice
5    [FUNC_DEF]          ::
5    [FUNC_DEF]          ScheduleAsyncJob
5    [FUNC_DEF]          (
5    [FUNC_DEF]          AsyncCommandJobFunc
5    [FUNC_DEF]          *
5    [FUNC_DEF]          jobFunc
5    [FUNC_DEF]          ,
5    [FUNC_DEF]          GfxDeviceAsyncCommand
5    [FUNC_DEF]          *
5    [FUNC_DEF]          cmd
5    [FUNC_DEF]          ,
5    [FUNC_DEF]          const
5    [FUNC_DEF]          JobFence
5    [FUNC_DEF]          &
5    [FUNC_DEF]          depends
5    [FUNC_DEF]          ,
5    [FUNC_DEF]          JobBatchDispatcher
5    [FUNC_DEF]          &
5    [FUNC_DEF]          dispatcher
5    [FUNC_DEF]          )
5    [NONE]              
6    [PP_ENDIF]          #
6    [FUNC_DEF]          endif
6    [COMMENT_END]       // #if UNITY_DEFER_GRAPHICS_JOBS_SCHEDULE
6    [NONE]              