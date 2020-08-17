#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int cama;
    int disponible;
} Cama;

typedef struct{
  char * nombre;
  char * apellido;
  int edad;
  int telefono;
  Cama infoCama;
  
} Paciente;

void Registrar(int);
void Disponible(int);
void Alta(int);
void Registro(int);
void CamasDisp(int);

int main() {
    int nOpc=5;
    
    printf("---Bienvenido a Hospital San Rafael--- \
    \n1-Registrar Paciente \
    \n2-Disponibilidad de Cama \
    \n3-Dar de Alta, Desocupar Cama \
    \n4-Lista de Pacientes Registrados \
    \n5-Numero de Camas Disponibles y Ocupadas \
    \n6-Salir \
    \n Elige tu Opción: ");
    
    int opcion;
    
    scanf("%d", &opcion);
    
    switch (opcion) {
        case 1:
            Registrar(opcion);
            break;
        case 2:
            Disponible(opcion);
            break;
            
        case 3:
            Alta(opcion);
            break;
            
        case 4:
            Registro(opcion);
            break;
        case 5:
            CamasDisp(opcion);
            break;
        default:
            printf("Bye\n");
            break;
    }

    return 0;
}

void Registrar(int opcion)
{
    //int numero;
    printf("Registrar\n");
    //scanf("%d", &numero);

}

void Disponible(int opcion)
{
    printf("Disponibilidad\n");
}

void Alta(int opcion)
{
    printf("Dar Alta\n");
}

void Registro(int opcion)
{
    printf("Registrar \n");
}

void CamasDisp(int opcion)
{
    printf("Camas Disponibles\n");
}
