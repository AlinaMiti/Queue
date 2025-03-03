#include "Queue.h"

int main(){
    QueueArr<int> Q(5);
    std::cout << Q.Empty() << std::endl;
    Q.Push(10);
    Q.Front();
}

//все ф-ии c cppreference 
// pop сделать void