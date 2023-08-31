/*******************************************************************************/
/*******************************************************************************/
/*************************	Author: AhmedMaher	********************************/
/*************************  Date: 14/4/2023		********************************/
/*************************  Layer: MCAL			********************************/
/*************************  Version: 1.00		********************************/
/*************************  Target :STM32F446XX	********************************/
/*******************************************************************************/
/*******************************************************************************/
#ifndef STM32F446XX_H_
#define STM32F446XX_H_



/******************************** Various Memory's Base Address****************************/

#define FLASH_BASE_ADDRESS	0x08000000UL
#define SRAM_BASE_ADDRESS	0x20000000UL
#define	ROM_BASE_ADDRESS	0x1FFF0000UL    //(BOOTLOADER) Not Used (SYSTEM MEMORY)


/***********************************CORE Peripheral BASE ADDRESS*******************************************/
#define NVIC_BASE_ADDRESS			0xE000E100UL
#define NVIC_STIR					0xE000EF00UL
#define	SCB_BASE_ADDRESS			0xE000ED0C
#define SYSTICK_BASE_ADDRESS		0xE000E010



/***********************************AHB1 BASE ADDRESS*******************************************/
/*******RCC******/
#define RCC_BASE_ADDRESS 			0x40023800UL

/*******GPIO*****/
#define GPIOA_BASE_ADDRESS			0x40020000UL
#define GPIOB_BASE_ADDRESS			0x40020400UL
#define GPIOC_BASE_ADDRESS			0x40020800UL
#define GPIOD_BASE_ADDRESS			0x40020C00UL
#define GPIOE_BASE_ADDRESS			0x40021000UL
#define GPIOF_BASE_ADDRESS			0x40021400UL
#define GPIOG_BASE_ADDRESS			0x40021800UL
#define GPIOH_BASE_ADDRESS			0x40021C00UL
#define DMA1_BASE_ADDRESS   		0x40026000UL 
#define DMA2_BASE_ADDRESS   		0x40026400UL 

/***********************************AHB2 BASE ADDRESS*******************************************/




/***********************************AHB3 BASE ADDRESS*******************************************/





/***********************************APB1 BASE ADDRESS*******************************************/

#define USART2_BASE_ADDRESS                         0x40004400UL
#define USART3_BASE_ADDRESS                         0x40004800UL

#define SPI2_BASE_ADDRESS							0x40003800UL

/***********************************APB2 BASE ADDRESS*******************************************/

/*EXTI*/
#define EXTI_BASE_ADDRESS							0x40013C00UL

/*SYSCFG*/

#define SYSCFG_BASE_ADDRESS							0x40013800UL

#define SPI1_BASE_ADDRESS							0x40013000UL


#define USART1_BASE_ADDRESS                         0x40011000UL



