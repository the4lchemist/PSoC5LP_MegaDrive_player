#ifndef __UTILS_H_
#define __UTILS_H_
#include "project.h"
#include "func_list.h"
    


void do_help(void) ;
void do_scan(void) ;
void do_address(void) ;
void do_delay(void) ;
void do_loop(void) ;
void do_interval(void) ;
void do_status(void) ;
void do_return(void) ;
void do_soft_reset(void);
void do_demo(void) ;


//! Scan through all possible i2c address (doesn't work well)
void do_scan(void) ;
void do_status(void) ;
void do_return(void) ;
#endif /* _I2C_UTILS_H_ */
