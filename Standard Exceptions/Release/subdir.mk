################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Standard\ Exceptions.cpp 

OBJS += \
./Standard\ Exceptions.o 

CPP_DEPS += \
./Standard\ Exceptions.d 


# Each subdirectory must supply rules for building sources it contributes
Standard\ Exceptions.o: ../Standard\ Exceptions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Standard Exceptions.d" -MT"Standard\ Exceptions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


