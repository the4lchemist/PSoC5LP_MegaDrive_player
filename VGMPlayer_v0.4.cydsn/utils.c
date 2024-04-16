#include "project.h"
#include "stdio.h"
#include "stdlib.h"
#include "tty_utils.h"
#include "utils.h"

static int      keep_on  = 1 ;
static uint16_t loop     = 1 ;
static uint16_t interval = 100 ; /* 100 ms */
static int      sAddress = 0x08 ; 
static int      delay    = 30 ; /* default 30ms */
uint16_t        timeoutms = 500 ;

f_list_type i2c_func_list[] = {
    { "help",        do_help,       "show help message" },
    { "loop",        do_loop,       "set loop counts"},
    { "interval",    do_interval,   "set interval time (ms)"},
    { "address",     do_address,    "set address" },
    { "delay",       do_delay,      "set delay between address and command" },
    { "status",      do_status,     "print config status" },
    { "return",      do_return,     "return to the previous mode" },
    { "reset",       do_soft_reset,  "software rest" },
    { 0,             0,             0} /* list terminator */
} ;

void do_demo(void)
{
    func_ptr func ;
    keep_on = 1 ;
    
    
    do_help() ;
    
    prompt("Demo> ") ;
    
    while(keep_on) {
        if (get_line()) {
            func = get_func(i2c_func_list, str) ;
            if (func) {
                func() ;
            } else {
                print("Unknown Command: ") ;
                print(str) ;
                print("\n\r") ;
                do_help() ;
            }
            if (keep_on) {
                prompt("Demo> ") ;
            }
        }
    }
}

void do_help(void) 
{
    show_help(i2c_func_list) ;    
}

void do_return(void) 
{
    keep_on = 0 ;
}

void do_soft_reset(void)
{
    CySoftwareReset();
}

void do_loop(void) 
{
    sscanf(str, "%*s %hd", &loop) ;
}

void do_interval(void) 
{
    sscanf(str, "%*s %hd", &interval) ;
}

void do_delay(void)
{
    sscanf(str, "%*s %d", &delay) ;
}

void do_status(void) 
{
    snprintf(str, STR_BUF_LEN, "Config: address: 0x%02X (%d)\n\r",
        sAddress, sAddress) ;
    print(str) ;
}


void do_address(void) 
{
    sscanf(str, "%*s %d", &sAddress) ;
}


        
    
