#include<iostream>
#include<queue>

#define section second
#define element first

using namespace std;


priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > Heap;


void heap_merge(vector<int>&arr,vector<vector<int>>sections){
    int ele;
    int sec;

    vector<int> aux_arr(arr.size());
    vector<int> sec_index(sections.size(),1);//index of the next smallest available element of a section
    int aux_index = 0; //index of the arr

    /*after this for,
    the index of 
    the next smallest available element of
    every section is 1*/
    
    for(int i = 0; i < sections.size(); i++)
        Heap.push(make_pair(sections[i][0],i));
    
    while(!Heap.empty()){//for(int aux_index = 0; aux_index < arr.size();index++ ) should also work
        sec = (Heap.top()).section;
        ele = (Heap.top()).element;
        Heap.pop();

        aux_arr[aux_index++] = ele;

        if(sec_index[sec] < sections[sec].size()){
            Heap.push(make_pair(sections[sec][sec_index[sec]],sec));
            sec_index[sec]++;
        }
    }
}

int main(){
    cout<<"ok\n";
    return 0;
}