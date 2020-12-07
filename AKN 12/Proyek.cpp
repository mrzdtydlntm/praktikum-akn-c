#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

float rus(float a,float l,float m)
{
	return (4*3.14*9.8*a*m)/(0.0000004*l);
}

main()
{
	int menu,teodas,N,i,it;
	char x,y,l,n;
	float mas[10],pan[10],jar[10],I[10],at,bt,xx[10],xy[10],sx,sy,sxx,sxk,sxkk,sxy;
	// Interface Awal //
	awal:
	printf("\t\t\t\t\t Selamat Datang di Program Kereta Maglev\n");
	printf("\n");
	printf("\n");
	printf("Program ini dibuat oleh : \n");
	printf("Yessy Maharani Utami (140310170028)\n");
	printf("Fahriza Alif A (140310170043)\n");
	printf("Mirza Aditya Deliantama (140310170044)\n");
	printf("\n");
	printf("Program ini dibuat untuk mencari perbandingan dari variasi medan magnet dan berat kereta\n"); printf("\n");
	printf("Jika ada kekurangan di program ini, harap hubungi ketua kelompok : Yessy (0822-1718-6872)\n");
	printf("========================================================================================================================");
	printf("\n");
	// Menu Pilihan //
	printf("Menu\n");
	printf("\n");
	printf("1. Latar Belakang Program\n");
	printf("2. Kegunaan program\n");
	printf("3. Batasan Program\n");
	printf("4. Tujuan Program\n");
	printf("5. Perhitungan\n");
	printf("Masukkan pilihan menu : \n");
	scanf("%d",&menu);
	system("cls");
	switch(menu)
	{
		case 1 : {
			printf("Latar belakang\n");
			printf("\n");
			printf("Dalam kehidupan sehari-hari semua manusia tidak terlepas dari adanya transportasi.\nTransportasi dapat membantu segala macam kegiatan manusia. Dengan transportasi manusia dapat nencapai suatu tempat dengan singkat. Dengan transportasi pula segala kebutuhan akan sandang, papan dan papan pun terbantu olehnya.\nBegitu banyaknya manfaat dari transportasi, menggugah manusia untuk lebih berpikir kreatif untuk menciptakan suatu system transportasi yang efektif dan efisien.\n\nBerbagai penemuan transportasi berkembang sejalan dengan berkembangnya jaman. Salah satu sistem transportasi yang berkembang dengan pesat yaitu kereta api.\nSejarah perkeretaapian sama seperti sejarah alat transportasi umumnya yang diawali dengan penemuan roda.\nMulanya dikenal kereta kuda yang hanya terdiri dari satu kereta, kemudian dibuatlah kereta kuda yang menarik lebih dari satu rangkaian serta berjalan di jalur tertentu yang terbuat dari besi atau rel, yang dinamakan sepur.\nIni digunakan khususnya di daerah pertambangan tempat terdapat lori yang dirangkaikan dan ditarik dengan tenaga kuda.\nnamun sekarang kerta api menggeser peranan kereta kuda yang sebagai sarana transportasi berabad-abad lamanya.\n\nSalah satu Kereta yang digunakan pada zaman sekarang yaitu Kereta Maglev.\nKereta yang system kerjanya menggunakan magnet.\nBerbagai inovasi - inovasi baru terus dikembangkan terutama dibidang transportasi.\n");
			break;
		}
		case 2 : {
			printf("Kegunaan Program\n");
			printf("Program ini dibuat untuk mencari perbandingan dari variasi arus kuadrat dengan massa\n");
			break;
			}
		case 3 : {
			printf("Batasan Program\n");
			printf("1. Mencari medan magnet dan pengaruh terhadap gaya tolak-menolak\n");
			printf("2. Mencari nilai massa maksimum agar kereta maglev tetap melayang.\n");
			break;
		}
		case 4 : {
			printf("Tujuan Program\n");
			printf("1. Menentukan hubungan antara arus dan jarak sesuai Hukum Ampere\n");
			printf("2. Menentukan pengaruh medan magnet terhadap gaya tolak menolak\n");
			printf("3. Menentukan menentukan massa maksimum agar kereta maglev tetap melayang\n");
			break;
		}
		case 5 : {
			printf("Sebelum perhitungan, siapkan data yang akan diinput, yaitu:\n");
			printf("-Jarak rel dengan kereta (a dalam meter)\n");
			printf("-Panjang rel (L dalam meter)\n");
			printf("-Massa kereta total (m dalam kilogram)");
			printf("\n");
			printf("\n");

			printf("Sudah siap? Jika sudah tekan enter");
			getch();
			system("cls");
			for(i=0;i<5;i++)
			{
				printf("Masukkan a[%d]: ",i+1);
				scanf("%f",&jar[i]);
			}
			printf("\n");
			for(i=0;i<5;i++)
			{
				printf("Masukkan m[%d]: ",i+1);
				scanf("%f",&mas[i]);
			}
			printf("\n");
			for(i=0;i<5;i++)
			{
				printf("Masukkan L[%d]: ",i+1);
				scanf("%f",&pan[i]);
			}
			printf("\n");
			for(i=0;i<5;i++)
			{
				I[i]=sqrt(rus(jar[i],pan[i],mas[i]));
				printf("Arus%d = %f Ampere\n",i+1,I[i]);
			}
			printf("\n");
			for(i=0;i<5;i++)
			{
				xx[i]=pow(mas[i],2);
			}
			for(i=0;i<5;i++)
			{
				xy[i]=mas[i]*I[i];
			}
			printf("x\t y\t x^2\t xy\t\n");
			for(i=0;i<5;i++)
			{
				printf("%.2f\t %.2f\t %.2f\t %.2f\t\n",mas[i],I[i],xx[i],xy[i]);
			}
			printf("\n");
			for(i=0;i<5;i++)
			{
				sx+=mas[i];
			}
			for(i=0;i<5;i++)
			{
				sy+=I[i];
			}
			for(i=0;i<5;i++)
			{
				sxx+=xx[i];
			}
			for(i=0;i<5;i++)
			{
				sxy+=xy[i];
			}
			for(i=0;i<5;i++)
			{
				sxkk+=mas[i];
				sxk=pow(sxkk,2);
			}
			printf("Sigma dari:\n");
			printf("x\t y\t x^2\t xy\t xk\t\n");
			printf("%.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\n",sx,sy,sxx,sxy,sxk);
			
			at=((sy*sx)-(sx*sxy))/((5*sxx)-sxk);
			bt=((5*sxy)-(sx*sy))/((5*sxx)-sxk);
			printf("\n");
			printf("at bt\n");
			printf("%.3f %.3f",at,bt);
			break;
		}
		default : printf("Nomor yang anda input salah\n"); break;
	}
	printf("\n");
	printf("Kembali ke menu? (y/n)\n");
	scanf(" %c",&x);
	system("cls");
	if(x=='y')
	{
		goto awal;
	}
	else
	{
		printf("Terimakasih telah menggunakan program kami");
	}
	getch();
}
