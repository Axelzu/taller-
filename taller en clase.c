#include<stdio.h>
#include "archivo1.h"
#include "rest.h"
#include "mult.h"
#include "div.h"
int main(){
    int opcion;
    int a=0;
    int b=0;
    do
    {
        printf("--------------MENU-------------\n");
        printf("a. suma");
        printf("b. resta");
        printf("c. multiplicacion");
        printf("d. division");
        
        printf("escoja la letra para realizar la operacion");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
           printf("ingrese el primer valor:\n ");
            scanf("%d", &a);
            printf("ingrese el segundo valor:\n ");
            scanf("%d", &b);
            printf("el numero dado en la suma es de :", suma(a,b));
            break;
        case 2:
        printf("ingrese el primer valor:\n ");
        scanf("%d", &a);
        printf("ingrese el segundo valor:\n ");
        scanf("%d", &b);
        printf("el numero dado en la suma es de :", resta(a,b));
        break;
        case 3:
        printf("ingrese el primer valor:\n ");
        scanf("%d", &a);
        printf("ingrese el segundo valor:\n ");
        scanf("%d", &b);
        printf("el numero dado en la suma es de :", multiplicacion(a,b));
        break;
        case 4:
        printf("ingrese el primer valor:\n ");
        scanf("%d", &a);
        printf("ingrese el segundo valor:\n ");
        scanf("%d", &b);
        printf("el numero dado en la suma es de :", division(a,b));
        break;
        
        default:
            break;
        }

    } while (opcion !=4);
    
    
   
}
