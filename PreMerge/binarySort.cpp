#include<vector>
#include<iostream>
using namespace std;
int binarySearch(vector<int> &arr, int item, int low, int high)
{
    int mid;
    while(low < high){
        mid = low+((high - low)>>1);
        if (item < arr[mid]) high = mid-1;
        else if(item < arr[mid]) high = mid+1;
        else return mid;
    }
    return low;
}

void binary_insertion_sort(vector<int> &a,int start,int end)
{
    int i, loc, j, k, selected;
    for (i = start; i <= end; ++i)
    {
        j = i - 1;
        selected = a[i];
 
        // find location where selected should be inseretd
        loc = binarySearch(a, selected, 0, j);
 
        // Move all elements after location to create space
        while (j >= loc)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}
int main(){
    cout<<"ok\n";
    return 0;
}