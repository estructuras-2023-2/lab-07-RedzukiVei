#include <queue>
#include <vector>

using namespace std;

class Jugador{
    public:
            vector<int> Torneo(vector<int>habilidades, int N, int K);
};

vector<int> Jugador::Torneo(vector<int>habilidades, int N, int K){

    queue<int> cola;
    

    int JuegosGanados = 0;
    int JugadorActual = habilidades[0];
    int JugadorRetador = habilidades[1];

    for (int i = 2; i < habilidades.size(); ++i) {
        cola.push(habilidades[i]);
    }

    vector<int> resultado(2);

    for (int juego = 1; juego <= K; ++juego) {
        if (JugadorActual > JugadorRetador) {
            JuegosGanados++;
            resultado = {JugadorRetador, JugadorActual};
            cola.push(JugadorRetador);
        } else {
            JuegosGanados = 1;
            resultado = {JugadorActual, JugadorRetador};
            cola.push(JugadorActual);
            JugadorActual = JugadorRetador;
        }
        if (JuegosGanados == N) {
            cola.push(JugadorActual);
            JugadorActual = cola.front();
            cola.pop();
            JuegosGanados = 0;
        }
        JugadorRetador = cola.front();
        cola.pop();
    }
    return resultado;
}