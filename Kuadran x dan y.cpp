#include<iostream>
using namespace std;

int main(){
int x,y;

cout<<"Menentukan kuadran dari input koordinat X dan Y"<<endl;
cout<<"ITA LESTARI"<<endl;
cout<<"311810183"<<endl;
cout<<"masukan nilai X"<<endl;
cin>>x;
cout<<"masukan nilai Y"<<endl;
cin>>y;

if(x>0 && y>0)
    cout<<"Kuadran 1"<<endl;
    else if (x<0 && y>0)
        cout<<"Kuadran 2"<<endl;
    else if(x<0 && y<0)
        cout<<"Kuadran 3"<<endl;
    else
        cout<<"Kuadran 4"<<endl;
    return 0;
}
