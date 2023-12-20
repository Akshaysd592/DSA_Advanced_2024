#include <bits/stdc++.h>
using namespace std;
// -------------- Friend class , friend function , getter and setter --------------------

class parent
{
private:
    int id;

protected:
    string username;
    string password;

public:
    int age;
    int salary;

    parent()
    {                 // constructor
        this->id = 1; // for this use -> arrow
        this->username = "Akshay";
        this->password = "Dhobale";
        this->age = 21;
        this->salary = 100000;
    }

    void setterprivate(int data)
    {
        this->id = data; // assigning value to private id
    }

    void getterprivate()
    {
        cout << "The age of parents is " << this->id;
    }

    friend class children;                   // friend class which can access both private and protected also
    friend void showparentdata(parent &obj); // friend function
};

// this is a friend class
class children
{
public:
    void showdata(parent &obj)
    {
        cout << "Accessing private and protected data from parent class" << endl;
        cout << "Id is " << obj.id << endl;
        cout << "Username : " << obj.username << " password " << obj.password << endl;
    }
};

// This is a friend function
void showparentdata(parent &obj)
{
    cout << "Accessing private and protected data from parent class" << endl;
    cout << "Id is " << obj.id << endl;
    cout << "Username : " << obj.username << " password " << obj.password << endl;
}

int main()
{
    parent parent1;
    children child1;
    // cout<<parent1.id; // private  data not accessible
    child1.showdata(parent1); // friend class example

    showparentdata(parent1); // friend function example

    parent1.setterprivate(5); // setter 
    parent1.getterprivate(); // getter

    return 0;
}