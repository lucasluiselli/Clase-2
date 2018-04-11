#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
int aux, i, j;
int arrayUno[5];



    for(i=0;i<5;i++)

    {
        printf("%d. dame 5 numeros\n: ",&i+1);
        scanf("%d",&arrayUno[i]);

        for(i=0;i<5;i++)

        {
            printf("\n %d",&arrayUno[i]);



           for(j=i+1;j<5;j++)
            {
                if (arrayUno[i]>arrayUno[j])
                {
                    aux=arrayUno[i];
                    arrayUno[i]=arrayUno[j];
                    arrayUno[j]=aux;

                }

            }
        }
    }


    return 0;
}
