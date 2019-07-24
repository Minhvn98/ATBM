#include<iostream>

using namespace std;

int  x, y;

int kitu_so(char c){
	return c - 'A';	
}

char so_kitu(int n){
	return n + 'A';
}

//Ma hoa
string maHoa(string s, int k){
	for(int i = 0; i <= s.length(); i++){		
		x = kitu_so(s[i]);		
		y = (x + k) % 26;
		s[i] = so_kitu(y);
	}
	return s;
}


	//giai ma 
string giaiMa(string s, int k){

	for(int i = 0; i <= s.length(); i++){
		x = kitu_so(s[i]);
		y = (x - k + 26) % 26;
		s[i] = so_kitu(y);	
	}
	return s;
}
		
int main(){
	string s, s1;
	int k;
	cout << "Nhap chuoi : "; getline(cin, s);
	cout << "Nhap khoa K : "; cin >> k;	
	
	//ma hoa
	s = maHoa(s, k);
	cout << "Chuoi sau khi ma hoa : " << s << endl;

	//giai ma
//	s = giaiMa(s);
//	cout <<"Chuoi sau khi giai ma : " << s;

	
	//Be khoa Brute-force
	for(int k = 0; k <=25; k++){
		cout << "Khoa K : " << k <<endl;		
		cout << "Chuoi giai ma bang Brute-force : " << giaiMa(s, k) <<endl <<endl;

	}	
	
}
