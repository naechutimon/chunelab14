#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    
    for(int i=1;i<N;i++){
        T num = d[i];
        int j = i-1;
        
        while (j >= 0 && d[j] < num){
            d[j + 1] = d[j];
            j--;
        }
        
        d[j + 1] = num;
        
        cout << "Pass " << i << ":";
        for (int k=0;k<N;k++){
            cout << d[k];       
            if (k < N - 1) cout << " ";
        }
        cout << "\n";
        
    }
}
