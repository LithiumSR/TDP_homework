#include <stdio.h>
#include <math.h>

int main(){
int x;
printf("Inserire numeri separati da spazi");
scanf("%d",&x);
while (x!=0){
    for (int n=0;n<x;n++){
        printf("*");
        }
    printf("\n");
    scanf("%d",&x);
    }
return 0;		
	}

