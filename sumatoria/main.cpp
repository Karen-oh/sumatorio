#include <iostream>

using namespace std;
int sumatoria(int m, int n);
int main()
{
    int m, n;

    cout << "INGRESE EL RANGO INCIAL ";
    cin >> n;
    cout << "INGRESE EL RANGO FINAL ";
    cin >> m;
    while (n < 0 || m <0){
        cout << "INGRESE UN NUMERO VALIDO" << endl;
        cout << "INGRESE EL RANGO INCIAL ";
        cin >> n;
        cout << "INGRESE EL RANGO FINAL ";
        cin >> m;
    }
    cout << "LA SUMATORIA ES: " << sumatoria(m,n)<< endl;
}
int sumatoria(int m, int n)
{
    int sum = 0;
    while (m >= n)
    {
        sum= sum + n;
        n++;
    }
    return sum;

}
