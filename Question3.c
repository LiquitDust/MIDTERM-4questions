#include <stdio.h>
double findMinMax(double *arr, int numElements, int isMin);

int main(){
double x[17] = {3,8,2,3,-2,6,7,1,10,0,6,-2,-3,18,31,21,-31};                                            
printf("Min value of array is : %f ",findMinMax(x,17,5));
return 0;
}

////////////// Declaration of code 

double findMinMax(double *arr, int numElements, int isMin){
int max,min;

if(isMin==0){
    max = *arr;
    for(int x =1;x<numElements;++x){    // 2 1 3 4 8 7
       if(max < *(arr+x) ) {
        max=*(arr+x);
       }
       
    
    }
    return max;
}
else{
    min = *arr;
    for(int x=1; x<numElements;++x){
        if(min>*(arr+x)){
        min = *(arr+x);
    }
    }

    return min;
}
}