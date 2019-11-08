#include<stdio.h>

void Hanoi(int numDiscos,int Origen,int Auxiliar,int Destino);

int main() {
    int n;
    printf("¿Cuantos aros vas a poner en la torre de hanoi? (Máximo 8)\n> ");
    scanf("%d",&n);
    
    if (n > 8) {
        n = 8;
    } else if (n<1){
        n = 1;
    }
    Hanoi(n,1,2,3);//Torre 1 origen, T2 Auxiliar, T3 Destino
    return 0;
}



void Hanoi(int numDiscos,int Origen,int Auxiliar,int Destino){
    if (numDiscos == 1) {
        printf("Mover disco %d en Torre %d hacia la Torre %d\n",numDiscos,Origen,Destino);//Caso base
        return;
    }
    Hanoi(numDiscos-1,Origen,Destino,Auxiliar);//Origen -> Auxiliar
    printf("Mover disco %d en Torre %d hacia la Torre %d\n",numDiscos,Origen,Destino);
    Hanoi(numDiscos-1,Auxiliar,Origen,Destino);//Auxiliar->Destino
    return;
}
