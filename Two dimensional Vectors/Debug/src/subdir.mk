################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Two\ dimensional\ Vectors.cpp 

OBJS += \
./src/Two\ dimensional\ Vectors.o 

CPP_DEPS += \
./src/Two\ dimensional\ Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
src/Two\ dimensional\ Vectors.o: ../src/Two\ dimensional\ Vectors.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Two dimensional Vectors.d" -MT"src/Two\ dimensional\ Vectors.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


