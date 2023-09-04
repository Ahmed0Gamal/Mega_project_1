################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/RTC/Rtc_prog.c 

OBJS += \
./Src/RTC/Rtc_prog.o 

C_DEPS += \
./Src/RTC/Rtc_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Src/RTC/%.o Src/RTC/%.su Src/RTC/%.cyclo: ../Src/RTC/%.c Src/RTC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-RTC

clean-Src-2f-RTC:
	-$(RM) ./Src/RTC/Rtc_prog.cyclo ./Src/RTC/Rtc_prog.d ./Src/RTC/Rtc_prog.o ./Src/RTC/Rtc_prog.su

.PHONY: clean-Src-2f-RTC

