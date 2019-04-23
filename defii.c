#include<stdio.h>
#include<math.h>
void main(){
	int g=3,p=5;			//prime number
	int a=5,b=10;			//secret key
	int stark=pow(g,a);
	stark=fmod(stark,p);	
	
	int banner=pow(g,b);
	banner=fmod(banner,p);
	
	printf("Starks secret key is %d\n",stark);				//will be given to bruce
	printf("Banner secret key is %d\n",banner);				//will be given to tony
	
	printf("-----KEy Exchange-----\n");	
	
	int tony=pow(banner,a);
	tony=fmod(tony,p);
	
	int bruce=pow(stark,b);
	bruce=fmod(bruce,p);
	
	printf("THE key OF TONY is %d\n",tony);
	printf("The key of Bruce is %d\n",bruce);
	
	if(tony==bruce)
	printf("Shared Secret Key Matched \n!!");
	else
	printf("Shared Secret key not matched\n");
}
