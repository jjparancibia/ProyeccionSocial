#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream archivo;
    archivo.open("out.txt");
    double distancia;
    cin >> distancia;
    archivo << distancia;
    archivo.close();
    return 0;
}
