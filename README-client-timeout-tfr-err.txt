EXAMPLE OF CLIENT LOG FOR TRANSFER WITH TIMEOUT THAT EXITS WITH AN ERROR

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Running client as:
./rft_client in350.txt out/out.txt 127.0.0.1 20333 wt 0.5
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

-------------------------------------------------------------------------------
CLIENT [rft_client.c:67:state:PS_INIT]
Initialised for wt transfer of file: in350.txt to file: out/out.txt
on server: 127.0.0.1:20333 with loss probality: 0.500000
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client.c:92:state:PS_TFR_READY]
Opened file: in350.txt (350 bytes), socket and server set.
Client ready for transfer
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:230:state:PS_START_SEND]
Start sending file in wt mode
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 0, file data: 35, checksum: 3259
current retry: 0, max retries allowed: 20
payload:
n this module you will gain an unde
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:272:state:PS_ACK_RECV]
ACK with sq: 0 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 1, file data: 35, checksum: 3406
current retry: 0, max retries allowed: 20
payload:
rstanding of operating system and n
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:272:state:PS_ACK_RECV]
ACK with sq: 1 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 2, file data: 35, checksum: -2107222570
current retry: 0, max retries allowed: 20
payload:
etwork design and implementation. A
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:258:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 2 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_RESEND]
Resending segment with sq: 2, file data: 35, checksum: 3358
current retry: 1, max retries allowed: 20
payload:
etwork design and implementation. A
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:272:state:PS_ACK_RECV]
ACK with sq: 2 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 3, file data: 35, checksum: 3278
current retry: 0, max retries allowed: 20
payload:
s outlined above, this is an import
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:272:state:PS_ACK_RECV]
ACK with sq: 3 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 4, file data: 35, checksum: 3142
current retry: 0, max retries allowed: 20
payload:
ant topic in itself.
It is also imp
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:272:state:PS_ACK_RECV]
ACK with sq: 4 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 5, file data: 35, checksum: 3304
current retry: 0, max retries allowed: 20
payload:
ortant because of what it teaches u
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:272:state:PS_ACK_RECV]
ACK with sq: 5 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 6, file data: 35, checksum: -728828907
current retry: 0, max retries allowed: 20
payload:
s about good systems and applicatio
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:258:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 6 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_RESEND]
Resending segment with sq: 6, file data: 35, checksum: -776490169
current retry: 1, max retries allowed: 20
payload:
s about good systems and applicatio
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:258:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 6 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_RESEND]
Resending segment with sq: 6, file data: 35, checksum: -741254128
current retry: 2, max retries allowed: 20
payload:
s about good systems and applicatio
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:258:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 6 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_RESEND]
Resending segment with sq: 6, file data: 35, checksum: -964459456
current retry: 3, max retries allowed: 20
payload:
s about good systems and applicatio
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:258:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 6 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_RESEND]
Resending segment with sq: 6, file data: 35, checksum: -1279903183
current retry: 4, max retries allowed: 20
payload:
s about good systems and applicatio
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:258:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 6 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_RESEND]
Resending segment with sq: 6, file data: 35, checksum: 3400
current retry: 5, max retries allowed: 20
payload:
s about good systems and applicatio
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:272:state:PS_ACK_RECV]
ACK with sq: 6 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 7, file data: 35, checksum: 3055
current retry: 0, max retries allowed: 20
payload:
ns design in general
	Many of the a
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:248:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:266:state:PS_BAD_ACK_SQ]
ERROR: ACK sequence number 8 does not match data sequence number 7
-------------------------------------------------------------------------------
