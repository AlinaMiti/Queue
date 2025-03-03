#include <iostream>

template <typename T>
class QueueArr{
private:
    T* _array;
    T _top;
    int _size;   //кол-во элементов в массиве
    int _startIndex;
    int _endIndex;
public:
    QueueArr(int size = 25){
        _array = new T[size];
        _size = size;
        _startIndex = -1;
        _endIndex = -1;
    }

    ~QueueArr(){
        delete [] _array;
    }

    void Push(const T& elem){
        if(!Full()){
            _array[(++_endIndex)%_size] = elem;

        }
        else{ throw "Queue is full"}

    }

    void Pop(){
        if(Empty()){
            throw "Queue is empty";
        }
        _startIndex = (_startIndex + 1) % _size;
        
    }
    bool Full() const{
        return (_endIndex + 1) % _size == _startIndex;
        
    }
    bool Empty() const{
        return _endIndex == _startIndex;
    }
    size_t GetCount() const{    //кол-во элементов в очереди
        if(_endIndex > _startIndex){
            return _endIndex - _startIndex;
        }
        else{ return _size -_startIndex +_endIndex}
    }
    T& Front(){
        return _array[_startIndex];
    }
    const T& Front() const{
        return _array[_startIndex];
    }
    T& Back(){
        return _array[_endIndex];
    }
    size_t GetSize(){
        return _endIndex = _startIndex;
    }
    T& Front(){
        return _array[_startIndex];
    }
    T& Back(){
        return _array[_endIndex];
    }
    const T& Back() const{
        return _array[_endIndex];
    }

};