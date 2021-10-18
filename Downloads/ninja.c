#include <stdio.h>

void instrucao(char array[20]){
    int i = 0;
    for (i=0; i<20; i++){
        if(array[i] == 'C') printf("Eita pipoco. Zumm!\n");
        if(array[i] == 'B') printf("\n");
        if(array[i] == 'E') printf("Esquerdei, e agora?\n");
        if(array[i] == 'F') printf("Pronto e agora, e agora?\n");
        if(array[i] == 'D') printf("Rolada tatica ninja.\n");
        if(array[i] == 'A') printf("Nem ferrando. Vou de agentes mesmo.\n");
    }
}

void recebeEntrada(){
    int n, i, j;
    scanf("%i", &n);
    if(n==0) return;
    char matriz[n][20];
    for(i=0;i<n;i++){
        scanf("%s", &matriz[i][20]);
    }
    for(j=0; j<n; j++){
        instrucao(&matriz[j][20]);
    }
}




int main(){
    recebeEntrada();
    return 0;
}