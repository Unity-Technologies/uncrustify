Line [Parent]            Text
1    [FUNC_PROTO]        extern
1    [COMMENT_EMBED]     /*@observer@*/ /*@null@*/
1    [FUNC_PROTO]        const
1    [FUNC_PROTO]        dcroid_t
1    [FUNC_PROTO]        *
1    [NONE]              dcrp_oidget
1    [NONE]              
2    [FUNC_PROTO]        (
2    [NONE]              
3    [COMMENT_START]     /*@in@*/
3    [NONE]              const
3    [NONE]              char
3    [NONE]              *
3    [NONE]              h
3    [NONE]              ,
3    [NONE]              
4    [COMMENT_START]     /*@in@*/
4    [NONE]              const
4    [NONE]              char
4    [NONE]              *
4    [NONE]              t
4    [NONE]              
5    [FUNC_PROTO]        )
5    [COMMENT_EMBED]     /*@ensures maxRead(result) >= 0@*/
5    [FUNC_PROTO]        ;
5    [NONE]              
7    [FUNC_PROTO]        extern
7    [COMMENT_EMBED]     /*@observer@*/
7    [FUNC_PROTO]        const
7    [FUNC_PROTO]        char
7    [FUNC_PROTO]        *
7    [NONE]              dcrp_oidlabel
7    [NONE]              
8    [FUNC_PROTO]        (
8    [NONE]              
9    [COMMENT_START]     /*@in@*/
9    [NONE]              const
9    [NONE]              dcroid_t
9    [NONE]              *
9    [NONE]              oid
9    [NONE]              
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [NONE]              