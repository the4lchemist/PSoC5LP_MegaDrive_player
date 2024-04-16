/*  tty_utils has had traditional UART implimentation with
*   tty_rx_isr connected to the UART interrupt output port
*   Now all commented out. 
*
*   Do NOT remove the UART code commented out.
*/
#include "project.h"
#include "stdio.h"
#include "tty_utils.h"
#include "usb_uart.h"

#define TAB   '\t'
#define SPACE ' ' 
#define CR    '\r'
#define LF    '\n'
#define BS    '\b'

#define RX_BUF_LEN  128

volatile char rx_buf[RX_BUF_LEN] ;
volatile int  rx_write_index = 0 ;
int           rx_read_index  = 0 ;
int           str_buf_index  = 0 ;
char          str[STR_BUF_LEN + 1] ;

static inline int is_delimiter(char c)
{
    return((c == TAB)||(c == SPACE)||(c == CR)||(c == LF)) ;
}

static inline int is_eol(char c)
{
    return((c == CR) || (c == LF)) ;
}

static inline int is_backspace(char c)
{
    return(c == BS) ;
}

void print(char *str)
{
//    UART_PutString(str) ; /* for PSoC 5LP */
    usbuart_putstring(str);
}

void printc(char c)
{
//    UART_PutChar(c) ;
    usbuart_putchar(c);
}

void print_eol(void) 
{
//    UART_PutChar(CR) ;
//    UART_PutChar(LF) ;
    usbuart_puteol();
}

CY_ISR(tty_rx_isr)
{
//    if (UART_GetRxBufferSize()) {
//        rx_buf[rx_write_index] = UART_GetByte() ;
//        rx_write_index = (rx_write_index + 1) % RX_BUF_LEN ;
//    }
//    tty_rx_int_ClearPending() ;
}

void println(char *str) 
{
//    UART_PutString(str) ;
    usbuart_putstring(str);
    print_eol() ;
}

void cls(void)
{
    print("\033c") ; /* reset */
    CyDelay(20) ;
    print("\033[2J") ; /* clear screen */
    CyDelay(20) ;
}

void splash(char *prog_name) 
{
    cls() ;
    if (prog_name && *prog_name) {
        print(prog_name) ;
    } 
    print(" (") ;
    print(__DATE__) ;
    print(" ") ;
    print(__TIME__) ;
    print(")\n") ;
    print_eol();
}

void prompt(char *str)
{
    if (str && *str) {
        print(str) ;
    } else {
        print("> ") ;
    }
}

void tty_init(void)
{
//    tty_rx_int_ClearPending() ;
//    tty_rx_int_StartEx(tty_rx_isr) ;
//    UART_Start() ;
    usbuart_init();
}

int get_string(void)
{
    int result = 0 ;
    uint8_t c ;
    
    if (rx_read_index != rx_write_index) {
        c = rx_buf[rx_read_index] ;
        if (is_delimiter(c)) {
            printc(c) ;
            str[str_buf_index] = (char)NULL ;
            result = str_buf_index ;
            str_buf_index = 0 ;
        } else if (is_backspace(c)) {
            if (str_buf_index > 0) {
                str_buf_index-- ;
                str[str_buf_index] = 0 ;
                print("\b \b") ; // BS, SPACE, BS               
            }
        } else {
            printc(c) ;
            str[str_buf_index++] = c ;
            if (str_buf_index >= STR_BUF_LEN) {
                str[STR_BUF_LEN] = (char)NULL ;
                str_buf_index = 0 ;
                result = -1 ; /* str buf overflow */
            }
        }
        rx_read_index = (rx_read_index + 1) % RX_BUF_LEN ;
    }
    return( result ) ;
}

int get_line(void)
{
    int result = 0 ;
    uint8_t c ;
    
    if (rx_read_index != rx_write_index) {
        c = rx_buf[rx_read_index] ;
        if (is_eol(c)) {
            printc(c) ;
            str[str_buf_index] = (char)NULL ;
            result = str_buf_index ;
            str_buf_index = 0 ;
        } else if (is_backspace(c)) {
            if (str_buf_index > 0) {
                str_buf_index-- ;
                str[str_buf_index] = 0 ;
                print("\b \b") ;
            }
        } else {
            printc(c) ;
            str[str_buf_index++] = c ;
            if (str_buf_index >= STR_BUF_LEN) {
                str[STR_BUF_LEN] = (char)NULL ;
                str_buf_index = 0 ;
                result = -1 ; /* str buf overflow */
            }
        }
        rx_read_index = (rx_read_index + 1) % RX_BUF_LEN ;
    }
    return( result ) ;
}

// Write to rx buffer call back function for usbuart
void write_to_rx_buffer(uint8_t *buffer)
{
    rx_buf[rx_write_index] = *buffer;
    rx_write_index = (rx_write_index + 1) % RX_BUF_LEN ;
}


