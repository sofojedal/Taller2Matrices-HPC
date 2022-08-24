/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: D
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 2, 2> MiMatriz2x2f;
typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main(){

    //Se declaran las variables de los tipos anteriores
    MiMatriz2x2f mA;
    MiMatriz2x2f mB;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>op1;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 2, 1, -4, -3;
    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;

    std::cout << "=='Matriz mB'==" << std::endl;
    mB << 2, 2, 6, 4;
    //Se inicializa manualmente la mB
    std::cout <<"\n mB inicializada\n" << mB << std::endl;

    op1 = mB*mA.inverse();

    std::cout <<"\n Solución \n" << op1 << std::endl;
 }
