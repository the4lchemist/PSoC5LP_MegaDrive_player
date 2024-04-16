#ifndef _TTY_UTILS_H_
#define _TTY_UTILS_H_
#include "project.h"
    
#define STR_BUF_LEN  64
    


/* The buffer size is equal to the maximum packet size of the IN and OUT bulk
* endpoints.
*/

void tty_init(void) ;

void print(char *str) ;

void printc(char c) ;

void print_eol(void) ;

void println(char *str) ;

void cls(void) ;

/**
 * get_string()
 * check if we received any char via tty
 * and store the char into str[]
 * when a delimiter is detected
 * it puts NULL at the current end of str[] and return the length of str
 * if the length is exceeding that STR_BUF_LEN,
 * it puts NULL at the end of str[] and returns -1 
 */
int get_string(void) ;

/**
 * get_line() 
 * similar with get_string() but only accept CR or LF for delimiter
 * so you can get a line up to the STR_BUF_LEN 
 */
int get_line(void) ;

void splash(char *prog_name) ;

void prompt(char *str) ;
/*
* Write_to_rx_buffer(uint8_t *)
* Callback function for usbuart to
* fill the rx buffer
*/
void write_to_rx_buffer(uint8_t *buffer);

extern char str[] ; /* print buf */

#endif /* _TTY_UTILS_H_ */
