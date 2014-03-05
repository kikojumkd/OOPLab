#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class Krug{
private:
	float radius;
	const float Pi;
public:
    Krug(){
    }
	Krug(float radius){
		this->radius=radius;
	}
~Krug(){

}
void setRadius(int const radius){
	this->radius=radius;
}
float const getRadius(){
	return radius;
}
float Plostina(){
	return radius*radius*3.14;
}
float Perimetar(){
	return 2*radius*3.14;
}
};
int main(){
	Krug k;
	float radius;
	cin>>radius;
	k.setRadius(radius);
	cout<<k.Perimetar()<<endl;
	cout<<k.Plostina()<<endl;
	return 0;
}
