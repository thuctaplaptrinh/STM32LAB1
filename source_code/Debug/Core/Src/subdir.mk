################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/ex10_test.c \
../Core/Src/ex1_test.c \
../Core/Src/ex2_test.c \
../Core/Src/ex3_test.c \
../Core/Src/ex4_test.c \
../Core/Src/ex5_test.c \
../Core/Src/ex6_test.c \
../Core/Src/ex7_test.c \
../Core/Src/ex8_test.c \
../Core/Src/ex9_test.c \
../Core/Src/main.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c 

OBJS += \
./Core/Src/ex10_test.o \
./Core/Src/ex1_test.o \
./Core/Src/ex2_test.o \
./Core/Src/ex3_test.o \
./Core/Src/ex4_test.o \
./Core/Src/ex5_test.o \
./Core/Src/ex6_test.o \
./Core/Src/ex7_test.o \
./Core/Src/ex8_test.o \
./Core/Src/ex9_test.o \
./Core/Src/main.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o 

C_DEPS += \
./Core/Src/ex10_test.d \
./Core/Src/ex1_test.d \
./Core/Src/ex2_test.d \
./Core/Src/ex3_test.d \
./Core/Src/ex4_test.d \
./Core/Src/ex5_test.d \
./Core/Src/ex6_test.d \
./Core/Src/ex7_test.d \
./Core/Src/ex8_test.d \
./Core/Src/ex9_test.d \
./Core/Src/main.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

