/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: M
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 1, 3> MiMatriz1x3f;
typedef Eigen ::Matrix<float, 3, 2> MiMatriz3x2f;
typedef Eigen ::Matrix<float, 2, 1> MiMatriz2x1f;

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main()

{   //Se declaran las variables de los tipos anteriores
    MiMatriz1x3f mA;
    MiMatriz3x2f mB;
    MiMatriz2x1f mC;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op1;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 4,8,12;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;


     std::cout << "=='Matriz mB'==" << std::endl;
     mB << 3,2,0,1,-1,0;

     //Se inicializa manualmente la mB
     std::cout <<"\n mB inicializada\n" << mB << std::endl;

     std::cout << "=='Matriz mC'==" << std::endl;
     mC << 3,-1;

     //Se inicializa manualmente la mB
     std::cout <<"\n mC inicializada\n" << mC << std::endl;

     op1 = mA*mB*mC;
     std::cout <<"\n Solución\n" << op1 << std::endl;

 }