/**********************************RCC Registers Structure*************************************/
typedef struct {
	union {
		volatile uint32_t Reg ;
		struct {
			volatile	uint32_t HSION      : 1;
			volatile	uint32_t HSIRDY     : 1;
			volatile	uint32_t Reserved0  : 1;
			volatile	uint32_t HSITRIM    : 5;
			volatile	uint32_t HSICAL     : 8;
			volatile	uint32_t HSEON      : 1;
			volatile	uint32_t HSERDY     : 1;
			volatile	uint32_t HSEBYP     : 1;
			volatile	uint32_t CSSON      : 1;
			volatile	uint32_t Reserved1  : 4;
			volatile	uint32_t PLLON      : 1;
			volatile	uint32_t PLLRDY		: 1;
			volatile	uint32_t PLLI2SON	: 1;
			volatile	uint32_t PLLI2SRDY	: 1;
			volatile	uint32_t PLLSAION	: 1;
			volatile	uint32_t PLLSAIRDY	: 1;
			volatile	uint32_t Reseved2   : 2;
		}Bit;

	}CR;

	union {
		volatile uint32_t Reg ;
		struct{
			volatile	uint8_t PLLM      : 6 ;
			volatile	uint16_t PLLN     : 9 ;
			volatile	uint8_t Reseved3  : 1 ;
			volatile	uint8_t PLLP      : 2 ;
			volatile	uint8_t Reseved4  : 4 ;
			volatile	uint8_t PLLSRC    : 1 ;
			volatile	uint8_t Reseved5  : 1 ;
			volatile	uint8_t PLLQ      : 4 ;
			volatile	uint8_t PLLR  	  : 3 ;
			volatile	uint8_t Reseved6  : 1 ;
		}Bit;

	}PLLCFGR;

	union {
		volatile	uint32_t Reg ;
		struct{
			volatile	uint8_t SW      : 2 ;
			volatile	uint8_t SWS     : 2 ;
			volatile	uint8_t HPRE    : 4 ;
			volatile	uint8_t Reseved8: 2 ;
			volatile	uint8_t PPRE1   : 3 ;
			volatile	uint8_t PPRE2   : 3 ;
			volatile	uint8_t RTCPRE  : 5 ;
			volatile	uint8_t MCO1    : 2 ;
			volatile	uint8_t Reseved9: 1 ;
			volatile	uint8_t MCO1PRE : 3 ;
			volatile	uint8_t MCO2PRE : 3 ;
			volatile	uint8_t MCO2    : 2 ;
		}Bit;
	}CFGR;
	union {
		volatile	uint32_t Reg ;
		struct
		{
			volatile	uint8_t  LSIRDYF:1 ;
			volatile	uint8_t  LSERDYF:1 ;
			volatile	uint8_t  HSIRDYF:1 ;
			volatile	uint8_t  HSERDYF:1 ;
			volatile	uint8_t  PLLRDYF:1 ;
			volatile	uint8_t  Reseved4:2 ;
			volatile	uint8_t  CSSF     :1;
			volatile	uint8_t  LSIRDYIE: 1;
			volatile	uint8_t  LSERDYIE: 1;
			volatile	uint8_t  HSIRDYIE: 1;
			volatile	uint8_t  HSERDYIE: 1;
			volatile	uint8_t  PLLRDYIE: 1;
			volatile	uint8_t  Reseved5: 3;
			volatile	uint8_t  LSIRDYC: 1 ;
			volatile	uint8_t  LSERDYC: 1;
			volatile	uint8_t  HSIRDYC: 1;
			volatile	uint8_t  HSERDYC: 1;
			volatile	uint8_t  PLLRDYC: 1;
			volatile	uint8_t  Reseved6:2;
			volatile	uint8_t  CSSE:1 ;
			volatile	uint8_t  Reseved7:8 ;
		}BIT;
	}CIR;



	union{
		volatile	uint32_t Reg ;
		struct
		{
			volatile	uint8_t 	GPIOARST    :1;
			volatile	uint8_t 	GPIOBRST    :1;
			volatile	uint8_t 	GPIOCRST    :1;
			volatile	uint8_t     GPIODRST    :1;
			volatile	uint8_t     GPIOERST    :1;
			volatile	uint8_t 	GPIOFRST    :1;
			volatile	uint8_t 	GPIOGRST    :1;
			volatile	uint8_t     Reserved10  :1;
			volatile	uint8_t     CRCRST      :1;
			volatile	uint8_t 	Reserved13  :1;
			volatile	uint8_t     DMA1RST     :1;
			volatile	uint8_t     DMA2RST     :1;
			volatile	uint8_t     Reserved12  :6;
			volatile	uint8_t 	OTGHSRST    :1;
			volatile	uint32_t 	Reseved11   :2;
		}BIT;

	}AHB1RSTR;
	union{
		volatile	uint32_t Reg ;
		struct
		{
			volatile	uint8_t 	DCMIRST     :1;
			volatile	uint8_t 	Reserved14  :6;
			volatile	uint8_t 	OTGFSRS     :1;
			volatile	uint32_t     Reserved15  :24;

		}BIT;
	}AHB2RSTR;
	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint8_t FMCRST       :1 ;
			volatile	uint8_t QSPIRST      :1 ;
			volatile	uint32_t Reserved19  :30;
		}BIT;
	}AHB3RSTR;
	union
	{
		volatile	uint32_t Reg;
		struct
		{
		}BIT;
	}Reserved_REG1;

	union
	{
		volatile uint32_t Reg;
		struct
		{
			volatile	uint8_t TIM2RST      :1;
			volatile	uint8_t TIM3RST      :1;
			volatile	uint8_t TIM4RST      :1;
			volatile	uint8_t TIM5RST      :1;
			volatile	uint8_t TIM6RST      :1;
			volatile	uint8_t TIM7RST      :1;
			volatile	uint8_t TIM12RST     :1;
			volatile	uint8_t TIM13RST     :1;
			volatile	uint8_t TIM14RST     :1;
			volatile	uint8_t Reserved20   :1;
			volatile	uint8_t WWDGRST      :1;
			volatile	uint8_t Reserved21   :1;
			volatile	uint8_t SPI2RST      :1;
			volatile	uint8_t SPI3RST      :1;
			volatile	uint32_t SPDIFRXRST  :1;
			volatile	uint8_t UART2RST     :1;
			volatile	uint8_t UART3RST     :1;
			volatile	uint8_t UART4RST     :1;
			volatile	uint8_t UART5RST     :1;
			volatile	uint8_t I2C1RST      :1;
			volatile	uint8_t I2C2RST      :1;
			volatile	uint8_t I2C3RST      :1;
			volatile	uint8_t FMPI2C1RST   :1;
			volatile	uint8_t CAN1RST      :1;
			volatile	uint8_t CAN2RST      :1;
			volatile	uint8_t CECRST       :1;
			volatile	uint8_t PWRRST       :1;
			volatile	uint8_t DACRST       :1;
			volatile	uint8_t Reserved22   :1;
		}BIT;
	}APB1RSTR;

	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint8_t TIM1RST      :1;
			volatile	uint8_t TIM8RST      :1;
			volatile	uint8_t Reserved23   :1;
			volatile	uint8_t USART1RST    :1;
			volatile	uint8_t USART6RST    :1;
			volatile	uint8_t Reserved24   :1;
			volatile	uint8_t ADCRST       :1;
			volatile	uint8_t Reserved25   :1;
			volatile	uint8_t SDIORST      :1;
			volatile	uint8_t SPI1RST      :1;
			volatile	uint8_t SP45RST      :1;
			volatile	uint8_t Reserved26   :1;
			volatile	uint8_t TIM9RST      :1;
			volatile	uint8_t TIM10RST     :1;
			volatile	uint8_t TIM11RST     :1;
			volatile	uint8_t Reserved27   :1;
			volatile	uint8_t SAI1RST      :1;
			volatile	uint8_t SAI2RST      :1;
			volatile	uint8_t Reserved28   :8 ;
		}BIT;
	}APB2RSTR;

	union
	{
		volatile	uint32_t Reg;

	}Reserved_Reg1;


	union
	{
		volatile	uint32_t Reg;

	}Reserved_Reg2;


	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint8_t   GPIOAEN        :1;
			volatile	uint8_t   GPIOBEN        :1;
			volatile	uint8_t   GPIOCEN        :1;
			volatile	uint8_t   GPIODEN        :1;
			volatile	uint8_t   GPIOEEN        :1;
			volatile	uint8_t   GPIOFEN        :1;
			volatile	uint8_t   GPIOGEN        :1;
			volatile	uint8_t   GPIOHEN        :1;
			volatile	uint8_t   Reserved29     :4;
			volatile	uint8_t   CRCEN          :1;
			volatile	uint8_t   Reserved30     :5;
			volatile	uint8_t   BKPSRAMEN      :1;
			volatile	uint8_t   Reserved31     :2;
			volatile	uint8_t   DMA1EN         :1;
			volatile	uint8_t   DMA2EN         :1;
			volatile	uint8_t   Reserved32     :6;
			volatile	uint8_t   OTGHSEN        :1;
			volatile	uint8_t   OTGHSULPIEN    :1;
			volatile	uint8_t   Reserved33     :1;

		}BIT;
	}AHB1ENR;


	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint8_t   DCMIEN        :1;
			volatile	uint8_t   Reserved34    :6;
			volatile	uint8_t   OTGFSEN       :1;
			volatile	uint32_t   Reserved35    :24;

		}BIT;
	}AHB2ENR;

	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint8_t   FMCEN        :1;
			volatile	uint8_t   QSPIEN       :1;
			volatile	uint32_t   Reserved36   :30;

		}BIT;
	}AHB3ENR;


	union
	{
		volatile uint32_t Reg;


	}Reserved_Reg;


	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint8_t   TIM2EN     :1;
			volatile	uint8_t   TIM3EN     :1;
			volatile	uint8_t   TIM4EN     :1;
			volatile	uint8_t   TIM5EN     :1;
			volatile	uint8_t   TIM6EN     :1;
			volatile	uint8_t   TIM7EN     :1;
			volatile	uint8_t   TIM12EN    :1;
			volatile	uint8_t   TIM13EN    :1;
			volatile	uint8_t   TIM14EN    :1;
			volatile	uint8_t   Reserved34 :2;
			volatile	uint8_t   WWDGEN     :1;
			volatile	uint8_t   Reserved33 :2;
			volatile	uint8_t   SPI2EN     :1;
			volatile	uint8_t   SPI3EN     :1;
			volatile	uint8_t   SPDIFRXEN  :1;
			volatile	uint8_t   USART2EN   :1;
			volatile	uint8_t   USART3EN   :1;
			volatile	uint8_t   UART4EN    :1;
			volatile	uint8_t   UART5EN    :1;
			volatile	uint8_t   I2C1EN     :1;
			volatile	uint8_t   I2C2EN     :1;
			volatile	uint8_t   I2C3EN     :1;
			volatile	uint8_t   FMPI2C1EN  :1;
			volatile	uint8_t   CAN1EN     :1;
			volatile	uint8_t   CAN2EN     :1;
			volatile	uint8_t   CECEN      :1;
			volatile	uint8_t   PWREN      :1;
			volatile	uint8_t   DACEN      :1;
			volatile	uint8_t   Reserved35 :2;
		}BIT;
	}APB1ENR;


	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint8_t   TIM1EN       :1;
			volatile	uint8_t   TIM8EN       :1;
			volatile	uint8_t   Reserved36   :2;
			volatile	uint8_t   USART1EN     :1;
			volatile	uint8_t   USART6EN     :1;
			volatile	uint8_t   Reserved37   :2;
			volatile	uint8_t   ADC1EN       :1;
			volatile	uint8_t   ADC2EN       :1;
			volatile	uint8_t   ADC3EN       :1;
			volatile	uint8_t   SDIOEN       :1;
			volatile	uint8_t   SPI1EN       :1;
			volatile	uint8_t   SPI4EN       :1;
			volatile	uint8_t   SYSCFGEN     :1;
			volatile	uint8_t   Reserved45   :1;
			volatile	uint8_t   TIM9EN       :1;
			volatile	uint8_t   TIM10EN      :1;
			volatile	uint8_t   TIM11EN      :1;
			volatile	uint8_t   Reserved38   :3;
			volatile	uint8_t   SAI1EN       :1;
			volatile	uint8_t   SAI2EN       :1;
			volatile	uint8_t   Reserved35   :8;
		}BIT;
	}APB2ENR;

	union
	{
		volatile	uint32_t Reg;


	}Reserved_Reg3;

	union
	{
		volatile	uint32_t Reg;


	}Reserved_Reg4;


	union
	{
		volatile	uint32_t Reg;


	}AHB1LPENR;

	union
	{
		volatile	uint32_t Reg;


	}AHB2LPENR;

	union
	{
		volatile	uint32_t Reg;


	}AHB3LPENR;

	union
	{
		volatile	uint32_t Reg;


	}Reserved_Reg5;


	union
	{
		volatile	uint32_t Reg;


	}APB1LPENR;

	union
	{
		volatile	uint32_t Reg;


	}APB2LPENR;


	union
	{
		volatile	uint32_t Reg;


	}Reserved_Reg6;
	union
	{
		volatile	uint32_t Reg;


	}Reserved_Reg7;

	union
	{
		volatile	uint32_t Reg;
		struct
		{
			volatile	uint16_t LSEON  :1;
			volatile	uint16_t LSERDY  :1;
			volatile	uint16_t LSEBYP  :1;
			volatile	uint16_t LSEMOD  :1;
			volatile	uint16_t Reseved50 :4;
			volatile	uint16_t RTCSEL0  :1;
			volatile	uint16_t RTCSEL1  :1;
			volatile	uint16_t Reseved51  :5;
			volatile	uint16_t RTCEN  :1;
			volatile	uint16_t BDRST  :1;
			volatile	uint16_t Reseved52  :16;
		}Bit;

	}BDCR;
	union
	{
		volatile	uint32_t Reg;


	}CSR;

	union
	{
		volatile	uint32_t Reg;


	}Reserved_Reg8;


	union
	{
		volatile	uint32_t Reg;


	}Reserved_Reg9;


	union
	{
		volatile	uint32_t Reg;


	}SSCGR;

	union
	{
		volatile	uint32_t Reg;


	}PLLI2SCFGR;
	union
	{
		volatile	uint32_t Reg;


	}PLLSAICFGR;
	union
	{
		volatile	uint32_t Reg;


	}DCKCFGR;
	union
	{
		volatile	uint32_t Reg;


	}CKGATENR;

	union
	{
		volatile	uint32_t Reg;

	}DKCFGR2;
}RCC_REG_S;




