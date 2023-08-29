################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32F103xx_Drive/CLCD_prog.c \
../STM32F103xx_Drive/EXTI_prg.c \
../STM32F103xx_Drive/GPIO_prg.c \
../STM32F103xx_Drive/NVIC_prg.c \
../STM32F103xx_Drive/RCC_prg.c \
../STM32F103xx_Drive/SPI_Program.c \
../STM32F103xx_Drive/SysTick_prg.c \
../STM32F103xx_Drive/USART_Program.c 

OBJS += \
./STM32F103xx_Drive/CLCD_prog.o \
./STM32F103xx_Drive/EXTI_prg.o \
./STM32F103xx_Drive/GPIO_prg.o \
./STM32F103xx_Drive/NVIC_prg.o \
./STM32F103xx_Drive/RCC_prg.o \
./STM32F103xx_Drive/SPI_Program.o \
./STM32F103xx_Drive/SysTick_prg.o \
./STM32F103xx_Drive/USART_Program.o 

C_DEPS += \
./STM32F103xx_Drive/CLCD_prog.d \
./STM32F103xx_Drive/EXTI_prg.d \
./STM32F103xx_Drive/GPIO_prg.d \
./STM32F103xx_Drive/NVIC_prg.d \
./STM32F103xx_Drive/RCC_prg.d \
./STM32F103xx_Drive/SPI_Program.d \
./STM32F103xx_Drive/SysTick_prg.d \
./STM32F103xx_Drive/USART_Program.d 


# Each subdirectory must supply rules for building sources it contributes
STM32F103xx_Drive/%.o STM32F103xx_Drive/%.su STM32F103xx_Drive/%.cyclo: ../STM32F103xx_Drive/%.c STM32F103xx_Drive/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"D:/ARM/Advanced1ON030323-AS/WS/Mega_Project_1_BluePill/STM32F103xx_Drive/INC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-STM32F103xx_Drive

clean-STM32F103xx_Drive:
	-$(RM) ./STM32F103xx_Drive/CLCD_prog.cyclo ./STM32F103xx_Drive/CLCD_prog.d ./STM32F103xx_Drive/CLCD_prog.o ./STM32F103xx_Drive/CLCD_prog.su ./STM32F103xx_Drive/EXTI_prg.cyclo ./STM32F103xx_Drive/EXTI_prg.d ./STM32F103xx_Drive/EXTI_prg.o ./STM32F103xx_Drive/EXTI_prg.su ./STM32F103xx_Drive/GPIO_prg.cyclo ./STM32F103xx_Drive/GPIO_prg.d ./STM32F103xx_Drive/GPIO_prg.o ./STM32F103xx_Drive/GPIO_prg.su ./STM32F103xx_Drive/NVIC_prg.cyclo ./STM32F103xx_Drive/NVIC_prg.d ./STM32F103xx_Drive/NVIC_prg.o ./STM32F103xx_Drive/NVIC_prg.su ./STM32F103xx_Drive/RCC_prg.cyclo ./STM32F103xx_Drive/RCC_prg.d ./STM32F103xx_Drive/RCC_prg.o ./STM32F103xx_Drive/RCC_prg.su ./STM32F103xx_Drive/SPI_Program.cyclo ./STM32F103xx_Drive/SPI_Program.d ./STM32F103xx_Drive/SPI_Program.o ./STM32F103xx_Drive/SPI_Program.su ./STM32F103xx_Drive/SysTick_prg.cyclo ./STM32F103xx_Drive/SysTick_prg.d ./STM32F103xx_Drive/SysTick_prg.o ./STM32F103xx_Drive/SysTick_prg.su ./STM32F103xx_Drive/USART_Program.cyclo ./STM32F103xx_Drive/USART_Program.d ./STM32F103xx_Drive/USART_Program.o ./STM32F103xx_Drive/USART_Program.su

.PHONY: clean-STM32F103xx_Drive

