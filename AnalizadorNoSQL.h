#ifndef ANALIZADOR_NOSQL_H
#define ANALIZADOR_NOSQL_H



#include <string>       
#include <vector>      
#include <map>           
#include <sstream>      
#include <algorithm>   
#include <unordered_map>
#include "MotorDatosNoSQL.h"


class AnalizadorNoSQL {
public:

    MotorDatosNoSQL& motor;
    AnalizadorNoSQL(MotorDatosNoSQL& motor);

    void analizar(const std::string& comando);

 

private:

    void analizarListar(std::istringstream& flujo);
    void analizarInsertar(std::istringstream& flujo);
    void analizarSeleccionar(std::istringstream& flujo);
    void analizarActualizar(std::istringstream& flujo);
    void analizarEliminar(std::istringstream& flujo);
    void imprimir();
    void listDocument(std::istringstream& flujo);



};

#endif // ANALIZADOR_NOSQL_H