//
// Created by Alejandro  Otero on 2020-04-12.
//

#include <iostream>

void  _b_int_ (void * _vector_, int _i,int _k){
    // TODO:  QUE COSA PONGO AQUI?
    int *arr= reinterpret_cast<int*>(_vector_);
    if(arr[_i]>arr[_i+1]){
        std::swap(arr[_i],arr[_i+1]);
    }
}