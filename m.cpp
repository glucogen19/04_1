#include<iostream>
using namespace std;

class TPen {
	public:
    string color;
};

int main(){
	cout << "What color is the UN flag?" << endl;
    TPen pen;
    pen.color = " #5b92e5";
    cout << "Color of the UN flag =" << pen.color << endl;
    return 0;
}