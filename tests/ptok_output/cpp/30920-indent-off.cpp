Line [Parent]            Text
1    [NONE]              struct
1    [STRUCT]            X
1    [NONE]              
1    [STRUCT]            {
1    [NONE]              
2    [FUNC_PROTO]        void
2    [FUNC_PROTO]        operator
2    [OPERATOR]          -
2    [FUNC_PROTO]        (
2    [NONE]              int
2    [FUNC_PROTO]        )
2    [FUNC_PROTO]        ;
2    [NONE]              
3    [FUNC_PROTO]        void
3    [FUNC_PROTO]        operator
3    [OPERATOR]          +
3    [FUNC_PROTO]        (
3    [NONE]              int
3    [FUNC_PROTO]        )
3    [FUNC_PROTO]        ;
3    [NONE]              
4    [FUNC_PROTO]        void
4    [FUNC_PROTO]        operator
4    [OPERATOR]          ()
4    [FUNC_PROTO]        (
4    [FUNC_PROTO]        )
4    [FUNC_PROTO]        ;
4    [NONE]              
5    [STRUCT]            }
5    [STRUCT]            ;
5    [NONE]              
6    [COMMENT_WHOLE]     /* *INDENT-OFF* */
6    [NONE]              
7    [NONE]                struct Y {
7    [NONE]              
8    [NONE]                  void operator-(int){}
8    [NONE]              
11   [NONE]                 void operator+(int){}  \
11   [NONE]              
12   [NONE]                  void operator()(){}
12   [NONE]              
14   [NONE]                   void func() {
14   [NONE]              
15   [NONE]              	 			auto x = "	test\t 	 	 		...   ???";}
15   [NONE]              
16   [NONE]                };
16   [NONE]              
17   [COMMENT_WHOLE]     /* *INDENT-ON* */
17   [NONE]              
18   [NONE]              struct
18   [STRUCT]            Y
18   [NONE]              
18   [STRUCT]            {
18   [NONE]              
19   [FUNC_DEF]          void
19   [FUNC_DEF]          operator
19   [OPERATOR]          -
19   [FUNC_DEF]          (
19   [NONE]              int
19   [FUNC_DEF]          )
19   [FUNC_DEF]          {
19   [FUNC_DEF]          }
19   [NONE]              
20   [FUNC_DEF]          void
20   [FUNC_DEF]          operator
20   [OPERATOR]          +
20   [FUNC_DEF]          (
20   [NONE]              int
20   [FUNC_DEF]          )
20   [FUNC_DEF]          {
20   [FUNC_DEF]          }
20   [NONE]              
21   [FUNC_DEF]          void
21   [FUNC_DEF]          operator
21   [OPERATOR]          ()
21   [FUNC_DEF]          (
21   [FUNC_DEF]          )
21   [FUNC_DEF]          {
21   [FUNC_DEF]          }
21   [NONE]              
22   [FUNC_DEF]          void
22   [NONE]              func
22   [FUNC_DEF]          (
22   [FUNC_DEF]          )
22   [NONE]              
22   [FUNC_DEF]          {
22   [NONE]              
23   [NONE]              auto
23   [NONE]              x
23   [NONE]              =
23   [NONE]              "	test\t 	 	 		...   ???"
23   [NONE]              ;
23   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              
24   [STRUCT]            }
24   [STRUCT]            ;
24   [NONE]              