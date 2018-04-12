Line [Parent]            Text
1    [NONE]              public
1    [NONE]              class
1    [CLASS]             TestClass
1    [CLASS]             {
1    [NONE]              
2    [NONE]              private
2    [NONE]              Map
2    [TEMPLATE]          <
2    [NONE]              ?
2    [NONE]              ,
2    [NONE]              ?
2    [TEMPLATE]          >
2    [NONE]              map1
2    [NONE]              =
2    [NONE]              null
2    [NONE]              ;
2    [NONE]              
3    [NONE]              private
3    [NONE]              Map
3    [TEMPLATE]          <
3    [NONE]              ?
3    [NONE]              ,
3    [NONE]              ?
3    [TEMPLATE]          >
3    [NONE]              map2
3    [NONE]              =
3    [NONE]              null
3    [NONE]              ;
3    [NONE]              
4    [NONE]              private
4    [NONE]              Map
4    [TEMPLATE]          <
4    [NONE]              ?
4    [NONE]              ,
4    [NONE]              ?
4    [TEMPLATE]          >
4    [NONE]              map3
4    [NONE]              =
4    [NONE]              null
4    [NONE]              ;
4    [NONE]              
6    [FUNC_DEF]          public
6    [FUNC_DEF]          static
6    [FUNC_DEF]          HttpUriRequest
6    [NONE]              getHttpUriRequest
6    [FUNC_DEF]          (
6    [NONE]              TestClassAPIRequestMethod
6    [NONE]              method
6    [NONE]              ,
6    [NONE]              String
6    [NONE]              apiPath
6    [FUNC_DEF]          )
6    [FUNC_DEF]          {
6    [NONE]              
7    [NONE]              switch
7    [SWITCH]            (
7    [NONE]              method
7    [SWITCH]            )
7    [SWITCH]            {
7    [NONE]              
8    [NONE]              case
8    [NONE]              BOTTOM_LEFT
8    [NONE]              :
8    [NONE]              
9    [NONE]              break
9    [NONE]              ;
9    [NONE]              
10   [NONE]              case
10   [NONE]              GET
10   [NONE]              :
10   [NONE]              
11   [NONE]              req
11   [NONE]              =
11   [NONE]              new
11   [NONE]              HttpGet
11   [FUNC_CALL]         (
11   [NONE]              url
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [NONE]              break
12   [NONE]              ;
12   [NONE]              
13   [NONE]              case
13   [NONE]              POST
13   [NONE]              :
13   [NONE]              
14   [NONE]              req
14   [NONE]              =
14   [NONE]              new
14   [NONE]              HttpPost
14   [FUNC_CALL]         (
14   [NONE]              url
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [NONE]              break
15   [NONE]              ;
15   [NONE]              
16   [NONE]              case
16   [NONE]              PUT
16   [NONE]              :
16   [NONE]              
17   [NONE]              req
17   [NONE]              =
17   [NONE]              new
17   [NONE]              HttpPut
17   [FUNC_CALL]         (
17   [NONE]              url
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [NONE]              break
18   [NONE]              ;
18   [NONE]              
19   [NONE]              case
19   [NONE]              DELETE
19   [NONE]              :
19   [NONE]              
20   [NONE]              req
20   [NONE]              =
20   [NONE]              new
20   [NONE]              HttpDelete
20   [FUNC_CALL]         (
20   [NONE]              url
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [NONE]              break
21   [NONE]              ;
21   [NONE]              
22   [SWITCH]            }
22   [NONE]              
23   [NONE]              return
23   [NONE]              req
23   [NONE]              ;
23   [NONE]              
24   [FUNC_DEF]          }
24   [NONE]              
25   [CLASS]             }
25   [NONE]              