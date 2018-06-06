################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../funtzioak.c \
../main.c \
../menu.c \
../soinua.c \
../switch.c \
../teklak.c 

OBJS += \
./funtzioak.o \
./main.o \
./menu.o \
./soinua.o \
./switch.o \
./teklak.o 

C_DEPS += \
./funtzioak.d \
./main.d \
./menu.d \
./soinua.d \
./switch.d \
./teklak.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


