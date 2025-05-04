#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "display.h"

void app_main(void)
{
	i2c_master_init();
	
    while (true) {
        printf("Hello from app_main!\n");
        sleep(1);
    }
}
