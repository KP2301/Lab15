#include <iostream>
using namespace std;



template <typename T>
void swap(T d[], int x, int y){
	 T z = d[x] ;
	 d[x] = d[y];
	 d[y] = z;
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1; i < N ; i++)
	{
		for(int j = i; j > 0 && d[j] > d[j-1]; j--){
			swap(d,j - 1,j);
		}
			cout << "Pass " << i << ":";
			for(int a = 0; a < N; a++) cout << d[a] << " ";
			cout << endl;
		}
		
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

