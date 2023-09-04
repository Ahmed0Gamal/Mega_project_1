################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/GPIO/SRC/GPIO_prg.c 

OBJS += \
./Src/GPIO/SRC/GPIO_prg.o 

C_DEPS += \
./Src/GPIO/SRC/GPIO_prg.d 


# Each subdirectory must supply rules for building sources it contributes
Src/GPIO/SRC/%.o Src/GPIO/SRC/%.su Src/GPIO/SRC/%.cyclo: ../Src/GPIO/SRC/%.c Src/GPIO/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-GPIO-2f-SRC

clean-Src-2f-GPIO-2f-SRC:
	-$(RM) ./Src/GPIO/SRC/GPIO_prg.cyclo ./Src/GPIO/SRC/GPIO_prg.d ./Src/GPIO/SRC/GPIO_prg.o ./Src/GPIO/SRC/GPIO_prg.su

.PHONY: clean-Src-2f-GPIO-2f-SRC

