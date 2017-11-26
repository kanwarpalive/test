#include <iostream>
#include <array>
using namespace std;

int main(){
	
	cout<<"************************"<<endl;

	int kon[] = {23,3,46,21,40,6};
	int lez = sizeof(kon)/4;
	
	cout<<"size of array: "<<lez; //printing the array size

	for(int i=0;i>lez;i++){
		cout<<kon[i];
	}

	cout<<endl<<"************************"<<endl<<endl;


	return 0;
}

	
