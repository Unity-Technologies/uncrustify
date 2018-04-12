Line [Token]             Text
1    [PACKAGE]           package
1    [WORD]              com
1    [MEMBER]            .
1    [WORD]              annotation
1    [SEMICOLON]         ;
1    [NEWLINE]           
3    [IMPORT]            import
3    [WORD]              java
3    [MEMBER]            .
3    [WORD]              lang
3    [MEMBER]            .
3    [WORD]              annotation
3    [MEMBER]            .
3    [WORD]              Documented
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [IMPORT]            import
4    [WORD]              java
4    [MEMBER]            .
4    [WORD]              lang
4    [MEMBER]            .
4    [WORD]              annotation
4    [MEMBER]            .
4    [WORD]              ElementType
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [IMPORT]            import
5    [WORD]              java
5    [MEMBER]            .
5    [WORD]              lang
5    [MEMBER]            .
5    [WORD]              annotation
5    [MEMBER]            .
5    [WORD]              Inherited
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [IMPORT]            import
6    [WORD]              java
6    [MEMBER]            .
6    [WORD]              lang
6    [MEMBER]            .
6    [WORD]              annotation
6    [MEMBER]            .
6    [WORD]              Retention
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [IMPORT]            import
7    [WORD]              java
7    [MEMBER]            .
7    [WORD]              lang
7    [MEMBER]            .
7    [WORD]              annotation
7    [MEMBER]            .
7    [WORD]              RetentionPolicy
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [IMPORT]            import
8    [WORD]              java
8    [MEMBER]            .
8    [WORD]              lang
8    [MEMBER]            .
8    [WORD]              annotation
8    [MEMBER]            .
8    [WORD]              Target
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [ANNOTATION]        @Documented
10   [NEWLINE]           
10   [ANNOTATION]        @Retention
10   [PAREN_OPEN]        (
10   [WORD]              RetentionPolicy
10   [MEMBER]            .
10   [WORD]              RUNTIME
10   [PAREN_CLOSE]       )
10   [NEWLINE]           
10   [ANNOTATION]        @Target
10   [PAREN_OPEN]        (
10   [BRACE_OPEN]        {
10   [TYPE]              ElementType
10   [MEMBER]            .
10   [WORD]              TYPE
10   [COMMA]             ,
10   [WORD]              ElementType
10   [MEMBER]            .
10   [WORD]              METHOD
10   [COMMA]             ,
10   [NEWLINE]           
11   [WORD]              ElementType
11   [MEMBER]            .
11   [WORD]              CONSTRUCTOR
11   [COMMA]             ,
11   [WORD]              ElementType
11   [MEMBER]            .
11   [WORD]              ANNOTATION_TYPE
11   [COMMA]             ,
11   [NEWLINE]           
12   [WORD]              ElementType
12   [MEMBER]            .
12   [WORD]              PACKAGE
12   [COMMA]             ,
12   [WORD]              ElementType
12   [MEMBER]            .
12   [WORD]              FIELD
12   [COMMA]             ,
12   [WORD]              ElementType
12   [MEMBER]            .
12   [WORD]              LOCAL_VARIABLE
12   [BRACE_CLOSE]       }
12   [PAREN_CLOSE]       )
12   [NEWLINE]           
13   [ANNOTATION]        @Inherited
13   [NEWLINE]           
15   [QUALIFIER]         public
15   [CLASS]             @interface
15   [TYPE]              Unfinished
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [QUALIFIER]         public
16   [ENUM]              enum
16   [TYPE]              Priority
16   [BRACE_OPEN]        {
16   [WORD]              LOW
16   [COMMA]             ,
16   [WORD]              MEDIUM
16   [COMMA]             ,
16   [WORD]              HIGH
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [TYPE]              String
17   [FUNC_PROTO]        value
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [TYPE]              String
18   [TSQUARE]           []
18   [FUNC_PROTO]        changedBy
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [DEFAULT]           default
18   [STRING]            ""
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [TYPE]              String
19   [TSQUARE]           []
19   [FUNC_PROTO]        lastChangedBy
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [DEFAULT]           default
19   [STRING]            ""
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              Priority
20   [FUNC_PROTO]        priority
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [DEFAULT]           default
20   [WORD]              Priority
20   [MEMBER]            .
20   [WORD]              MEDIUM
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              String
21   [FUNC_PROTO]        createdBy
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [DEFAULT]           default
21   [STRING]            "James Gosling"
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              String
22   [FUNC_PROTO]        lastChanged
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [DEFAULT]           default
22   [STRING]            "08/07/2011"
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           