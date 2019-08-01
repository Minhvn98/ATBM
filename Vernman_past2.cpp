#include<iostream>
using namespace std;

main(){
	string s, K;
	cout << "Nhap chuoi s : "; getline(cin, s);
	cout << "Nhap khoa K : "; getline(cin, K);
	
	//ma hoa 
	int j = 0;
	for(int i = 0; i < s.size(); i++){
		s[i] = s[i] ^ K[j];
		j++;
<<<<<<< HEAD:Vernman_past2.cpp
		if(j ==K.size()) j == 0;
=======
		if(j == K.size()) j == 0;
>>>>>>> f4d2f5b42c499f0f57712b6df4e07b3fa3c524a6:Vernman_past2.cpp
	}
	
	cout << "Chuoi ma hoa : " << s << endl;
	
	//giai ma 
	j = 0;
	for(int i = 0; i < s.size(); i++){
		s[i] = s[i] ^ K[j];
		j++;
		if(j == K.size()) j == 0;
	}
	
	cout << "Chuoi giai hoa : " << s;
	
	
}
