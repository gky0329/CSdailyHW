#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
private:
    int grades[4];
    double avr;
    string others;
public:
    void input(){
        others.clear();
        int n=3;
        while(n){
            char temp;
            temp=cin.get();
            others+=temp;
            if(temp==',') n--;
        }
        for(int i=0;i<4;++i){
            cin>>grades[i];
            cin.ignore();
        }
    }
    void calculate(){
        avr=0;
        for(int i=0;i<4;++i){
            avr+=grades[i];
        }
        avr/=4;
    }
    void output(){
        cout<<others<<avr;
    }
};

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}