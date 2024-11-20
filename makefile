# Nombre del compilador
CXX = g++

# Archivos fuente
SRCS = main.cpp MotorDatosNoSQL.cpp AnalizadorNoSQL.cpp 

# Archivos de encabezado
HEADERS = MotorDatosNoSQL.h AnalizadorNoSQL.h

# Nombre del ejecutable
TARGET = programa

# Regla principal: compila el proyecto
all: $(TARGET)

# Regla para compilar el ejecutable
$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) -o $(TARGET) $(SRCS)

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Regla para limpiar archivos de compilación
clean:
	rm -f $(TARGET) *.o
