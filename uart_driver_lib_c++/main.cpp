#include "my_stm32f4_uart_lib.h"                 



int main(void){
	
	UARTComm myComPort(TX_ONLY,_115200);
	
	while(1){

    myComPort.LIB_UART_WHRITE('M');
		myComPort.LIB_UART_WHRITE('\r');
		myComPort.LIB_UART_WHRITE('\n');
		
	}
}


