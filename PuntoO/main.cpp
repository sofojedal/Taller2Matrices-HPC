/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: O
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 3, 3> MiMatriz3x3f;
typedef Eigen ::Matrix<float, 3, 3> MiMatriz3x3f;

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main()

{   //Se declaran las variables de los tipos anteriores
    MiMatriz3x3f mA;
    MiMatriz3x3f mB;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op1;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 2,5,7,6,3,4,5,-2,-3;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;


     std::cout << "=='Matriz mB'==" << std::endl;
     mB << -1,1,0,0,1,1,1,0,-1;

     //Se inicializa manualmente la mB
     std::cout <<"\n mB inicializada\n" << mB << std::endl;

     op1 = mB*(mA.inverse());
     std::cout <<"\n Solución\n" << op1 << std::endl;

 }
