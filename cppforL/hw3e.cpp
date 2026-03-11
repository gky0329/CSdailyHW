#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;
const int MAX = 110; 
class CHugeInt {
//
public:
    int nums[210]={0};
    CHugeInt(int a){
        int i=0;
        while(a){
            nums[i]=a%10;
            a/=10;
            ++i;
        }
    }
    CHugeInt(char* s){
        int n=strlen(s);
        for(int i=0;i<n;++i){
            nums[i]=s[n-1-i]-'0';
        }
    }
    void modify(){
        for(int i=0;i<209;++i){
            nums[i+1]+=nums[i]/10;
            nums[i]%=10;
        }
    }
    CHugeInt operator+(CHugeInt& other){
        CHugeInt temp(0);
        for(int i=0;i<210;++i){
            temp.nums[i]=nums[i]+other.nums[i];
        }
        temp.modify();
        return temp;
    }
    CHugeInt operator+(int n){
        CHugeInt temp(0);
        CHugeInt other(n);
        for(int i=0;i<210;++i){
            temp.nums[i]=nums[i]+other.nums[i];
        }
        temp.modify();
        return temp;
    }
    friend CHugeInt operator+(int n,CHugeInt& other){
        CHugeInt temp(0);
        CHugeInt self(n);
        for(int i=0;i<210;++i){
            temp.nums[i]=self.nums[i]+other.nums[i];
        }
        temp.modify();
        return temp;
    }
    CHugeInt operator+=(int n){
        CHugeInt other(n);
        for(int i=0;i<210;++i){
            nums[i]+=other.nums[i];
        }
        modify();
        return *this;
    }
    CHugeInt operator++(){
        nums[0]++;
        modify();
        return *this;
    }
    CHugeInt operator++(int){
        CHugeInt temp=*this;
        nums[0]++;
        modify();
        return temp;
    }
    friend ostream& operator<<(ostream& os,CHugeInt other){
        int i=209;
        while(i>=0&&other.nums[i]==0)--i;
        if(i==-1){
            os<<0;
            return os;
        }
        for(;i>=0;--i){
            os<<other.nums[i];
        }
        return os;
    }

//
};
int  main() 
{ 
	char s[210];
	int n;

	while (cin >> s >> n) {
		CHugeInt a(s);
		CHugeInt b(n);

		cout << a + b << endl;
		cout << n + a << endl;
		cout << a + n << endl;
		b += n;
		cout  << ++ b << endl;
		cout << b++ << endl;
		cout << b << endl;
	}
	return 0;
}