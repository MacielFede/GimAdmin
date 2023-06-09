# Compilador
CC = g++

# Flags del compilador
CFLAGS = -g -Wall -Werror -Wno-unknown-pragmas

# Ejecutable
PRINCIPAL = main

# Directorios
HDIR = h
CPPDIR = cpp
ODIR = o

# Clases
CLASES = Socio Inscripcion Clase Entrenamiento Spinning Sistema DTSocio DTInscripcion DTClase DTEntrenamiento DTSpinning DTFecha Helpers

# Archivos
HS = $(CLASES:%=$(HDIR)/%.h)
CPPS = $(CLASES:%=$(CPPDIR)/%.cpp)
OS = $(CLASES:%=$(ODIR)/%.o)

# Archivo main y los subdirectorios
LAB1 = main.cpp $(HDIR) $(CPPDIR) $(ODIR)

#La regla que se va a ejecutar por defecto (ya que es la primera)
all: make

#Compila los .o (del directorio o/*.o) a partir de los .cpp y los .h
%.o: $(CPPDIR)/%.cpp $(HDIR)/%.h
	$(CC) $(CFLAGS) -c $< -o o/$@

#Compila el main.o a partir del main.cpp
$(PRINCIPAL).o:$(PRINCIPAL).cpp
	$(CC) $(CFLAGS) -c $< -o $@

#Linkea todos los .o con el main.cpp y crea el ejecutable llamado main
make: main.cpp Socio.o Inscripcion.o Clase.o Entrenamiento.o Spinning.o Sistema.o DTSocio.o DTInscripcion.o DTClase.o DTEntrenamiento.o DTSpinning.o DTFecha.o Helpers.o
	$(CC) $(CFLAGS) -o main main.cpp o/*.o


#Crea un zip (hay que tener zip instalado en linux) con todos los archivos pertinentes
zip: $(LAB1) Makefile
	rm -f Gr3_Lab1.zip
	zip -r Gr3_Lab1.zip $(LAB1) integrantes.txt Makefile

#Borra todo
clean:
	-rm -f o/*.o
	-rm -f main
	-rm -f main.o
	-rm -f Gr3_Lab1.zip
