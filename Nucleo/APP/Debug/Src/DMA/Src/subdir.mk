################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/DMA/Src/DMA_prg.c 

OBJS += \
./Src/DMA/Src/DMA_prg.o 

C_DEPS += \
./Src/DMA/Src/DMA_prg.d 


# Each subdirectory must supply rules for building sources it contributes
Src/DMA/Src/%.o Src/DMA/Src/%.su Src/DMA/Src/%.cyclo: ../Src/DMA/Src/%.c Src/DMA/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-DMA-2f-Src

clean-Src-2f-DMA-2f-Src:
	-$(RM) ./Src/DMA/Src/DMA_prg.cyclo ./Src/DMA/Src/DMA_prg.d ./Src/DMA/Src/DMA_prg.o ./Src/DMA/Src/DMA_prg.su

.PHONY: clean-Src-2f-DMA-2f-Src

