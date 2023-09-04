################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/SCB/SRC/SCB_Program.c 

OBJS += \
./Src/SCB/SRC/SCB_Program.o 

C_DEPS += \
./Src/SCB/SRC/SCB_Program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/SCB/SRC/%.o Src/SCB/SRC/%.su Src/SCB/SRC/%.cyclo: ../Src/SCB/SRC/%.c Src/SCB/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-SCB-2f-SRC

clean-Src-2f-SCB-2f-SRC:
	-$(RM) ./Src/SCB/SRC/SCB_Program.cyclo ./Src/SCB/SRC/SCB_Program.d ./Src/SCB/SRC/SCB_Program.o ./Src/SCB/SRC/SCB_Program.su

.PHONY: clean-Src-2f-SCB-2f-SRC

