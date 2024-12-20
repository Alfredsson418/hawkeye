#pragma once

#include <unistd.h>
#include <netinet/ip_icmp.h>
#include <string.h> // memset

#include "../ui/print_macro.h"
#include "../constans.h"

/*
    Parameters:
        ip: The IP to ping
        interface: what network interface to ping from
    Return:
        true if reach, false if not, -1 for errors
*/
int ping(struct in_addr ip_addr, const char interface[INTERFACE_LEN]);
