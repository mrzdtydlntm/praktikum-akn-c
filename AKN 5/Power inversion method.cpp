#include<stdio.h>
#include<math.h>
//fungsi untuk mencari determinan matriks
determinan(float A[][3], int n, float *det)
{
	int i,j,k; 
	float max;
	for(i=0;i<n;i++)
	{for(j=0;j<n; j++)
		{if(j>i)
			{if(A[i][i]==0) max=0;
	        else 
			{max = A[j][i]/A[i][i];}
	    	for(k=0;k<n;k++)
			{A[j][k] -= max * A[i][k];}}
	    }
	}
    *det = 1; 
    for(i=0;i<n;i++)
	*det *= A[i][i];
}
//fungsi untuk mencari kofaktor matriks
kofaktor(float num[][3], float f, float (*fac)[3]) 
{	
	float b[3][3],det;
 	int p,q,m,n,i,j;
 	for (q=0;q<f;q++) 
	{for (p=0; p<f; p++) 
		{m=0;
   		n=0;
   		for (i=0; i<f; i++) 
		{for (j=0; j<f; j++) 
			{if (i!=q && j!=p) 
				{b[m][n] = num[i][j];
      			n++;
      			if(n>= f-1) {n = 0; m++;}
     			}
    		}
   		}
		determinan(b,(f-1), &det);
		*((fac[q])+p) = pow(-1,(q+p))*det;
  		}
 	}
	printf("\nkofaktornya adalah : \n");
	for(i=0;i<f;i++)
	{
        	for(j=0;j<f;j++)
        	{
        	printf("%.3f\t", fac[i][j]);
        	}
        	printf("\n");
    }    
}
inpower(float A[][3], int n)
{
	float B[3],C[3],X[3],a,max=0,e,cmax,error;
	int i, j, iterasi=0, imax;
	printf("\nInput toleransi : "); scanf("%f", &e);
	printf("Input iterasi maksimum : "); scanf("%d", &imax);	for(i=0;i<n;i++)
	{ X[i]=1; B[i]=0;}
	do
	{
		for(i=0; i<n; i++)
		{ B[i]=0;}
		cmax=max;
		max=0;
		//menghitung Perkalian 
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				a=A[i][j]*X[j];
				B[i]=B[i]+a;
			}
		}
		//mencari nilai max
		for(i=0; i<n; i++)
		{ if (max < fabs(B[i])) max=B[i];}
		//menampilkan hasil perkalian
		printf("\n\nHasil perkalian : ");
		for(i=0; i<n; i++)
		{ printf("%.3f\t", B[i]);}
		printf("\nnilai max : %.3f\t", max);

		//mencari vektor baru
		for(i=0; i<n; i++)
		{C[i]=B[i]/max;}

		printf("\nVektor Baru :");
		for(i=0; i<n; i++)
		{ printf("%.3f\t", C[i]);}

		//menghitung error
		error=fabs(max-cmax)/fabs(max);
		printf("\nerror : %.3f\t", error);

		for(i=0; i<n; i++)
		X[i]=C[i];

	iterasi++;
	}while((iterasi<imax) && (error>e));

	printf("\n\nNilai eigennya adalah : %.3f", 1/max);
	printf("\niterasinya : %d",iterasi);
	printf("\n");
}


main()
{
	float A[3][3]={4,1,0,0,2,1,0,1,-1};//matrik disini bisa diganti-ganti 
	float det,kof[3][3],trans[3][3],inv[3][3];
	int n=3,i,j;   
	printf("Matrik A\n");
    for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	        {
              	printf("%.3f\t",A[i][j]);
        	}
        	printf("\n");
    }
	
	//menghitung determinan
	determinan(A,n,&det);
	printf("Determinan : %.3f\n", det);

	if(det == 0)
	{printf("Tidak ada Invers matriks");}

	else{
	//menghitung kofaktor
	kofaktor(A,n, kof);

	//menghitung transpose matriks
	printf("\nTranspose dari kofaktor adalah : \n");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)       
	{trans[i][j]=kof[j][i];
	printf("%.3f\t", trans[i][j]);}
	printf("\n");}

	//menghitung invers matrikssss
	printf("\nInversnya adalah : \n");
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	 {
	inv[i][j]=trans[i][j]/det;
	printf("%.3f\t", inv[i][j]);}
	printf("\n");}	
	inpower(inv, n);	
	}
}

