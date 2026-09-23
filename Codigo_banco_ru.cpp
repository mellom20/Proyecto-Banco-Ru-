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
}; 

// ==================== USUARIO BANCO (EMPLEADO/ADMINISTRADOR) ====================
struct empleado {
    int id;      // usuario
    char nombre[50];
    char apellido[50];
    char password[50];
    int rol;                // 1=Administrador, 2=Empleado
    int activo;
}; 

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
}; 

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
}; 

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
}; 

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
}; 

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
};


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
}; 


// Archivo deberan ir en el mismo orden que las estructuras pero separadas por (;)

// ------------------------1.era parte Administracion Banco----------------------------------
//-------------------------------------------------------------------------------------------

//------usuarios banco:

//------Configuracion Tasas:

//--------------------------2.da parte Operacion Banco----------------------------------------
//------------------------------------------------------------------------------------------- 

//------Administarcion Clientes:

//------Administracion Creditos:

//------Corte de los productos:

// --------------------------------3.era parte Sucursal Virtual ------------------------------
//-------------------------------------------------------------------------------------------

//------Cuenta de ahorros:

//------Cuenta corriente:

//------CDT's:


// la idea es dejar lo mas organizado posible 
