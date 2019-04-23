#include<stdio.h>
#include<math.h>
void main()
{
	int S1[4][16] = 
{
		14,  4, 13,  1,  2, 15, 11,  8,  3, 10,  6, 12,  5,  9,  0,  7,
		0, 15,  7,  4, 14,  2, 13,  1, 10,  6, 12, 11,  9,  5,  3,  8,
		4,  1, 14,  8, 13,  6,  2, 11, 15, 12,  9,  7,  3, 10,  5,  0,
		15, 12,  8,  2,  4,  9,  1,  7,  5, 11,  3, 14, 10,  0,  6, 13
}; 													//given
	int input[6]={0,1,1,1,0,1};						// convert six bits to 4 bits = sbox
	
	int c=0,r=0;
	for(int i=0;i<6;i++){							//to get row and column values in binary		
		r=10*r+input[i];
		i=i+4;			}
	printf("Binary row is %d\n",r);
	for (int i=1;i<5;i++)
		c=10*c+input[i];
	printf("Binary column is %d\n",c);	
	
	int x=0,y=0,a=0;										//to convert the above binary to decimal
	for (int i=0;r!=0;++i){
		a=r%10;
		x=(a)*(pow(2,i))+x;
		r=r/10;				}
	printf("Row is %d\n",x);
	for (int i=0;c!=0;i++){
		a=c%10;
		y=a*pow(2,i)+y;
		c=c/10;				}
	printf("Column is %d\n",y);			
	int n=S1[x][y]; 
	int bin[4]={};												//getting the value from S1
	printf("n=%d\n",n);												
	printf("binary of sbox is ");
	if(n==0)													//Converting the Decimal to binary
		printf("0000\n");									
	else{
		for(int i=0;n!=1;i++){
			int b=n%2;
			bin[i]=b;
			n=n/2;			}
	for	(int i=0;i<4;i++)
		printf("%d",bin[i]);	
																		
		}														
	
			
}
	
