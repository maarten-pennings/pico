// UartLed.c - Message over UART while blinking the LED
#include <stdio.h>
#include "pico/stdlib.h"


#ifndef PICO_DEFAULT_LED_PIN
#error blink example requires a board with a regular LED
#endif


int main()
{
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    stdio_init_all();
    printf("Welcome to UartLed\n");
    
    int count = 0;
    while( true ) 
    {
        gpio_put(LED_PIN, 1);
        sleep_ms(100);
        gpio_put(LED_PIN, 0);
        sleep_ms(700);
        
        count++;
        printf("Message %d\n",count);
    }

    return 0;
}
