#include <stddef.h>
#include <string.h>
#include <sys/printk.h>
#include <sys/byteorder.h>
#include <zephyr.h>
#include <drivers/i2c.h>
#include <drivers/sensor.h>
#include <devicetree.h>
#include <SEGGER_RTT.h>
#include <zephyr/types.h>
#include <drivers/gpio.h>
#include "accelometer/accelometer.h"


void main(void){

    SEGGER_RTT_Init();

	printf("SMARTWATCH ZEPHYR OS\n\n");

	while (1) {

		fetch_accelometer_data();

		k_sleep(K_SECONDS(1));

        printk("---\n");

    }

}



