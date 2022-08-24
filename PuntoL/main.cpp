/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: L
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 2, 3> MiMatriz2x3f;
typedef Eigen ::Matrix<float, 3, 2> MiMatriz3x2f;

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main()

{   //Se declaran las variables de los tipos anteriores
    MiMatriz2x3f mA;
    MiMatriz3x2f mB;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op1;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op2;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op3;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op4;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 1,0,-2,2,-1,3;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;


     std::cout << "=='Matriz mB'==" << std::endl;
     mB << 2,-3,-2,0,-1,-2;

     //Se inicializa manualmente la mB
     std::cout <<"\n mB inicializada\n" << mB << std::endl;

     op1 = mA*(mA.transpose());
     std::cout <<"\n Operacion 1\n" << op1 << std::endl;

     op2 = 2*mA*mB;
     std::cout <<"\n Operacion 2\n" << op2 << std::endl;

     op3 = op1 - op2;
     std::cout <<"\n Solución \n" << op3 << std::endl;

 }
