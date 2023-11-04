#include "student_file.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    Jugador p;

    vector<int> habilidades1 = {1,2,3};
    int N1 = 2;
    int K1 = 2;
    vector<int> resultado1 = p.Torneo(habilidades1, N1, K1);
    cout << "{" << resultado1[0] << ", " << resultado1[1] << "}" << endl;

    vector<int> habilidades2 = {49, 24, 26, 12, 5, 33, 25, 30, 35, 41, 46, 23, 21, 3, 38, 43, 11, 19, 34, 29, 20, 32, 39, 7, 50};
    int N2 = 10, 
    K2 = 399;
    vector<int> resultado2 = p.Torneo(habilidades2, N2, K2);
    cout << "{" << resultado2[0] << ", " << resultado2[1] << "}" << endl;


}