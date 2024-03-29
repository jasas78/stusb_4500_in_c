
#ifndef  I2C_ALL_H__
#define  I2C_ALL_H__

#include <unistd.h>				//Needed for I2C port
#include <fcntl.h>				//Needed for I2C port
#include <sys/ioctl.h>			//Needed for I2C port
#include <linux/i2c-dev.h>		//Needed for I2C port
#include <stdio.h>				//printf
#include <stdbool.h>            // bool
#include <stdint.h>             // uint8_t
#include <string.h>             // memcpy

struct ST45i2cST {
    uint8_t     i2cBusNo ;
    char        i2cBusName[256] ;
    int         i2cBusFD ;
    uint8_t     i2cClientAddr ;
    char        wBuf[80];
    char        rBuf[80];
    size_t      wLEN ;
    size_t      rLEN ;
    int         wRT ;
    int         rRT ;
} ;
typedef struct ST45i2cST ST45i2cST ;

struct ST45pdo {
    uint16_t    Vu ;
    float       Vf ;
    uint16_t    Iu ;
    float       If ;
    uint16_t    lowerVpercent ; 
    uint16_t    upperVpercent ;
} ;
typedef struct ST45pdo ST45pdo ;

struct ST45config {
    uint8_t     pdoAmount ;
    ST45pdo     pdo[3] ;
    uint16_t    flexCurrentU ;
    float       flexCurrentF ;
    uint8_t     buf[5][8] ;
} ;
typedef struct ST45config ST45config ;

#include "i2c_bus_init.h"
#include "i2c_tx.h"
#include "i2c_reg_write.h"
#include "i2c_reg_read_write_test.h"

#endif

