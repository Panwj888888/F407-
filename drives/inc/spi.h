#ifndef __SPI_H
#define __SPI_H

#include "sys.h"

#define SPI_OK				0x00
#define SPI_FAILED		0xff

void SPI1_Init(void);			 //��ʼ��SPI1��
void SPI1_SetSpeed(u8 SpeedSet); //����SPI1�ٶ�   
uint8_t SPI1_ReadWriteByte(uint8_t TxData,uint8_t *RxData);//SPI1���߶�дһ���ֽ�
void SPI2_Init(void);
uint8_t	SPI2_ReadWriteByte(uint8_t TxData,uint8_t *RxData);
#endif
