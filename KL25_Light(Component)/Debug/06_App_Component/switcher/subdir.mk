################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../06_App_Component/switcher/switcher.c 

OBJS += \
./06_App_Component/switcher/switcher.o 

C_DEPS += \
./06_App_Component/switcher/switcher.d 


# Each subdirectory must supply rules for building sources it contributes
06_App_Component/switcher/%.o: ../06_App_Component/switcher/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -I"C:/Users/11876/Desktop/KL25_Light(Component)/08_Source" -I"C:/Users/11876/Desktop/KL25_Light(Component)/07_Soft_Component" -I"C:/Users/11876/Desktop/KL25_Light(Component)/07_Soft_Component/common" -I"C:/Users/11876/Desktop/KL25_Light(Component)/04_Linker_File" -I"C:/Users/11876/Desktop/KL25_Light(Component)/06_App_Component" -I"C:/Users/11876/Desktop/KL25_Light(Component)/06_App_Component/light" -I"C:/Users/11876/Desktop/KL25_Light(Component)/05_Driver" -I"C:/Users/11876/Desktop/KL25_Light(Component)/03_MCU" -I"C:/Users/11876/Desktop/KL25_Light(Component)/02_CPU" -I"C:/Users/11876/Desktop/KL25_Light(Component)/01_Doc" -I"C:/Users/11876/Desktop/KL25_Light(Component)/05_Driver/gpio" -I"C:/Users/11876/Desktop/KL25_Light(Component)/06_App_Component/switcher" -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


