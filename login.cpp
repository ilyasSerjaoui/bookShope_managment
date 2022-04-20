#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include "home.cpp"
using namespace std;

void select(string name, string password){
    
                    cout<<"Verify...."<<endl;
                    cout<<"Hi, "<<name<<" Welcome to book Shope -------------------------------------------"<<endl;
                    cout<<endl;
                    
                    cout<<"-----------------------------------------------------"<<endl;
                    cout<<"  write 1: for publish your book.                    "<<endl;
                    cout<<"-----------------------------------------------------"<<endl;
                    cout<<"  write 2: for purshase any book.                    "<<endl;
                    cout<<"-----------------------------------------------------"<<endl;
                    int s_t;
                    //
                    ifstream fs_b_s;
                    fs_b_s.open("b_s.txt");
                    L l_; M m_;
                    string b, p;
                    while(fs_b_s >> b >> p){ 
                        m_.d_l(l_, b, p, s_t);
                    }
                    cout<<"What want to do: "; cin>>s_t;
                    if(s_t==1) m_.d_l(l_, b, p, s_t);
                    else if(s_t==2) m_.d_l(l_, b, p, s_t);
                    else m_.d_l(l_, b, p, s_t);
            
}

int main(){
    string name, pass;

    cout<<"first name: "; cin>>name;
    cout<<"password: "; cin>>pass;

    select(name, pass);
    return 0;
}