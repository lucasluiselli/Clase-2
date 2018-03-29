#include <stdio.h>
#include <stdlib.h>
#include "lib.h"


int main()
{
    int numeroUno, numeroDos;
    int resultado;
    char operacion;
    char continuar;

    do
    {


    printf("Ingresar numero 1 \n");
    scanf("%d",&numeroUno);
    printf("ingresar numero 2 \n");
    scanf("%d",&numeroDos);
   // resultado = sumaEnteros ( numeroUno, numeroDos);
    fflush(stdin);

    //printf("\n El resultado es: %d", resultado  );
    printf(" Presiona A para sumar \n B restar \n C multiplicar \n D dividir");

        scanf("%c", &operacion);
        switch (operacion)
        {
        case 'a':
            printf("\n El resulado de la suma es: %d ", sumaEnteros ( numeroUno,  numeroDos));
            break;
        case 'b':
            printf("\n El resultado de la resta es: %d", restaEnteros ( numeroUno,  numeroDos));
            break;
        case'c':
            printf("\n El resultado de la multiplicacion es: %d ", multiplicacionEnteros( numeroUno,  numeroDos));
            break;
        case 'd':
            printf("\n El resultado de la division es: %f ", divisionEnteros ( numeroUno,  numeroDos) );
            break;


    }
     printf("desea continuar ?? s/n ");
    fflush(stdin);
     scanf("%c",&continuar);
    }

    while(continuar == 's');

return 0;

}


// se hace el valor de retonrno y despues con if se comprueba
