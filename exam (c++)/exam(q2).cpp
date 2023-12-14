#include <iostream>
#include <string>

using namespace std;


class User {
public:
    string email;
    string pass;
};

int main() {

    User users[7];

    users[0].email = "shivani@123.com";
    users[0].pass = "pass123";

    users[1].email = "prachi@456.com";
    users[1].pass = "pass456";

    users[2].email = "aagna@789.com";
    users[2].pass = "pass789";

    users[3].email = "ullas@111.com";
    users[3].pass = "pass111";

    users[4].email = "purvi@222.com";
    users[4].pass = "pass222";

    users[5].email = "raj@333.com";
    users[5].pass = "pass333";

    users[6].email = "harsh@444.com";
    users[6].pass = "pass444";



    string Email,Password;

    cout<<"Enter email :- ";
    cin>>Email;
    cout<<"Enter password :- ";
    cin>>Password;

    bool logIn = false;

    for(int i = 0; i < 7; ++i) 
    {
        if(users[i].email == Email && users[i].pass == Password) 
        {
            logIn = true;
            break;
        }
    }

    if (logIn) {
        cout << "you have successfully logged in" << endl;
    } else {
        cout << "!!!!your email & password is not valid!!!! "<<endl;
    }

    return 0;
}
