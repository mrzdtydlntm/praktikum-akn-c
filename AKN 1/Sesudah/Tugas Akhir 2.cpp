#include <stdio.h>
#include <conio.h> 
long int factorial(int N)
{    
	int i; 
	long int f = 1; 
	if(N<=0) 
	return(0); 
	for(i=2; i<=N; i++) 
	f = f * i; 
	return(f); 
}  


main() 
{    
	int m, n; long int per; 
 	printf("Masukkan m yang diinginkan ? "); scanf("%i", &m); 
 	printf("Masukkan n yang diinginkan ? "); scanf("%i", &n); 
	 per = factorial(m)/factorial(m-n);
	 printf("%dP%d = %ld\n", m, n, per); 
	return 0; 
} 
 
 
