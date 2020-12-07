#include<stdio.h>
#include<conio.h>
main ()
{
     int a, b, baris, kolom, trace;
     int A[10][10];
     printf("Jumlah Baris yang diiginkan : "); scanf("%d", &baris);
     printf("Jumlah Kolom yang diiginkan : "); scanf("%d", &kolom);
     printf("\n");
     if(baris != kolom)
     {
              printf("Matriks Yang Anda Masukkan Bukan Matriks Bujur Sangkar \n");
              return main();
     }
     else
     {
      for(a=1; a<=baris; a++)
      {
       for(b=1; b<=kolom; b++)
       {
        printf("Masukkan Elemen Matriks A[%d][%d] : ", a, b);
        scanf("%d", &A[a][b]);
       }
      }
     printf("\n Matriks A adalah \n");
     for (a=1; a<=baris; a++)
     {
      for (b=1; b<=kolom; b++)
      {
       printf("%d\t", A[a][b]);
      }
     printf("\n");
     }
     trace=0;
     for(a=1; a<=baris; a++)
          {
                   b=a;
                   trace += A[a][b];
          }
          printf("\nNilai Trace Matriks A adalah %d \n", trace);
      }
}
