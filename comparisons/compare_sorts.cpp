#include "comparison_function.cpp"

template <typename T>
vector<T> random_arr(int tam){
    vector<T>arr(tam);
    for (int x=0;x<tam;x++)
        arr[x] = rand()%100; 
    return arr;
}

template<typename T>
pair<T,T> compare(void* f1(vector<T>), void* f2(vector<T>), int tam){
    vector<T> test_arr = random_arr(tam);
    return make_pair(  time_function(test_arr,f1),
                time_function(test_arr,f2) );
    
}

