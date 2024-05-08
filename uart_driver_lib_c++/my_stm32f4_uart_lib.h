#ifndef  __MY_STM32F4_UART_LIB
#define  __MY_STM32F4_UART_LIB

#include "my_stm32f4_uart_driver.h"

typedef  enum{
  RX_ONLY = 0,
	TX_ONLY,
	RX_AND_TX
}UART_ComType;

typedef  enum{
	_115200 = 0,
	_9600
}UART_BaudRateType;

class UARTComm {
	private : 
		UART_ComType           comtype;
	  UART_BaudRateType      baudrate;
	
	public : 
		UARTComm(UART_ComType _comtype, UART_BaudRateType _baudrate);
    void LIB_UART_WHRITE(int ch);
    char LIB_UART_READ()const;
  	UART_ComType getComType()const;
	  UART_BaudRateType getBaudrate()const;
};

#endif