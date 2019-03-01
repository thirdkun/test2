#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomTable() here.

void randomTable(){
	int x;
		srand(time(0));	
		for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
		 x= rand()%26+1;
		if(x==1) cout<<"A";
		else if(x==2)cout<<"B ";
		else if(x==3)cout<<"C ";
		else if(x==4)cout<<"D ";
		else if(x==5)cout<<"E ";
		else if(x==6)cout<<"F ";
		else if(x==7)cout<<"G ";
		else if(x==8)cout<<"H ";
		else if(x==9)cout<<"I ";
		else if(x==10)cout<<"J ";
		else if(x==11)cout<<"K ";
		else if(x==12)cout<<"L ";
		else if(x==13)cout<<"M ";
		else if(x==14)cout<<"N ";
		else if(x==15)cout<<"O ";
		else if(x==16)cout<<"P ";
		else if(x==17)cout<<"Q ";
		else if(x==18)cout<<"R ";
		else if(x==19)cout<<"S ";
		else if(x==20)cout<<"T ";
		else if(x==21)cout<<"U ";
		else if(x==22)cout<<"V ";
		else if(x==23)cout<<"W ";
		else if(x==24)cout<<"X ";
		else if(x==25)cout<<"Y ";
		else cout<<"Z ";
		
		}
		cout<<"\n";
		}
}
		




