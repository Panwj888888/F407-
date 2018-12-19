#ifndef __MAIN_H
#define __MAIN_H

//drives interface
#include "usart.h"
#include "delay.h"
#include "timer.h"
#include "dma.h"
#include "adc.h"
#include "led.h"
#include "spi.h"
#include "i2c.h"

#include "string.h"
#include "arm_math.h"
//modules interface
#include "params.h"
//#include "FC_math.h"
#include "Matrix_math.h"
#include "pid.h"
#include "mpu6500.h"
#include "imu.h"
#include "Attitude_EKF.h"
#include "Attitude_CF.h"
#include "controller.h"
#include "hmc5883l.h"
#include "MS5611.h"
#include "sensor.h"
#include "motor.h"
#include "RemoteControl.h"
#include "communicate.h"
#include "AltitudeEstimateEKF.h"
#include "RAPOO_Link.h"
#include "mpu6050.h"
#include "BaseFilter.h"
#include "GPS.h"
#include "PositionEstimateEKF.h"
#include "flight.h"
#include "FlightRecorder.h"
#include "ANO_Link.h"
#include "KS103.h"
#include "pixy.h"

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "sdio_sdcard.h"
#include "diskio.h"
#include "ff.h"  

#endif
