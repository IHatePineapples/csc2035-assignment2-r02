/*
 * Replace the following string of 0s with your student number
 * 000000000
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <errno.h>
#include <math.h>
#include <strings.h>
#include "rft_client_logging.h"
#include "rft_client_util.h"

/* 
 * is_corrupted - returns true with the given probability 
 * 
 * The result can be passed to the checksum function to "corrupt" a 
 * checksum with the given probability to simulate network errors in 
 * file transfer.
 *
 * DO NOT EDIT the is_corrupted function.
 */
static bool is_corrupted(float prob) {
    if (fpclassify(prob) == FP_ZERO)
        return false;
    
    float r = (float) rand();
    float max = (float) RAND_MAX;
    
    return (r / max) <= prob;
}

/* 
 * The verify_server function checks that the give server structure is 
 * equivalent to the server field of the proto struct. That is, the protocol
 * family, port and address of the two server structs are the same. 
 * It also checks that the given server_size is the same as the size of the
 * socket address size field of the proto struct.
 *
 * These checks can be used to ensure that an ACK is from the same server that 
 * a client sent data to.
 * 
 * If any of the checks fail, the function returns a corresponding error 
 * protocol state. If the servers are the same, the function returns the state 
 * of the protocol before the function was called.
 *
 * DO NOT EDIT the verify_server function.
 */
static proto_state verify_server(protocol_t* proto, struct sockaddr_in* server, 
    socklen_t server_size) {
    if (server_size != proto->sockaddr_size)
        return PS_BAD_S_SIZE;
    
    if (server->sin_port != proto->server.sin_port)
        return PS_BAD_S_PORT;
        
    if (server->sin_family != proto->server.sin_family)
        return PS_BAD_S_FAM;
        
    if (server->sin_addr.s_addr != proto->server.sin_addr.s_addr)
        return PS_BAD_S_ADDR;
        
    return proto->state;
}

/*
 * The setnlog_protocol function sets the protocol state to the given 
 * state, sets the proto src_line to the given line number and then 
 * logs output for the protocol.
 *
 * DO NOT EDIT the setnlog_protocol function.
 */
static void setnlog_protocol(protocol_t* proto, proto_state state, int line) {
    proto->state = state;
    proto->src_line = line;
    log_protocol(proto);
}

/* 
 * init_protocol - initialises fields of the given protocol struct to the 
 * values shown in its implementation.
 *
 * DO NOT EDIT the init_protocol function.
 */
void init_protocol(protocol_t* proto) {
    memset(proto, 0, sizeof(protocol_t));
    proto->state = PS_INIT;
    proto->in_file = NULL;
    proto->sockfd = -1;
    proto->seg_size = sizeof(segment_t);
    proto->sockaddr_size = (socklen_t) sizeof(struct sockaddr_in); 
    proto->timeout_sec = DEFAULT_TIMEOUT;
    proto->curr_retry = 0;
    proto->max_retries = DEFAULT_RETRIES;
    
    init_segment(proto, DATA_SEG, false);
    init_segment(proto, ACK_SEG, false);
}

/* 
 * TODO: you must implement this function.
 *
 * See documentation in rft_client_util.h and the assignment specification
 */
void init_segment(protocol_t* proto, seg_type type, bool payload_only) {
    return;
}

/* 
 * TODO: you must implement this function.
 *
 * See documentation in rft_client_util.h and the assignment specification
 *
 * Hint:
 *  - you have to detect an error when reading from the proto's input file
 */
void read_data(protocol_t* proto) {
    return;
}

/* 
 * TODO: you must implement this function.
 *
 * See documentation in rft_client_util.h and the assignment specification
 * and see how to send data in the preliminary exercise.
 *
 * Hints:
 *  - you have to handle the case when the current retry count 
 *      exceeds the maximum number of retries allowed
 *  - you have to introduce a probability of corruption of the payload checksum
 *      if the tfr_mode is with timeout (wt)
 *  - you have to detect an error from sending data - see how the rft_server
 *      detects an error when sending an ACK
 */
