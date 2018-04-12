Line [Parent]            Text
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              include
2    [NONE]              <stdio.h>
2    [NONE]              
4    [FUNC_PROTO]        static
4    [FUNC_PROTO]        void
4    [NONE]              status_cb
4    [FUNC_PROTO]        (
4    [NONE]              status_t
4    [NONE]              *
4    [NONE]              status
4    [FUNC_PROTO]        )
4    [FUNC_PROTO]        ;
4    [NONE]              
5    [FUNC_PROTO]        static
5    [FUNC_PROTO]        int
5    [NONE]              add_conn
5    [FUNC_PROTO]        (
5    [NONE]              const
5    [NONE]              char
5    [NONE]              *
5    [NONE]              path
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [NONE]              
7    [PP_IF]             #
7    [NONE]              ifdef
7    [NONE]              USE_FOO_CMD
7    [NONE]              
8    [FUNC_PROTO]        static
8    [FUNC_PROTO]        void
8    [NONE]              foo_cmd
8    [FUNC_PROTO]        (
8    [NONE]              void
8    [NONE]              *
8    [NONE]              user
8    [NONE]              ,
8    [NONE]              const
8    [NONE]              info_t
8    [NONE]              *
8    [NONE]              info
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [NONE]              
9    [PP_ENDIF]          #
9    [NONE]              endif
9    [NONE]              