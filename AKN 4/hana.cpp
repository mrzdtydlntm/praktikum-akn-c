#include <stdio.h>
#include <math.h>

main (){
 float a, b, c, fa, fb, fc, error;
 printf ("Menghitung x^2-3x-10 dengan cara bisection\n");
 

 printf ("Masukkan nilai selang a :\n"); scanf ("%f", &a);
 printf ("Masukkan nilai selang b :\n"); scanf ("%f", &b);
 printf ("a\t b\t fa\t fb\t c\t fc\t\t error\t\n");
 fa = pow (a,2)-3*a-10;
 fb = pow (b,2)-3*b-10;
 if (fa*fb > 0){
  printf ("Selang yang dimasukkan tidak sesuai");
 }
 else if (fa*fb < 0){
  do{
   fa = pow (a,2)-3*a-10;
   fb = pow (b,2)-3*b-10;
   c = b - ((fb*(b-a))/(fb-fa));
   fc = pow(c,2)-3*c-10;
   printf ("%.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %.6f\t %.6f\t\n", a, b, fa, fb, c, fc, error);
   if (fa*fc<0) 
   { b = c;}
   else if (fa*fc>0)
   {a = c; }
   error = (b-a)/2;
  }
  while (fabs(fc)>=0.0001);
  printf ("nilai akhir: %f", c);
 }
}
