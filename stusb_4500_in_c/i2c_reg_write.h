#include <unistd.h>				//Needed for I2C port
#include <fcntl.h>				//Needed for I2C port
#include <sys/ioctl.h>			//Needed for I2C port
#include <linux/i2c-dev.h>		//Needed for I2C port
#include <stdio.h>				//printf
#include <stdbool.h>            // bool
#include <stdint.h>             // uint8_t

#ifndef  I2C_REG_WRITE_H__
#define  I2C_REG_WRITE_H__

bool i2c_reg_write(uint8_t addr, uint8_t reg, uint8_t d) ;

#endif
