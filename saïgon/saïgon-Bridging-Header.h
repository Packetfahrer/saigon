#include "sploit.h"
#include "Utilities.h"
#include "drop_payload.h"
#include "post_exploit.h"
#include "ziva_main.h"
#include "unjail.h"

// Utilities
int ami_jailbroken();
void kernel_panic();

// Triple Fetch
mach_port_t do_exploit();
int prepare_amfid(mach_port_t tp);

// ziVA
int ziva_go(mach_port_t tp);

// extra_recipe
int go_extra_recipe(void);

