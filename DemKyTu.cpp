#include<iostream>
using namespace std;

int dem(string s, char c){
	int dem = 0;
	for(int i = 0; i < s.length(); i++){
		if(c == s[i])
			dem ++;
	}
	return dem;
}
main(){
//	string s,s1 = "";
//	cout<<"Nhap chuoi s : ";
//	getline(cin, s);
//	for(int i = 0; i < s.length(); i++){
//		for(int j = 0; j < s.length(); j++){
//			if(s[j] != s[i])
//				s1 += s[i];
//		}
//	}
//	cout << "S1 : " << s1 <<endl;
	
	
//	for(int i = 0; i < s.length(); i++){
//		cout<< "Ki tu '" << s[i] << "' xuat hien : " << dem(s, s[i]) <<" lan \n";
//	}

	string s;
	int dem  = 0;
	cout <<"Nhap chuoi s : ";
	getline(cin, s);
	for(int i =0; i < s.length(); i++){
		if(s[0] == s[i])
			dem ++;
	}
	cout<< "Ki tu dau tien cua s xuat hien : " << dem << "lan";
}
