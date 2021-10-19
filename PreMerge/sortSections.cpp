#include "binarySort.cpp"
#define SECTION_SIZE 32

void sort_sections(vector<int>&arr){
    int last = arr.size() - arr.size()%SECTION_SIZE;//all sections will have same size, except the last one
    for(int i=0; i < last; i+=SECTION_SIZE)
        binary_insertion_sort(arr,i,SECTION_SIZE+i);
    binary_insertion_sort(arr,last,SECTION_SIZE+last);
}