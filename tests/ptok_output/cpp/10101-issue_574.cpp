Line [Parent]            Text
1    [NONE]              class
1    [CLASS]             A
1    [NONE]              
1    [CLASS]             {
1    [NONE]              
2    [COMMENT_WHOLE]     // crash (two parameter, 2nd string parameter has space)
2    [NONE]              
3    [FUNC_PROTO]        void
3    [NONE]              check
3    [FUNC_PROTO]        (
3    [NONE]              const
3    [NONE]              QObject
3    [NONE]              *
3    [NONE]              object
3    [NONE]              ,
3    [NONE]              const
3    [NONE]              QStringList
3    [NONE]              &
3    [NONE]              strList
3    [FUNC_PROTO]        =
3    [NONE]              QStringList
3    [CPP_CAST]          (
3    [NONE]              QString
3    [FUNC_CALL]         (
3    [NONE]              QLatin1String
3    [FUNC_CALL]         (
3    [NONE]              "one two"
3    [FUNC_CALL]         )
3    [FUNC_CALL]         )
3    [CPP_CAST]          )
3    [FUNC_PROTO]        )
3    [FUNC_PROTO]        ;
3    [NONE]              
4    [COMMENT_WHOLE]     // no crash (two parameter, 2nd string parameter has no space)
4    [NONE]              
5    [FUNC_PROTO]        void
5    [NONE]              check
5    [FUNC_PROTO]        (
5    [NONE]              const
5    [NONE]              QObject
5    [NONE]              *
5    [NONE]              object
5    [NONE]              ,
5    [NONE]              const
5    [NONE]              QStringList
5    [NONE]              &
5    [NONE]              strList
5    [FUNC_PROTO]        =
5    [NONE]              QStringList
5    [CPP_CAST]          (
5    [NONE]              QString
5    [FUNC_CALL]         (
5    [NONE]              QLatin1String
5    [FUNC_CALL]         (
5    [NONE]              "one"
5    [FUNC_CALL]         )
5    [FUNC_CALL]         )
5    [CPP_CAST]          )
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [NONE]              
6    [COMMENT_WHOLE]     // no crash (removed QLatin1String)
6    [NONE]              
7    [FUNC_PROTO]        void
7    [NONE]              check
7    [FUNC_PROTO]        (
7    [NONE]              const
7    [NONE]              QObject
7    [NONE]              *
7    [NONE]              object
7    [NONE]              ,
7    [NONE]              const
7    [NONE]              QStringList
7    [NONE]              &
7    [NONE]              strList
7    [FUNC_PROTO]        =
7    [NONE]              QStringList
7    [CPP_CAST]          (
7    [NONE]              QString
7    [FUNC_CALL]         (
7    [NONE]              (
7    [NONE]              "one two"
7    [NONE]              )
7    [FUNC_CALL]         )
7    [CPP_CAST]          )
7    [FUNC_PROTO]        )
7    [FUNC_PROTO]        ;
7    [NONE]              
8    [COMMENT_WHOLE]     // no crash (removed QString(QLatin1String))
8    [NONE]              
9    [FUNC_PROTO]        void
9    [NONE]              check
9    [FUNC_PROTO]        (
9    [NONE]              const
9    [NONE]              QObject
9    [NONE]              *
9    [NONE]              object
9    [NONE]              ,
9    [NONE]              const
9    [NONE]              QStringList
9    [NONE]              &
9    [NONE]              strList
9    [FUNC_PROTO]        =
9    [NONE]              QStringList
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [NONE]              
10   [COMMENT_WHOLE]     // no crash (removed 1st parameter only)
10   [NONE]              
11   [FUNC_PROTO]        void
11   [NONE]              check
11   [FUNC_PROTO]        (
11   [NONE]              const
11   [NONE]              QStringList
11   [NONE]              &
11   [NONE]              strList
11   [FUNC_PROTO]        =
11   [NONE]              QStringList
11   [CPP_CAST]          (
11   [NONE]              QString
11   [FUNC_CALL]         (
11   [NONE]              QLatin1String
11   [FUNC_CALL]         (
11   [NONE]              "one two"
11   [FUNC_CALL]         )
11   [FUNC_CALL]         )
11   [CPP_CAST]          )
11   [FUNC_PROTO]        )
11   [FUNC_PROTO]        ;
11   [NONE]              
12   [CLASS]             }
12   [CLASS]             ;
12   [NONE]              