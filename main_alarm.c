#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hora, minuto , segundo;
    int h=0, m=0, s=-1;
    printf("Digite a hora, segundo, minuto que deseja acordar:\n");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    while(1){
        Sleep(1000);
        s++;
        system("cls");
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>23){
            h=0;
        }
        if(s==segundo && m==minuto && h==hora){
            printf("\n\n\nAcorda!!! %dh %dmin %ds", h, m, s);
            PlaySound("ALARME.wav",NULL,SND_SYNC);

        }else{
        printf("\n\n\nRelogio: %dh %dmin %ds", h, m, s);
        }

    }
  return 0;
   }




