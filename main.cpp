#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int cont = 0, a = 0, n = 0, soma, somat;
    cin >> a;
    n = 0;
    somat = 0;
    while (n < 1){
        cin >> n;
    }
    while (cont < n){
        soma = a + cont;
        somat = somat + soma;
        cont++;
    }
    cout << somat <<endl;
    return 0;
}
