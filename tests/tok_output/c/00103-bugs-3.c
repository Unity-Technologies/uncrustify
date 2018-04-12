Line [Token]             Text
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_IF]             ifdef
2    [WORD]              CRUD
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO]             JUNK
3    [WORD]              a
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_ENDIF]          endif
4    [NEWLINE]           
6    [PREPROC]           #
6    [PP_IF]             ifdef
6    [WORD]              __QNX__
6    [NEWLINE]           
7    [COMMENT_MULTI]     /**␤ * Does all that QNX trickery to get the MAC address of the interface␤ *␤ * @param if_name The interface name: ie "en0" or "eth0"␤ * @param mac     Pointer to a 6-byte array␤ * @return        SUCCESS or FAILURE␤ */
13   [NEWLINE]           
14   [QUALIFIER]         static
14   [TYPE]              INT32
14   [FUNC_DEF]          socket_get_mac_qnx
14   [FPAREN_OPEN]       (
14   [QUALIFIER]         const
14   [TYPE]              CHAR
14   [PTR_TYPE]          *
14   [WORD]              if_name
14   [COMMA]             ,
14   [TYPE]              UINT8
14   [PTR_TYPE]          *
14   [WORD]              mac
14   [FPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [TYPE]              CHAR
16   [WORD]              ionet_name
16   [SQUARE_OPEN]       [
16   [NUMBER]            50
16   [SQUARE_CLOSE]      ]
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              INT32
17   [WORD]              en_fd
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [PREPROC]           #
18   [PP_IF]             if
18   [WORD]              QNX_RELEASE
18   [COMPARE]           >=
18   [NUMBER]            630
18   [NEWLINE]           
19   [TYPE]              nic_config_t
19   [WORD]              nic
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              INT32
20   [WORD]              dcmd
20   [ASSIGN]            =
20   [WORD]              DCMD_IO_NET_GET_CONFIG
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [PREPROC]           #
21   [PP_ELSE]           else
21   [NEWLINE]           
22   [TYPE]              Nic_t
22   [WORD]              nic
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPE]              INT32
23   [WORD]              dcmd
23   [ASSIGN]            =
23   [WORD]              DCMD_IO_NET_NICINFO
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [PREPROC]           #
24   [PP_ENDIF]          endif
24   [NEWLINE]           
25   [TYPE]              INT32
25   [WORD]              ret_val
25   [ASSIGN]            =
25   [WORD]              FAILURE
25   [SEMICOLON]         ;
25   [NEWLINE]           
27   [FUNC_CALL]         memset
27   [FPAREN_OPEN]       (
27   [WORD]              mac
27   [COMMA]             ,
27   [NUMBER]            0
27   [COMMA]             ,
27   [NUMBER]            6
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [COMMENT]           /* Build the full name */
29   [NEWLINE]           
30   [FUNC_CALL]         snprintf
30   [FPAREN_OPEN]       (
30   [WORD]              ionet_name
30   [COMMA]             ,
30   [SIZEOF]            sizeof
30   [PAREN_OPEN]        (
30   [WORD]              ionet_name
30   [PAREN_CLOSE]       )
30   [COMMA]             ,
30   [STRING]            "/dev/io-net/%s"
30   [COMMA]             ,
30   [WORD]              if_name
30   [FPAREN_CLOSE]      )
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [COMMENT]           /* Open the device */
32   [NEWLINE]           
33   [WORD]              en_fd
33   [ASSIGN]            =
33   [FUNC_CALL]         open
33   [FPAREN_OPEN]       (
33   [WORD]              ionet_name
33   [COMMA]             ,
33   [WORD]              O_RDWR
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [IF]                if
34   [SPAREN_OPEN]       (
34   [WORD]              en_fd
34   [COMPARE]           >=
34   [NUMBER]            0
34   [SPAREN_CLOSE]      )
34   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [COMMENT]           /* Get the interface info */
36   [NEWLINE]           
37   [IF]                if
37   [SPAREN_OPEN]       (
37   [FUNC_CALL]         devctl
37   [FPAREN_OPEN]       (
37   [WORD]              en_fd
37   [COMMA]             ,
37   [WORD]              dcmd
37   [COMMA]             ,
37   [ADDR]              &
37   [WORD]              nic
37   [COMMA]             ,
37   [SIZEOF]            sizeof
37   [PAREN_OPEN]        (
37   [WORD]              nic
37   [PAREN_CLOSE]       )
37   [COMMA]             ,
37   [WORD]              NULL
37   [FPAREN_CLOSE]      )
37   [COMPARE]           ==
37   [WORD]              EOK
37   [SPAREN_CLOSE]      )
37   [NEWLINE]           
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [FUNC_CALL]         memcpy
39   [FPAREN_OPEN]       (
39   [WORD]              mac
39   [COMMA]             ,
39   [WORD]              nic
39   [MEMBER]            .
39   [WORD]              current_address
39   [COMMA]             ,
39   [NUMBER]            6
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [WORD]              ret_val
40   [ASSIGN]            =
40   [WORD]              SUCCESS
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [NEWLINE]           
43   [FUNC_CALL]         close
43   [FPAREN_OPEN]       (
43   [WORD]              en_fd
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
45   [RETURN]            return
45   [PAREN_OPEN]        (
45   [WORD]              ret_val
45   [PAREN_CLOSE]       )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
47   [PREPROC]           #
47   [PP_ENDIF]          endif
47   [NEWLINE]           