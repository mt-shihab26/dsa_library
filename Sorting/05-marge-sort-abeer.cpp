#include <bits/stdc++.h>
using namespace std;


/// not in place
/// takes extra O(n) memory
/// slower performance due to memory mang
/// fixed expected performance
/// stable
void mergeSort(int *ar, int st, int en){
    if(st >= en) return;
    int mid = (st + en) / 2;
    mergeSort(ar, st, mid); mergeSort(ar, mid + 1, en);

    int len = en - st + 1;
    int br[len];
    int lid = st, rid = mid + 1;

    for(int l = st, r = mid + 1, b = 0; b < len; b++){
        if(l == mid + 1) br[b] = ar[r++];
        else if(r == en + 1) br[b] = ar[l++];
        else if(ar[l] <= ar[r]) br[b] = ar[l++];
        else br[b] = ar[r++];
    }

    for(int i = 0, j = st; i < len; i++, j++) ar[j] = br[i];
}


/// in place sort
/// faster performance for average cases
/// not stable
/// requires no extra memory
void quickSort(int *ar, int st, int en){
    if(st >= en) return;

    int pivot = en;
    int pVal = ar[en];
    int id = st;
    while(id + 1 < pivot){
        if(ar[id] < pVal) id++;
        else{
            swap(ar[id], ar[pivot]);
            swap(ar[id], ar[--pivot]);
        }
    }
    if(id != pivot and ar[id] >= pivot) swap(ar[id], ar[pivot]);

    quickSort(ar, st, pivot - 1);
    quickSort(ar, pivot + 1, en);
}


int main() {
    
}
