#include <stdio.h>

int main() {

    float a[10], mean=0, median=0, mode=0; int t=0,i=0,j=0;
    //enter array
    for(i=0; i<10; i++)
    {
        scanf("%f",&a[i]);
    }
    //calculation mean
    for(i=0; i<10; i++)
    {
        mean += a[i];
    }
    mean /= 10;
    //calc median
    for(i=0; i<10; i++)
    {
     for(j=i; j<10; j++)
     {    
      if (a[i]>a[j])
       {t=a[i]; a[i]=a[j]; a[j]=t;}
     }
    }
    median= (a[4]+a[5])/2;
    
    //calc mode
    mode= 3*median - 2*mean;
    
    //output
    printf("%f %f %f ", mean, median , mode);
    return 0;
}
