################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/SYSTICK/SRC/SYSTICK_Program.c 

OBJS += \
./Src/SYSTICK/SRC/SYSTICK_Program.o 

C_DEPS += \
./Src/SYSTICK/SRC/SYSTICK_Program.d 


# Each subdirectory must supply rules for building sources it contributes
Src/SYSTICK/SRC/%.o Src/SYSTICK/SRC/%.su Src/SYSTICK/SRC/%.cyclo: ../Src/SYSTICK/SRC/%.c Src/SYSTICK/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-SYSTICK-2f-SRC

clean-Src-2f-SYSTICK-2f-SRC:
	-$(RM) ./Src/SYSTICK/SRC/SYSTICK_Program.cyclo ./Src/SYSTICK/SRC/SYSTICK_Program.d ./Src/SYSTICK/SRC/SYSTICK_Program.o ./Src/SYSTICK/SRC/SYSTICK_Program.su

.PHONY: clean-Src-2f-SYSTICK-2f-SRC