/////////////////////////////////*Registers Of GPIO */////////////////////////////////////////////

typedef struct
{
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD OF REG

		}BIT;

	}MODER;
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD REG

		}BIT;

	}OTYPER;
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD REG

		}BIT;

	}OSPEEDR;
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD REG

		}BIT;

	}PUPDR;
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD REG

		}BIT;

	}IDR;
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD REG

		}BIT;

	}ODR;
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD REG

		}BIT;

	}BSRR;
	union
	{
		volatile uint32_t Reg ;
		struct
		{
			//BIT FIELD REG

		}BIT;

	}LCKR;
	uint32_t AFR[2];


}GPIO_REG_S;


/*******************************SPI*******************************************/
typedef struct
{

	volatile	uint32_t CR1;
	volatile	uint32_t CR2;
	volatile	uint32_t SR;
	volatile	uint32_t DR;
	volatile	uint32_t CRCPR;
	volatile	uint32_t RXCRCR;
	volatile	uint32_t TXCRCR;
	volatile	uint32_t I2SCFGR;
	volatile	uint32_t I2SPR;

}SPI_TypeDef_S;



/******************************* EXTI Register Definition Structure *******************************/
typedef struct{
	uint32_t EXTI_IMR;
	uint32_t EXTI_EMR;
	uint32_t EXTI_RTSR;
	uint32_t EXTI_FTSR;
	uint32_t EXTI_SWIER;
	uint32_t EXTI_PR;

}EXTI_RegDef_t;

