// #Cuenta: 32011727 -> Jack Hollmann Lagos Mejia
#include <iostream>
#include <queue>

using std::queue;
using std::string;

int main() {
    
    //Declarar Queue/Cola
        queue<string> libros; 

    //Informacion del queue.
        std::cout << "Cual es el tamaño? =>"<< libros.size() << '\n';       //Tamaño Queue.
        std::cout << "Mi queue esta vacio? =>"<< libros.empty() << '\n';    //Esta Vacio?

    //Agregar Elementos a la cola o queue:
        libros.push("El Señor de los Anillos");     
        libros.push("Harry Potter");
        libros.push("El Codigo da Vinci");
        libros.push("Lo que el viento se llevo");
        libros.push("Padre Rico Padre Pobre");
        libros.push("La Biblia");

    //Informacion del queue.
        std::cout << "Cual es el tamaño? =>"<< libros.size() << '\n';       //Tamaño Queue.
        std::cout << "Mi queue esta vacio? =>"<< libros.empty() << '\n';    //Esta Vacio?

    



    std::cout << "Prgrama termino con exito." << '\n';
    return 0;
}