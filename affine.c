#include<stdio.h>
void main()
{
	int k1,k2;
	k1=5;	//coprime numbers 5,8
	k2=8;
	char p;
	printf("Enter a Character to encrpt \n");
	scanf("%c",&p);
	
	printf("Encrption is \n");   //(5x + 8) mod 26   
	int c=(((p-97)*k1)+k2)%26;
	printf("The Cipher text is %c\n", c+97);
	
	printf("Decrption is \n");		//21(y-8) mod 26
	int k3=26-k1;    //a's complement value
	int plain=(k3*(c-k2))%26;
	printf("The Plain text is %c\n",plain+97);
}	
