################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/NVIC/SRC/NVIC_Program.c 

OBJS += \
./Src/NVIC/SRC/NVIC_Program.o 

C_DEPS += \
./Src/NVIC/SRC/NVIC_Program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/NVIC/SRC/%.o Src/NVIC/SRC/%.su Src/NVIC/SRC/%.cyclo: ../Src/NVIC/SRC/%.c Src/NVIC/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-NVIC-2f-SRC

clean-Src-2f-NVIC-2f-SRC:
	-$(RM) ./Src/NVIC/SRC/NVIC_Program.cyclo ./Src/NVIC/SRC/NVIC_Program.d ./Src/NVIC/SRC/NVIC_Program.o ./Src/NVIC/SRC/NVIC_Program.su

.PHONY: clean-Src-2f-NVIC-2f-SRC

