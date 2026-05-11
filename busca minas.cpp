#include <iostream>
using namespace std;

int main()
{
    int buscam[4][4]={0};
    int filausuario,columnausuario;
    bool minaencontrada=false;
    
    buscam[2][1]=1;
    for(int turno=1; turno<5;turno++){
        
        cout<<"turno"<<turno<<endl;
        
        cout<<"Ingresa la fila"<<endl;
        cin>>filausuario;
        
        cout<<"ingresa la columna"<<endl;
        cin>>columnausuario;
         
        if(buscam[filausuario][columnausuario]==1 ){
            cout<<"Perdiste, Mina encontrada"<<endl;
            minaencontrada=true;
            break;
            
        } else{
            cout<<"No se encontro la mina"<<endl;
        }
    }
    
    if(minaencontrada==false){
        cout<<"Ganaste el juego"<<endl;
    }
    
    
   

    return 0;
}