typedef struct
{
	volatile uint32_t SYSCFG_MEMRMP;
	volatile uint32_t SYSCFG_PMC;
	volatile uint32_t SYSCFG_EXTICR[4];
	volatile uint32_t RESERVER0[2];
	volatile uint32_t CMPCR;
	volatile uint32_t RESERVER1[2];
	volatile uint32_t CFGR;

}SYSCFG_REG_S;

/*************************************CORE Peripheral*********************************************************/

/**
 * @brief
 */
typedef struct
{
		uint32_t NVIC_ISER[32];
		uint32_t NVIC_ICER[32];
		uint32_t NVIC_ISPR[32];
		uint32_t NVIC_ICPR[32];
		uint32_t NVIC_IABR[64];
		uint8_t  NVIC_IPR[96];
}NVIC_REG_S;

typedef struct
{
	volatile	uint32_t SR;
	volatile	uint32_t DR;
	volatile	uint32_t BRR;
	volatile	uint32_t CR1;
	volatile	uint32_t CR2;
	volatile	uint32_t CR3;
	volatile	uint32_t GTPR;

}USART_TypeDef_S;


typedef struct
{
	union
	{
		uint32_t Reg;
		struct
		{
			uint32_t ENABLE:1;
			uint32_t TICKINT:1;
			uint32_t CLKSOURCE:1;
			uint32_t Reserved0:13;
			uint32_t COUNTFLAG:1;
		//	uint32_t Reserved1:15;
		}BIT;
	}CTRL;

	union
	{
		uint32_t Reg;
		struct
		{
			uint32_t RELOAD:24;
	    	//uint32_t Reserved2:8;
		}BIT;
	}LOAD;

	union
	{
		uint32_t Reg;
		struct
		{
			uint32_t CURRENT:24;
			uint32_t Reserved3:8;
		}BIT;
	}VALUE;
	union
		{
		uint32_t Reg;
			struct
			{
				//
			}BIT;
		}CALIB;
}SYSTICK_REG_S;




