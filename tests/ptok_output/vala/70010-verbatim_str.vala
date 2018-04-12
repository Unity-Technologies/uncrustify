Line [Parent]            Text
1    [COMMENT_WHOLE]     /* Advanced Vala Sample Code */
1    [NONE]              
2    [NONE]              using
2    [NONE]              GLib
2    [NONE]              ;
2    [NONE]              
3    [NONE]              public
3    [NONE]              class
3    [CLASS]             Sample
3    [NONE]              :
3    [NONE]              Object
3    [CLASS]             {
3    [NONE]              
4    [NONE]              public
4    [NONE]              string
4    [NONE]              name
4    [GETSET]            {
4    [NONE]              get
4    [GETSET]            ;
4    [NONE]              set
4    [GETSET]            ;
4    [GETSET]            }
4    [NONE]              
5    [FUNC_PROTO]        public
5    [FUNC_PROTO]        signal
5    [FUNC_PROTO]        void
5    [NONE]              foo
5    [FUNC_PROTO]        (
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [NONE]              
6    [NONE]              public
6    [NONE]              Sample
6    [FUNC_CLASS_DEF]    (
6    [NONE]              construct
6    [NONE]              string
6    [NONE]              !
6    [NONE]              name
6    [FUNC_CLASS_DEF]    )
6    [NONE]              
6    [FUNC_CLASS_DEF]    {
6    [NONE]              
7    [FUNC_CLASS_DEF]    }
7    [NONE]              
8    [FUNC_DEF]          public
8    [FUNC_DEF]          void
8    [NONE]              run
8    [FUNC_DEF]          (
8    [FUNC_DEF]          )
8    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              foo
9    [NONE]              +=
9    [NONE]              s
9    [NONE]              =>
9    [NONE]              {
9    [NONE]              
10   [NONE]              stdout
10   [NONE]              .
10   [NONE]              printf
10   [FUNC_CALL]         (
10   [NONE]              "Lambda expression %s!\n"
10   [NONE]              ,
10   [NONE]              name
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [NONE]              }
11   [NONE]              
13   [COMMENT_WHOLE]     /* Calling lambda expression */
13   [NONE]              
14   [NONE]              foo
14   [FUNC_CALL]         (
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
16   [FUNC_DEF]          static
16   [FUNC_DEF]          int
16   [NONE]              main
16   [FUNC_DEF]          (
16   [NONE]              string
16   [NONE]              []
16   [NONE]              args
16   [FUNC_DEF]          )
16   [NONE]              
16   [FUNC_DEF]          {
16   [NONE]              
17   [NONE]              string
17   [NONE]              sql
17   [NONE]              =
17   [NONE]              """ SELECT name "my_name" ␤                        FROM table␤                        WHERE id='4'␤                  """
20   [NONE]              ;
20   [NONE]              
21   [NONE]              var
21   [NONE]              where
21   [NONE]              =
21   [NONE]              """ WHERE name LIKE '%blah% ␤         """
22   [NONE]              ;
22   [NONE]              
23   [NONE]              foreach
23   [FOR]               (
23   [NONE]              string
23   [NONE]              arg
23   [NONE]              in
23   [NONE]              args
23   [FOR]               )
23   [NONE]              
23   [FOR]               {
23   [NONE]              
24   [NONE]              var
24   [NONE]              sample
24   [NONE]              =
24   [NONE]              new
24   [NONE]              Sample
24   [FUNC_CALL]         (
24   [NONE]              arg
24   [FUNC_CALL]         )
24   [NONE]              ;
24   [NONE]              
25   [NONE]              sample
25   [NONE]              .
25   [NONE]              run
25   [FUNC_CALL]         (
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [COMMENT_WHOLE]     /* Object will automatically be freed␤                      * at the end of the block */
27   [NONE]              
28   [FOR]               }
28   [NONE]              
29   [NONE]              return
29   [RETURN]            (
29   [NONE]              0
29   [RETURN]            )
29   [NONE]              ;
29   [NONE]              
30   [FUNC_DEF]          }
30   [NONE]              
31   [CLASS]             }
31   [NONE]              