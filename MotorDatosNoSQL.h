#ifndef MOTOR_DATOS_NOSQL_H
#define MOTOR_DATOS_NOSQL_H

#include <unordered_map>
#include <iostream>


class MotorDatosNoSQL {
private:

    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> tablaDocumentos;

public:

    MotorDatosNoSQL();

    void insertField(const std::string& id_document, const std::string& field_key, const std::string& field_value);

    void updateField(const std::string& id_document, const std::string& field_key, const std::string& new_value) ;

    void getField(const std::string& id_document, const std::string& field_key) const ;

    void deleteField(const std::string& id_document, const std::string& field_key);
   
    void listDocument(const std::string& id_document) const ;

    void listAll() const;


}; 

#endif // MOTOR_DATOS_NOSQL_H