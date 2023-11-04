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
    int N2 = 10; 
    int K2 = 399;
    vector<int> resultado2 = p.Torneo(habilidades2, N2, K2);
    cout << "{" << resultado2[0] << ", " << resultado2[1] << "}" << endl;

    vector<int> habilidades3 = {1, 2, 3};
    int N3 = 2; 
    int K3 = 4;
    vector<int> resultado3 = p.Torneo(habilidades3, N3, K3);
    cout << "{" << resultado3[0] << ", " << resultado3[1] << "}" << endl;

    vector<int> habilidades4 = {30, 12};
    int N4 = 34;
    int K4 = 80;
    vector<int> resultado4 = p.Torneo(habilidades4, N4, K4);
    cout << "{" << resultado4[0] << "," << resultado4[1] << "}" << endl; 
}