#ifndef SPI_H_
#define SPI_H_

#include "stm32f10x_spi.h"

void SPI_clockEn(void);
void SPI_masterInit(SPI_TypeDef *spi);

void SPI_sendByte(SPI_TypeDef *spi, uint8_t data);
uint8_t SPI_readByte(SPI_TypeDef *spi);

void SPI_setCPOL(SPI_TypeDef *spi, uint8_t cpol);
void SPI_setCPHA(SPI_TypeDef *spi, uint8_t cpha);

void SPI_setDORD(SPI_TypeDef *spi, uint8_t dord);
void SPI_setDFF(SPI_TypeDef *spi, uint8_t dff);


#endif
