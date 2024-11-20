#include <iostream>
#include "MotorDatosNoSQL.h"
#include "AnalizadorNoSQL.h"


int main(){
   
    MotorDatosNoSQL motor;
    AnalizadorNoSQL analizador(motor);
    std::string comando;

    while (true) {
        std::cout << "NO_SQL> ";                // Indica al usuario que ingrese un comando
        std::getline(std::cin, comando);     // Lee el comando completo ingresado

        if (comando == "exit") break;        // Si el comando es "exit", finaliza el programa
        analizador.analizar(comando);        // Analiza y ejecuta el comando ingresado
        
    }


    // analizador.analizar("INSERT_FIELD ABC123 nombre Simon");
    // analizador.analizar("INSERT_FIELD ABC123 edad 32");
    // analizador.analizar("get_field ABC123 edad");
    // analizador.analizar("update_field ABC123 edad 23");
    // analizador.analizar("delete_field ABC123 edad");
    // analizador.analizar("list_document ABC123");
    // analizador.analizar("LIST_ALL");


}