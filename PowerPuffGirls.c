#include <stdio.h>

int main() 
{
	unsigned long n = 0, i = 0, min = 0, dummy = 0;
	scanf("%lu",&n);
	unsigned long quantity[n], required[n];
	
	for(i=0;i<n;i++) {
		scanf("%lu",&required[i]);
	} 
	
	for(i=0;i<n;i++) {
		scanf("%lu",&quantity[i]);
	} 
	
	min = quantity[0] / required [0];	

	for(i=1;i<n;i++) {
		dummy = quantity[i] / required [i];
		//printf("%lu\t%lu\t%lu\n",quantity[i],required[i],dummy);
		
		if(min>dummy) {
			min = dummy;
		}
	}
	
	printf("%lu\n",min);
	
	return 0;	
}


