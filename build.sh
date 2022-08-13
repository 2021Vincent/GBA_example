rm *.o *.elf *.gba

arm-none-eabi-gcc -c main.c -o main.o
arm-none-eabi-gcc -c lbs.c -o lbs.o

arm-none-eabi-gcc lbs.o main.o -specs=gba.specs -o main.elf

arm-none-eabi-objcopy -O binary main.elf main.gba

gbafix main.gba -t first
