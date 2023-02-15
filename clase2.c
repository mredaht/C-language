/*
int a 
char b 
int c[3]
Nombre=a, Direccion=1000-1003
Nombre=b, Direccion=1004
Nombre=c[0], Direccion=1005-1008 // c[1], Direccion=1009-1012 // c[2], Direccion=1013-1016
*/
#include <stdio.h>
#include <stdlib.h>



/*
int main(void){
    int c[3]={2,3,4};
    char car;
    char nombre[10];
   // printf("%u %u", &c[0], c); // es lo mismo
    //scanf("%c", &car);
    scanf("%s", nombre); // no hace falta el & en chars
    printf("El nombre es %s", nombre);
    return 0;
}

  typedef struct Persona Persona;
    struct Persona{
        char nombre[20];
        int edad;
    };

    Persona p;

int main(){ 
   //p.edad, p.nombre
    scanf("%s", p.nombre);
    scanf("%d", &p.edad);

    printf("El nombre es %s\n", p.nombre);
    printf("La edad es %d", p.edad);

    return 0;
}

    typedef struct Persona Persona;
    struct Persona{
        char nombre[20];
        int edad;
    };

    Persona listaP[20];

int main(){ 

    int l=0;
    printf("Introduce los datos de a lo sumo 25 personas\n");
    while(scanf("%d %s", &listaP[l].edad, listaP[l].nombre)!=0){
        l++;
    }
    printf("Longitud de la lista %d\n", l);

    for(int i=0; i<l; i++){
        printf("Nombre: %s, Edad: %d\n", listaP[i].nombre, listaP[i].edad);
    }


    return 0;
}

int a = 25;
int *pa=&a; es lo mismo que a 
char c = 'A'
pc=&c
*pc
*pa=  pa --> *pa (a)
*pa=8
a- Direccion=1000-1003 valor 8
pa -- Doreccion=1004-1007 valor 1000
c -- Direccion=1008 valor 'A'
pc -- Direccion= 1009 1012 valor 1008


void intercambiar(int a, int b){ //asi no se intercambian los valores
    int aux = a;
    a=b;
    b=aux;
    
}
*/
void intercambiar(int * pa, int * pb){
  //pa es un puntero dentro de la funcion , *pa es un entero dentro de la funcion
    int aux=*pa;
    *pa=*pb;
    *pb=aux;
}

int main(void){
    int a=5;
    int b=8;
    intercambiar(&a, &b);
    printf("a=%d, b=%d", a,b);
    return 0;
}

