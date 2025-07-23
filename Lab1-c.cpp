#include<iostream>
#include<string>
using namespace std;

void concate_sting()
{   string firstname = "Atunu";
    string lastname = "Saha";

    string fullname=firstname+" "+lastname;
    //string fullname=firstname.append(" ").append (lastname);
    cout<<"Your full name is : "<<fullname;


}
int main()
{   concate_sting();

    return 0;
}
