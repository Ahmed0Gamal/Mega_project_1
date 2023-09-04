################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/I2C/SRC/i2c_driver.c 

OBJS += \
./Src/I2C/SRC/i2c_driver.o 

C_DEPS += \
./Src/I2C/SRC/i2c_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Src/I2C/SRC/%.o Src/I2C/SRC/%.su Src/I2C/SRC/%.cyclo: ../Src/I2C/SRC/%.c Src/I2C/SRC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-I2C-2f-SRC

clean-Src-2f-I2C-2f-SRC:
	-$(RM) ./Src/I2C/SRC/i2c_driver.cyclo ./Src/I2C/SRC/i2c_driver.d ./Src/I2C/SRC/i2c_driver.o ./Src/I2C/SRC/i2c_driver.su

.PHONY: clean-Src-2f-I2C-2f-SRC

