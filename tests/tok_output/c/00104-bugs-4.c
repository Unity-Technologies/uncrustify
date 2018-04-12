Line [Token]             Text
1    [NEWLINE]           
2    [QUALIFIER]         static
2    [TYPE]              void
2    [FUNC_DEF]          set_md_connected
2    [FPAREN_OPEN]       (
2    [TYPE]              CHAR
2    [PTR_TYPE]          *
2    [WORD]              msg_data
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              UINT32
4    [WORD]              rd_idx
4    [ASSIGN]            =
4    [NUMBER]            0
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              CHAR
5    [WORD]              mobile_device_id
5    [SQUARE_OPEN]       [
5    [WORD]              MOBILE_DEVICE_NAME_LEN
5    [SQUARE_CLOSE]      ]
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPE]              CHAR
6    [WORD]              ip_addr
6    [SQUARE_OPEN]       [
6    [WORD]              IP_ADDRESS_LEN
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPE]              CHAR
7    [WORD]              mac_addr
7    [SQUARE_OPEN]       [
7    [WORD]              MAC_ADDR_LEN
7    [SQUARE_CLOSE]      ]
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              CHAR
8    [WORD]              ap_name
8    [SQUARE_OPEN]       [
8    [WORD]              AP_NAME_LEN
8    [SQUARE_CLOSE]      ]
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [FUNC_CALL]         rdc_strz
10   [FPAREN_OPEN]       (
10   [WORD]              msg_data
10   [COMMA]             ,
10   [WORD]              MAX_SIZE
10   [COMMA]             ,
10   [ADDR]              &
10   [WORD]              rd_idx
10   [COMMA]             ,
10   [WORD]              mobile_device_id
10   [COMMA]             ,
10   [NUMBER]            0
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [FUNC_CALL]         rdc_strz
11   [FPAREN_OPEN]       (
11   [WORD]              msg_data
11   [COMMA]             ,
11   [WORD]              MAX_SIZE
11   [COMMA]             ,
11   [ADDR]              &
11   [WORD]              rd_idx
11   [COMMA]             ,
11   [WORD]              ip_addr
11   [COMMA]             ,
11   [NUMBER]            0
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [FUNC_CALL]         rdc_strz
12   [FPAREN_OPEN]       (
12   [WORD]              msg_data
12   [COMMA]             ,
12   [WORD]              MAX_SIZE
12   [COMMA]             ,
12   [ADDR]              &
12   [WORD]              rd_idx
12   [COMMA]             ,
12   [WORD]              mac_addr
12   [COMMA]             ,
12   [NUMBER]            0
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [FUNC_CALL]         rdc_strz
13   [FPAREN_OPEN]       (
13   [WORD]              msg_data
13   [COMMA]             ,
13   [WORD]              MAX_SIZE
13   [COMMA]             ,
13   [ADDR]              &
13   [WORD]              rd_idx
13   [COMMA]             ,
13   [WORD]              ap_name
13   [COMMA]             ,
13   [NUMBER]            0
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [PREPROC]           #
15   [PP_IF]             if
15   [PP_DEFINED]        defined
15   [PAREN_OPEN]        (
15   [WORD]              DB_MGR_ORACLE
15   [PAREN_CLOSE]       )
15   [NEWLINE]           
16   [PAREN_OPEN]        (
16   [TYPE]              void
16   [PAREN_CLOSE]       )
16   [FUNC_CALL]         db_set_md_connected
16   [FPAREN_OPEN]       (
16   [WORD]              mobile_device_id
16   [COMMA]             ,
16   [WORD]              ip_addr
16   [COMMA]             ,
16   [WORD]              mac_addr
16   [COMMA]             ,
16   [WORD]              ap_name
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [FUNC_CALL]         LOG
17   [FPAREN_OPEN]       (
17   [WORD]              LFTR
17   [COMMA]             ,
17   [STRING]            "CONNECTED Loco %s, IP Addr %s,MAC Addr %s, AP Name %s"
17   [COMMA]             ,
17   [NEWLINE]           
18   [WORD]              mobile_device_id
18   [COMMA]             ,
18   [WORD]              ip_addr
18   [COMMA]             ,
18   [WORD]              mac_addr
18   [COMMA]             ,
18   [WORD]              ap_name
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [PREPROC]           #
19   [PP_ELSE]           elif
19   [PP_DEFINED]        defined
19   [PAREN_OPEN]        (
19   [WORD]              DB_MGR_FILE
19   [PAREN_CLOSE]       )
19   [NEWLINE]           
20   [FUNC_CALL]         LOG
20   [FPAREN_OPEN]       (
20   [WORD]              LFTR
20   [COMMA]             ,
20   [STRING]            "%s CONNECTED Loco %s, IP Addr %s,MAC Addr %s, AP Name %s"
20   [COMMA]             ,
20   [NEWLINE]           
21   [WORD]              status_str
21   [COMMA]             ,
21   [WORD]              mobile_device_id
21   [COMMA]             ,
21   [WORD]              ip_addr
21   [COMMA]             ,
21   [WORD]              mac_addr
21   [COMMA]             ,
21   [WORD]              ap_name
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_ELSE]           else
22   [NEWLINE]           
23   [PREPROC]           #
23   [PP_OTHER]          error
23   [PREPROC_BODY]      Unknown device type must be DB_MGR_ORACLE or DB_MGR_FILE
23   [NEWLINE]           
24   [PREPROC]           #
24   [PP_ENDIF]          endif
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           