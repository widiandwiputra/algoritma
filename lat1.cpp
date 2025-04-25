#include <iostream>
#include <string.h>
using namespace std;

main() {
	
	int n;
	cout<<"masukkan bilangan : ";cin>>n;
	if(n % 2 == 0){
		cout<<"masukkan bilangan genap"<<endl;
	}else{
		cout<<"masukkan biangan ganjil"<<endl;
	}
	return 0;
}
