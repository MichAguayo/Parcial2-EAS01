#include <iostream>
#include <string>
#include <cstdlib>  // Función rand().
#include <ctime>    // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador{
    public:

    int vida;
    int* ataque;
    string nombre;
    string ultimoatacante;

    
    Jugador();  
    Jugador(int vida, int ataque, string nombre); 
    
    void atacar(string ultimoatacante); 
};

int main()
{
    srand(time(0));
    Jugador jugador1(90,15, "Persona x");
    Jugador jugador2(150,10, "Persona y");
    
    if(jugador1.vida!=0 && jugador2.vida!=0)
    {
    jugador1.atacar(string jugador2);
    jugador2.atacar(string jugador1);
    }if jugador1.vida!=0{

        cout<<"el jugador 1 ha ganado"<<endl;
    }if jugador2.vida!=0{
        cout<<"el jugador 2 ha ganado"<<endl;
    }


    return 0;
}

Jugador::Jugador(){
    vida=100;
    ataque=5;
    nombre="no definido";
}

Jugador::Jugador(int vida, int ataque, string nombre){
   cout<<"Nombre: "<<endl;
   cin>>nombre;

   cout<<"Vida: "<<endl;
   cin >> vida;
    if(vida<1){
    cout<<"No se pueden asignar valores negativos."<<endl;
   }if(vida>200){
    cout<<"No se puede asignar más de 200."<<endl;
   }

   cout<<"Ataque: "<<endl;
   cin >> ataque;

    if(jugador.atacar<1){
    cout<<"No se pueden asignar valores negativos."<<endl;
   }if(atacar>20){
    cout<<"No se puede asignar más de 20."<<endl;
   }
  
}

void Jugador::atacar(string ultimoatacante){
    
    int x = rand() % 1000; 
    jugador1.vida=jugador.vida-ultimoatacante.ataque;

    cout << jugador1.nombre<< "atacó a "<<ultimoatacante<<" e hizo "<< jugador1.ataque << " de daño, vida restante de " << ultimoatacante.vida << " =" << vida<<endl;

     int x = rand() % 1000; 
    ultimoatacante.vida=jugador.vida-jugador2.ataque;
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
}