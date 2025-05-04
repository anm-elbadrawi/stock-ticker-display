/*
 * display.c
 *
 *  Created on: May 3, 2025
 *      Author: user
 */

#include "display.h"

esp_err_t i2c_master_init(void){
	
	i2c_config_t conf = {
		.mode = I2C_MODE_MASTER,
		.sda_io_num = GPIO_NUM_21,
		.scl_io_num = GPIO_NUM_22,
		.sda_pullup_en = GPIO_PULLUP_ENABLE,
		.scl_pullup_en = GPIO_PULLUP_ENABLE,
		.master.clk_speed = 100000,
	};
	
	i2c_param_config(I2C_NUM_0, &conf);
	
	return i2c_driver_install(I2C_NUM_0, conf.mode, 0, 0, 0);
}