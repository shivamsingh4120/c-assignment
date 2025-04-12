#include<stdio.h>
#include"calculator.h"
int main(){
	int q,w;
	scanf("%d",&q);
	scanf("%d",&w);
	printf("%d",sum(q,w));
	printf("\n");
	printf("%d",sub(q,w));
	printf("\n");
    printf("%d",div(q,w));
 


}
