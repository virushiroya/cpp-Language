#include<iostream>

using namespace std;

class person
{
    private:
        string name, city;
        int age;

    public:
        void setnamecity(string n, string c)
        {
            name = n;
            city = c;
        }
        
        void setage(int a)
        {
            age = a;
        }


        void getname()
        {
            cout <<"name "<< name;
            cin >>name;
        }
        void getcity()
        {
            cout << "city  "  << city << endl ;
            cin >>city;
        }

        void getage()
        {
            cout << "age  " << age <<"\n";
        }
        

};

int main()
{
    int a;
    string b,c;

    person p1;
    p1.setage(17);
    p1.setnamecity("viro", "Surat");

    p1.getage();
    p1.getcity();
    p1.getname();
    return 0;
}