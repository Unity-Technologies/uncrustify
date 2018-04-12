Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              LocalTests
1    [QUALIFIER]         extends
1    [WORD]              IosTest
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [COMMENT_MULTI]     /**␤     * Check that app started up correctly. Then check that app continually runs for 5 seconds.␤     * Then wait up to 20 seconds for the splash screen disappear.␤     * @throws InterruptedException␤     */
6    [NEWLINE]           
7    [ANNOTATION]        @Test
7    [PAREN_OPEN]        (
7    [TYPE]              groups
7    [ASSIGN]            =
7    [BRACE_OPEN]        {
7    [STRING]            "testdroid"
7    [COMMA]             ,
7    [STRING]            "local"
7    [BRACE_CLOSE]       }
7    [PAREN_CLOSE]       )
7    [NEWLINE]           
8    [QUALIFIER]         public
8    [TYPE]              void
8    [FUNC_DEF]          checkAppForCrash
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [QUALIFIER]         throws
8    [WORD]              InterruptedException
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           