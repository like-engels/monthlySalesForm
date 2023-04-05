#include <iostream>

double calcularPorcentajeVendido(double unidadesVendidas, double unidadesIniciales);

int main() {

    double cantidadInicial = 0;
    double cantidadFinal = 0;
    double porcentajeVendido = 0;
    double cantidadVendida= 0;
    std::string nombreArticulo = "";
    std::string mesFacturacion = "";

    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Bienvenido a este sistema de gestion de inventario!" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Ingrese nombre del articulo a evaluar: ";
    std::cin >> nombreArticulo;
    std::cout << std::endl;
    std::cout << "Ingrese cantidad inicial: ";
    std::cin >> cantidadInicial;
    std::cout << std::endl;
    std::cout << "Ingrese cantidad vendida: ";
    std::cin >> cantidadVendida;
    std::cout << std::endl;
    std::cout << "Ingrese mes correspondiente a la facturacion: ";
    std::cin >> mesFacturacion;
    std::cout << std::endl;

    cantidadFinal = cantidadInicial - cantidadVendida;
    porcentajeVendido = calcularPorcentajeVendido(cantidadVendida, cantidadInicial);

    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Informe final" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "Mes: " << mesFacturacion << std::endl;
    std::cout << "Nombre del articulo: " << nombreArticulo << std::endl;
    std::cout << "Cantidad inicial: " << cantidadInicial << std::endl;
    std::cout << "Cantidad vendida: " << cantidadVendida << std::endl;
    std::cout << "Cantidad final: " << cantidadFinal << std::endl;
    std::cout << "Porcentaje vendido: " << porcentajeVendido << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    return 0;
}

double calcularPorcentajeVendido(double unidadesVendidas, double unidadesIniciales) {
    float porcentaje = (unidadesVendidas  / unidadesIniciales) * 100;
    return porcentaje;
}
