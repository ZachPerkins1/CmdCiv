################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandDispatcher.cpp \
../src/GameManager.cpp \
../src/IOManager.cpp \
../src/Launcher.cpp 

OBJS += \
./src/CommandDispatcher.o \
./src/GameManager.o \
./src/IOManager.o \
./src/Launcher.o 

CPP_DEPS += \
./src/CommandDispatcher.d \
./src/GameManager.d \
./src/IOManager.d \
./src/Launcher.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


