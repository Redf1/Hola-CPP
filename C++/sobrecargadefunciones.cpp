
#include <iostream>

using namespace std;

int suma(int, int);
float suma(float, float);
double suma (double, double);
float suma (int, double);

/*sobrecarga de funciones*/
int main()
{
    int a = 10, b = 40;
    float c = 40.0, d = 50.0;
    double e = 100.50;
    cout << suma(c,d) << endl;

    return 0;
}

int suma (int a, int b){
    
    return (a + b);
}

float suma (float c, float d){
    return (c + d);
}
double suma (double e){
    return e;
}
float suma (int a, double b){
    return (a + b);
}