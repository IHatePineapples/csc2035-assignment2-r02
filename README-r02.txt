This README file summarises release 02 of CSC2035 assignment 2, as follows:

1. How to update your code base
2. Summary of minor changes
3. Explanation of additional tests
4. Example test output

__________________________________________________________________________
1. HOW TO UPDATE YOUR CODE BASE

This release contains new versions of the following files:

    Makefile (see Section 2)
    rft_client_util.h (see Section 2)
    rft_server.c (see Section 2)
    rft_util.h (see Section 2)
    test_rft_client_util.c (see Section 3)

To update your code base:

    - unzip the csc2035-assignment2-r02.zip archive
    - copy the above files to your csc2035-asssignment2-init directory
    
Assuming you have changed to the csc2035-assignment2-r02, you can copy
the files using the following command:

    cp ./*.* <path_to_init_dir>/csc2035-asssignment2-init
    
where <path_to_init_dir> is replaced by the path to your
csc2035-asssignment2-init directory. The above command will also copy
the README file.

__________________________________________________________________________
2. SUMMARY OF MINOR CHANGES

The update includes the following minor changes:

Makefile
    - added -lm linker flag that is needed on some versions of linux
    to link with the library containing the fpclassify function

rft_client_util.h
    - removed #include statements for stdbool.h and netinet/in.h, which
    are both included by rft_util.h
    - clarified documentation of the proto parameter to the init_segment
    function that now states that proto is "a non-null pointer to a
    protocol structure. If proto is NULL, the client will terminate with
    a fatal memory error. If proto is not NULL, the relevant segment of
    the given protocol structure is initialised." Note the documentation
    is intended for a "user" of the function. Therefore, a fatal error
    is what will happen if a user of a function passes a NULL pointer.
    - removed "// they implement" comments

rft_server.c
    - removed #include statements for sys/socket.h and netinet/in.h, which
    are both included by rft_util.h

rft_util.h
    - added #include statements for sys/socket.h and netinet/in.h
__________________________________________________________________________
3. EXPLANATION OF ADDITIONAL TESTS

The test file: test_rft_client_util.c has been updated to provide some
coverage of the following functions:

    init_protocol
    init_segment
    set_udp_socket
    set_socket_timeout
    read_data
    send_metadata 
    send_data
    
To compile and run the tests enter the following command:

    make test

Or:
    make clean
    make test

To start with a clean compilation before running tests.

send_metadata and send_data both fork a server process to receive data
from a client process that uses the relevant function. They both include
a deliberate delay.

If you have not implemented the send_metadata or send_data functions
then the tests for these functions may block and may block because for
some errors in those functions. If the test program blocks (hangs for
test_send_metadata or test_send_data), you should enter CTRL-C at the
terminal to exit the test program.

The make test command will kill any ghost test_rft_client_util process
that has not terminated after tests.

__________________________________________________________________________
4. EXAMPLE TEST OUTPUT 

make test will compile and run the test_rft_client_util program and
produce the following output if all tests succeed.

cc -Wall -g -std=c99 -D_GNU_SOURCE   -c -o rft_util.o rft_util.c
cc -Wall -g -std=c99 -D_GNU_SOURCE   -c -o rft_client_util.o rft_client_util.c
cc -Wall -g -std=c99 -D_GNU_SOURCE   -c -o rft_client_logging.o rft_client_logging.c
cc -Wall -g -std=c99 -D_GNU_SOURCE   -c -o munit.o munit.c
cc -Wall -g -std=c99 -D_GNU_SOURCE   -lm  test_rft_client_util.c rft_util.o rft_client_util.o rft_client_logging.o munit.o   -o test_rft_client_util
pkill test_rft_client_util || true
./test_rft_client_util
Running test suite with seed 0xb7163070...
/test_rft_client_util/test_init_protocol[ OK    ] [ 0.00002095 / 0.00002851 CPU ]
/test_rft_client_util/test_init_segment_undef_data[ OK    ] [ 0.00002608 / 0.00001200 CPU ]
/test_rft_client_util/test_init_segment_undef_ack[ OK    ] [ 0.00001123 / 0.00001074 CPU ]
/test_rft_client_util/test_init_segment_withvals[ OK    ] [ 0.00002323 / 0.00002275 CPU ]
/test_rft_client_util/test_init_segment_payonly[ OK    ] [ 0.00004107 / 0.00002448 CPU ]
/test_rft_client_util/test_set_udp_socket[ OK    ] [ 0.00007713 / 0.00007697 CPU ]
/test_rft_client_util/test_set_udp_socket_err[ OK    ] [ 0.00005734 / 0.00005709 CPU ]
/test_rft_client_util/test_set_socket_timeout[ OK    ] [ 0.00004496 / 0.00004486 CPU ]
/test_rft_client_util/test_read_data [ OK    ] [ 0.00200444 / 0.00039810 CPU ]
/test_rft_client_util/test_send_metadata[ OK    ] [ 1.00043140 / 0.00020645 CPU ]
/test_rft_client_util/test_send_data 
-------------------------------------------------------------------------------
CLIENT [test_rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 0, file data: 1, checksum: 97
current retry: 0, max retries allowed: 20
payload:
a
-------------------------------------------------------------------------------
server received checksum: 97, sq: 0, bytes: 1
server payload received: a

-------------------------------------------------------------------------------
CLIENT [test_rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 1, file data: 3, checksum: 294
current retry: 0, max retries allowed: 20
payload:
abc
-------------------------------------------------------------------------------
server received checksum: 294, sq: 1, bytes: 3
server payload received: abc

-------------------------------------------------------------------------------
CLIENT [test_rft_client_util.c:160:state:PS_DATA_SEND]
Sending segment with sq: 2, file data: 35, checksum: 3315
current retry: 0, max retries allowed: 20
payload:
abcdefghijklmnopqrstuvwxyz012345678
-------------------------------------------------------------------------------
server received checksum: 3315, sq: 2, bytes: 35
server payload received: abcdefghijklmnopqrstuvwxyz012345678
[ OK    ] [ 1.00081488 / 0.00033508 CPU ]
11 of 11 (100%) tests successful, 0 (0%) test skipped.
__________________________________________________________________________
