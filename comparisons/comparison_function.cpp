#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

template<typename T>
T time_function(vector<T>&test_arr, void* function(vector<T>)){
    
    clock_t T0,Tf;
    
    T0 = clock();
    function(test_arr);
    Tf = clock();
    
    return Tf - T0;   
}


