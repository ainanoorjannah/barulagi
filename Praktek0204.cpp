#include <iostream>
using namespace std;

int main(){
	double luasRumah = 42;
	double lantaiP = 193*1215;
	double luas1Box = lantaiP*8/1000000;
	cout << "luas rumah :"<<luasRumah<<"m2"<<endl;
	cout << "luas 1 box parket :"<<luas1Box<<"m2"<<endl;
	double jumlahBoxP,biayaP,biayaPG,totalB;
	jumlahBoxP=luasRumah/luas1Box;
	cout <<"jumlah box parket:"<<jumlahBoxP<<endl;
	biayaP=jumlahBoxP*500;
	cout <<"Biaya parket(Rp):"<<biayaP<<endl;
	biayaPG=luasRumah*20;
	cout <<"Biaya pasang(Rp):"<<biayaPG<<endl;
	totalB= biayaP+biayaPG;
	cout<<"Total Biaya(Rp):"<<totalB<<endl;
	
}


