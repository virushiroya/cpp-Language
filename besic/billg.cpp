#include <iostream>

using namespace std;

class bill
{
protected:
    string name, number;

public:
    void coustmor()
    {
        cout << "--------shiroya soup--------\n"
             << "\n";
        cout << "Enter a Name of coustmor :";
        cin >> name;
        cout << "Enter a Number a coustmor :";
        cin >> number;
        cout << "---------------------------------------" << endl;
    }
    void showinformation()
    {
        
    }
};
class Show_bill : public bill
{
protected:
    int gst, dis, netbill, billamt = 0;
    int bill = 0, qty;

    string siteam[5];

public:
    int shiroya1()
    {
        cout << "\n Enter a Qunatity :";
        cin >> qty;
        siteam[0] = "Lauki Soup = 200";
        return bill = bill + qty * 200;
    }
    int shiroya2()
    {
        cout << "\n Enter a Qunatity :";
        cin >> qty;
        siteam[1] = "Manchow Soup= 100";
        return bill = bill + qty * 100;
    }
    int shiroya3()
    {
        cout << "\n Enter a Qunatity :";
        cin >> qty;
        siteam[2] = "Tomato Carrot Soup = 170";
        return bill = bill + qty * 170;
    }
    int shiroya4()
    {
        cout << "\n Enter a Qunatity :";
        cin >> qty;
        siteam[3] = "Hot And Sour Soup = 150";
        return bill = bill + qty * 150;
    }
    int shiroya5()
    {
        cout << "\n Enter a Qunatity :";
        cin >> qty;
        siteam[4] = "Lemon Rasam = 150";
        return bill = bill + qty * 150;
    }
    int shiroya6()
    {
        cout << "\n Enter a Qunatity :";
        cin >> qty;
        siteam[4] = "MINESTRONE SOUP= 300";
        return bill = bill + qty * 300;
    }
    int Show_Bill_Amt()
    {

        return billamt = billamt + bill;
    }
    int Show_disc()
    {
        if (billamt > 500)
        {
            return dis = (billamt * 10) / 100;
        }

        else
        {
            return dis = 0;
        }
    }
    int Show_GST()
    {
        return gst = (billamt * 18) / 100;
    }
    int Show_Net_bill()
    {
        return netbill = billamt + gst - dis;
    }
    void Show_Net_Bill()
    {
        cout << "\n-------------------------------------------------------" << endl;
        cout<<"                 shiroya soup pvt. Ltd....                   "<< endl;
        cout<<"                  Plot No 3, jakatnaka,                      "<< endl;
        cout<<"                      Surat-395006                          "<< endl;
        cout<<"                  Customer Order Receipt                   "<< endl;
        cout<<"                   phone no : 7202865162                 "<< endl;
        cout << "\n-------------------------------------------------------" << endl;
        cout <<  "\n   Contact Name       : " << name << endl;       
        cout <<  "   Contact Number     : " << number << endl;
        Show_bill_Items();
        cout << "\n TOTAL ORDER PRICE  : " << Show_Bill_Amt() << endl;
        cout << " GST                : " << Show_GST();
        cout << "\n DISCOUNT           : " << Show_disc();
        cout << "\n----------------------------------------------------" << endl;
        cout << " TOTAL PAY BIL      : " << Show_Net_bill();
        cout << "\n --------Please give that much rupees----------- " << endl;
        cout << "-------------------THANK YOU OF VISIT----------------" << endl;
    }
    void Show_bill_Items()
    {

        for (int i = 0; i < 5; i++)
        {
            if (!siteam[i].empty())
            {
                cout << "\n\t " << i + 1 << ":" << siteam[i] << endl;
            }
        }
    }
};

int main()
{
    Show_bill a;

    a.coustmor();

    cout << "\n\t SHIROYA SOUP MENU  \n";
    cout << "-----------------------------------------------\n";
    cout << "\tIteam"
         << "\t\t\t  Rate"
         << "\n"
         << "-----------------------------------------------\n";
    cout << "1."
         << "Lauki Soup"
         << "\t\t\t  200/-"
         << "\n";
    cout << "2."
         << "Manchow Soup"
         << "\t\t\t  100/-"
         << "\n";
    cout << "3."
         << "Tomato Carrot Soup"
         << "\t\t  100/-"
         << "\n";
    cout << "4."
         << "Hot And Sour Soup"
         << "\t\t  200/-"
         << "\n";
    cout << "5."
         << "Lemon Rasam"
         << "\t\t\t  150/-"
         << "\n";
    cout << "6."
         << "MINESTRONE SOUP"
         << "\t\t  300/-"
         << "\n";

    int shiroya = 0;

   do
    {
        cout << "----------Select Iteam----------"
             << "\n";
        cin >> shiroya;

        switch (shiroya)
        {
        case 1:
            a.shiroya1();
            break;

        case 2:
            a.shiroya2();
            break;

        case 3:
            a.shiroya3();
            break;

        case 4:
            a.shiroya4();
            break;

        case 5:
            a.shiroya5();
            break;

        case 6:
            a.shiroya6();
            break;    

        case 0:
            break;

        default:
            cout << "YOU ENTER WORNG ITEM";
        }

    } 
    while (shiroya != 0);
    a.showinformation();
    a.Show_Net_Bill();
}