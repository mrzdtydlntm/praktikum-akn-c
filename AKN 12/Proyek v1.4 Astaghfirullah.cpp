#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

float f(float x)
{
	return pow(x,-2);
}

float g(float y)
{
	return (4*pow(10,-7)*y)/(4*22/7);
}

main()
{
	int menu,teodas,N,i,it;
	char x,y,l,n;
	float a,f0,fn,r0,r1,p,rj,sr,h,ger,ora,I,b,m,med[10],F[10],xx[10],xy[10],sx,sy,sxx,sxk,sxkk,sxy,at,bt;
	// Interface Awal //
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
	printf("\n");
	printf("Lanjut? Jika iya tekan ENTER");
	getch();
	system("cls");
	// Menu Pilihan //
	awal:
	printf("Menu\n");
	printf("\n");
	printf("1. Latar Belakang Program\n");
	printf("2. Rumusan Masalah\n");
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
			printf("Dalam kehidupan sehari-hari semua manusia tidak terlepas dari adanya transportasi.\nTransportasi dapat membantu segala macam kegiatan manusia. Dengan transportasi manusia dapat nencapai suatu tempat dengan singkat. Dengan transportasi pula segala kebutuhan akan sandang, papan dan papan pun terbantu olehnya.\nBegitu banyaknya manfaat dari transportasi, menggugah manusia untuk lebih berpikir kreatif untuk menciptakan suatu system transportasi yang efektif dan efisien.\nBerbagai penemuan transportasi berkembang sejalan dengan berkembangnya jaman. Salah satu sistem transportasi yang berkembang dengan pesat yaitu kereta api.\nSejarah perkeretaapian sama seperti sejarah alat transportasi umumnya yang diawali dengan penemuan roda.\nMulanya dikenal kereta kuda yang hanya terdiri dari satu kereta, kemudian dibuatlah kereta kuda yang menarik lebih dari satu rangkaian serta berjalan di jalur tertentu yang terbuat dari besi atau rel, yang dinamakan sepur.\nIni digunakan khususnya di daerah pertambangan tempat terdapat lori yang dirangkaikan dan ditarik dengan tenaga kuda.\nnamun sekarang kerta api menggeser peranan kereta kuda yang sebagai sarana transportasi berabad-abad lamanya.\nSalah satu Kereta yang digunakan pada zaman sekarang yaitu Kereta Maglev.\nKerteta yang system kerjanya menggunakan magnet.\nBerbagai inovasi - inovasi baru terus dikembangkan terutama dibidang transportasi.\n");
			break;
		}
		case 2 : {
			printf("Rumusan Masalah\n");
			printf("1. Bagaimana hubungan antara arus dan jarak sesuai Hukum Ampere?\n");
			printf("2. Bagaimana pengaruh medan magnet terhadap gaya tolak menolak?\n");
			printf("3. Bagaimana menentukan massa maksimum agar kereta maglev tetap melayang?\n");
			break;
			}
		case 3 : {
			printf("Batasan Proyek\n");
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
			printf("-Jumlah gerbong\n");
			printf("-Jumlah orang yang ada di gerbong tersebut\n");
			printf("\n");
			printf("Sudah siap? Jika sudah tekan enter");
			getch();
			system("cls");
			printf("Masukkan N: ");
			scanf("%d",&N);
			//printf("Masukkan jumlah gerbong (Asumsikan berat gerbong 15.000 kg): ");
			//scanf("%f",&ger);
			//printf("Masukkan jumlah penumpang (Asumsikan berat penumpang 75 kg): ");
			//scanf("%f",&ora);
			printf("Masukkan jarak rel dengan tanah (m): ");
			scanf("%f",&r0);
			printf("Masukkan jarak rel dengan kereta (m): ");
			scanf("%f",&r1);
			printf("Masukkan arus listrik (A): ");
			scanf("%f",&p);
			printf("Masukkan panjang rel (m): ");
			scanf("%f",&l);
			h=(r1-r0)/N;
			f0=f(r0);
			fn=f(r1);
			for(i=1;i<N;i++)
			{
				rj=r0+(i*h);
				sr+=f(rj);
			}
			I=(f0+2*sr+fn)*h/2;
			b=g(p)*I*1000;
			printf("Hasil = %f microTesla\n",b);
			m=b*p*l/9.8;
			printf("Massa kereta adalah: %.20f\n",m);
			printf("Lanjut regresi? Jika iya tekan enter");
			getch();
			system("cls");
			printf("Masukkan banyak data :");
			scanf("%d",&it);
			//x//
			for(i=0;i<it;i++)
			{
				printf("Masukkan gaya ke-%d: ",i+1);
				scanf("%f",&F[i]);
			}
			//y//
			for(i=0;i<it;i++)
			{
				printf("Masukkan medan ke-%d: ",i+1);
				scanf("%f",&med[i]);
			}
			for(i=0;i<it;i++)
			{
				xx[i]=pow(F[i],2);
			}
			for(i=0;i<it;i++)
			{
				xy[i]=F[i]*med[i];
			}
			printf("x\t y\t x^2\t xy\t\n");
			for(i=0;i<it;i++)
			{
				printf("%.2f\t %.2f\t %.2f\t %.2f\t\n",F[i],med[i],xx[i],xy[i]);
			}
			printf("\n");
			for(i=0;i<it;i++)
			{
				sx+=F[i];
			}
			for(i=0;i<it;i++)
			{
				sy+=med[i];
			}
			for(i=0;i<it;i++)
			{
				sxx+=xx[i];
			}
			for(i=0;i<it;i++)
			{
				sxy+=xy[i];
			}
			for(i=0;i<it;i++)
			{
				sxkk+=F[i];
				sxk=pow(sxkk,2);
			}
			printf("Sigma dari:\n");
			printf("x\t y\t x^2\t xy\t xk\t\n");
			printf("%.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\n",sx,sy,sxx,sxy,sxk);
			
			at=((sy*sx)-(sx*sxy))/((it*sxx)-sxk);
			bt=((it*sxy)-(sx*sy))/((it*sxx)-sxk);
			
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
