#pragma once

#include "../../include/netspectre.h"

extern const struct argp_option terminal_scan_options[];

/*
    0x11 UDP
    0x06 TCP
*/

struct terminal_scan_arguments {
    char * device;
    int * ports;
    int ports_len;
    char * ports_format;
    struct in_addr target;
    int scan_protocol;
    unsigned int timeout;
    bool no_ping;
    bool no_threading;
    unsigned int thread_workers;
};

error_t terminal_scan_parse_opt(int key, char *arg, struct argp_state *state);

extern struct argp terminal_scan_argp;
