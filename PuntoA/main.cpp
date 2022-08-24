/****************************
 * Fecha: 23 agosto de 2022
 * Autor: Laura Sofía Ojeda León, PhD
 * Tema: Ejercicios Taller 2
 * Punto: A
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
    MiMatriz2x2f numbers;
    MiMatriz2x2f numbers2;
    MiMatriz2x2f resta;
    //MiVector3f vB;
    MiMatrizd mDyn(10,15);
    std::cout << "=='Matriz mA'==" << std::endl;
     mA << 4, -2, 1, -7;
    //Se inicializa manualmente la mA
    std::cout <<"\n mA inicializada\n" << mA << std::endl;
     cout<<"\n";
    std::cout << "=='Matriz mB'==" << std::endl;
    mB << -1, 2, 6, -5;
    std::cout <<"\n mB inicializada\n" << mB << std::endl;
    numbers= mA*3;
    std::cout <<"\n mA *3\n" << numbers << std::endl;
    cout<<"\n";

    numbers2= mB*4;
    std::cout <<"\n mB *3\n" << numbers2 << std::endl;
    cout<<"\n";

    resta=numbers-numbers2;
    std::cout << "\n Matriz Resultado \n" << resta <<std::endl;
 }
