#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class workshop
{
    string name,address,car_no;
    long long int contact;int zip;
    double bill=0;
public:
    void display()
    {
        ifstream f1;
        f1.open("WELCOME.txt");
        char ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
    }
    void in()
    {
        ifstream f1;
        cout<<"\n\nEnter your details:\n";
    char ch='n';
    while(ch=='n'||ch=='N')
    {
    cout<<"CAR NUMBER:";
    getline(cin,car_no);
    cout<<"NAME:";
    getline(cin ,name);
    cout<<"ADDRESS:";
    getline(cin ,address);
    cout<<"CONTACT NO.";
    cin>>contact;
    cout<<"ZIP-CODE:";
    cin>>zip;
    cout<<"\nEnter (Y/y) to confirm your details or (N/n) to enter again.\n";
    cin>>ch;
    fflush(stdin);
    }
    cout<<endl;
    ofstream f2;
    ofstream ff;
    ff.open("Record.txt",ios::app);
    f2.open("INFO.txt");
    f2<<car_no<<endl<<"Name:"<<name<<endl<<"Address:"<<address<<endl<<"Contact No.:"<<contact<<endl<<"Zip-Code:"<<zip<<endl<<endl;
    ff<<car_no<<endl<<"Name:"<<name<<endl<<"Address:"<<address<<endl<<"Contact No.:"<<contact<<endl<<"Zip-Code:"<<zip<<endl<<endl;
    f2.close();
    ff.close();
    }
    void process();
    void generate_bill();
};
void workshop::process()
{
    ofstream b2;
    b2.open("BILL.txt");
    b2<<"----------------------------------\n\t\tBILL\n----------------------------------\n";
    b2<<"Car Number:"<<car_no<<endl<<"Name:"<<name<<endl<<"Address:"<<address<<endl<<"Contact No.:"<<contact<<endl<<"Zip-Code:"<<zip<<endl<<"Services availed:"<<endl;
    int n=1;
        char chh='y';
    while(chh=='y'||chh=='Y')
    {
    ifstream f1;
    f1.open("SERVICES.txt");
    char ch=f1.get();
    while(ch!=EOF)
    {
        cout<<ch;
        ch=f1.get();
    }
    f1.close();
    cout<<"\n\nEnter your choice:";
    int choice=0;
    while(1)
    {
        cin>>choice;
        if(choice<1 || choice>7)
            cout<<"INVALID CHOICE.\nEnter the value again:";
        else
            break;
    }
    switch(choice)
    {
    case 1:
        {
        cout<<"Select car make:\n";
        f1.open("CARMAKE.txt");
        ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
        int case1choice1=0;
        while(1)
        {
            cin>>case1choice1;
            if(case1choice1<1 || case1choice1>7)
            cout<<"INVALID CHOICE.\nEnter the value again:";
        else
            break;
        }
        cout<<"Select fuel type:\n";
        f1.open("FUELTYPE.txt");
        ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
        int case1choice2;
        while(1)
        {
            cin>>case1choice2;
            if(case1choice2<1 || case1choice2>3)
            cout<<"INVALID CHOICE.\nEnter the value again:";
        else
            break;
        }
        if((case1choice1==2||case1choice1==1||case1choice1==3)&&(case1choice2==1))
        {
            f1.open("REGULAR1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=1800;
                    b2<<n<<".)Express Car Service:Rs.1800"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2400;
                    b2<<n<<".)Standard Car Service:Rs.2400"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3500;
                    b2<<n<<".)Standard+ Car Service:Rs.3500"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case1choice1==2||case1choice1==1||case1choice1==3)&&(case1choice2==2))
        {
            f1.open("REGULAR2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2000;
                    b2<<n<<".)Express Car Service:Rs.2000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2600;
                    b2<<n<<".)Standard Car Service:Rs.2600"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3700;
                    b2<<n<<".)Standard+ Car Service:Rs.3700"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case1choice1==2||case1choice1==1||case1choice1==3)&&(case1choice2==3))
        {
            f1.open("REGULAR3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2200;
                     b2<<n<<".)Express Car Service:Rs.2200"<<endl;
                     n++;
                    break;
                 }
            else if(x==2)
                {
                    bill+=2800;
                    b2<<n<<".)Standard Car Service:Rs.2800"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3800;
                    b2<<n<<".)Standard+ Car Service:Rs.3800"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case1choice1==4||case1choice1==5||case1choice1==6)&&(case1choice2==1))
        {
            f1.open("REGULAR1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=1800;
                    b2<<n<<".)Express Car Service:Rs.1800"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2400;
                    b2<<n<<".)Standard Car Service:Rs.2400"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3500;
                    b2<<n<<".)Standard+ Car Service:Rs.3500"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case1choice1==4||case1choice1==5||case1choice1==6)&&(case1choice2==2))
        {
            f1.open("REGULAR2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2000;
                    b2<<n<<".)Express Car Service:Rs.2000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2600;
                    b2<<n<<".)Standard Car Service:Rs.2600"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3700; b2<<n<<".)Standard+ Car Service:Rs.3700"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case1choice1==4||case1choice1==5||case1choice1==6)&&(case1choice2==3))
        {
            f1.open("REGULAR3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2200;
                    b2<<n<<".)Express Car Service:Rs.2200"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2800;
                    b2<<n<<".)Standard Car Service:Rs.2800"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3800;
                    b2<<n<<".)Standard+ Car Service:Rs.3800"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case1choice1==7)&&(case1choice2==1))
        {
            f1.open("REGULAR1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=1800;
                    b2<<n<<".)Express Car Service:Rs.1800"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2400;
                    b2<<n<<".)Standard Car Service:Rs.2400"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3500;
                    b2<<n<<".)Standard+ Car Service:Rs.3500"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case1choice1==7)&&(case1choice2==2))
        {
            f1.open("REGULAR2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2000;
                    b2<<n<<".)Express Car Service:Rs.2000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2600;
                    b2<<n<<".)Standard Car Service:Rs.2600"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3700;
                    b2<<n<<".)Standard+ Car Service:Rs.3700"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case1choice1==7)&&(case1choice2==3))
        {
            f1.open("REGULAR3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2200;
                    b2<<n<<".)Express Car Service:Rs.2200"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=2800;
                    b2<<n<<".)Standard Car Service:Rs.2800"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=3800;
                    b2<<n<<".)Standard+ Car Service:Rs.3800"<<endl;
                    n++;
                    break;
                }
            }
        }
        break;
        }//end case 1
    case 2:
        {
        cout<<"Select car make:\n";
        f1.open("CARMAKE.txt");
        ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
        int case2choice1=0;
        while(1)
        {
            cin>>case2choice1;
            if(case2choice1<1 || case2choice1>7)
            cout<<"INVALID CHOICE.\nEnter the value again:";
        else
            break;
        }
        cout<<"Select fuel type:\n";
        f1.open("FUELTYPE.txt");
        ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
        int case2choice2;
        while(1)
        {
            cin>>case2choice2;
            if(case2choice2<1 || case2choice2>3)
            cout<<"INVALID CHOICE.\nEnter the value again:";
        else
            break;
        }
        if((case2choice1==2||case2choice1==1||case2choice1==3)&&(case2choice2==1))
        {
            f1.open("WASHING1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2900;
                    b2<<n<<".)Complete Car Cleaning:Rs.2900"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1500;
                    b2<<n<<".)Interior Car Cleaning:Rs.1500"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=900;
                    b2<<n<<".)Quick Car Wash:Rs.900"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case2choice1==2||case2choice1==1||case2choice1==3)&&(case2choice2==2))
        {
            f1.open("WASHING2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2700;
                    b2<<n<<".)Complete Car Wash:Rs.2700"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1400;
                    b2<<n<<".)Interior Car Wash:Rs.1400"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=1000;
                    b2<<n<<".)Quick Car Wash:Rs.1000"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case2choice1==2||case2choice1==1||case2choice1==3)&&(case2choice2==3))
        {
            f1.open("WASHING3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=3000;
                    b2<<n<<".)Complete Car Wash:Rs.3000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1800;
                    b2<<n<<".)Interior Car Wash:Rs.1800"<<endl; n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=1100;
                    b2<<n<<".)Quick Car Wash:Rs.1100"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case2choice1==4||case2choice1==5||case2choice1==6)&&(case2choice2==1))
        {
            f1.open("WASHING1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2900;
                    b2<<n<<".)Complete Car Wash:Rs.2900"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1500;
                    b2<<n<<".)Interior Car Wash:Rs.1500"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=900;
                    b2<<n<<".)Quick Car Wash:Rs.900"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case2choice1==4||case2choice1==5||case2choice1==6)&&(case2choice2==2))
        {
            f1.open("WASHING2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2700;
                    b2<<n<<".)Complete Car Wash:Rs.900"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1400;
                    b2<<n<<".)Interior Car Wash:Rs.1400"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=1000;
                    b2<<n<<".)Quick Car Wash:Rs.1000"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case2choice1==4||case2choice1==5||case2choice1==6)&&(case2choice2==3))
        {
            f1.open("WASHING3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=3000;
                    b2<<n<<".)Complete Car Wash:Rs.3000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1800;
                    b2<<n<<".)Interior Car Wash:Rs.1800"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=1100;
                    b2<<n<<".)Quick Car Wash:Rs.1100"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case2choice1==7)&&(case2choice2==1))
        {
            f1.open("WASHING1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2900;
                    b2<<n<<".)Complete Car Wash:Rs.2900"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1500;
                    b2<<n<<".)Interior Car Wash:Rs.1500"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=900;
                    b2<<n<<".)Quick Car Wash:Rs.900"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case2choice1==7)&&(case2choice2==2))
        {
            f1.open("WASHING2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Complete Cleaning,2 for Interior Cleaning,3 for Quick Wash:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=2700;
                    b2<<n<<".)Complete Car Wash:Rs.2700"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1400;
                    b2<<n<<".)Interior Car Wash:Rs.1400"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=1000;
                    b2<<n<<".)Quick Car Wash:Rs.1000"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case2choice1==7)&&(case2choice2==3))
        {
            f1.open("WASHING3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Express Service,2 for Standard Service,3 for Standard+ Service:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=3000;
                    b2<<n<<".)Complete Car Wash:Rs.3000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1800;
                    b2<<n<<".)Interior Car Wash:Rs.1800"<<endl;
                    n++;
                    break;
                }
            else if(x==3)
                {
                    bill+=1100;
                    b2<<n<<".)Quick Car Wash:Rs.1100"<<endl;
                    n++;
                    break;
                }
            }
        }
        break;
        }//end case 2
    case 3:
        {
        cout<<"Select car make:\n";
        f1.open("CARMAKE.txt");
        ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
        int case3choice1=0;
        while(1)
        {
            cin>>case3choice1;
            if(case3choice1<1 || case3choice1>7)
            cout<<"INVALID CHOICE.\nEnter the value again:";
        else
            break;
        }
        cout<<"Select fuel type:\n";
        f1.open("FUELTYPE.txt");
        ch=f1.get();
        while(ch!=EOF)
        {
            cout<<ch;
            ch=f1.get();
        }
        f1.close();
        int case3choice2;
        while(1)
        {
            cin>>case3choice2;
            if(case3choice2<1 || case3choice2>3)
            cout<<"INVALID CHOICE.\nEnter the value again:";
        else
            break;
        }
        if((case3choice1==2||case3choice1==1||case3choice1==3)&&(case3choice2==1))
        {
            f1.open("WHEEL1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=800;
                    b2<<n<<".)Wheels Alignment:Rs.800"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1200;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1200"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case3choice1==2||case3choice1==1||case3choice1==3)&&(case3choice2==2))
        {
            f1.open("WHEEL2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=1000;
                    b2<<n<<".)Wheels Alignment:Rs.1000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1400;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1400"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case3choice1==2||case3choice1==1||case3choice1==3)&&(case3choice2==3))
        {
            f1.open("WHEEL3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=900;
                    b2<<n<<".)Wheels Alignment:Rs.900"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1300;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1300"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case3choice1==4||case3choice1==5||case3choice1==6)&&(case3choice2==1))
        {
            f1.open("WHEEL1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=800;
                    b2<<n<<".)Wheels Alignment:Rs.800"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1200;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1200"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case3choice1==4||case3choice1==5||case3choice1==6)&&(case3choice2==2))
        {
            f1.open("WHEEL2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=1000;
                    b2<<n<<".)Wheels Alignment:Rs.1000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1400;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1400"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case3choice1==4||case3choice1==5||case3choice1==6)&&(case3choice2==3))
        {
            f1.open("WHEEL3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=900;
                    b2<<n<<".)Wheels Alignment:Rs.900"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1300;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1300"<<endl;
                    n++;
                    break;
                }
            }
        }
        else if((case3choice1==7)&&(case3choice2==1))
        {
            f1.open("WHEEL1.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=800;
                    b2<<n<<".)Wheels Alignment:Rs.800"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1200;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1200"<<endl;
                    n++;
                    break;
                }
            }
        }
           else if((case3choice1==7)&&(case3choice2==2))
        {
            f1.open("WHEEL2.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=1000;
                    b2<<n<<".)Wheels Alignment:Rs.1000"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1400;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1400"<<endl;
                    n++;
                    break;
                }
        }
        }
        else if((case3choice1==7)&&(case3choice2==3))
        {
            f1.open("WHEEL3.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Alignment,2 for Balancing & Alignment:";
            int x;
            while(1)
            {
            cin>>x;
            if(x<1 || x>3)
                cout<<"Invalid Input!! Enter again:";
            else if(x==1)
                {
                    bill+=900;
                    b2<<n<<".)Wheels Alignment:Rs.900"<<endl;
                    n++;
                    break;
                }
            else if(x==2)
                {
                    bill+=1300;
                    b2<<n<<".)Wheels Balancing & Alignment:Rs.1300"<<endl;
                    n++;
                    break;
                }
            }
        }
            break;
        }//end case 3
    case 4:
        {
          f1.open("AC.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for AC Servicing:";
            int x;
            char ch='y';
            while(ch=='y')
            {
            cin>>x;
            if(x<1 || x>1)
               { cout<<"Invalid Input!! Press y to enter again or x to cancel:"; cin>>ch; }
            else if(x==1)
                {
                    bill+=5000;
                    b2<<n<<".)AC Servicing:Rs.5000"<<endl;
                    n++;
                    break;
                }
            }
            break;
        }//end case 4
            case 5:
        {
          f1.open("BRAKES.txt");
            ch=f1.get();
            while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<"\nEnter 1 for Brakes Servicing:";
            int x;
            char ch='y';
            while(ch=='y')
            {
            cin>>x;
            if(x<1 || x>1)
               { cout<<"Invalid Input!! Press y to enter again or x to cancel:"; cin>>ch; }
            else if(x==1)
                {
                    bill+=1500;
                    b2<<n<<".)Brakes Service:Rs.1500"<<endl;
                    n++;
                    break;
                }
            }
            break;
        }//end case 5
            case 6:
                {
                    ifstream fz;string str;
    fz.open("Record.txt");
    char x=fz.get();
    while(x!=EOF)
       {
        x=fz.get();
        str+=x;}
        fz.close();
    string name;
    cout<<"Enter Car Number:";
    fflush(stdin);
    getline(cin,name);
    //cin>>name;
   int ff=str.find(name);
if(ff==-1)
  {
    cout<<"No Records Found..\n";
               exit(1); }
else{
    for(int i=ff;;i++)
    {
        if((str[i]=='\n'&&str[i+1]=='\n')||str[i]==EOF)
            break;
        else
            cout<<str[i];
    }
    cout<<endl;
    cout<<"-----------------------------------------------------------------Thank You!!-------------------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------------------Have a Nice Day------------------------------------------------------------";
    exit(1);
}
                }//end case 6
            case 7:
            {
                ifstream f1;
            f1.open("BILL.txt");
        char ch=f1.get();
        while(ch!=EOF)
            {
                cout<<ch;
                ch=f1.get();
            }
            f1.close();
            cout<<endl;
    cout<<"-----------------------------------------------------------------Thank You!!-------------------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------------------Have a Nice Day------------------------------------------------------------";
        exit(1);
            }
}//end switch
        cout<<"Press (y/Y) to avail more services or press (g/G) to generate bill:";
        cin>>chh;
        cout<<endl<<endl;
}//end while
if(bill>10000)
{
    b2<<"Total Bill:Rs."<<bill;
    b2<<endl<<"Discount:10%"<<endl<<"----------------------------------------"<<endl;
    b2<<"Final amount to be paid:Rs."<<(0.9*bill)<<endl<<"----------------------------------------";
    b2.close();
}
else
{
    b2<<"Total Bill:Rs."<<bill;
    b2<<endl<<"Discount:0%(10% for amounts greater than Rs.10000)"<<endl<<"----------------------------------"<<endl;
    b2<<"Final amount to be paid:Rs."<<bill<<endl<<"----------------------------------";
    b2.close();
}
}//end process()
void workshop::generate_bill()
{
    ifstream f1;
    f1.open("BILL.txt");
    char ch=f1.get();
    while(ch!=EOF)
    {
        cout<<ch;
        ch=f1.get();
    }
    f1.close();
}
int main()
{
    workshop w1;
    w1.display();
    w1.in();
    w1.process();
    w1.generate_bill();
    cout<<endl;
    cout<<"-----------------------------------------------------------------Thank You!!-------------------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------------------Have a Nice Day------------------------------------------------------------";
    getch();
}
