################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/EXTI/SRC/EXTI_prg.c 

OBJS += \
./Src/EXTI/SRC/EXTI_prg.o 

C_DEPS += \
./Src/EXTI/SRC/EXTI_prg.d 


# Each subdirectory must supply rules for building sources it contributes
Src/EXTI/SRC/%.o Src/EXTI/SRC/%.su Src/EXTI/SRC/%.cyclo: ../Src/EXTI/SRC/%.c Src/EXTI/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-EXTI-2f-SRC

clean-Src-2f-EXTI-2f-SRC:
	-$(RM) ./Src/EXTI/SRC/EXTI_prg.cyclo ./Src/EXTI/SRC/EXTI_prg.d ./Src/EXTI/SRC/EXTI_prg.o ./Src/EXTI/SRC/EXTI_prg.su

.PHONY: clean-Src-2f-EXTI-2f-SRC

