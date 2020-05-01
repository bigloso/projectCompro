#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <vector>
using namespace std;
#ifdef _MSC_VER
#define getch() _getch()
#endif

using namespace std ;

class booking {
	public :
	int age , hmn , room , hmr ,room1 ,room2, sum1,sum2 ,total ,yn,g ;
    string name ,surname, wf ,number ;
};

//y[0] = {"asdf","asfaf",45,0123456789};

void Shownamehotel(){

    cout << "                             **************************************************************\n" ;
    cout << "                             * *  *                                                  *  * *\n" ;
    cout << "                             **  *                                                    *  **\n" ;
    cout << "                             * *                 Compro project Hotel                   * *\n";
    cout << "                             **  *                                                    *  **\n" ;
    cout << "                             * *  *                                                  *  * *\n" ;
    cout << "                             **************************************************************\n" ;

}

void Shownameendhotel(){

    cout << "                             **************************************************************\n" ;
    cout << "                             * *  *                                                  *  * *\n" ;
    cout << "                             **  *                                                    *  **\n" ;
    cout << "                             * *                       Thank you                        * *\n";
    cout << "                             **  *                                                    *  **\n" ;
    cout << "                             * *  *                                                  *  * *\n" ;
    cout << "                             **************************************************************\n" ;

}


void moveText(string inputStr, int scrLen)
{
    string displatScr="";
    int inputStrLen=inputStr.length();

    if(inputStrLen<scrLen)
    {

        inputStr.append(scrLen-inputStrLen,' ');
        inputStrLen=inputStr.length();
    }

    int i=0,j=0;

    while(true)
    {
        if(i+scrLen<inputStrLen)
        {
            displatScr=inputStr.substr(i,scrLen);
            cout << displatScr << endl;
            system("cls");
        }
        else
        {

            displatScr=inputStr.substr(i,inputStrLen-i)+inputStr.substr(0,j);
            cout << displatScr << endl;
            system("cls");
            j++;
        }
        i++;
        if(i==inputStrLen)
        {
            i=0;
        }
        if(j==scrLen)
        {
            j=0;
        }
    }
}
void reservation(booking &user){
    int sum1,sum2 ;
    string space = "                             " ;
    do
    {
        system("cls");
        Shownamehotel();
            cout<< endl << space << "Please input your presonal information"<<endl;
            cout<< endl << space <<  "______________________________________________________________"<<endl;
            cout<<endl;
            cout<< space << "Please input your name : ";
            cin>>user.name ;
            cout<< space << "Please input your surname : ";
            cin>>user.surname ;
            cout<< space << "Please input your age : ";
            cin>> user.age ;
            cout<< space << "Please input your phone number : " ;
            cin >> user.number ;
            system("cls") ;
        Shownamehotel() ;
            cout << endl ;
            cout<< space << "Please input your presonal information"<<endl;
            cout<<endl;
            cout<< space << "______________________________________________________________"<<endl;
            cout<<endl;
            cout<< space << "Name : "<<user.name <<" "<<user.surname<<endl ;
            cout<< space << "Age  : "<<user.age <<endl ;
            cout<< space << "Phone number :"<< user.number <<endl;
            cout<< space << "______________________________________________________________"<<endl<<endl ;
            cout<< space << "When do you come?"<<endl ;
            cout<< space << "Day (d/m/25xx) :" ;
            cin>>user.wf ;
            cout<< space << "How long will you be staying?:" ;
            cin>>user.hmn ;
            do{
            cout<<space << "And would you like a room ?"<<endl ;
            cout << space <<  "1. A double room. 600 bath/night :";
            cin >> user.room1  ;
            sum1=(600*user.room1)*user.hmn;
            cout << space <<  "2. A twin room. 800 bath/night :" ;
            cin >> user.room2 ;
            sum2=(800*user.room2)*user.hmn;
            if(user.room1 >= 7 || user.room2 >=7){
                cout << space << "This hotel has double rooms and twin rooms 6 rooms each."<<endl ;
            }
            }
            while(user.room1 >= 7 || user.room2 >=7) ;
            user.total = sum1+sum2 ;
            cout<< space << "Price : "<<user.total<<" bath"<<endl ;
        system("cls") ;
        Shownamehotel() ;
            cout<< space << "Name : "<<user.name<<" "<<user.surname<<endl;
            cout<< space << "Age : "<< user.age <<" years old"<<endl ;
            cout<< space << "Tel. : "<<user.number<<endl ;
            cout<< space << "Day "<<user.wf<<endl ;
            cout<< space << "How long will you stay : "<<user.hmn<<" night"<<endl ;
            cout<< space << " 1. A double room. : "<<user.room1<<endl ;
            cout<< space << " 2. A twin room. : "<<user.room2<<endl ;
            cout<< space << "Price : "<<user.total<<" bath"<<endl ;
            cout<< space << "______________________________________________________________" ;
            cout<<endl ;
            cout<< space << "Please verty that the information is correct or not."<<endl ;
            cout<< space << "Yes =1 or No =0"<<endl;
            cout<< space << "Input number : ";
            cin >> user.yn ;
    }
    while(user.yn == 0) ;
        if(user.yn == 1)
        {
            system("cls");
            Shownamehotel();
            cout << endl ;
            cout<< space << "Name : "<<user.name<<" "<<user.surname<<endl;
            cout<< space << "Age : "<< user.age <<" years old"<<endl ;
            cout<< space << "Tel. : "<<user.number<<endl ;
            cout<< space << "Day "<<user.wf<<endl ;
            cout<< space << "How long will you stay : "<<user.hmn<<" night"<<endl ;
            cout<< space << " 1. A double room. : "<<user.room1<<endl ;
            cout<< space << " 2. A twin room. : "<<user.room2<<endl ;
            cout<< space << "Price : "<<user.total<<" bath"<<endl ;
            cout << endl ;
            cout << space << "**************************************************************" << endl ;
            cout << endl ;
        }
}

