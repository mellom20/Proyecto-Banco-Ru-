#include <iostream>
using namespace std;

// ==================== CLIENTE ====================
struct cliente {
    int id;
    char nombre[50];
    char apellido[50];
    char telefono[20];
    char direccion[50];
    char email[100];        // usuario
    char password[50];
    double ingresosMensuales;
    double deudasActuales;
    int activo;             // 1=activo, 0=eliminado


} ;

// ==================== USUARIO BANCO (EMPLEADO/ADMINISTRADOR) ====================
struct empleado {
    int id;      // usuario
    char nombre[50];
    char apellido[50];
    char password[50];
    int rol;                // 1=Administrador, 2=Empleado
    int activo;
} ;

// ==================== TRANSACCIÓN ====================
struct transaccion {
    int id;
    char fecha[20];         // DD/MM/AAAA
    char hora[10];          // HH:MM
    int tipo;               // 1=Consignación, 2=Retiro, 3=Transferencia, 
                            // 4=Pago, 5=Interés, 6=Apertura, 7=Cancelación
    double monto;
    double saldoDespues;
    char descripcion[150];
} ;

// ==================== CUENTA DE AHORRO ====================
struct cuenta_ahorro  {
    int id;
    int idCliente;
    char numeroCuenta[20];
    double saldo;
    double tasaInteresMensual;   // 0.009489 por defecto
    char fechaApertura[20];  // revisar!!
    transaccion* transacciones;  // arreglo dinámico
    int numTransacciones;
    int capTransacciones; // capacidad para memoria dinamica
    int activa;
} ;

// ==================== CUENTA CORRIENTE ====================
struct cuenta_corriente {
    int id;
    int idCliente;
    char numeroCuenta[20];
    double saldo;
    double sobregiro;            // monto del sobregiro actual
    char fechaSobregiro[20];     // fecha en que se generó el sobregiro
    int tieneSobregiro;          // 1=si, 0=no
    char fechaApertura[20];
    transaccion* transacciones;
    int numTransacciones;
    int capTransacciones;
    int activa;
} ;

// ==================== CRÉDITO ====================
struct credito{
    int id;
    int idCliente;
    char numeroCredito[20];
    double montoPrestado;
    double saldo;                // saldo pendiente
    double tasaInteresMensual;   // 0.0216 por defecto
    int plazoMeses;
    char fechaAprobacion[20];
    int estado;                  // 1=Pendiente, 2=Aprobado, 3=Rechazado, 4=Pagado
    transaccion* transacciones;
    int numTransacciones;
    int capTransacciones;
} ;

// ==================== CDT ====================
struct cdt {
    int id;
    int idCliente;
    char numeroCDT[20];
    double montoInicial;
    double saldo;
    double tasaInteres;          // tasa pactada al momento de apertura
    int plazoMeses;
    char fechaApertura[20];
    char fechaVencimiento[20];
    int estado;                  // 1=Activo, 2=Cancelado, 3=Vencido
    int idCuentaOrigen;          // cuenta de donde salió el dinero
    int tipoCuentaOrigen;        // 1=Ahorro, 2=Corriente
    transaccion* transacciones;
    int numTransacciones;
    int capTransacciones;
} ;


// ==================== EXTRACTO ====================
struct extracto {
    int idProducto;
    int tipoProducto;            // 1=Ahorro, 2=Corriente, 3=Crédito, 4=CDT
    char fechaInicio[20];
    char fechaFin[20];
    double saldoInicial;
    double saldoFinal;
    double liquidacion; 
    transaccion* transacciones;
    int numTransacciones;
} ;


// Archivo deberan ir en el mismo orden que las estructuras pero separadas por (;)



// ------------------------1.era parte Administracion Banco----------------------------------
//-------------------------------------------------------------------------------------------

//------usuarios banco:

//------Configuracion Tasas: "SANTIAGO"

