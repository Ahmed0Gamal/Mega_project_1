################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32F446xx_Drive/EXTI_prg.c \
../STM32F446xx_Drive/GPIO_prg.c \
../STM32F446xx_Drive/NVIC_Program.c \
../STM32F446xx_Drive/RCC_prg.c \
../STM32F446xx_Drive/SCB_Program.c \
../STM32F446xx_Drive/SPI_Program.c \
../STM32F446xx_Drive/SYSCFG_Program.c \
../STM32F446xx_Drive/SYSTICK_Program.c \
../STM32F446xx_Drive/USART_Program.c 

OBJS += \
./STM32F446xx_Drive/EXTI_prg.o \
./STM32F446xx_Drive/GPIO_prg.o \
./STM32F446xx_Drive/NVIC_Program.o \
./STM32F446xx_Drive/RCC_prg.o \
./STM32F446xx_Drive/SCB_Program.o \
./STM32F446xx_Drive/SPI_Program.o \
./STM32F446xx_Drive/SYSCFG_Program.o \
./STM32F446xx_Drive/SYSTICK_Program.o \
./STM32F446xx_Drive/USART_Program.o 

C_DEPS += \
./STM32F446xx_Drive/EXTI_prg.d \
./STM32F446xx_Drive/GPIO_prg.d \
./STM32F446xx_Drive/NVIC_Program.d \
./STM32F446xx_Drive/RCC_prg.d \
./STM32F446xx_Drive/SCB_Program.d \
./STM32F446xx_Drive/SPI_Program.d \
./STM32F446xx_Drive/SYSCFG_Program.d \
./STM32F446xx_Drive/SYSTICK_Program.d \
./STM32F446xx_Drive/USART_Program.d 


# Each subdirectory must supply rules for building sources it contributes
STM32F446xx_Drive/%.o STM32F446xx_Drive/%.su STM32F446xx_Drive/%.cyclo: ../STM32F446xx_Drive/%.c STM32F446xx_Drive/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"D:/ARM/Advanced1ON030323-AS/WS/Mega_Project_1_Nucleo/STM32F446xx_Drive/INC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-STM32F446xx_Drive

clean-STM32F446xx_Drive:
	-$(RM) ./STM32F446xx_Drive/EXTI_prg.cyclo ./STM32F446xx_Drive/EXTI_prg.d ./STM32F446xx_Drive/EXTI_prg.o ./STM32F446xx_Drive/EXTI_prg.su ./STM32F446xx_Drive/GPIO_prg.cyclo ./STM32F446xx_Drive/GPIO_prg.d ./STM32F446xx_Drive/GPIO_prg.o ./STM32F446xx_Drive/GPIO_prg.su ./STM32F446xx_Drive/NVIC_Program.cyclo ./STM32F446xx_Drive/NVIC_Program.d ./STM32F446xx_Drive/NVIC_Program.o ./STM32F446xx_Drive/NVIC_Program.su ./STM32F446xx_Drive/RCC_prg.cyclo ./STM32F446xx_Drive/RCC_prg.d ./STM32F446xx_Drive/RCC_prg.o ./STM32F446xx_Drive/RCC_prg.su ./STM32F446xx_Drive/SCB_Program.cyclo ./STM32F446xx_Drive/SCB_Program.d ./STM32F446xx_Drive/SCB_Program.o ./STM32F446xx_Drive/SCB_Program.su ./STM32F446xx_Drive/SPI_Program.cyclo ./STM32F446xx_Drive/SPI_Program.d ./STM32F446xx_Drive/SPI_Program.o ./STM32F446xx_Drive/SPI_Program.su ./STM32F446xx_Drive/SYSCFG_Program.cyclo ./STM32F446xx_Drive/SYSCFG_Program.d ./STM32F446xx_Drive/SYSCFG_Program.o ./STM32F446xx_Drive/SYSCFG_Program.su ./STM32F446xx_Drive/SYSTICK_Program.cyclo ./STM32F446xx_Drive/SYSTICK_Program.d ./STM32F446xx_Drive/SYSTICK_Program.o ./STM32F446xx_Drive/SYSTICK_Program.su ./STM32F446xx_Drive/USART_Program.cyclo ./STM32F446xx_Drive/USART_Program.d ./STM32F446xx_Drive/USART_Program.o ./STM32F446xx_Drive/USART_Program.su

.PHONY: clean-STM32F446xx_Drive

