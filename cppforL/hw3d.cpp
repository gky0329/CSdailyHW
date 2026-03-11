#include <iostream>
#include <cstring>
using namespace std;

class Array2 {
//
    int x=0,y=0;
    int** p=nullptr;
public:
    Array2(){}
    Array2(int x0,int y0):x(x0),y(y0){
        p=new int* [x];
        for(int i=0;i<x;++i){
            p[i]=new int[y];
        }
    }
    ~Array2(){
        for(int i=0;i<x;++i){
            delete[] p[i];
        }
        delete[] p;
    }
    void operator=(Array2& other){
        x=other.x,y=other.y;
        p=new int* [x];
        for(int i=0;i<x;++i){
            p[i]=new int[y];
        }
        for(int i=0;i<x;++i)
        for(int j=0;j<y;++j){
            p[i][j]=other.p[i][j];
        }
    }
    int* operator[](int i){
        return p[i];
    }
    int& operator()(int i,int j){
        return p[i][j];
    }

//
};

int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}