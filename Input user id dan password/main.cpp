#include<iostream>
using namespace std;

int main() {
	string username;
	string password;
	cout<<"Please input username : ";cin>>username;
	cout<<"Please input username : ";cin>>password;
	if (username == "Rama") {
		if (password == "23.11.5854") {
			cout<<"Selamat datang !"<<endl;
		}else{
			cout<< "user id atau password tidak sesuai !"<<endl;
		}
	}else{
		cout <<"user id atau password tidak sesuai !"<<endl;
	}

	system("pause");

	return 0;
}
