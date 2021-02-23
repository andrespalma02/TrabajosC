#include <iostream>
#include <string.h>
using namespace std;
typedef struct {
    char nombreCliente[30];
    int unidadesSolicitadas;
    float precioUnitario;
    char estadoFactura[20];
} FacturaCliente;

int main() {
    FacturaCliente facturaCliente[100];
    int indiceFactura = 0, maxPagado = 0, auxSalir = 0, opReporte = 0;
    float precioFactura = 0;
    while (indiceFactura < 100 && auxSalir == 0) {
        cout << "\nIngrese los datos de la factura:\n";
        cout << " Nombre: ";
        cin >> facturaCliente[indiceFactura].nombreCliente;
        cout << "Numero de unidades solicitadas: ";
        cin >> facturaCliente[indiceFactura].unidadesSolicitadas;
        cout << "Precio unitario del producto: ";
        cin >> facturaCliente[indiceFactura].precioUnitario;
        cout << "Estado de la factura (PAGADO,MOROSO,ATRASADO: ";
        cin >> facturaCliente[indiceFactura].estadoFactura;
        cout << "Factura ingresada..."
                "\n Presione 0 para ingresar una nueva factura,"
                " presione otra tecla para salir:";
        cin >> auxSalir;
        indiceFactura++;
        if (indiceFactura > 99) {
            cout << "Solo puede ingresar 100 facturas.";
        }
    }
    //menu para visualizar los resultados
    cout << "\nIngrese la opcion deseada: \n"
            "1. Lista de clientes con facturas en estado moroso\n"
            "2. Clientes con facturas pagadas mayores a un valor establecido\n"
            "3. Salir del programa\n";
    cin >> opReporte;
    // se ingresa a un bucle que permite que el usuario interactue con el programa hasta que desee salir
    while (opReporte != 3) {
        switch (opReporte) {
            case 1:
                cout << "Los clientes con factura en estado MOROSO son:" <<
                     "(En caso de no aparecer nombres, no hay clientes con facturas en ese estado)\n";
                for (int i = 0; i < indiceFactura; i++) {

                    if (strcmp(facturaCliente[i].estadoFactura, "MOROSO") == 0) {
                        cout << facturaCliente[i].nombreCliente << "\n";
                    }
                }
                cout << "\nSeleccione que desea visualizar ahora: \n"
                        "1. Lista de clientes con facturas en estado moroso\n"
                        "2. Clientes con facturas pagadas mayores a un valor establecido\n"
                        "3. Salir del programa\n";
                cin >> opReporte;
                break;
            case 2:
                cout << "\nIngrese el valor de la factura: ";
                cin >> maxPagado;
                cout << "Los clientes con factura en estado PAGADO y con valores mayores a" << maxPagado << " son:\n"
                     <<
                     "(En caso de no aparecer nombres, no hay clientes con facturas en ese estado, o son menores a "
                     << maxPagado << ")";
                for (int i = 0; i < indiceFactura; i++) {
                    precioFactura = facturaCliente[i].precioUnitario *
                                    facturaCliente[i].unidadesSolicitadas;

                    if (precioFactura > maxPagado &&
                        strcmp(facturaCliente[i].estadoFactura, "PAGADO") == 0) {
                        cout << facturaCliente[i].nombreCliente << "\n";
                    }
                }
                cout << "\nSeleccione que desea visualizar ahora: \n"
                        "1. Lista de clientes con facturas en estado moroso\n"
                        "2. Clientes con facturas pagadas mayores a un valor establecido\n"
                        "3. Salir del programa\n";
                cin >> opReporte;
                break;
            default:
                cout << "\nOpcion no valida, ingrese un numero valido: \n"
                        "1. Lista de clientes con facturas en estado moroso\n"
                        "2. Clientes con facturas pagadas mayores a un valor establecido\n"
                        "3. Salir del programa\n";
                cin >> opReporte;
                break;
        }
    }
    cout << "\nGracias por usar el programa!";
    return 0;
}

