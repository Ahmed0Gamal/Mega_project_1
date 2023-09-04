################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/USART/SRC/USART_Program.c 

OBJS += \
./Src/USART/SRC/USART_Program.o 

C_DEPS += \
./Src/USART/SRC/USART_Program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/USART/SRC/%.o Src/USART/SRC/%.su Src/USART/SRC/%.cyclo: ../Src/USART/SRC/%.c Src/USART/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-USART-2f-SRC

clean-Src-2f-USART-2f-SRC:
	-$(RM) ./Src/USART/SRC/USART_Program.cyclo ./Src/USART/SRC/USART_Program.d ./Src/USART/SRC/USART_Program.o ./Src/USART/SRC/USART_Program.su

.PHONY: clean-Src-2f-USART-2f-SRC

