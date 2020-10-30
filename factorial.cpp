#include<iostream>
using namespace std;
	int i=1;
class factorial{
	public:
		;
		void calculate(int n){
			if (n==1)
			cout<<i;
			else{
				i*=n;
				calculate(n-1);
			}
		}
};
main(){
	factorial f1;
	int val;

	cin>>val;
	f1.calculate(val);
}
