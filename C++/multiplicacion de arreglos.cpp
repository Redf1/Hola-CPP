#include <iostream>
#define MAX 5
using namespace std;

int main()
{
    /*lea 2 arreglos unidimensionales con valores reales y 
    usando otro arreglo calcule la multiplicacion de los valores de 
    ambos arreglos
    1   2   3
    4   5   6
    4   10  18*/
    
    int arreglo1[MAX];
    int arreglo2[MAX];
    int arreglo3[MAX];
    
    cout << "arreglo 1" << endl;
    for (int i = 0; i<MAX;i++){
        
        cout << "Indice " << i << " :";
        cin >> arreglo1[i];
    }
    cout << "arreglo 2" << endl;
    for (int i = 0; i<MAX;i++){
        
        cout << "Indice " << i << " :";
        cin >> arreglo2[i];
    }
    cout << "arreglo resultante" << endl;
    for (int i = 0; i<MAX;i++){
        
        arreglo3[i] = arreglo1[i]*arreglo2[i];
    }
    
    for (int i = 0; i<MAX;i++){
        
        cout << arreglo3[i] << " ";
    }
    return 0;
}
