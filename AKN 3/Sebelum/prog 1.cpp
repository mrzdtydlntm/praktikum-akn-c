    #include<stdio.h>
    #include<math.h>
    int f(int n)
    {
    	if(n==0)
    	return 1;
    	else
    	return n*f(n-1);
    }
    main()
    {
    	float x, rad, e=0.0000001, a, c;
    	int n=0;
    	
    	printf("Masukkan nilai x : ");
    	scanf("%f", &x);
    	rad=x*3.14/180;
    	a=0;
    	do
    	{
    		a+=(pow(-1, n))*(pow(rad, 2*n+1))/f(2*n+1);
    		n++;
    	}
    	while((fabs(a-sin(rad))) >= e);
    	c=(fabs(a-sin(rad)));
    	printf("\nNilai sin %0.2f hampiran : %.10f", x, a);
    	printf("\nNilai sin %0.2f sejati : %.10f", x, sin(rad));
    	printf("\nerror : %.20f\n", c);
    	printf("%d",n); 
    	return 0;
    }
