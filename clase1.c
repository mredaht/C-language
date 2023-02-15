#include <stdio.h>

int main(int args, char** argv){
    /*char a='A'; //1
    char x = 'B';
    int b=23; // 4
    float c=54.123456789; // 4
    double d=54.123456789; // 8 bytes

    printf("simbolo c= %c, b= %d, c= %f,d= %lf\n", a, b, c, d);
    printf("Heyyy");
    printf("%c %c %d %d", a,x, a, x);

    int a;
    printf("Introduce un numero: ");
    scanf("%d", &a); //le esta pasando la direccion de a
    printf("%d %d",a,&a); // la primera saca el valor, la segunda la direcciom
    */

   int a[5]={1,2,3,4,5};
   int longitud=sizeof(a);
   for(int i=1; i<=(longitud/5)+1; i++){
        printf("%d ", i);
        scanf()
   }





    return 0;

}