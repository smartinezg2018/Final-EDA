Explanatory Document for the NoSQL Data Engine
This program is a NoSQL data engine that allows basic operations on documents and their fields, such as inserting, updating, querying, deleting, and listing documents or their contents. It operates through a command interpreter that interacts with a data engine based on the HashMap structure.

The program is divided into the following main components:

Implemented in MotorDatosNoSQL: Manages the storage and manipulation of documents in a HashMap-like structure.
Command Analyzer (AnalizadorNoSQL): Processes user-entered commands and delegates actions to the data engine.
Main File (main.cpp): The program's entry point, manages user interaction, and uses the analyzer to execute commands.
Supported Commands

INSERT_FIELD <document_id> <field_key> <field_value>: Inserts a field into the specified document. If the field already exists, an error is displayed.
GET_FIELD <document_id> <field_key>: Displays the value of a specific field in the document.
UPDATE_FIELD <document_id> <field_key> <new_value>: Updates the value of an existing field.
DELETE_FIELD <document_id> <field_key>: Deletes a field from a document.
LIST_DOCUMENT <document_id>: Lists all fields and values of a specific document.
LIST_ALL: Lists all documents and their fields.
exit: Terminates the program.
Information Flow Analysis
The command is analyzed in AnalizadorNoSQL.
The operation is identified, and the necessary parameters are extracted.
The analyzer delegates operations to MotorDatosNoSQL, which performs the data modifications or queries.
The operation results are displayed on the console.


choclo@cpu:~/Documents/algorithms/final$ make
g++ -o program main.cpp MotorDatosNoSQL.cpp AnalizadorNoSQL.cpp 
choclo@cpu:~/Documents/algorithms/final$ ./program 
NO_SQL> INSERT_FIELD ABC123 name Simon
Field added to the document.
NO_SQL> INSERT_FIELD ABC123 age 32
Field added to the document.
NO_SQL> INSERT_FIELD ABC123 program systems
Field added to the document.
NO_SQL> GET_FIELD ABC123 age
Value: 32
NO_SQL> LIST_DOCUMENT ABC123
Document ABC123: 
  Field: program | Value: systems
  Field: age | Value: 32
  Field: name | Value: Simon
NO_SQL> UPDATE_FIELD ABC123 age 23
Field updated in the document.
NO_SQL> LIST_ALL
Document ABC123:
  Field: program | Value: systems
  Field: age | Value: 23
  Field: name | Value: Simon
NO_SQL> DELETE_FIELD ABC123 age
Field deleted from the document.
NO_SQL> LIST_ALL
Document ABC123:
  Field: program | Value: systems
  Field: name | Value: Simon
NO_SQL> INSERT_FIELD bcv456 name samuel
Field added to the document.
NO_SQL> LIST_ALL
Document bcv456:
  Field: name | Value: samuel
Document ABC123:
  Field: program | Value: systems
  Field: name | Value: Simon
NO_SQL> exit
