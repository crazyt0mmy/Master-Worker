#include <iostream>
#include <thread>
#include <mutex>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>
#include <future>
#include <atomic>

using namespace std;

int N_TASK = 100;
int N_WORKER = 5;
int T_MAX = 4;

// Genera numero casuale
int trandom() {
    static bool inizializzato = false;
    if (!inizializzato) {
        srand(time(nullptr));   // Inizializza il generatore SOLO la prima volta
        inizializzato = true;
    }
    return (rand() % T_MAX) + 1;
}
// Creo struct
struct TASK {
    int id;
    int tempo_esecuzione;
};

struct WORKER {
    int id;
   
};
 
// Funzione per creare la coda
void crea_coda(queue<TASK>& coda){
    for(int i = 0; i < N_TASK; i++){
        TASK t;                                         // Istanzio la struct
        t.id = i;                                       // Imposto l'ID
        t.tempo_esecuzione = trandom();                 // Imposto il tempo di esecuzione randomicamente
        coda.push(t);                                   // Pusho la task nella coda
    }
}

int main(){
    queue<TASK> coda;   // Creo coda
    crea_coda(coda);    // Riempio la coda di task
}
