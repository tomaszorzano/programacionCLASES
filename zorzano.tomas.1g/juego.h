
typedef struct
{
char codigo[10];
char descripcion[51];
char importe[10];
categoria idCategoria;
int isEmpty;
} eJuegos;


int funcion_opcionesJuegos();
void funcion_InicializarjUEGOS(eJuegos list[], int tam);
void funcion_Juegos(eJuegos list);
