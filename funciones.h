struct Producto
{
    char nombre[50];
    double precio;
    int cantidad;
};

struct Factura
{
    char nombre[20];
    int cedula;
    double total;
    struct Producto productos[5];
};

void leerFactura(struct Factura *factura);
void imprimirFactura(struct Factura *factura);