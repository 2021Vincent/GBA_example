#include "mygba.h"
#include "lbs.h"
int main(){
	int i;
	for(i=0;i<38400;i++){
		*(VRAM+i)=lbsBitmap[i];
	}
	DISPCNT = MODE3 | BG2;
	while(1){
		
	}
	return 0;
}  


