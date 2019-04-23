#include<stdio.h>
#include<math.h>					//source GFG
int gcd(int a,int b){				//calculate gcd
	int temp;
	while(1){
		temp=a%b;
		if(temp==0)
			return b;
		a=b;
		b=temp;
	}	
}	
void main()
{
	int p=5,q=7;					//Select 2 prime numbers 
	int n=p*q;						//n calculation		
	float phi=(p-1)*(q-1);				//phi calculation
	int e=2;						//assume 
	while(e<phi){				
		if(gcd(e,phi)==1)			//gcd==1 stop else continue to find value of e	
			break;
		else
			e++;			
	}
	printf("The Value of E is %d\n",e);//e=encrypt	
	int d=round(phi/e);				//d=decrypt	(my method similar)(actual method d=e^(-1) mod phi)
	d=fmod(d,phi);
	printf("The Value of D is %d\n",d);
		
	int input=10;					
	printf("The Input Text is %d\n",input);
	
	int c=pow(input,e);				//c=m^e mod n		
	c=fmod(c,n);
	printf("ENcrypted text is %d\n",c);		
	
	int plain=pow(c,d);				//m=c^d mod n	
	plain=fmod(plain,n);
	printf("Decryption is %d\n",plain);	
}	
