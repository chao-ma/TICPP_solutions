################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/LongestChain.cpp \
../src/Searcher.cpp \
../src/ch3.cpp 

OBJS += \
./src/LongestChain.o \
./src/Searcher.o \
./src/ch3.o 

CPP_DEPS += \
./src/LongestChain.d \
./src/Searcher.d \
./src/ch3.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


