/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: P
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

typedef Eigen ::Matrix<float, 4, 4> MiMatriz4x4f;
typedef Eigen ::Matrix<float, 4, 4> MiMatriz4x4f;

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main()

{   //Se declaran las variables de los tipos anteriores
    MiMatriz4x4f mA;
    MiMatriz4x4f mB;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op1;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;


     std::cout << "=='Matriz mB'==" << std::endl;
     mB << 1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;

     //Se inicializa manualmente la mB
     std::cout <<"\n mB inicializada\n" << mB << std::endl;

     op1 = (mA.transpose()*mB);
     std::cout <<"\n Solución\n" << op1 << std::endl;

 }
