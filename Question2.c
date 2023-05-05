#include <stdio.h>
float calculateCollision(float rect1[4], float rect2[4]);

int main(){
  float R1[4] = { -12.0F,3.0F,2.0F,2.0F }, R2[4] = {  -12.0F,3.0F,2.0F,2.0F};
  printf("Area: %.2f", calculateCollision(R1, R2));

    return 0 ;
}










float calculateCollision(float rect1[4], float rect2[4]){
//////////// x y width height
float R_x1,R_x2,R_y1,R_y2;
float R2_x1,R2_x2,R2_y1,R2_y2;
float dikey,yatay,alan;
R_x1 = rect1[0];
R_x2 = rect1[0]+rect1[2];
R_y1 = rect1[1];
R_y2 = rect1[1]+rect1[3];
////////////////////////////  KOORDINAT TANIMLARI
R2_x1 = rect2[0];
R2_x2 = rect2[0]+rect2[2];
R2_y1 = rect2[1];
R2_y2 = rect2[1]+rect2[3];
 


if(R_x1<=R2_x1 && R_x1<R2_x2 && R_x2>R2_x1 && R_x2<=R2_x2){
    yatay = R_x2-R2_x1;
}
else if(R_x1>=R2_x1 && R_x1<R2_x2 && R_x2>R2_x1 && R_x2>=R2_x2){

    yatay = R2_x2-R_x1;
}

else if(R_x1>=R2_x1 && R_x1<R2_x2 && R_x2>R2_x1 && R_x2<=R2_x2){

    yatay = R_x2-R_x1;
}
else if(R_x1<=R2_x1 && R_x1<R2_x2 && R_x2>R2_x1 && R_x2>=R2_x2){
    yatay = R2_x2-R2_x1;
}else{
  yatay = 0 ;
}



//yleri

if(R_y1<=R2_y1 && R_y1<R2_y2 && R_y2>R2_y1 && R_y2<=R2_y2){
    dikey = R_y2-R2_y1;
}

else if(R_y1>=R2_y1 && R_y1<R2_y2 && R_y2>R2_y1 && R_y2>=R2_y2){

    dikey = R2_y2-R_y1;
}

else if(R_y1>=R2_y1 && R_y1<R2_y2 && R_y2>R2_y1 && R_y2<=R2_y2){

    dikey = R_y2-R_y1;
}
else if(R_y1<=R2_y1 && R_y1<R2_y2 && R_y2>R2_y1 && R_y2>=R2_y2){
    dikey = R2_y2-R2_y1;
}else{
  dikey = 0 ;
}
alan = dikey*yatay;
// 4 OZEL DURUM 
if(((R_x1<R2_x1 && R_x1<R2_x2 && R_x2>R2_x1 && R_x2<R2_x2) && ((R_y1==R2_y1) && (R_y2==R2_y2))) || ((R_x1>R2_x1 && R_x1<R2_x2 && R_x2>R2_x1 && R_x2>R2_x2) &&  ((R_y1==R2_y1) && (R_y2==R2_y2)) ) ){
    alan = (R2_y2-R2_y1)*(R2_x2-R2_x1);
}
if(R_x1==R2_x1 && R_x2==R2_x2 && R_y1==R2_y1 && R_y2==R2_y2 ){
  alan = (R_x2-R_x1)*(R_y2-R_y1);
}






return alan;





}
