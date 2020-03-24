#include <iostream>
#include "math_tools.h"
#include "display_tools.h"




bool verificarDeterminante(Matrix m){
    if(determinant(m)!=0.0){return true;}
    return false;
}


int main() {
    Matrix matrix_tarea1, matrix_cofactores, matrix_trans, matrix_respuesta;
    float dato;
    zeroes(matrix_tarea1,3);
    matrix_tarea1.at(0).at(0)=2; matrix_tarea1.at(0).at(1)=2; matrix_tarea1.at(0).at(2)=3;
    matrix_tarea1.at(1).at(0)=4; matrix_tarea1.at(1).at(1)=5; matrix_tarea1.at(1).at(2)=6;
    matrix_tarea1.at(2).at(0)=7; matrix_tarea1.at(2).at(1)=8; matrix_tarea1.at(2).at(2)=9;

    if(verificarDeterminante(matrix_tarea1)){
        cofactors(matrix_tarea1,matrix_cofactores);
        transpose(matrix_cofactores,matrix_trans);
        dato=(1/determinant(matrix_tarea1));
        productRealMatrix(dato,matrix_trans,matrix_respuesta);

        showMatrix(matrix_respuesta);
    }else{
        EXIT_FAILURE;
    }

    return 0;
}
