#include <stdio.h>
int main()
{
long long int num, bin_num[100], dec_num, i,j,count=0;
while(scanf("%lld",&num)){
        if(num==0)
        break;
        count=0;
 dec_num = num;
 i=0;
 while (dec_num) {
	bin_num[i] = dec_num % 2;
	if(dec_num%2==1)
    {
        count++;
    }
	dec_num = dec_num / 2;
	i++;
 }
 printf("The parity of ");
 for (j=i-1; j>=0; j-- ) {
	 printf("%lld",bin_num[j]);
 }
 printf(" is %lld (mod 2).\n",count);
}
return 0;
}
