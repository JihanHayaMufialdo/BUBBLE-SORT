// descending = besar ke kecil

#include <iostream>
using namespace std;
int main(){
	
	bool swapped;
	int temp;     //untuk menyimpan nilai sementara
	int IndexOfLastSortedElement = 0;
	
	cout << "Masukkan Jumlah Elemen : ";
	cin  >> IndexOfLastSortedElement;
	
	int array[IndexOfLastSortedElement];
	
	for(int i=0; i<IndexOfLastSortedElement; i++){
		cout << "Masukkan Elemen Ke " << i << " : ";
		cin  >> array[i];
	}
	
	do{
		swapped = false;
		
		for(int i=0; i<IndexOfLastSortedElement-1; i++){ // -1 karena index array tidak bisa diisi semua
			if(array[i]<array[i+1]){  //apabila bilangan ke-i lebih kecil daripada bilangan setelahnya
				
				temp       = array[i];
				array[i]   = array[i+1];
				array[i+1] = temp;
				
				swapped = true;
			}
		}
	} while(swapped);
	
	for(int i=0; i<IndexOfLastSortedElement; i++){
		cout << array[i] << " ";
	}
}
