#include "spi.h"

void spdelay(void);

void SPI_clockEn(void)
{
	RCC->APB2ENR |= RCC_APB2ENR_SPI1EN;
	RCC->APB1ENR |= RCC_APB1ENR_SPI2EN;
}

void SPI_masterInit(SPI_TypeDef *spi)
{
	spi->CR1 |= SPI_CR1_MSTR | SPI_CR1_SSM | SPI_CR1_SSI | SPI_CR1_BR;
	spi->CR1 |= SPI_CR1_SPE;
}

void SPI_sendByte(SPI_TypeDef *spi, uint8_t data)
{
	spi->DR = data;
	while(spi->SR & SPI_SR_BSY){}
	//spdelay();
}

void spdelay()
{
	uint16_t i = 80;
	while(i--);
}

