#include <iostream> 
using namespace std;
class Point { 
	private: 
		int x; 
		int y; 
	public: 
		Point() { };
//
    friend bool operator>>(istream& is,Point& a){
        return (is>>a.x>>a.y)?true:false;
    }
    friend ostream& operator<<(ostream& os,Point& a){
        os<<a.x<<','<<a.y;
        return os;
    }

//
}; 
int main() 
{ 
 	Point p;
 	while(cin >> p) {
 		cout << p << endl;
	 }
	return 0;
}