void send_data(protocol_t* proto) {
    return;
}

/* 
 * send_file_normal - sends a file to a server according to the RFT protocol 
 * with positive acknowledgement, without retransmission.
 *
 * DO NOT EDIT the send_file_normal function.
 */
void send_file_normal(protocol_t* proto) { 
    proto->src_file = __FILE__;
    
    setnlog_protocol(proto, PS_START_SEND, __LINE__);
    
    while (proto->tfr_bytes) {
        read_data(proto);
        
        proto->state = PS_DATA_SEND;
        
        send_data(proto);
        
        proto->total_segments++;
        proto->total_file_data += proto->data.file_data;
        
        setnlog_protocol(proto, PS_ACK_WAIT, __LINE__);
 
        init_segment(proto, ACK_SEG, false);        
        socklen_t server_size = proto->sockaddr_size;
        struct sockaddr_in server;
        memset(&server, 0, server_size);
        ssize_t nbytes = recvfrom(proto->sockfd, &proto->ack, proto->seg_size,
            0, (struct sockaddr *) &server, &server_size);

        if (nbytes != proto->seg_size)
            exit_err_state(proto, PS_BAD_ACK, __LINE__);
        
        if (proto->data.sq != proto->ack.sq)
            exit_err_state(proto, PS_BAD_ACK_SQ, __LINE__);

        proto_state state = verify_server(proto, &server, server_size);
        if (proto->state != state)
            exit_err_state(proto, state, __LINE__);

        setnlog_protocol(proto, PS_ACK_RECV, __LINE__);

        proto->data.sq++;
    }

    proto->state = proto->fsize ? PS_TFR_COMPLETE : PS_EMPTY_FILE;
    
    return;
}      

/* 
 * TODO: you must implement this function.
 *
 * See documentation in rft_client_util.h and the assignment specification
 */
void send_file_with_timeout(protocol_t* proto) {   
    return;
}

/* 
 * TODO: you must implement this function.
 *
 * See documentation in rft_client_util.h and the assignment specification
 *
 * Hint:
 *  - you must copy proto information to a metadata struct
 *  - you have to detect an error from sending metadata - see how the rft_server
 *      detects an error when sending an ACK
 */
bool send_metadata(protocol_t* proto) {     
    return false;
} 
  
/* 
 * TODO: you must implement this function.
 *
 * See documentation in rft_client_util.h and the assignment specification
 */
void set_socket_timeout(protocol_t* proto) {
    return;
}

/* 
 * TODO: you must implement this function.
 *
 * See documentation in rft_client_util.h and the assignment specification,
 * and look at rft_server and preliminary exercise code.
 *
 * Hint:
 *  - Make sure you check the return values of system calls such as 
 *      socket and inet_aton
 */
void set_udp_socket(protocol_t* proto) {
    if (!proto) 
        return; // FIX PLS

    uint16_t port = proto->server_port;

    if (port < PORT_MIN || port > PORT_MAX){ 
        proto->sockfd = -1;
        }
    /* create a socket */
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0){
        proto->sockfd = -1;
        }
    else {
        proto->sockfd = sockfd;
        }
    
    /* set up address structures */
    struct sockaddr_in server = proto->server;
    //struct sockaddr_in client;
    socklen_t sock_len = (socklen_t) sizeof(struct sockaddr_in); 
    memset(&server, 0, sock_len);
    //memset(&client, 0, sock_len);
    
    // set server address using inet_aton
    char* server_addr = proto->server_addr;
    if (!inet_aton(server_addr, &server.sin_addr)) {
        close(sockfd); 
        proto->sockfd = -1;
    }
    else{
    proto->state=PS_TFR_READY;
    
    /* Fill in the server address structure */
    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    }
    
    return;
} 
