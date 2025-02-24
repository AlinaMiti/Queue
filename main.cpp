#include "Queue.h"

int main(){

    Queue<int> arr(10);
    arr.Push(5);
    arr.Push(3);
    std::cout << arr.Pop() << " " << arr.Pop();
    try {
        std::cout << arr.Pop();
    }
    catch(const char* a){
        std::cout << a;
    }
    
    arr.Push(54);
    arr.Push(33);
    std::cout << arr.Pop() << " " << arr.Pop();
}

//все ф-ии c cppreference 
// pop сделать void