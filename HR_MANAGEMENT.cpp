#include<iostream>
#include<cstdlib>
using namespace std;


class company
{
    public:
    string name;
    int date;

    void getData()
    {
       cout<<"ENTER NAME OF COMPANY:"<<endl;
       cin>>name;
       cout<<"ENTER DATE OF JOINING:"<<endl;
       cin>>date;
    }

    void setData()
    {
        cout<<"NAME OF COMPANY:"<<name<<endl<<"DATE OF JOINING:"<<date<<endl;
    }   
};


class employee:public company
{

    protected:
    float salary;

    public:
    string Emp_name;
    int EMP_id;
    

    void getDetails()
    {
        cout<<"ENTER YOUR NAME:"<<endl;
        cin>>Emp_name;
        
        cout<<"ENTER YOUR ID:"<<endl;
        cin>>EMP_id;
        
        cout<<"ENTER YOUR SALARY:"<<endl;
        cin>>salary;
        
    }


    void display_data()
    {
        cout<<"EMPLOYEE NAME:"<<Emp_name<<endl;
        cout<<"EMPLOYEE ID:"<<EMP_id<<endl;
       cout <<"EMPLOYEE SALARY:"<<salary<<endl;

    }

};


class department:public employee
{
    string department_name;
    string role;
    public:
    void details()
    {
        cout<<"ENTER DEPARTMENT NAME:"<<endl;
        cin>>department_name;
        cout<<"ENTER YOUR ROLE:"<<endl;
        cin>>role;

       
    }

    void display_all()
    {
        setData();
        display_data();  
        cout<<"DEPARTMENT NAME:"<<department_name<<endl<<"YOUR ROLE:"<<role<<endl;
    }
    

};


void menu()
{
    cout<<"1.ENTER COMPANY DETAILS:"<<endl;
    cout<<"2.ENTER EMPLOYEE DETAILS:"<<endl;
    cout<<"3.ENTER DEPARTMENT DETAILS:"<<endl;
    cout<<"4.DISPLAY DETAILS OF COMPANY"<<endl;
    cout<<"5.DISPLAY DETAILS OF EMPLOYEES"<<endl;
    cout<<"6.DISPLAY ALL DETAILS"<<endl;

    cout<<"7.EXIT"<<endl;
}



int main()
{
    int choice;
    department d;

    do
    {
        menu();
        cout<<"ENTER CHOICE :"<<endl;
        cin>>choice;
    
        switch(choice)
        {
            case 1:
            d.getData();
            break;
            case 2:
            d.getDetails();
            break;
            case 3:
            d.details();
            break;
            case 4:
            d.setData();
            break;
            case 5:
            d.display_data();
            break;
            case 6:
            d.display_all();
            break;
            case 7:
            exit(0);
            break;

        }
    
    } while (choice!=7);
    
    
   
    
    /*department d1;
    d1.getData();
    d1.getDetails();
    d1.details();
    cout<<"----------DEPARTMENT DETAILS-------------"<<endl;
    d1.display_all();
    */

    
}