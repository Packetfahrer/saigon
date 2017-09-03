//
//  Utilities.h
//  saïgon
//
//  Created by Abraham Masri on 8/18/17.
//  Copyright © 2017 Abraham Masri. All rights reserved.
//

#include <stdint.h>
#include <stdlib.h>
#include "task_ports.h"

#ifndef Utilities_h
#define Utilities_h

int ami_jailbroken();
void set_privileged_port(mach_port_t privileged_port, mach_port_t launchd_port);
mach_port_t get_privileged_port();
mach_port_t get_launchd_port();
mach_port_name_t get_launchd_port_name();
void set_launchd_port_name(mach_port_name_t pt_name);
void kernel_panic();
char * utils_get_base64_payload(void * buffer, size_t length);


#endif /* Utilities_h */
