#include <iostream> 
using namespace std; 
class fibonacci 
    { 
    	int a,b; 
    	public: 
    	fibonacci() 
    	{ 
    		a = 0; b = 1; 
    	} 
    	void series(int n) 
    	{ 
    		int i,next; 
    		cout << a << " " << b << " " ; 
    		for(i=1; i <= n-2; i++) 
    		{ 
    			next = a + b; 
    			cout << next << " " ; 
    			a = b; b = next; 
    		} 
    	} 
    }; 
int main() 
    { 
    	fibonacci obj1; 
    	int n; 
    	cout << "FIBONACCI SERIES " << endl ; 
    	cout << "Enter the number of digits: "; 
    	cin >> n; 
    	obj1.series(n); 
    } 