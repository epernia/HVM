
# Put your source files here (or *.c, etc)
ADDITIONAL_SRCS=
SRCS=  ./lib/system/src/cmsis/system_stm32f4xx.c ./lib/system/src/cmsis/vectors_stm32f4xx.c ./lib/system/src/cortexm/exception_handlers.c  ../classes.c ../icecapvm.c ../methodinterpreter.c ../methods.c ../gc.c ../natives_allOS.c  ../allocation_point.c ../print.c natives_armCortexM.c  user_natives.c armCortexM_interrupt.s  $(ADDITIONAL_SRCS)

# Binaries will be generated with this name (.elf, .bin, .hex, etc)
PROJ_NAME=

BURN_TOOL=
# Normally you shouldn't need to change anything below this line!
#######################################################################################

CC=
OBJCOPY=

#Estos son los flags del documento de referencia de hvm
# -Wall -pedantic -Werror -g -Os -DJAVA_HEAP_SIZE=1000 -DJAVA_STACK_SIZE=1024

CFLAGS= 
LIBRARIES=

CFLAGS += $(STM_LIB_FILES) 
CFLAGS += $(LIBRARIES) 

# add startup file to build
OBJS = $(SRCS:.c=.o)


.PHONY: proj

all: proj

proj: $(PROJ_NAME).elf

$(PROJ_NAME).elf: $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@ 
	$(OBJCOPY) -O ihex $(PROJ_NAME).elf $(PROJ_NAME).hex
	$(OBJCOPY) -O binary $(PROJ_NAME).elf $(PROJ_NAME).bin

clean:
	rm -f *.o $(PROJ_NAME).elf $(PROJ_NAME).hex $(PROJ_NAME).bin

# Flash the STM32F4
burn: proj
	$(BURN_TOOL)