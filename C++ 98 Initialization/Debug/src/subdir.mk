################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/C++\ 98\ Initialization.cpp 

OBJS += \
./src/C++\ 98\ Initialization.o 

CPP_DEPS += \
./src/C++\ 98\ Initialization.d 


# Each subdirectory must supply rules for building sources it contributes
src/C++\ 98\ Initialization.o: ../src/C++\ 98\ Initialization.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/C++ 98 Initialization.d" -MT"src/C++\ 98\ Initialization.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


