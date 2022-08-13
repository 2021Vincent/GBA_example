#define MODE0 0
#define MODE1 1
#define MODE2 2
#define MODE3 3
#define MODE4 4
#define MODE5 5

#define BG0 0x0100
#define BG1 0x0200
#define BG2 0x0400
#define BG3 0x0800

#define DISPCNT *(unsigned short *)0x04000000
#define VRAM (unsigned short *)0x06000000