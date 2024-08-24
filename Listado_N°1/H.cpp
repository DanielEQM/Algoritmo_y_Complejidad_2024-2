#include <iostream>
#include <map>
using namespace std;

int main(){
    int a, b, x, i = 0, cont = 0, j;
    cin >> a >> b;
    int n[a];
    while(cin >> n[i++]) {
        if(n[i-1] == b){
            x = i-1;
        }
    }
    map <int, int> m;
    m[0] = 1;
    for(i = x + 1; i < a; i++){
        if(n[i] > b){
            cont++;
        } else {
            cont--;
        }
        m[cont]++;
    }
    cont = 0;
    j = m[0];
    for(i = x - 1; i >= 0; i--){
        if(n[i] > b){
            cont++;
        } else {
            cont--;
        }
        j += m[-cont];
    }
    cout << j;
    return 0;
}