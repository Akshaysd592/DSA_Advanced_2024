#include <bits/stdc++.h>
using namespace std;

// ----------------------  Class intro revise ----------------

class Farm {
    public:
    int area,pets,size;

    Farm(int area,int pets=0,int size=0){
        this->area = area;
        this->pets = pets;
        this->size = size;
    }

};

int main(){

    Farm obj(20,2,200);
    cout<<"Area is "<< obj.area<<endl;
    cout<<"pets in farm is "<< obj.pets<<endl;
    return 0;
}




