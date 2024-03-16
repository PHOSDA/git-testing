#include<iostream>
#include<conio.h> // Note: <conio.h> is typically used in DOS/Windows environments. Consider alternatives for portability.
#include<string>
#include<iomanip>
using namespace std;

int main(){
    string username, password;
    string H_name;
    char size1;
    int qty1, seat1; // Changed variable name qtyl to qty1 for consistency
    float price1, payment_usd, payment_KHR;
    const float exchange_rate = 4100;
    int option1, option2;

    A: // Using goto for flow control is generally discouraged. Consider using loops or functions instead.
    cout << setw(15) << "====>>Login<<==\n";
    cout << setw(15) << "Enter Username:";
    cin >> username;
    cout << setw(15) << "Enter Password:";
    cin >> password;

    // Removed duplicated cin>>password;
    if (username == "Admin" && password == "123") {
        system("cls"); // Corrected syntax system == ("cls") to system("cls");
    }else{
        cout << setw(15) << "Wrong Username or Password \n";
        getch();
        system("cls");
        goto A; // Consider using a loop instead of goto for retry logic
    }
    
    cout << setw(15) << "=========>>[W] [E] [L][C][O][M] [E]<<========\n\n";
    cout << setw(15) << "1.COFFEE" << setw(15);
    cout << setw(15) << "2.SOFT DRINK" << setw(15);
    cout << setw(15) << "3.ALCOHOL\n\n";
    cout << setw(15) << "Choose the Option:";
    cin >> option1;

    switch(option1){
        case 1:
            cout << setw(15) << "=======>>COFFEE SHOP<<=======\n";
            cout << setw(15) << "1. Hot coffee\n";
            cout << setw(15) << "2. Ice coffee\n";
            cout << setw(15) << "Choose the Option: \n";
            cin >> option2;
            
            switch(option2){
                case 1:
                case 2: // Merged cases 1 and 2 as their logic is similar, just differing in the output message.
                    if(option2 == 1) {
                        cout << setw(15) << "Your Order is Hot coffee\n";
                    } else {
                        cout << setw(15) << "Your Order is Ice coffee\n";
                    }
                    cout << setw(15) << "Enter coffee Name: ";
                    cin.ignore(); // To ignore the newline character left in the input buffer
                    getline(cin, H_name);
                    cout << setw(15) << "Enter coffee size S,M,L:";
                    cin >> size1;
                    cout << setw(15) << "Enter coffee Qty:";
                    cin >> qty1;
                    cout << setw(15) << "Enter coffee price:";
                    cin >> price1;
                    cout << setw(15) << "Enter seat Number:";
                    cin >> seat1;
                    system("cls");
                    payment_usd = price1 * qty1;
                    payment_KHR = payment_usd * exchange_rate;
                    cout << setw(15) << "==========>>[R][E][C][E][I][P][T]<<=========\n\n";
                    cout << fixed << showpoint << setprecision(2);
                    cout << setw(15) << "Order by:" << username << endl;
                    cout << setw(15) << "Your order coffee :" << H_name << endl;
                    cout << setw(15) << "Your order size:" << size1 << endl;
                    cout << setw(15) << "Your order qty:" << qty1 << endl;
                    cout << setw(15) << "Your order price $:" << price1 << endl;
                    cout << setw(15) << "Your seat Num:" << seat1 << endl;
                    cout << setw(15) << "Total Payment $ :" << payment_usd << endl;
                    cout << setw(15) << "Total Payment KHR :" << payment_KHR << endl << endl;
                    cout << setw(15) << "=============<<THANKS>>============\n\n";
                    break; // Added missing break statement
            }
            break; // Added missing break statement for case 1 of the outer switch
        case 2:
            // Implement soft drink option
            break;
        case 3:
            // Implement alcohol option
            break;
    }
    return 0;
}
