#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void reproducir_una_onda(){
    int i=0,j=0;
    //crear matriz vacia
    char plano[21][60];
    for(i=0; i<21; i++){
        for(j=0;j<60; j++){
            plano[i][j]='.';
        }
    }
    //mostrar matriz fondo
    for(i=0; i<21; i++){
        for(j=0;j<60; j++){
            cout<<plano[i][j];
        }
        cout<<endl;
    }
    cin>>i;
    int var_x=0;
    int var_y=0;
    while(var_x<60){


        //los 15 primeros en x
        if(var_x<15){
            var_y=10;
            plano[var_y][var_x]='_';
        }
        //la primera subida
        if(var_x>=15 && var_x<20){
            plano[var_y][var_x]='/';
            var_y=var_y -1;
        }

        //la primera bajada
        if(var_x>=20 && var_x<=30){
            plano[var_y][var_x]='\\';
            var_y=var_y +1;
        }

        //la segunda subida
        if(var_x>=31 && var_x<=36){
            plano[var_y][var_x]='/';
            var_y=var_y -1;
        }

        //los ultimos
        if(var_x>=37 && var_x<=59){
            plano[var_y][var_x]='_';
            //var_y=var_y -1;
        }

        //emitir el sonido
        if(var_x==20 || var_x==31){
            cout << "\a";
        }


        cout<<"mostrando :"<<var_x<<endl;
        //mostrar matriz
        for(i=0; i<21; i++){
            for(j=0;j<60; j++){
                cout<<plano[i][j];
            }
            cout<<endl;
        }
        var_x++;


        //crear una pausa
        //int milesima=1000;
        //Sleep(milesima/100);
        //limpiar pantalla
        system("cls");

        //
    }

}





int main()
{
    int aux=0;
    while(aux==0){
        reproducir_una_onda();
    }




}
