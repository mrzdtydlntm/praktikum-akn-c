/*Program 2 - Kalkulator */
#include <stdio.h>
main()
{
	int bil1, bil2;
	float mod, jumlah, kurang, kali, bagi; 
	printf("masukkan bilangan 1 : \n"); 
	scanf("%d", &bil1);
	printf("masukkan bilangan 2 \n"); 
	scanf("%d", &bil2);
	jumlah = (float) bil1 + bil2; 
	printf("maka %d + %d = %.2f \n", bil1,bil2,jumlah);
	kurang = (float) bil1 - bil2;
	printf("maka %d - %d = %.2f \n", bil1,bil2,kurang);
	kali = (float) bil1 * bil2;
	printf("maka %d * %d = %.2f \n", bil1,bil2,kali);
	bagi = (float) bil1 / bil2;
	printf("maka %d / %d = %.2f \n", bil1,bil2,bagi);
	mod = bil1 % bil2;
	printf("maka %d modulus %d = %.2f", bil1,bil2,mod);	
	return 0;
}
