#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class Agol{
private:
	int deg;
	int minn;
	int sec;
public:
	Agol(){

	}
Agol(int deg, int minn, int sec){
	this->deg=deg;
	this->minn=minn;
	this->sec=sec;
}
~Agol(){

}
void setDeg(int const deg){
	this->deg=deg;
}
void setMin(int const minn){
	this->minn=minn;
}
void setSec(int const sec){
	this->sec=sec;
}
int const getDeg(){
	return deg;
}
int const getMin(){
	return minn;
}
int const getSec(){
	return sec;
}
int AgolVoSekunda(){
	return (deg*3600)+(minn*60)+sec;
}
};
bool proveri(int deg, int minn, int sec)
{
	if(deg>360 && minn>=60 && sec>=60)
	{
		return 0;
	}
	else
		return 1;
}
int main()
{
	Agol a1;
	int deg, minn, sec;
	cin>>deg>>minn>>sec;
	if(proveri(deg, minn, sec)){
		a1.setDeg(deg);
		a1.setMin(minn);
		a1.setSec(sec);
		cout<<a1.AgolVoSekunda();
	}
	else
		cout<<"Nevalidno vneseni atributi."<<endl;
	return 0;
}
