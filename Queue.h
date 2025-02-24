#include <iostream>

template <typename T>
class Queue{
private:
    T* _array;
    T _top;
    size_t _size;
    size_t _startId;
    size_t _finId;
    int _cnt;
public:
    Queue(size_t size = 25){
        _array = new T[size];
        _size = 25;
        _startId = 0;
        _finId = 0;
        _cnt = 0;
    }
    void Push(const T& elem){
        if(_finId + 1 != _size){
            _array[_finId] = elem;
            _finId++;
            _size++;
        }
        else{
            throw "polni";
        }
        // if(empty){
        //     _array[0] = elem;
        //     _size ++;
        //     _cnt ++;
        // }
        // else{
        //     _array[_cnt] = elem;
        //     _cnt++;
        // }
    }
    T Pop(){
        if(Empty()){
            throw "Queue is empty";
        }
        T a = _array[_startId++];
        if(_startId == _finId){
            _startId = 0;
            _finId = 0;
        }
        return a;
    }
    bool Empty(){
        if(_finId == 0){
            return true;
        }
        return false;
    }
    size_t GetSize(){
        return _finId = _startId;
    }

    T& Front(){
        return _array[_startId];
    }
    T& Back(){
        return _array[_finId];
    }

};