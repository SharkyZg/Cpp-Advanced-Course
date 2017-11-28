################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Decltype\ and\ Typeid.cpp 

OBJS += \
./src/Decltype\ and\ Typeid.o 

CPP_DEPS += \
./src/Decltype\ and\ Typeid.d 


# Each subdirectory must supply rules for building sources it contributes
src/Decltype\ and\ Typeid.o: ../src/Decltype\ and\ Typeid.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Decltype and Typeid.d" -MT"src/Decltype\ and\ Typeid.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


