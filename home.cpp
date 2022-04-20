#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <fstream>
using namespace std;

class L{
    public:
        int Id;
        string Book;
        string Price;
    friend class M;
};

class M{
    public:
        void d_l(L l, string b, string p, int s_t){
            l.Book = b;
            l.Price = p;
            vector<string> m_s;
            vector<string>::iterator itr;
            m_s.push_back(l.Book);
            m_s.push_back(l.Price);
            cout<<"Book: "<<b<<" | Price: $"<<p<<endl;
                if(s_t==1){
                    cout<<"-----------------------------------------------------"<<endl;
                    cout<<"                     UPLOAD:                         "<<endl;
                    cout<<"-----------------------------------------------------"<<endl;
                    ofstream b_m("b_s.txt", ios::app);
                    string b_, p_;
                    cout<<"please, Enter your book name: "; cin>>b_; b_m<<endl<<b_;
                    cout<<"please, Enter the price of pevious book: "; cin>>p_; b_m<<" "<<p_;
                    cout<<"---------------------------------------------------------"<<endl;
                    cout<<"Book: "<<b_<<" | Price: $"<<p_<<endl;
                }else if(s_t==2){
                    cout<<"-----------------------------------------------------"<<endl;
                    cout<<"                       BUY:                          "<<endl;
                    cout<<"-----------------------------------------------------"<<endl;
                    string b_b;
                    while(true) cout<<"please, Enter the book name you want to buy: "; cin>>b_b;
                    ifstream b_fs("b_s.txt");
                    vector<string> p_c;
                    vector<string>::iterator b_itr;
                        p_c.push_back(b_b);
                        for(b_itr=p_c.begin(); b_itr!=p_c.end(); b_itr++){
                            cout<<"your library: "<<*b_itr<<endl;
                        }
                }
        }
};