/******************************* DMA Register Definition Structure *******************************/
typedef struct{
	uint32_t DMA_SxCR;
	uint32_t DMA_SxNDTR;
	uint32_t DMA_SxPAR;
	uint32_t DMA_SxM0AR;
	uint32_t DMA_SxM1AR;
	uint32_t DMA_SxFCR;	
}STREAM_RegDef_t;

typedef struct{
	uint32_t DMA_LISR[2];
	uint32_t DMA_LIFCR[2];
	STREAM_RegDef_t DMA_STREAM[7];
	
}DMA_RegDef_t;

/////////////////////////////////*Peripheral *//////////////////////////////////////////////

#define RCC				 ((volatile RCC_REG_S*)RCC_BASE_ADDRESS)


#define GPIOA			((GPIO_REG_S*)GPIOA_BASE_ADDRESS)
#define GPIOB			((GPIO_REG_S*)GPIOB_BASE_ADDRESS)
#define GPIOC			((GPIO_REG_S*)GPIOC_BASE_ADDRESS)
#define GPIOD			((GPIO_REG_S*)GPIOD_BASE_ADDRESS)
#define GPIOE			((GPIO_REG_S*)GPIOE_BASE_ADDRESS)
#define GPIOF			((GPIO_REG_S*)GPIOF_BASE_ADDRESS)
#define GPIOG			((GPIO_REG_S*)GPIOG_BASE_ADDRESS)
#define GPIOH           ((GPIO_REG_S*)GPIOH_BASE_ADDRESS)



