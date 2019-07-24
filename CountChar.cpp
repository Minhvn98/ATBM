#include<iostream>
using namespace std;
main(){
	int i;
	string s;
	cout << "Nhap chuoi s : "; getline(cin, s);
	int count[s.length()] = {0};
	for(i=0;i< s.length(); i++) count[s[i]]++; // thuc hien dem so lan xuat hien
	for(i=0;i< s.length();i++) // tien hanh xuat
       if(count[i]){
       		cout<<"ki tu " << i <<" xuat hien : " << count[i] << " lan.\n";
       		
	   }
    
	    
}
