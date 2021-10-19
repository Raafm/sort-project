#include<iostream>
#include<vector>
#define start first
#define end second

using namespace std;

void reverse(vector<int>&arr, int start, int end){
    while(start < end){
        swap(arr[start++] , arr[end--]);
    }
}

pair<int,int> ascending(vector<int>&arr,int start){
    if (start == arr.size() -1) return make_pair(start, start);
    if (arr[start] > arr[start+1]) return make_pair(start,start);
    
    int i = start;
    while( i < arr.size() - 1 && arr[i] <= arr[i+1])
        i++;
    
    return make_pair(start,i);
}

pair<int,int> descending(vector<int>&arr,int start){
    if (start == arr.size() -1) return make_pair(start, start);
    if (arr[start] < arr[start+1]) return make_pair(start,start);
    
    int i = start;
    while (i < arr.size() - 1 && arr[i] >= arr[i+1])
        i += 1;
    
    return make_pair(start,i);
}

void search_sections(vector<int>&arr){
    vector<vector<int>> sections;
    int i = 0;
    
    while (i < arr.size()){
        pair<int,int>limits = ascending(arr,i);
        if (limits.start == limits.end){
            limits = descending(arr,i);
            reverse(arr,limits.start,limits.end);
        }

        vector<int>section(limits.end-limits.start+1);
        int j = 0;
        for(int x = limits.start; x <= limits.end; x++){
            section[j++] = arr[x];
        }
        sections.push_back(section);    
        
        i = limits.end+1;
    }
}

int main(){
    cout<<"ok\n";
    return 0;
}