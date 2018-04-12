Line [Token]             Text
1    [COMMENT_MULTI]     /*=-------------------------------------------------------------------------=*\␤*␤|  FUNCTION NAME: mult2␤|␤|  DESCRIPTION:␤|     Multiplies a number by two.␤|␤|  INPUTS/OUTPUTS:␤|     val - the number to double␤|␤|  RETURNS:␤|     val * 2␤*␤\*=-------------------------------------------------------------------------=*/
14   [NEWLINE]           
15   [TYPE]              int
15   [FUNC_DEF]          mult2
15   [FPAREN_OPEN]       (
15   [TYPE]              int
15   [WORD]              val
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [RETURN]            return
17   [PAREN_OPEN]        (
17   [WORD]              val
17   [ARITH]             *
17   [NUMBER]            2
17   [PAREN_CLOSE]       )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           