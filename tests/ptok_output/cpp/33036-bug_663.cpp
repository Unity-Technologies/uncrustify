Line [Parent]            Text
1    [PP_DEFINE]         #
1    [NONE]              define
1    [NONE]              SOME_MACRO
1    [NONE]              TemplateClass
1    [TEMPLATE]          <
1    [NONE]              T
1    [TEMPLATE]          >
1    [NONE]              
2    [NONE]              int
2    [NONE]              i
2    [NONE]              ;
2    [NONE]              
3    [PP_IF]             #
3    [NONE]              if
3    [NONE]              defined
3    [NONE]              (
3    [NONE]              _MSC_VER
3    [NONE]              )
3    [NONE]              
4    [PP_IF]             #
4    [NONE]              if
4    [NONE]              _MSC_VER
4    [NONE]              <
4    [NONE]              1300
4    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              __func__
5    [NONE]              "unknown function"
5    [NONE]              
6    [PP_ELSE]           #
6    [NONE]              else
6    [NONE]              
7    [PP_DEFINE]         #
7    [NONE]              define
7    [NONE]              __func__
7    [NONE]              __FUNCTION__
7    [NONE]              
8    [PP_ENDIF]          #
8    [NONE]              endif
8    [COMMENT_END]       /* _MSC_VER < 1300 */
8    [NONE]              
9    [PP_ENDIF]          #
9    [NONE]              endif
9    [COMMENT_END]       /* defined(_MSC_VER) */
9    [NONE]              
11   [PP_DEFINE]         #
11   [NONE]              define
11   [NONE]              bug_demo
11   [NONE]              (
11   [NONE]              1
11   [NONE]              >
11   [NONE]              2
11   [NONE]              )
11   [NONE]              ?
11   [NONE]              (
11   [NONE]              1
11   [NONE]              :
11   [NONE]              2
11   [NONE]              )
11   [NONE]              