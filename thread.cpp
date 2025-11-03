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
    int id;
    task(int i) : id(i) {} 
};
   
void crea_coda(queue<task> coda){
    for(int i = 0; i < TASK; i++){
        coda.emplace(i);
    }
   
    
}

void lavora(){
   
}

int main(){
    queue<task> coda;
    crea_coda(coda);


}
