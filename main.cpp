#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
//  included required library files
using namespace std;
class customer // customer class
{
public:
    string customername;
    string comapanyName;
    string carnumber;
    char data;
    // variables defined in this class in public mode.
};
class rent : public customer // inhereted class from customer class
{
public:
    int days = 0, rentalfee = 0; // additional int vatiables defined
    void data()
    {
        int login();
        login();
        cout << "\n\n\t\t\t\tPlease Enter your Name: "; // taking data from the user
        cin >> customername;
        cout << endl;
        do
        {
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\t1. BMW" << endl;
            cout << "\t\t\t\t2. MERCEDES" << endl;
            cout << "\t\t\t\t3. MARUTI_SUZUKI" << endl;
            cout << "\t\t\t\t4. TATA" << endl;
            cout << "\t\t\t\t5. HYUNDAI" << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car Company from the above options: ";
            cin >> comapanyName;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            if (comapanyName == "BMW")
            {
                system("CLS");
                cout << "You have choosed for BMW" << endl;
                ifstream inA("A.txt"); // displaying models of BMW
                char str[1000];
                while (inA)
                {
                    inA.getline(str, 1000);
                    if (inA)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (comapanyName == "MERCEDES")
            {
                system("CLS");

                cout << "You have choosed for Mercedes" << endl;
                ifstream inB("B.txt"); // displaying models of Mercedes
                char str[1000];
                while (inB)
                {
                    inB.getline(str, 1000);
                    if (inB)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (comapanyName == "MARUTI_SUZUKI")
            {
                system("CLS");
                cout << "You have choosed for Maruti Suzuki" << endl;
                ifstream inC("C.txt"); // displaying models of Maruti Suzuki
                char str[200];
                while (inC)
                {
                    inC.getline(str, 200);
                    if (inC)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (comapanyName == "TATA")
            {
                system("CLS");
                cout << "You have choosed for TATA" << endl;
                ifstream inD("D.txt"); // displaying models of Maruti Suzuki
                char str[200];
                while (inD)
                {
                    inD.getline(str, 200);
                    if (inD)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (comapanyName == "HYUNDAI")
            {
                system("CLS");
                cout << "You have choosed for Hyundai" << endl;
                ifstream inE("E.txt"); // displaying models of Maruti Suzuki
                char str[200];
                while (inE)
                {
                    inE.getline(str, 200);
                    if (inE)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (comapanyName != "BMW" && comapanyName != "MERCEDES" && comapanyName != "MARUTI_SUZUKI" && comapanyName != "TATA" && comapanyName != "HYUNDAI")

                cout << "Invaild Car Model. Please try again!" << endl;
        } while (comapanyName != "BMW" && comapanyName != "MERCEDES" && comapanyName != "MARUTI_SUZUKI" && comapanyName != "TATA" && comapanyName != "HYUNDAI");
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please provide following information: " << endl;
        // getting data from user related to rental service
        cout << "Please select a Car model : ";
        cin >> carnumber;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;
    }
    void calculate()
    {
        sleep(1);
        system("CLS");
        cout << "Calculating rent. Please wait......" << endl;
        sleep(2);
        system("CLS");
        if (comapanyName == "BMW")
        {
            if (carnumber == "3-SERIES")
                rentalfee = days * 5000;
            else if (carnumber == "5-SERIES")
                rentalfee = days * 8000;
            else if (carnumber == "7-SERIES")
                rentalfee = days * 10000;
            else if (carnumber == "X1")
                rentalfee = days * 3000;
            else if (carnumber == "X3")
                rentalfee = days * 4000;
            else if (carnumber == "X5")
                rentalfee = days * 6000;
            else if (carnumber == "X6")
                rentalfee = days * 7000;
            else if (carnumber == "X7")
                rentalfee = days * 9000;
            else
                cout << "The model you entered is not in the list." << endl;
        }
        if (comapanyName == "MERCEDES")
        {
            if (carnumber == "A-CLASS")
                rentalfee = days * 5000;
            else if (carnumber == "C-CLASS")
                rentalfee = days * 6000;
            else if (carnumber == "E-CLASS")
                rentalfee = days * 7000;
            else if (carnumber == "S-CLASS")
                rentalfee = days * 12000;
            else if (carnumber == "G-CLASS")
                rentalfee = days * 8000;
            else if (carnumber == "V-CLASS")
                rentalfee = days * 10000;
            else if (carnumber == "EQC")
                rentalfee = days * 9000;
            else
                cout << "The model you entered is not in the list." << endl;
        }
        if (comapanyName == "MARUTI_SUZUKI")
        {
            if (carnumber == "S-CROSS")
                rentalfee = days * 2000;
            else if (carnumber == "VITARA-BREZZA")
                rentalfee = days * 1700;
            else if (carnumber == "CIAZ")
                rentalfee = days * 1800;
            else if (carnumber == "ERITGA")
                rentalfee = days * 1600;
            else if (carnumber == "DZIRE")
                rentalfee = days * 1500;
            else if (carnumber == "SWIFT")
                rentalfee = days * 1200;
            else if (carnumber == "WAGON-R")
                rentalfee = days * 1000;
            else
                cout << "The model you entered is not in the list." << endl;
        }
        if (comapanyName == "TATA")
        {
            if (carnumber == "SAFARI")
                rentalfee = days * 2000;
            else if (carnumber == "HARRIER")
                rentalfee = days * 1800;
            else if (carnumber == "NEXON")
                rentalfee = days * 1700;
            else if (carnumber == "PUNCH")
                rentalfee = days * 1600;
            else if (carnumber == "TIAGO")
                rentalfee = days * 1500;
            else if (carnumber == "TIGOR")
                rentalfee = days * 1200;
            else if (carnumber == "ALTROZ")
                rentalfee = days * 1000;
            else
                cout << "The model you entered is not in the list." << endl;
        }
        if (comapanyName == "HYUNDAI")
        {
            if (carnumber == "KONA")
                rentalfee = days * 2000;
            else if (carnumber == "ALCAZAR")
                rentalfee = days * 1700;
            else if (carnumber == "CRETA")
                rentalfee = days * 1800;
            else if (carnumber == "VENUE")
                rentalfee = days * 1600;
            else if (carnumber == "I20")
                rentalfee = days * 1500;
            else if (carnumber == "I10")
                rentalfee = days * 1200;
            else if (carnumber == "SANTRO")
                rentalfee = days * 1000;
            else
                cout << "The model you entered is not in the list." << endl;
        }
    }
    void showrent()
    {
        cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t	| Invoice No. :"<< "------------------|" << setw(10) << "#Cnb81353"<< " |" << endl;
        cout << "\t\t	| Customer Name:"<< "-----------------|" << setw(10) << customername << " |" << endl;
        cout << "\t\t	| Car Company :"<< "------------------|" << setw(10) << comapanyName << " |" << endl;
        cout << "\t\t	| Car Model :"<< "--------------------|" << setw(10) << carnumber << " |" << endl;
        cout << "\t\t	| Number of days :"<< "---------------|" << setw(10) << days << " |" << endl;
        cout << "\t\t	| Your Rental Amount is :"<< "--------|" << setw(10) << rentalfee << " |" << endl;
        cout << "\t\t	 ________________________________________________________" << endl;
        cout << "\n";
        cout << "\t\t	| Total Rental Amount is :"<< "-------|" << setw(10) << rentalfee << " |" << endl;
        cout << "\t\t	 ________________________________________________________" << endl;
        cout << "\t\t	 # This is a computer generated invoce and it does not" << endl;
        cout << "\t\t	 require an authorised signture #" << endl;
        cout << " " << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t	You are advised to pay up the amount before due date." << endl;
        cout << "\t\t	Otherwise penelty fee will be applied" << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        system("PAUSE");
        system("CLS");
    }
    void payment()
    {
        string ch;
        do
        {
            cout << endl<< endl;
            cout << "\n\t\t                           Payment Gateway                  " << endl;
            cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
            cout << "\t\t           1. CASH " << endl;
            cout << "\t\t           2. CHEQUE " << endl;
            cout << "\t\t           3. CARD (Credit/Debit) " << endl;
            cout << "\t\t           4. UPI (Gpay, Amazon pay, PhonePe...) " << endl;
            cout << "\t\t           Enter your choice for payment : ";
            cin >> ch;
            if (ch == "CASH")
            {
                cout << "\t\t             Pay Rs. " << rentalfee << " in cash." << endl;
            }
            else if (ch == "CHEQUE")
            {
                string accno, name, mobileno;
                cout << "\t\t     Enter account number : ";
                cin >> accno;
                cout << "\t\t     Enter Name of the account holder : ";
                cin >> name;
                cout << "\t\t     Enter the mobile number of the account holder : ";
                cin >> mobileno;
                cout << "\t\t     Pay Rs. " << rentalfee << " via cheque. " << endl;
            }
            else if (ch == "CARD")
            {
                string cardno, expm, expy, n;
                cout << "\t\t     Enter the card holder name : ";
                cin >> n;
                cout << "\t\t     Enter the card number : ";
                cin >> cardno;
                cout << "\t\t     Enter card expiry month : ";
                cin >> expm;
                cout << "\t\t     Enter card expiry year : ";
                cin >> expy;
                cout << endl<< endl;
                cout << "\t\t     Please wait......Contacting Bank for further steps." << endl;
                sleep(2);
                cout << "\t\t     Processing Request....";
                sleep(2);
                cout << endl<< endl;
                cout << "\t\t\t\tTransaction successfull !!!" << endl;
            }
            else if (ch == "UPI")
            {
                string pay;
                cout << endl<< endl;
                cout << "\t\t         Please select a third-party app for UPI payment : " << endl;
                cout << "\t\t         1. BHIM" << endl;
                cout << "\t\t         2. GPAY " << endl;
                cout << "\t\t         3. AMAZONPAY" << endl;
                cout << "\t\t         4. PAYTM" << endl;
                cout << "\t\t         Enter your choice : ";
                cin >> pay;
                if (pay == "BHIM")
                {
                    string upi;
                    cout << "\t\t     Redirecting you to BHIM....for further steps " << endl;
                    sleep(4);
                    system("CLS");
                    cout << endl<< endl;
                    cout << "\t\t     BHIM - Making India Cashless" << endl;
                    cout << "\t\t     Enter your UPI ID (@upi) : ";
                    cin >> upi;
                    cout << "\t\t     Verifying...";
                    sleep(4);
                    cout << endl<< endl;
                    cout << "\t\t     UPI Verified...Please approve payment form your BHIM APP for payment." << endl;
                    sleep(10);
                    cout << endl;
                    cout << "\t\t     Transaction successfull !!!" << endl;
                }
                else if (pay == "GPAY")
                {
                    string gpay;
                    cout << "\t\t     Redirecting you to GPAY....for further steps " << endl;
                    sleep(4);
                    system("CLS");
                    cout << endl<< endl;
                    cout << "\t\t     Google Pay - Money made simple, by Google" << endl;
                    cout << "\t\t     Enter your Gpay ID (@okhcfc.com) : ";
                    cin >> gpay;
                    cout << "\t\t     Verifying...";
                    sleep(4);
                    cout << endl<< endl;
                    cout << "\t\t     Gpay Id Verified...Please approve payment form your GooglePay App for payment." << endl;
                    sleep(10);
                    cout << endl;
                    cout << "\t\t     Transaction successfull !!!" << endl;
                }
                else if (pay == "AMAZONPAY")
                {
                    string aupi;
                    cout << "\t\t     Redirecting you to Amazon Pay....for further steps " << endl;
                    sleep(4);
                    system("CLS");
                    cout << endl<< endl;
                    cout << "\t\t     Amazon Pay - You have it, you just didn't know it." << endl;
                    cout << "\t\t     Enter your Amazon UPI ID (@apl) : ";
                    cin >> aupi;
                    cout << "\t\t     Verifying...";
                    sleep(4);
                    cout << endl<< endl;
                    cout << "\t\t     Amazon UPI Verified...Please approve payment form your Amazon App for payment." << endl;
                    sleep(10);
                    cout << endl;
                    cout << "\t\t     Transaction successfull !!!" << endl;
                }
                else if (pay == "PAYTM")
                {
                    string upi;
                    cout << "\t\t     Redirecting you to Paytm....for further steps " << endl;
                    sleep(4);
                    system("CLS");
                    cout << endl<< endl;
                    cout << "\t\t     PAYTM - Paytm Karo" << endl;
                    cout << "\t\t     Enter your Paytm UPI ID (@paytm) : ";
                    cin >> upi;
                    cout << "\t\t     Verifying..."; 
                    sleep(4);
                    cout << endl
                         << endl;
                    cout << "\t\t     Paytm UPI Verified...Please approve payment form your Paytm APP for payment." << endl;
                    sleep(10);
                    cout << endl;
                    cout << "\t\t     Transaction successfull !!!" << endl;
                }
                else 
                {
                    cout<<"\t\t     You entered a wrong choice! "<<endl;
                }
            }
        }while(ch!="CASH" && ch!="CHEQUE" && ch!="CARD" && ch!="UPI");
        system("PAUSE");
        system("CLS");
        cout << endl<< endl<< endl<< endl;
        cout << "\t\t\t\tThank you !!! " << endl;
    }
};
int main()
{
    cout << endl<< endl<< endl<< endl;
    cout << "\t\t\t\tCar Rental System " << endl;
    sleep(2);
    cout << "\nStarting the program please wait....." << endl;
    sleep(2);
    cout << "\nloading up files....." << endl;
    sleep(2);      // function which waits for (n) seconds
    system("CLS"); // cleares screen
    rent obj2;
    // object created for rent class and further member functions are called
    obj2.data();
    obj2.calculate();
    obj2.showrent();
    obj2.payment();
    return 0; // end of the program
}
int login()
{
    string pass = "";
    char ch;
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
    cout << "\t\t\t\t\t------------------------------";
    cout << "\n\t\t\t\t\t\t     LOGIN \n";
    cout << "\t\t\t\t\t------------------------------\n\n";
    cout << "\t\t\t\t\tEnter Password: ";
    ch = _getch();
    while (ch !=13)
    { // character 13 is enter
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if (pass == "pass")
    {
        cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
        system("PAUSE");
        system("CLS");
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
    return 0;
}