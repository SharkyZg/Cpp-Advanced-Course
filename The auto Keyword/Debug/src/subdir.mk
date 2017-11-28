################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/The\ auto\ Keyword.cpp 

OBJS += \
./src/The\ auto\ Keyword.o 

CPP_DEPS += \
./src/The\ auto\ Keyword.d 


# Each subdirectory must supply rules for building sources it contributes
src/The\ auto\ Keyword.o: ../src/The\ auto\ Keyword.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/The auto Keyword.d" -MT"src/The\ auto\ Keyword.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


