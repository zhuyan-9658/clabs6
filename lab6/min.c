#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i=1;int j=0;
    int m=0; 
    double a[100];
    double temp;
    for(i=1;i<argc;i++,j++){
    a[j]=atof(argv[i]);
    }
    for(m=0;m<argc-2;m++){
        if(a[m]<a[m+1]){
            temp=a[m]; a[m]=a[m+1];a[m+1]=temp;
        }
    }
    printf("The min is%g\n",temp);
    return 0;
}




