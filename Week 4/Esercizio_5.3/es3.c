#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
double* x;
char* temp;
double* conversion;
conversion=(double *)malloc(4*sizeof(double));
double* second_conversion;
double* first_conversion;
first_conversion=(double *)(conversion);
second_conversion=(double *)(conversion+1);
temp=(char *)(conversion+2);
x=(double *)(conversion+3);


printf("Inserire scala e valore separati da spazio:");
scanf("%c,%lf",temp,x);

if (*temp=='C'){    
    *first_conversion= *x + 273.15;
    printf("In k è %f \n",*first_conversion);
    *second_conversion= (*x)*(9/5) + 32;
    printf("In F è %f \n",*second_conversion);
    }
else if (*temp=='K'){
    *first_conversion= *x - 273.15;
    printf("In c è %f \n",*first_conversion);
    *second_conversion= (*first_conversion)*(9/5) + 32;
    printf("In F è %f \n",*second_conversion);
    }

else if (*temp=='F'){
    *first_conversion= (*x - 32)/(9/5);
    printf("In C è %f \n",*first_conversion);
    *second_conversion= *first_conversion+273.15;
    printf("In K è %f \n",*second_conversion);}
return 0;		
}
