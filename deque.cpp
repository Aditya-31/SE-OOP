#include<iostream>
#include<deque>
using namespace std;

int main()
{

    deque<int>ob;
    deque<int>::iterator it;
    int ele,ch,e=0;
    while(e==0)
    {
        cout<<"1.INSERT ELEMENT AT THE BACK\n";
        cout<<"2.INSERT ELEMENT AT THE FRONT\n";
        cout<<"3.DELETE ELEMENT AT THE BACK\n";
        cout<<"4.DELETE ELEMENT AT THE FRONT\n";
        cout<<"5.GET FRONT ELEMENT\n";
        cout<<"6.GET BACK ELEMENT\n";
        cout<<"7.GET SIZE OF QUEUE\n";
        cout<<"8.DISPLAY ELEMENTS OF QUEUE\n";
        cout<<"ENTER YOUR CHOICE\n";
        cin>>ch;


        switch(ch)
        {
        case 1:
        {
            cout<<"ENTER ELEMENT OT BE INSERTED\n";
            cin>>ele;
            ob.push_back(ele);
            break;
        }

        case 2:
        {
            cout<<"ENTER ELEMENT TO BE INSERTED\n";
            cin>>ele;
            ob.push_front(ele);
            break;
        }

        case 3:
        {
            ele=ob.back();
            ob.pop_back();
            break;
        }

        case 4:
        {
            ele=ob.front();
            ob.pop_front();
            break;
        }

        case 5:
        {
            ele=ob.front();
            cout<<ele<<endl;
            break;
        }
        case 6:
        {
            ele=ob.back();
            cout<<ele<<endl;
            break;
        }

        case 7:
        {
            int s=ob.size();
            cout<<s<<endl;
            break;
        }

        case 8:
            for(it=ob.begin(); it!=ob.end(); it++)
            {
                cout<<*it<<"\t";
            }
            cout<<"\n";
            break;
        }
    }

    return 0;
}