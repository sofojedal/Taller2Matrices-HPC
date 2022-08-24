/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: K
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 2, 2> MiMatriz2x2f;

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main()

{   //Se declaran las variables de los tipos anteriores
    MiMatriz2x2f mA;
    MiMatriz2x2f mB;
    MiMatriz2x2f mC;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op1;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op2;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op3;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op4;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 2, 4, 3, 2;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;


     std::cout << "=='Matriz mB'==" << std::endl;
     mB << 1, 0, 2, 1;

     //Se inicializa manualmente la mB
     std::cout <<"\n mA inicializada\n" << mB << std::endl;

     std::cout << "=='Matriz mC'==" << std::endl;
     mC << 7, 5, 6, 1;

     //Se inicializa manualmente la mC
     std::cout <<"\n mA inicializada\n" << mC << std::endl;

     op1 = ((mA.transpose()).inverse());
     std::cout <<"\n Operación 1\n" << op1 << std::endl;

     op2 = op1*mC;
     std::cout <<"\n Operación 2\n" << op2 << std::endl;

     op3 = op2*(mB.inverse());
     std::cout <<"\n Solución \n" << op3 << std::endl;

 }
