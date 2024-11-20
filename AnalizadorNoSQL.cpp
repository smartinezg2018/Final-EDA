#include "AnalizadorNoSQL.h"
#include <unordered_map>
#include <vector>

AnalizadorNoSQL::AnalizadorNoSQL(MotorDatosNoSQL& motor) : motor(motor) {
}

void AnalizadorNoSQL::analizar(const std::string& comando) {
    std::istringstream flujo(comando); 
    std::string palabraClave;
    flujo >> palabraClave;  


    
    std::transform(palabraClave.begin(), palabraClave.end(), palabraClave.begin(), ::tolower);

    palabraClave;
    

    if (palabraClave == "insert_field") analizarInsertar(flujo);
    else if (palabraClave == "get_field") analizarSeleccionar(flujo);
    else if (palabraClave == "update_field") analizarActualizar(flujo);
    else if (palabraClave == "delete_field") analizarEliminar(flujo);
    else if (palabraClave == "list_all") imprimir();
    else if (palabraClave == "list_document") listDocument(flujo);


}

void AnalizadorNoSQL::listDocument(std::istringstream& flujo){
    std::string id;
    flujo >> id;
    motor.listDocument(id);


}

void AnalizadorNoSQL::analizarInsertar(std::istringstream& flujo) {

    std::vector<std::string> arr;
    std::string en;

    while(flujo >> en){
    arr.push_back(en);
    }
    motor.insertField(arr[0],arr[1],arr[2]);


 
}

void AnalizadorNoSQL::imprimir(){
    motor.listAll();
}



void AnalizadorNoSQL::analizarSeleccionar(std::istringstream& flujo) {
    std::vector<std::string> arr;
    std::string en;

    while(flujo >> en){
    arr.push_back(en);
    }
    motor.getField(arr[0],arr[1]);



}


void AnalizadorNoSQL::analizarActualizar(std::istringstream& flujo) {
    std::vector<std::string> arr;
    std::string en;

    while(flujo >> en){
    arr.push_back(en);
    }
    motor.updateField(arr[0],arr[1],arr[2]);


 
}


void AnalizadorNoSQL::analizarEliminar(std::istringstream& flujo) {
    std::vector<std::string> arr;
    std::string en;

    while(flujo >> en){
    arr.push_back(en);
    }
    motor.deleteField(arr[0],arr[1]);
}

