Line [Token]             Text
1    [PREPROC]           #
1    [PP_DEFINE]         define
1    [MACRO]             SOME_MACRO
1    [WORD]              TemplateClass
1    [ANGLE_OPEN]        <
1    [TYPE]              T
1    [ANGLE_CLOSE]       >
1    [NEWLINE]           
2    [TYPE]              int
2    [WORD]              i
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_IF]             if
3    [PP_DEFINED]        defined
3    [PAREN_OPEN]        (
3    [WORD]              _MSC_VER
3    [PAREN_CLOSE]       )
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             if
4    [WORD]              _MSC_VER
4    [COMPARE]           <
4    [NUMBER]            1300
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO]             __func__
5    [STRING]            "unknown function"
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ELSE]           else
6    [NEWLINE]           
7    [PREPROC]           #
7    [PP_DEFINE]         define
7    [MACRO]             __func__
7    [WORD]              __FUNCTION__
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_ENDIF]          endif
8    [COMMENT]           /* _MSC_VER < 1300 */
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_ENDIF]          endif
9    [COMMENT]           /* defined(_MSC_VER) */
9    [NEWLINE]           
11   [PREPROC]           #
11   [PP_DEFINE]         define
11   [MACRO]             bug_demo
11   [PAREN_OPEN]        (
11   [NUMBER]            1
11   [COMPARE]           >
11   [NUMBER]            2
11   [PAREN_CLOSE]       )
11   [QUESTION]          ?
11   [PAREN_OPEN]        (
11   [NUMBER]            1
11   [COLON]             :
11   [NUMBER]            2
11   [PAREN_CLOSE]       )
11   [NEWLINE]           