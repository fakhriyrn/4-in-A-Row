#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
//Titan(17) dan Fakhriy (27)

char map[9][9] = {

	' ','|',' ','|',' ','|',' ','|',' ',

	'-','|','-','|','-','|','-','|','-',

	' ','|',' ','|',' ','|',' ','|',' ',

	'-','|','-','|','-','|','-','|','-',

	' ','|',' ','|',' ','|',' ','|',' ',

	'-','|','-','|','-','|','-','|','-',

	' ','|',' ','|',' ','|',' ','|',' ',
	
	'-','|','-','|','-','|','-','|','-',

	' ','|',' ','|',' ','|',' ','|',' '
					
};

bool win=false;
bool playerturn=true;
int baris;


//Fungsi Memunculkan Array Map
void print(){
	system("CLS");
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cout << map[i][j];
		}
		cout << endl;
	}
	//cout << endl;
	cout << "========="<<endl;
	cout << "1|2|3|4|5";
}

//Fungsi giliran player
char player(){
	if(playerturn){
		return 'O';
	}
	else{
		return 'X';
	}
}

//Fungsi cek petak
int insert(int barisKeBerapa){
	int check = -2;
	//cout << map[check][barisKeBerapa];
	while(map[check+2][barisKeBerapa]==' '){
		map[check+2][barisKeBerapa] = player();
		map[check][barisKeBerapa] = ' ';
		check = check + 2;
		print();
	}
}


int main(){

	do{
		//system("CLS");
		print();
		cout << endl << endl << "Sekarang giliran: " << player() << endl << "Silahkan taruh bidak ";
		cin >> baris;
		switch(baris){
			case 1:
				insert(0);
				break;
			case 2:
				insert(2);
				break;
			case 3:
				insert(4);
				break;
			case 4:
				insert(6);
				break;
			case 5:
				insert(8);
				break;
			default:
				cout << endl << "ERROR, bukan angka baris";
				sleep(1);
				break;
		}
		playerturn = !playerturn;
		
//Kondisi WinLose Belum Jadi		
		
		
	}while(win == false);
	
}
