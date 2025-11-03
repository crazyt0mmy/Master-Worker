#include <iostream>
#include <mutex>
#include <chrono>
#include <thread>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int TASK = 100;
int WORKER = 5;

struct task{
   
};
   
void crea_coda(queue<task> coda){
    for(int i; i < TASK; i++){
        coda.emplace(i);
    }
   
}

void lavora(){
   
}

int main(){
    queue<task> coda;
    crea_coda(coda);

}