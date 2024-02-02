
int num_reverss(int num){
int reversed =0;
int count =0;
int num_copy =num;
while(num_copy>0){
	num_copy/=10;
	count++;
}
for (int i=0;i<count;i++){
	reversed=(reversed*10)+(num%10);
	num/=10;
}
return reversed;
}