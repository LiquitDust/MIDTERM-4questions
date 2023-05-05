#include <stdio.h>
void ListenPort();

int main(){
 
 ListenPort();

return 0;
}


void ListenPort(){
    printf("Tebrikler programi acabildiniz\n");
int run=0;
char n1,n2,n3;
char enter1;
scanf("%c",&n1);
scanf("%c",&enter1);
scanf("%c",&n2);
scanf("%c",&enter1);
scanf("%c",&n3);
scanf("%c",&enter1);
if(run ==0 &&n1 == 'a' && n2=='b' && n3 == 'c'){
    printf("Started\n");
    run = 1;
}
if(run ==1 &&n1 == 'c' && n2=='b' && n3 == 'a'){
    printf("Ended\n");
    run = 0;
}




while(1){ 
if(n1 == 'x' && n2=='y' && n3 == 'z'){
 printf("Quitting...\n");
 break;
}
scanf("%c",&n1);
scanf("%c",&enter1);
if(run==1 && n2=='d' && n3=='e' && n1 == 'f'){
    printf("Task 1\n");
}
if(run==1 && n2=='g' && n3=='h' && n1 == 'i'){
    printf("Task 2\n");
}
if(run==1 && n2=='j' && n3=='k' && n1 == 'l'){
    printf("Task 3\n");
}
if(run ==0 && n2 == 'a' && n3=='b' && n1 == 'c'){
    printf("Started\n");
    run = 1;
}
if(run ==1 &&n2 == 'c' && n3=='b' && n1 == 'a'){
    printf("Ended\n");
    run = 0;
}
if(n2 == 'x' && n3=='y' && n1 == 'z'){
    printf("Quitting...\n");
    break;
}








scanf("%c",&n2);
scanf("%c",&enter1);

if(run==1 && n3=='d' && n1=='e' && n2 == 'f'){
    printf("Task 1\n");
}
if(run==1 && n3=='g' && n1=='h' && n2 == 'i'){
    printf("Task 2\n");
}
if(run==1 && n3=='j' && n1=='k' && n2 == 'l'){
    printf("Task 3\n");
}
if(run ==0 && n3 == 'a' && n1=='b' && n2 == 'c'){
    printf("Started\n");
    run = 1;
}
if(run ==1 && n3 == 'c' && n1=='b' && n2 == 'a'){
    printf("Ended\n");
    run = 0;
}
if(n3 == 'x' && n1=='y' && n2 == 'z'){
    printf("Quitting...\n");
    break;
}




scanf("%c",&n3);
scanf("%c",&enter1);

if(run==1 && n1=='d' && n2=='e' && n3 == 'f'){
    printf("Task 1\n");
}
if(run==1 && n1=='g' && n2=='h' && n3 == 'i'){
    printf("Task 2\n");
}
if(run==1 && n1=='j' && n2=='k' && n3 == 'l'){
    printf("Task 3\n");
}
if(run ==0 && n1 == 'a' && n2=='b' && n3 == 'c'){
    printf("Started\n");
    run = 1;
}
if(run ==1 && n1 == 'c' && n2=='b' && n3 == 'a'){
    printf("Ended\n");
    run = 0;
}
if(n1 == 'x' && n2=='y' && n3 == 'z'){
    printf("Quitting...\n");
    break;
}



}

}