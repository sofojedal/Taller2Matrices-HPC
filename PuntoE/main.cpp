/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: E
 * Materia: Introducción a la HPC
 * ************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

/*Se crean tipos de datos personalizados*/
/* Tipo de dato Matriz 2x2 flotante*/
typedef Eigen ::Matrix<float, 2, 3> MiMatriz2x3f;
typedef Eigen ::Matrix<float, 3, 2> MiMatriz3x2f;
typedef Eigen ::Matrix<float, 2, 2> MiMatriz2x2f;

/*Tipo de dato Vector NxN flotante*/
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>MiMatrizd;

using namespace std;
int main()

{   //Se declaran las variables de los tipos anteriores
    MiMatriz2x3f mA;
    MiMatriz3x2f mB;
    MiMatriz2x2f mC;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op1;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op2;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> op3;

    std::cout << "=='Matriz mA'==" << std::endl;
    mA << 3,0,-1,0,2,1;

    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;

     cout<<"\n";

    std::cout << "=='Matriz mB'==" << std::endl;
    mB << 1,2,1,0,0,6;
    std::cout <<"\n mB inicializada\n" << mB << std::endl;

     cout<<"\n";

    std::cout << "=='Matriz mC'==" << std::endl;
    mC << -2,0,-2,-5;
    std::cout <<"\n mC inicializada\n" << mC << std::endl;

    op1=mA*mB;
    std::cout <<"\n op1\n" << op1 << std::endl;

    op2 = op1+mC;
    std::cout <<"\n op1\n" << op2 << std::endl;

    op3 = op2*2;
    std::cout <<"\n op1\n" << op3 << std::endl;
 }
