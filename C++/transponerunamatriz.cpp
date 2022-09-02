#include <iostream>

using namespace std;
/*Matrices transpuestas
Escriba un programa que genere la matriz transpuesta de una matriz

    1   2   3       1   4
    4   5   6       2   5
                    3   6*/
int main()
{
    int A[][3] = {{1,2,3},{4,5,6}};//2 filas, 3 columnas
    int filas = 2, columnas =  3;
    int B[3][2];
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            B[j][i] = A[i][j];
        }
    }
    
    for (int i = 0; i < columnas; i++){
        for (int j = 0; j < filas; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
