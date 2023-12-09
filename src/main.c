#include <stddef.h>
#include <string.h>
#include <sys/printk.h>
#include <sys/byteorder.h>
#include <zephyr.h>
#include <drivers/i2c.h>
#include <drivers/sensor.h>
#include <devicetree.h>
#include <SEGGER_RTT.h>
#include <device.h>
#include <zephyr/types.h>
#include <drivers/gpio.h>
#include "display/gc9a01.h"


void main(void){

    SEGGER_RTT_Init();
	printk("RTT LOG\n\n");

	while (1) {

		k_sleep(K_SECONDS(5));

        printk("---\n");
        printk("Display init");


        lcd_spi_init();
        GC9A01_init();
        struct GC9A01_frame frame = {{0, 0}, {239, 239}};
        GC9A01_set_frame(frame);
    }

}
