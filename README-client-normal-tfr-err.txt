EXAMPLE OF CLIENT LOG FOR NORMAL TRANSFER THAT EXITS WITH AN ERROR

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Running client as:
./rft_client in350.txt out/out.txt 127.0.0.1 20333 nm
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

-------------------------------------------------------------------------------
CLIENT [rft_client.c:67:state:PS_INIT]
Initialised for nm transfer of file: in350.txt to file: out/out.txt
on server: 127.0.0.1:20333 with loss probality: 0.000000
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client.c:92:state:PS_TFR_READY]
Opened file: in350.txt (350 bytes), socket and server set.
Client ready for transfer
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:182:state:PS_START_SEND]
Start sending file in nm mode
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 0, file data: 35, checksum: 3259
current retry: 0, max retries allowed: 20
payload:
n this module you will gain an unde
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:194:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:213:state:PS_ACK_RECV]
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
CLIENT [rft_client_util.c:194:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:213:state:PS_ACK_RECV]
ACK with sq: 1 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 2, file data: 35, checksum: 3358
current retry: 0, max retries allowed: 20
payload:
etwork design and implementation. A
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:194:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:213:state:PS_ACK_RECV]
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
CLIENT [rft_client_util.c:194:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:213:state:PS_ACK_RECV]
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
CLIENT [rft_client_util.c:194:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:213:state:PS_ACK_RECV]
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
CLIENT [rft_client_util.c:194:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:213:state:PS_ACK_RECV]
ACK with sq: 5 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 6, file data: 35, checksum: 3400
current retry: 0, max retries allowed: 20
payload:
s about good systems and applicatio
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:170:state:PS_BAD_SEND]
ERROR: [Bad file descriptor]
Error in send (bytes sent do not match segment size)
-------------------------------------------------------------------------------
