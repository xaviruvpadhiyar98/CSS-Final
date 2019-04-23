#include<stdio.h>
int main()
{
	int n,c,k,cha,len;
	int buff[448],rev1[64],buff3[512],buff1[64],rev[448],d;   
	printf("Enter the Character\n");
	scanf("%c",&cha);
	n=cha;
	for(int i=7;i>=0;i--)							//decimal to 8bit binary
	{
		k=n >> i;
		if(k & 1)
			rev[i]=1;
		else
			rev[i]=0;
	}
	
	for (int i = 7,  d = 0; i >= 0; i--, d++)		//output will be stored in Reverse so reversing the array with temp array
      buff[d] = rev[i];		
	
	printf("Before Padding\n");
	
	for (int i=0;i<8;i++)
		printf("%d",buff[i]);					//actual printing of 8bit binary	
	
	printf("\n We will add 440 to make it 448 mod 512=448.And then add 1 and 439 zeros.\n");
	
	buff[8]=1;									//adding 1 before adding all 0's	
	for(int i=9;i<448;i++)						//0's are added
		buff[i]=0;
	for(int i=0;i<448;i++)						//printing final 448 bit 
		printf("%d",buff[i]);
	printf("\n");
	printf("\n Now padding rest 64 bits\n");
	k=0;
	n=8;

	for(int i=63;i>=0;i--)							//decimal to 64bit binary(Same As above)
	{
		k=n >> i;
		if(k & 1)
			rev1[i]=1;
		else
			rev1[i]=0;
	}
	
	for (int i = 63,  d = 0; i >= 0; i--, d++)		//output will be stored in Reverse so reversing the array with temp array
      buff1[d] = rev1[i];		
	
	printf("Before Padding\n");
	
	for (int i=0;i<64;i++)
		printf("%d",buff1[i]);		//actual printing of 64bit binary

	printf("\n");
	printf("\nThe Final Padded Output\n");
	for(int i=0; i<448;i++)
		buff3[i]=buff[i];
	for(int i=0; i<64;i++)
		buff3[448+i]=buff1[i];		//merging both the above array into 3rd array 	
	for(int i=0; i<512;i++)
		printf("%d",buff3[i]);		//final aray to print
		printf("\n");
	return 0;

}
