#include <stdio.h>

int b[2080];int main(j){printf("\x1b[2J");for(;;){printf("\x1b[H");
for(j=1;j<2080;j++)b[j]=j<2000?(b[j+79]+b[j+80]+b[j]+b[j-1]+b[j+81]
)/5:rand()%4?0:512,j<1840?putchar((j%80)==79?'\n':" .:*#$H@"[b[j]>>
5]):0;usleep(20000);}}
