#include <iostream>

using namespace std;
class segi{
	
protected:
	int alas, tinggi;
public:
	
void set (int a, int t){
	alas=a; tinggi=t;
	}
};

class cetak{
	
public:
void output (int i){
	cout << i << endl;	
	}
};

class Persegi: public segi, public cetak{
public:
	int hit (){
		return (alas * tinggi);
	}
};
class Segitiga : public segi, public cetak{
public:
	int hit (){
		return (alas * tinggi / 2);
	}
};
int main (){
	Persegi segiempat;
	Segitiga segitiga;
	segiempat.set (10,5);
	segitiga.set (10,5);
	cout<<"Luas persegi Adalah ";
	segiempat.output (segiempat.hit());
	cout<<"Luas segitiga Adalah " ;
	segitiga.output (segitiga.hit());
	cin.get();
}	
