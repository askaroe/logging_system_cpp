#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn(){
    string username, password, un, pw;
    cout<<"Enter username: "; cin>>username;
    cout<<"Enter your password: "; cin>>password;

    ifstream read(username + ".txt");
    getline(read, un);
    getline(read, pw);


    if(un == username && pw == password) {

            return true;
    }
    else {
        return false;
    }
}

int main(){
    int choice;

    cout<<"1:Register\n2:Log in\n Your choice: "; cin>>choice;
    if(choice == 1){
        string username, password;
        cout << "Enter your username: "; cin>>username;
        cout << "Enter your password: "; cin>>password;

        ofstream file(username + ".txt");
        file << username << endl << password;
        file.close();

        main();

    }
    else if(choice == 2){
        bool status = IsLoggedIn();

        if(!status){

            cout<<"Your username or password is wrong!"<<endl;
            system("PAUSE");
            return 0;
        }
        else{
            cout<<"Welcome back!"<<endl;
            system("PAUSE");
            return 1;
        }
    }

}


