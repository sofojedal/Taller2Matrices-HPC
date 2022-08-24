/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: G
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 3, 3> MiMatriz3x3f;

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main()

{   //Se declaran las variables de los tipos anteriores
    MiMatriz3x3f mA;
    MiMatriz3x3f mB;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op1;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 2, 7, 3, 3, 9, 4, 1, 5, 3;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;

     cout<<"\n";

    std::cout << "=='Matriz mB'==" << std::endl;
    mB << 1, 0, 2, 0, 1, 0, 0, 0, 1;
    std::cout <<"\n mB inicializada\n" << mB << std::endl;

   op1 = mB*mA.inverse();

   std::cout <<"\n Solución \n" << op1 << std::endl;

 }
