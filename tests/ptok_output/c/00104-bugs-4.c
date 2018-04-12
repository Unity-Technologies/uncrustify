Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          static
2    [FUNC_DEF]          void
2    [NONE]              set_md_connected
2    [FUNC_DEF]          (
2    [NONE]              CHAR
2    [NONE]              *
2    [NONE]              msg_data
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              UINT32
4    [NONE]              rd_idx
4    [NONE]              =
4    [NONE]              0
4    [NONE]              ;
4    [NONE]              
5    [NONE]              CHAR
5    [NONE]              mobile_device_id
5    [NONE]              [
5    [NONE]              MOBILE_DEVICE_NAME_LEN
5    [NONE]              ]
5    [NONE]              ;
5    [NONE]              
6    [NONE]              CHAR
6    [NONE]              ip_addr
6    [NONE]              [
6    [NONE]              IP_ADDRESS_LEN
6    [NONE]              ]
6    [NONE]              ;
6    [NONE]              
7    [NONE]              CHAR
7    [NONE]              mac_addr
7    [NONE]              [
7    [NONE]              MAC_ADDR_LEN
7    [NONE]              ]
7    [NONE]              ;
7    [NONE]              
8    [NONE]              CHAR
8    [NONE]              ap_name
8    [NONE]              [
8    [NONE]              AP_NAME_LEN
8    [NONE]              ]
8    [NONE]              ;
8    [NONE]              
10   [NONE]              rdc_strz
10   [FUNC_CALL]         (
10   [NONE]              msg_data
10   [NONE]              ,
10   [NONE]              MAX_SIZE
10   [NONE]              ,
10   [NONE]              &
10   [NONE]              rd_idx
10   [NONE]              ,
10   [NONE]              mobile_device_id
10   [NONE]              ,
10   [NONE]              0
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [NONE]              rdc_strz
11   [FUNC_CALL]         (
11   [NONE]              msg_data
11   [NONE]              ,
11   [NONE]              MAX_SIZE
11   [NONE]              ,
11   [NONE]              &
11   [NONE]              rd_idx
11   [NONE]              ,
11   [NONE]              ip_addr
11   [NONE]              ,
11   [NONE]              0
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [NONE]              rdc_strz
12   [FUNC_CALL]         (
12   [NONE]              msg_data
12   [NONE]              ,
12   [NONE]              MAX_SIZE
12   [NONE]              ,
12   [NONE]              &
12   [NONE]              rd_idx
12   [NONE]              ,
12   [NONE]              mac_addr
12   [NONE]              ,
12   [NONE]              0
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [NONE]              rdc_strz
13   [FUNC_CALL]         (
13   [NONE]              msg_data
13   [NONE]              ,
13   [NONE]              MAX_SIZE
13   [NONE]              ,
13   [NONE]              &
13   [NONE]              rd_idx
13   [NONE]              ,
13   [NONE]              ap_name
13   [NONE]              ,
13   [NONE]              0
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
15   [PP_IF]             #
15   [NONE]              if
15   [NONE]              defined
15   [NONE]              (
15   [NONE]              DB_MGR_ORACLE
15   [NONE]              )
15   [NONE]              
16   [C_CAST]            (
16   [C_CAST]            void
16   [C_CAST]            )
16   [NONE]              db_set_md_connected
16   [FUNC_CALL]         (
16   [NONE]              mobile_device_id
16   [NONE]              ,
16   [NONE]              ip_addr
16   [NONE]              ,
16   [NONE]              mac_addr
16   [NONE]              ,
16   [NONE]              ap_name
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [NONE]              LOG
17   [FUNC_CALL]         (
17   [NONE]              LFTR
17   [NONE]              ,
17   [NONE]              "CONNECTED Loco %s, IP Addr %s,MAC Addr %s, AP Name %s"
17   [NONE]              ,
17   [NONE]              
18   [NONE]              mobile_device_id
18   [NONE]              ,
18   [NONE]              ip_addr
18   [NONE]              ,
18   [NONE]              mac_addr
18   [NONE]              ,
18   [NONE]              ap_name
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [PP_ELSE]           #
19   [NONE]              elif
19   [NONE]              defined
19   [NONE]              (
19   [NONE]              DB_MGR_FILE
19   [NONE]              )
19   [NONE]              
20   [NONE]              LOG
20   [FUNC_CALL]         (
20   [NONE]              LFTR
20   [NONE]              ,
20   [NONE]              "%s CONNECTED Loco %s, IP Addr %s,MAC Addr %s, AP Name %s"
20   [NONE]              ,
20   [NONE]              
21   [NONE]              status_str
21   [NONE]              ,
21   [NONE]              mobile_device_id
21   [NONE]              ,
21   [NONE]              ip_addr
21   [NONE]              ,
21   [NONE]              mac_addr
21   [NONE]              ,
21   [NONE]              ap_name
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [PP_ELSE]           #
22   [NONE]              else
22   [NONE]              
23   [PP_OTHER]          #
23   [NONE]              error
23   [NONE]              Unknown device type must be DB_MGR_ORACLE or DB_MGR_FILE
23   [NONE]              
24   [PP_ENDIF]          #
24   [NONE]              endif
24   [NONE]              
25   [FUNC_DEF]          }
25   [NONE]              