//***Actualizar tasas de Ahorro
int act_tasas_ahorro ()
{
    
}

//***Actualizar tasas de CDT's
int act_tasas_cdt ()
{

}

//***Actualizar tasas de Creditos
int act_tasas_creditos ()
{

}


//--------------------------2.da parte Operacion Banco----------------------------------------
//------------------------------------------------------------------------------------------- 

//------Administarcion Clientes:

//------Administracion Creditos:

//------Corte de los productos:

// --------------------------------3.era parte Sucursal Virtual ------------------------------
//-------------------------------------------------------------------------------------------

//------Cuenta de ahorros: "SANTIAGO"

//------Cuenta corriente: "SANTIAGO"

//------CDT's:


// la idea es dejar lo mas organizado posible 


// ******************************MENUS************************************

void menu_administrador() {


int opcion;
cout<<  "Seleccione una opción para el administrador: " << endl;
cout<<  "1.Administrar usuarios del banco." << endl;
cout<<  "2.Configuracion de las tasas. " << endl;
cout<<  "3.Salir. " << endl;

cin >> opcion;

switch (opcion)
    {
        case 1: // Administrar usuarios del banco, llamr funcion correspondiente con su menu
            break;
        case 2: // configuracion de las tasas, llamr funcion correspondiente con su menu

            break;
        case 3: // salir
        
            break;
        default :
            cout<< "Opcion invalida, intente de nuevo" << endl ;
            break;
    }
}  

void menu_empleado() {

int opcion;
cout<<  "Seleccione una opción para el : " << endl;
cout<<  "1.Administrar clientes." << endl;
cout<<  "2.Administracion creditos. " << endl;
cout<<  "3.Corte de los productos. " << endl;
cout<<  "4.Salir. " << endl;

cin >> opcion;

switch (opcion)
    {
        case 1: // Administrar clientes del banco, llamr funcion correspondiente con su menu
        break;
        case 2: // Administracion creditos, llamr funcion correspondiente con su menu
            
            break;
        case 3: // Corte de los productos
            break;

        case 4: // salir
            break;

        default :
            cout<< "Opcion invalida, intente de nuevo" << endl ;
            break;
    }
}

void menu_cliente() {
int opcion;
cout<<  "Seleccione una opción para el menu cliente: " << endl;
cout<<  "1.Cuenta de ahorro." << endl;
cout<<  "2.Cuenta corriente. " << endl;
cout<<  "3.CDT. " << endl;
cout<<  "4.Resumen de productos. " << endl;
cout<<  "5.Salir. " << endl;

cin >> opcion;

switch (opcion)
    {
        case 1: // Administrar cuenta de ahorro del banco, llamr funcion correspondiente con su menu
            break;

        case 2: // Administracion cuenta corriente, llamr funcion correspondiente con su menu

            break;
        case 3: // Administrar CDT, llamr funcion correspondiente con su menu
            break;

        case 4: // Realizar resumen de productos, llamr funcion correspondiente con su menu
            break;

        case 5: // salir
            break;

        default :
            cout<< "Opcion invalida, intente de nuevo" << endl ;
            break;
    }


}

int main() {
    

//*******************************************************************************************
//************************************   MENUS  *********************************************
//*******************************************************************************************


// --------------------- MENU Principal INGRESO --------------------------


int opcion1;

cout<<  "Seleccione una opción para ingresar al Banco: " << endl;
cout<<  "1.Administrador " << endl;
cout<<  "2.Empleado " << endl;
cout<<  "3.Cliente " << endl;

cin >> opcion1;

switch (opcion1)
    {
        case 1: // Administrador, llamr funcion correspondiente con su menu 
            menu_administrador();
            break;
        case 2: // Empleado
            menu_empleado();
            break;
        case 3: // Cliente
            menu_cliente();
            break;
        default :
            cout<< "Opcion invalida, intente de nuevo" << endl ;
            break;
    }


}