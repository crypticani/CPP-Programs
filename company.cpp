#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class employee{
    public:
         int getMaxIndex(double amount[3]){
            int N = 3;
            int index;
            int max = amount[0];
            for(int i = 1; i < N; i++){
                if(max < amount[i]){
                    max = amount[i];
                    index = i;
                }
            }
            return index;
        }
};
class production: public employee{
    public:
        string empName[3] = {
            "Ram",
            "Shyam",
            "Mohan"
        };
        double salary[3] = {2343245, 243432, 45326};
        void getHighlyPaid(){
            int n = getMaxIndex(salary);
            cout<<"Highly Paid in Production Department: "<<empName[n]<<endl;
        }
        
};

class marketing{
    public:
        string empName[3] = {
            "Ram",
            "Shyam",
            "Mohan"
        };
        double salary[3] = {23432, 243432, 45326};
        
};
class finance{
    public:
        string empName[3] = {
            "Ram",
            "Shyam",
            "Mohan"
        };
        double salary[3] = {23432, 243432, 45326};
        
};
class sales{
    public:
        string empName[3] = {
            "Ram",
            "Shyam",
            "Mohan"
        };
        double salary[3] = {23432, 243432, 45326};
        
};

int main() {
    production p;
    // marketing m;
    // finance f;
    // sales s;
    p.getHighlyPaid();
}