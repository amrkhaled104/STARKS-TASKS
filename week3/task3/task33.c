#include<stdio.h>
int convert(int num ){
while(num>0){
printf("%d",num%2);
num/=2;
}

}