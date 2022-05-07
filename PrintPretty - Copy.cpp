#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
//	cout << setiosflags(ios::uppercase);
//	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
//        cout <<setbase(16)<<showbase<<A<<endl;
cout << std::hex << std::showbase << A << endl;
        int count = 1;
        double d = B;
        while(d >= 1) {
        	count++;
        	d = d/10.0;
        	cout << d<< endl;
		}
		
		cout << (int)count << endl;
		
		
		
		

        
	}
	return 0;

}
