Line [Parent]            Text
1    [PP_IF]             #
1    [NONE]              ifndef
1    [NONE]              AKONADISERVER_H
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              AKONADISERVER_H
2    [NONE]              
4    [PP_INCLUDE]        #
4    [NONE]              include
4    [NONE]              <QtCore/QPointer>
4    [NONE]              
5    [PP_INCLUDE]        #
5    [NONE]              include
5    [NONE]              <QtCore/QVector>
5    [NONE]              
7    [PP_INCLUDE]        #
7    [NONE]              include
7    [NONE]              <QtNetwork/QLocalServer>
7    [NONE]              
9    [NONE]              class
9    [CLASS]             QProcess
9    [NONE]              ;
9    [NONE]              
11   [NONE]              namespace
11   [NAMESPACE]         Akonadi
11   [NAMESPACE]         {
11   [NONE]              
12   [NONE]              namespace
12   [NAMESPACE]         Server
12   [NAMESPACE]         {
12   [NONE]              
14   [NONE]              class
14   [CLASS]             AkonadiServer
14   [NONE]              :
14   [NONE]              public
14   [NONE]              QLocalServer
14   [NONE]              
15   [CLASS]             {
15   [NONE]              
16   [NONE]              Q_OBJECT
16   [NONE]              
18   [NONE]              public
18   [NONE]              :
18   [NONE]              
19   [NONE]              ~
19   [DESTRUCTOR]        AkonadiServer
19   [FUNC_CLASS_PROTO]    (
19   [FUNC_CLASS_PROTO]    )
19   [FUNC_CLASS_PROTO]    ;
19   [NONE]              
20   [FUNC_PROTO]        static
20   [FUNC_PROTO]        AkonadiServer
20   [FUNC_PROTO]        *
20   [NONE]              instance
20   [FUNC_PROTO]        (
20   [FUNC_PROTO]        )
20   [FUNC_PROTO]        ;
20   [NONE]              
21   [CLASS]             }
21   [CLASS]             ;
21   [NONE]              
23   [NAMESPACE]         }
23   [COMMENT_END]       // namespace Server
23   [NONE]              
24   [NAMESPACE]         }
24   [COMMENT_END]       // namespace Akonadi
24   [NONE]              
25   [PP_ENDIF]          #
25   [NONE]              endif
25   [NONE]              