#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
char buffer[8];
if (argc < 2)
{

printf("strcpy() NOT executed....\n");
printf("Syntax: %s <characters>\n", argv[0]);
exit(0);

}
strcpy(buffer, argv[1]);
printf("buffer content= %s\n", buffer);
printf("strcpy() executed...\n");
}
