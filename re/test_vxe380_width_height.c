#include <stdio.h>

int main()
{

    int r10 = 0xfffffa + 0x14;
    for(int i=0; i < 100; i++) {
        
        int r8 = r10 & 0xffff;
        if(r8 >= 0x7f) {
            
            int r9 = r10 >> 0x10;
            if(r9 >= 0x3f) {
                printf("Passed ui16Width check with: 0x%x\n", r8);
                printf("Passed ui16FrameHeight check with: 0x%x\n", r9);
                printf("---------\n");
                printf("Your uiWidth [0x14] input should be: 0x%x\n", r10 - 0x14);
                break;
            } else {
                printf("Failed trying values (width: 0x%x, height: 0x%x)\n", r8, r9);
            }
            
        }
        r10 = r10 + 1 + 0x14;
        
    }
    
    return 0;
}