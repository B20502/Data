#include<stdio.h>


int main(){


//program to determine the;
//multiple of three, print fizz
//multiple of five, prinnt buzz
//multiple of seven, printfizzbuzz
//if none of the above then print the number itself


int x=15;
if(x%3==0){
    printf("fizz\n");
}
else{
    printf("%d\n",x);
}


int y=20;
if(y%5==0){
    printf("buzz\n");

}
else{
    printf("%d\n",y);
}
int z =14;
if(z%7==0){
    printf("fizzbuzz\n");
}
else{
   printf("%d\n",z);
}
    return 0;
}