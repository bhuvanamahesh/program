#include <stdio.h>
#include<math.h>
#define pi 3.14
void main() {
	int n;
	float c;
	scanf("%d",&n);
	c=sin(n*pi/180);
	printf("%.1f",c);
}
