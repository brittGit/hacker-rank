#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    int standard;
    string first_name;
    string last_name;

    void setFirstName(string first_name){
        if(first_name.size() <= 50)
        this->first_name = first_name;
    }

    string getFirstName(){
        return this->first_name;
    }
    void setLastName(string last_name){
        if(last_name.size() <= 50)
        this->last_name = last_name;
    }

    string getLastName(){
        return this->last_name;
    }
    private:
    
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}