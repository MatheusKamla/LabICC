#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hora, minuto , segundo;
    printf("Digite o horario atual:");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    while(1){
        Sleep(1000);
        segundo++;
        system("cls");

        if(segundo>59){
            minuto++;
            segundo=0;
        }
        if(minuto>59){
            hora++;
            minuto=0;
        }
        if(hora>23){
            hora=0;
        }
        printf("\n\n\nRelogio: %dh %dmin %ds", hora, minuto, segundo);

    }

    return 0;
}
