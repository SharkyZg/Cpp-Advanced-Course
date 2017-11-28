################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ring\ Buffer.cpp 

OBJS += \
./src/Ring\ Buffer.o 

CPP_DEPS += \
./src/Ring\ Buffer.d 


# Each subdirectory must supply rules for building sources it contributes
src/Ring\ Buffer.o: ../src/Ring\ Buffer.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ring Buffer.d" -MT"src/Ring\ Buffer.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