#define EXTI			((EXTI_RegDef_t*)EXTI_BASE_ADDRESS)


#define SYSCFG			((SYSCFG_REG_S*)SYSCFG_BASE_ADDRESS)



#define DMA1			((DMA_REG_S*)DMA1_BASE_ADDRESS)
#define DMA2			((DMA_REG_S*)DMA2_BASE_ADDRESS)


#define USART1	((USART_TypeDef_S*)USART1_BASE_ADDRESS)
#define USART2	((USART_TypeDef_S*)USART2_BASE_ADDRESS)
#define USART3	((USART_TypeDef_S*)USART3_BASE_ADDRESS)


#define SPI1	((SPI_TypeDef_S*)SPI1_BASE_ADDRESS)
#define SPI2	((SPI_TypeDef_S*)SPI2_BASE_ADDRESS)
//#define SPI3	((SPI_TypeDef_S*)SPI3_BASE_ADDRESS)



/**********************************CORE Peripheral*****************************************/

#define NVIC			(( volatile NVIC_REG_S*)NVIC_BASE_ADDRESS)
#define SCB_AIRCR		*(volatile uint32_t*)SCB_BASE_ADDRESS
#define SYSTICK			((volatile SYSTICK_REG_S*)SYSTICK_BASE_ADDRESS)

/******************************* DMA Peripheral Definitions 		 *******************************/

#define  DMA1  	  	   ((DMA_RegDef_t*)DMA1_BASE_ADDRESS)
#define  DMA2  	       ((DMA_RegDef_t*)DMA2_BASE_ADDRESS)











#endif
