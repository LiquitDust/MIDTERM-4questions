#include <stdio.h>
#define SIZE 11
void swapHalves(int *arr, int numElements);
int main(){
  int x[SIZE] = {1,2,3,4,5,6,7,8,9,10,11};
printf("Before func:\n");
for(int b=0;b<SIZE;++b){
  printf("%d ,",x[b]);

}
swapHalves(x,SIZE);
printf("\nAfter func:\n");
for(int b=0;b<SIZE;++b){
  printf("%d ,",x[b]);

}


  return 0;
}





void swapHalves(int *arr, int numElements){
  int x,y,temp;
if(numElements%2==0){   // çiftse eleman sayısi        1 2 3 4 5 6 7 
x = numElements/2;
for(y=0;y<x;++y){
  temp = *(arr+y);
  *(arr+y) = *(arr+x+y);
  *(arr+x+y)=temp;
}

}else{
  x = (numElements-1)/2;
  for(y=0;y<x;++y){
  temp = *(arr+y);
  *(arr+y) = *(arr+x+y+1);
  *(arr+x+y+1)=temp;
}


}

}