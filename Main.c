/*
Rafael Díaz Medina A01024592 Tarea 1 Hospital 
*/
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
  char * telefono;
  Cama infoCama ;
}Paciente;

int camasDisponibles=0;
int camas=0;

typedef void (*opciones) (Paciente * patient);
void Registrar(Paciente * patient);
void Alta(Paciente * patient);
void Disponible(Paciente * patient);
void Registro(Paciente * patient);
void CamasDisp(Paciente * patient);


int main(int argc, const char * argv[]) {
    int agregarCamas=5;
    int nOpc=5;
    int opcion=0;
    int i=0;  
    opciones* menu = (opciones*) malloc(nOpc* sizeof(opciones));
    *menu = Registrar;
    *(menu+1) = Disponible;
    *(menu+2) = Alta;
    *(menu+3) = Registro;
    *(menu+4) = CamasDisp;

    Paciente* patients;
    patients = (Paciente*)malloc(agregarCamas* sizeof( Paciente));
    patients->infoCama.disponible;
    patients->infoCama.cama;
    //patients->infoCama = (Cama*) malloc(agregarCamas* sizeof(Cama));
    //patients->infoCama->cama = (Cama*) malloc(agregarCamas* sizeof(Cama));
    //patients->infoCama->disponible = (Cama*) malloc(agregarCamas* sizeof(Cama));
    camas+=5;
    camasDisponibles=4;
                (patients)->nombre = "Rafael";
                (patients)->apellido = "Diaz";
                (patients)->edad= 22;
                (patients)->telefono = "5582213992";
                (patients)->infoCama.cama=0;
                (patients)->infoCama.disponible=1;
                i++;
    while (opcion!=6){
        printf("\n---Bienvenido a Hospital San Rafael--- \
        \n1-Registrar Paciente \
        \n2-Disponibilidad de Cama \
        \n3-Dar de Alta, Desocupar Cama \
        \n4-Lista de Pacientes Registrados \
        \n5-Numero de Camas Disponibles y Ocupadas \
        \n6-Salir \
        \nElige tu Opción: ");
        scanf("%d", &opcion);
        if(opcion > 0 && opcion <6){
            if(opcion==1 && i<5){
                i++;
            }
            else if(opcion==3){
                i--;
            }
            else if(opcion==1 && i==5){
                i=0;
                patients = ( Paciente *) realloc (patients,(agregarCamas+camas)*sizeof( Paciente));
                patients->infoCama.disponible;
                patients->infoCama.cama;
                //patients->infoCama = (Cama*)realloc(patients->infoCama,(5*sizeof(Cama)));
                //patients->infoCama = malloc(sizeof(Cama));
                camas+=5;
                camasDisponibles=5;
                printf("Se solicitaron 5 camas más\n");
                i++;
            }  
        (*(menu+opcion-1))(patients);   
        }
    }
    //free(patients->infoCama);
    for(int s=1;s<camas;s++){
        free((patients+s)->nombre);
        (patients+s)->nombre= NULL;
        free((patients+s)->apellido);
        (patients+s)->apellido= NULL;
        free((patients+s)->telefono);
        (patients+s)->telefono= NULL;
    }
    free(patients);
    patients=NULL;
    free(menu);
    menu= NULL;
    return 0;
}
void Registrar(Paciente * patient)
{
    int max=20;
    int i=0;
    while((patient+i)->infoCama.disponible!=0){ 
        i++;
    }
    //Nombre
    (patient+i)->nombre = (char*)malloc(max);
    printf("Nombre: ");
    scanf("%s", (patient+ i)->nombre);
    //Apellido
    (patient+i)->apellido = (char*)malloc(max);
    printf("Apellido: ");
    scanf("%s", (patient + i)->apellido);
    //Edad
    printf("Edad: ");
    scanf("%d", &(patient + i)->edad);
    //Telefono
    (patient+i)->telefono = (char*)malloc(max);
    printf("Telefono: ");
    scanf("%s", (patient + i)->telefono);

    (patient+i)->infoCama.cama=i;
    (patient+i)->infoCama.disponible=1;

    camasDisponibles--;

}
void Disponible(Paciente * patient)
{
    int i;
    printf("Numero de Cama ");
    scanf("%d",&i);

    if((patient+i)->infoCama.disponible==1){
        printf("\nCama %d", i);
        printf("\nPaciente %s %s\n",(patient+i)->nombre,(patient+i)->apellido);
        printf("Edad %d\n",(patient+i)->edad);
        printf("Numero de Contacto %s\n",(patient+i)->telefono);
        
    }
    else{
        printf("Cama %d Disponible\n",i);
    }
}
void Alta(Paciente * patient)
{
    int i;
    printf("Numero de cama ");
    scanf("%d",&i);
    if(i>=0 && i < camas){
        if((patient+i)->infoCama.disponible == 1){ 
            (patient+i)->infoCama.disponible = 0; 
            printf("Cama desocupada\n");
        }
        else{
            printf("Cama ocupada\n");
        }
        }
    camasDisponibles++;
}
void Registro(Paciente * patient)
{
    for(int i = 0;i<camas;i++){
    if((patient+i)->infoCama.disponible==1){
        printf("\nCama %d", i);
        printf("\nPaciente %s %s\n",(patient+i)->nombre,(patient+i)->apellido);
        printf("Edad %d\n",(patient+i)->edad);
        printf("Numero de Contacto %s\n",(patient+i)->telefono);
    }
  }
}
void CamasDisp(Paciente * patient)
{
    printf("\nCamas disponibles %d \n",camasDisponibles);
    printf("Camas ocupadas %d\n",camas-camasDisponibles);  
}