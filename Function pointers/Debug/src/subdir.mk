################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Function\ pointers.cpp 

OBJS += \
./src/Function\ pointers.o 

CPP_DEPS += \
./src/Function\ pointers.d 


# Each subdirectory must supply rules for building sources it contributes
src/Function\ pointers.o: ../src/Function\ pointers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Function pointers.d" -MT"src/Function\ pointers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


