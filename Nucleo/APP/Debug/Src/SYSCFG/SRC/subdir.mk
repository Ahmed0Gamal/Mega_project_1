################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/SYSCFG/SRC/SYSCFG_Program.c 

OBJS += \
./Src/SYSCFG/SRC/SYSCFG_Program.o 

C_DEPS += \
./Src/SYSCFG/SRC/SYSCFG_Program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/SYSCFG/SRC/%.o Src/SYSCFG/SRC/%.su Src/SYSCFG/SRC/%.cyclo: ../Src/SYSCFG/SRC/%.c Src/SYSCFG/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-SYSCFG-2f-SRC

clean-Src-2f-SYSCFG-2f-SRC:
	-$(RM) ./Src/SYSCFG/SRC/SYSCFG_Program.cyclo ./Src/SYSCFG/SRC/SYSCFG_Program.d ./Src/SYSCFG/SRC/SYSCFG_Program.o ./Src/SYSCFG/SRC/SYSCFG_Program.su

.PHONY: clean-Src-2f-SYSCFG-2f-SRC

