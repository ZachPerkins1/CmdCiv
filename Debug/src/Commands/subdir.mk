################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/Alias.cpp \
../src/Commands/Command.cpp \
../src/Commands/CommandMap.cpp 

OBJS += \
./src/Commands/Alias.o \
./src/Commands/Command.o \
./src/Commands/CommandMap.o 

CPP_DEPS += \
./src/Commands/Alias.d \
./src/Commands/Command.d \
./src/Commands/CommandMap.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


