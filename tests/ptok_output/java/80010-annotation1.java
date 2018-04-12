Line [Parent]            Text
1    [NONE]              package
1    [NONE]              com
1    [NONE]              .
1    [NONE]              annotation
1    [NONE]              ;
1    [NONE]              
3    [NONE]              import
3    [NONE]              java
3    [NONE]              .
3    [NONE]              lang
3    [NONE]              .
3    [NONE]              annotation
3    [NONE]              .
3    [NONE]              Documented
3    [NONE]              ;
3    [NONE]              
4    [NONE]              import
4    [NONE]              java
4    [NONE]              .
4    [NONE]              lang
4    [NONE]              .
4    [NONE]              annotation
4    [NONE]              .
4    [NONE]              ElementType
4    [NONE]              ;
4    [NONE]              
5    [NONE]              import
5    [NONE]              java
5    [NONE]              .
5    [NONE]              lang
5    [NONE]              .
5    [NONE]              annotation
5    [NONE]              .
5    [NONE]              Inherited
5    [NONE]              ;
5    [NONE]              
6    [NONE]              import
6    [NONE]              java
6    [NONE]              .
6    [NONE]              lang
6    [NONE]              .
6    [NONE]              annotation
6    [NONE]              .
6    [NONE]              Retention
6    [NONE]              ;
6    [NONE]              
7    [NONE]              import
7    [NONE]              java
7    [NONE]              .
7    [NONE]              lang
7    [NONE]              .
7    [NONE]              annotation
7    [NONE]              .
7    [NONE]              RetentionPolicy
7    [NONE]              ;
7    [NONE]              
8    [NONE]              import
8    [NONE]              java
8    [NONE]              .
8    [NONE]              lang
8    [NONE]              .
8    [NONE]              annotation
8    [NONE]              .
8    [NONE]              Target
8    [NONE]              ;
8    [NONE]              
10   [NONE]              @Documented
10   [NONE]              
10   [NONE]              @Retention
10   [ANNOTATION]        (
10   [NONE]              RetentionPolicy
10   [NONE]              .
10   [NONE]              RUNTIME
10   [ANNOTATION]        )
10   [NONE]              
10   [NONE]              @Target
10   [ANNOTATION]        (
10   [NONE]              {
10   [NONE]              ElementType
10   [NONE]              .
10   [NONE]              TYPE
10   [NONE]              ,
10   [NONE]              ElementType
10   [NONE]              .
10   [NONE]              METHOD
10   [NONE]              ,
10   [NONE]              
11   [NONE]              ElementType
11   [NONE]              .
11   [NONE]              CONSTRUCTOR
11   [NONE]              ,
11   [NONE]              ElementType
11   [NONE]              .
11   [NONE]              ANNOTATION_TYPE
11   [NONE]              ,
11   [NONE]              
12   [NONE]              ElementType
12   [NONE]              .
12   [NONE]              PACKAGE
12   [NONE]              ,
12   [NONE]              ElementType
12   [NONE]              .
12   [NONE]              FIELD
12   [NONE]              ,
12   [NONE]              ElementType
12   [NONE]              .
12   [NONE]              LOCAL_VARIABLE
12   [NONE]              }
12   [ANNOTATION]        )
12   [NONE]              
13   [NONE]              @Inherited
13   [NONE]              
15   [NONE]              public
15   [NONE]              @interface
15   [CLASS]             Unfinished
15   [CLASS]             {
15   [NONE]              
16   [NONE]              public
16   [NONE]              enum
16   [ENUM]              Priority
16   [ENUM]              {
16   [NONE]              LOW
16   [NONE]              ,
16   [NONE]              MEDIUM
16   [NONE]              ,
16   [NONE]              HIGH
16   [ENUM]              }
16   [NONE]              
17   [FUNC_PROTO]        String
17   [NONE]              value
17   [FUNC_PROTO]        (
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [NONE]              
18   [NONE]              String
18   [FUNC_PROTO]        []
18   [NONE]              changedBy
18   [FUNC_PROTO]        (
18   [FUNC_PROTO]        )
18   [NONE]              default
18   [NONE]              ""
18   [FUNC_PROTO]        ;
18   [NONE]              
19   [NONE]              String
19   [FUNC_PROTO]        []
19   [NONE]              lastChangedBy
19   [FUNC_PROTO]        (
19   [FUNC_PROTO]        )
19   [NONE]              default
19   [NONE]              ""
19   [FUNC_PROTO]        ;
19   [NONE]              
20   [FUNC_PROTO]        Priority
20   [NONE]              priority
20   [FUNC_PROTO]        (
20   [FUNC_PROTO]        )
20   [NONE]              default
20   [NONE]              Priority
20   [NONE]              .
20   [NONE]              MEDIUM
20   [FUNC_PROTO]        ;
20   [NONE]              
21   [FUNC_PROTO]        String
21   [NONE]              createdBy
21   [FUNC_PROTO]        (
21   [FUNC_PROTO]        )
21   [NONE]              default
21   [NONE]              "James Gosling"
21   [FUNC_PROTO]        ;
21   [NONE]              
22   [FUNC_PROTO]        String
22   [NONE]              lastChanged
22   [FUNC_PROTO]        (
22   [FUNC_PROTO]        )
22   [NONE]              default
22   [NONE]              "08/07/2011"
22   [FUNC_PROTO]        ;
22   [NONE]              
23   [CLASS]             }
23   [NONE]              