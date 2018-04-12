Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             ifndef
1    [WORD]              AKONADISERVER_H
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             AKONADISERVER_H
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_INCLUDE]        include
4    [PREPROC_BODY]      <QtCore/QPointer>
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_INCLUDE]        include
5    [PREPROC_BODY]      <QtCore/QVector>
5    [NEWLINE]           
7    [PREPROC]           #
7    [PP_INCLUDE]        include
7    [PREPROC_BODY]      <QtNetwork/QLocalServer>
7    [NEWLINE]           
9    [CLASS]             class
9    [TYPE]              QProcess
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [NAMESPACE]         namespace
11   [WORD]              Akonadi
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [NAMESPACE]         namespace
12   [WORD]              Server
12   [BRACE_OPEN]        {
12   [NEWLINE]           
14   [CLASS]             class
14   [TYPE]              AkonadiServer
14   [CLASS_COLON]       :
14   [QUALIFIER]         public
14   [WORD]              QLocalServer
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [COMMENT_EMBED]     Q_OBJECT
16   [NEWLINE]           
18   [PRIVATE]           public
18   [PRIVATE_COLON]     :
18   [NEWLINE]           
19   [DESTRUCTOR]        ~
19   [FUNC_CLASS_PROTO]    AkonadiServer
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [QUALIFIER]         static
20   [TYPE]              AkonadiServer
20   [PTR_TYPE]          *
20   [FUNC_PROTO]        instance
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [COMMENT_CPP]       // namespace Server
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [COMMENT_CPP]       // namespace Akonadi
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_ENDIF]          endif
25   [NEWLINE]           