#include<iostream> 
using namespace std;
int main()
{
	int a,b,c,d;
	
	cout<< "Masukkan 4 bilangan bilangan bulat: "<<endl;
	cin >> a >> b >> c >> d;
	
	int terbesar= a;
	
	if (b > terbesar){
		terbesar=b;
	}
	if(c > terbesar){
		terbesar=c;
	}
	if (d>terbesar){
		terbesar=d;
	}
	cout<<"Bilangan terbesar adalah: "<< terbesar << endl;
	
	return 0;

}
