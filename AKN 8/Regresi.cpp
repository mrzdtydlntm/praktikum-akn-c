#include <stdio.h>
#include <math.h>
main()
{
int n, i;
float at,bt,zxx,zxy,zy,zx,x[20],y[20],e[20],ybaru[20],r,zyy;
FILE *B;
char namafile[20];
printf ("masukkan banyaknya data \n"); scanf ("%d", &n);
for (i=1;i<=n;i++)
{
printf ("maukkan nilai x[%d]", i);
scanf ("%f", &x[i]);
}
for (i=1;i<=n;i++)
{
printf ("maukkan nilai y[%d]", i);
scanf ("%f", &y[i]);
}
for (i=1;i<=n;i++)
{
zxx = zxx + x[i]*x[i];
zxy = zxy + x[i]*y[i];
zy = zy + y[i];
zx = zx + x[i];
zyy = zyy + y[i]*y[i];
}
r = ((n*zxy)-(zx*zy))/sqrt(((n*zxx)-zx)*(n*zyy)-zy);
at = ((n*zxy)-(zx*zy))/((n*(zxx)-(zx*zx)));
bt = ((zxx*zy)-(zx*zxy))/((n*zxx)-(zx*zx));
for (i=1;i<=n;i++)
{
ybaru[i] = at*x[i]+bt;
e[i]=fabs(y[i]-ybaru[i]);
}
printf ("nilai at = %f\n", at);
printf ("nilai bt = %f\n", bt);
printf ("nilai r = %f\n", r);
printf ("x\t\t y\t\t ybaru\t\t e \n");
for (i=1;i<=n;i++)
{
printf ("%f\t %f\t %f\t %f\n", x[i],y[i],ybaru[i],e[i]);
ybaru[i] = at*x[i]+bt;
}
sprintf(namafile,"TabelA.txt");
B = fopen(namafile, "w");
fprintf (B, "x\t\t y\t\t ybaru\t\t e \n");
for (i=1;i<=n;i++)
{
fprintf(B,"%f\t %f\t %f\t %f\t ",x[i],y[i],ybaru[i],e[i]);
fprintf(B,"\n");
}
fprintf (B, "nilai r adalah %f\n", r);
fprintf (B, "nilai at = %f\n", at);
fprintf (B, "nilai bt = %f", bt);
fclose(B);
}