void information(){
    string space = "                             " ;
    system("cls");
    Shownamehotel();
    cout << space << " Compro project Hotel "<<endl ;
    cout << space << " A double room. 600 bath/night "<<endl ;
    cout << space << " A twin room. 800 bath/night " <<endl;
    cout << space << "Press enter to exit " ;
    getch();
    cin.ignore() ;
}

int main(){
    string name , help ;
    string word , word1;
    string space = "                             " ;
    system("mode 0,0");
    system("COLOR 3F");
    booking user;
    bool usercheck = true ;
    int start = 0 ;
	    Shownamehotel() ;
	    cout << space << "Hotel: Hello Compro project Hotel. May I help you? \n";
	    cout << space << "user : ";
	    getline(cin,word) ;
	    word = word + " " ;
	    int end = word.find_first_of(" ") ;
	    while(end != -1){
	    	if(word.substr(start,end-start) == "book"){
		        reservation(user) ;
		        //end = word.find_first_of(" ") ;
		        break ;
	        }
	        else if(word.substr(start,end-start) == "information"){
		        information() ;
		       //end = word.find_first_of(" ") ;
	        	break ;
	        }
	        else if(word.substr(start,end-start) == "exit"){
	        	usercheck = false;
	        	break ;
	        }
	        start = end+1 ;
	        end = word.find_first_of(" ",start);
    }
    while (usercheck) {
    /*start = 0;
    end = word.find_first_of(" ") ;
    while(end != -1){
	    	if(word.substr(start,end-start) == "information"){
	        information() ;
	        end = word.find_first_of(" ") ;
	        break ;
	        }
	        start = end+1 ;
	        end = word.find_first_of(" ",start);
    }
    start = 0;
     while(end != -1){
	    	if(word.substr(start,end-start) == "exit"){
	        reservation() ;
	        end = word.find_first_of(" ") ;
	        break ;
	        }
	        start = end+1 ;
	        end = word.find_first_of(" ",start);
	    }*/
	    cout << space << "**************************************************************" << endl ;
	    cout << space << "Hotel: Can i help you anything with? \n" ;
	    cout << space << "user : " ;
	    cin.ignore();
	    getline(cin,word1) ;
	    word1 = word1 + " " ;
	    end = word1.find_first_of(" ") ;
	    start = 0 ;
	     while(end != -1){
	    	if(word1.substr(start,end-start) == "book"){
		        reservation(user) ;
		        //end = word1.find_first_of(" ") ;
		        break ;
	        }
	        else if(word1.substr(start,end-start) == "information"){
		        information() ;
		       //end = word1.find_first_of(" ") ;
	        	break ;
	        }
	        else if(word1.substr(start,end-start) == "exit"){
	        	usercheck = false;
	        	break ;
	        }
	        start = end+1 ;
	        end = word1.find_first_of(" ",start);
		}
	}
	Shownameendhotel();
    return 0 ;
}
