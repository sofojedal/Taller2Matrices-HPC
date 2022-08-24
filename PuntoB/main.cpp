/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: B
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 2, 2> MiMatriz2x2f;
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main(){
    MiMatriz2x2f mA;
    MiMatriz2x2f mB;
    MiMatriz2x2f op1;
    MiMatriz2x2f op2;
    MiMatriz2x2f op3;
    MiMatriz2x2f op4;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 0, -1, 2, 1;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;

     cout<<"\n";

    std::cout << "=='Matriz mB'==" << std::endl;
    mB << 1, 2, 3, 4;
    std::cout <<"\n mB inicializada\n" << mB << std::endl;

    op1 = 3*mB*mA;
    std::cout <<"\n Primera Operacion\n" << op1 << std::endl;

    op2 = 4*mA;
    std::cout <<"\n Segunda Operacion\n" << op2 << std::endl;

    op3 = op1 - op2;
    std::cout <<"\n Tercera Operacion\n" << op3 << std::endl;

    op4 = op3/2;
    std::cout <<"\n Operacion Respuesta\n" << op4 << std::endl;

 }
