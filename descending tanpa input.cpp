// descending = besar ke kecil

#include <iostream>
using namespace std;
int main(){
	
	int array[7] = {7,4,8,5,2,9,1};
	bool swapped;
	int temp; //untuk menyimpan nilai sementara
	int IndexOfLastSortedElement = 6;
	
	do{
		swapped = false;
		
		for(int i=0; i<IndexOfLastSortedElement; i++){
			if(array[i]<array[i+1]){  //apabila bilangan ke-i lebih kecil daripada bilangan setelahnya
				
				temp       = array[i];
				array[i]   = array[i+1];
				array[i+1] = temp;
				
				swapped = true;
			}
		}
	} while(swapped);
	
	for(int i=0; i<7 ; i++){
		cout << array[i] << " ";
	}
}
