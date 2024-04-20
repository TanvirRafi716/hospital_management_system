#include <iostream>
#include <string>

#include <fstream>
using namespace std;

    string regUser,regPass ;          //use for registration.
    string name,gender,blood,address;             //use for patient's details.
    int age;        //use for patient's details.
    int doctor;

void Registration(){

    cout<<"                                          REGISTRATION                                     "<<endl;
    cout << "          -------------------------------------------------------------------------\n" << endl;
    cout << "        REGISTER USER-NAME : ";
    cin >> regUser;
    cout << "\n\n        REGISTER PASSWORD : ";
    cin >> regPass;
}

void login(){
    void Registration();
    system("cls");
    string user,pass;     //use for login.
    cout<<"                                    WELCOME TO NUB HOSPITAL                                     "<<endl;
    cout << "          -------------------------------------------------------------------------\n" << endl;
    cout << "           LOGIN USER-NAME : ";
    cin >> user;
    cout << "\n\n           LOGIN PASSWORD : ";
    cin >> pass;
    system("cls");
    if (user==regUser && pass==regPass)
    {
        cout<<"LOGIN SUCCESSFULLY!!!!\n\n";
    }
    else
    {

        cout << "\n                LOGIN FAILED.....! PLEASE CHECK YOUR PASSWORD.\n\n";

        return login();   //Go back in to Login Page.
    }
}


class HospitalSystem {


public:
    void HomePage() {
    cout << "                                    HOSPITAL SYSTEM MENU                                " << endl;
    cout<< "         -------------------------------------------------------------------------------\n"<< endl;
    cout << "              1. APPOINTMENT\n" << endl;
    cout << "              2. SEARCH APPOINTMENT\n" << endl;
    cout << "              3. EXIT\n" << endl;
}



    void AppointmentList() {
        system ("cls");
        cout << "                                      APPOINTMENT MENU                                  " << endl;
        cout<< "         ------------------------------------------------------------------------------\n\n"<< endl;
        cout << "                1. KIDNEY SPECIALIST\n" << endl;
        cout << "                2. NEUROLOGIST\n" << endl;
        cout << "                3. ORTHOPEDIC\n\n\n" << endl;
    }

    void DoctorList() {
        int option;
        AppointmentList();
        cout << "\n\n\n\n\n\n\n\n                                                                 ---------------------"<<endl;
        cout << "                                                                 ENTER YOUR OPTION :";
        cin >> option;
        system ("cls");

        switch (option) {
            case 1:
                cout<<"\n\n                                                 KIDNEY SPECIALIST                                  "<<endl;
                cout<< "          -----------------------------------------------------------------------------------------------\n\n"<< endl;
                cout<<"            1.Dr.Maruf Hossain Anon             AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"\n            2.Dr.Payel Munsi                    AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"\n            3.Dr.Himel Khan                     AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"\n            4.Dr.Emran Hossain                  AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"\n            5.Dr.Md.Riad                        AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600Tk\n"<< endl;
                cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            case 2:
                cout<<"\n\n                                                    NEUROLOGIST                                     "<<endl;
                cout<< "          -----------------------------------------------------------------------------------------------\n"<< endl;
                cout<<"            6.Dr.Mamunul Islam Shuvo            AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"\n            7.Dr.shawon Hossain                 AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"\n            8.Dr.Rasel                          AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"\n            9.Dr.Eyad Ali                       AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"\n            10.Dr.Murad                         AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            case 3:
                cout<<"\n\n                                                     ORTHOPEDIC                                     "<<endl;
                cout<< "          -----------------------------------------------------------------------------------------------\n"<< endl;
                cout<<"            11.Dr.Rahadul Islam Rifat      AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"\n            12.Dr.Mahin Rohman             AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"\n            13.Dr.Alif Sheikh              AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"\n            14.Dr.Sayid Khan               AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"\n            15.Dr.Siam                     AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            default:
                cout<< "Invalid option." << endl;
                DoctorList();
        }
    }
    void patientDetails(){
        DoctorList();
        cout<<"\n\n\n\n\n\n                                                                                         SELECT DOCTOR :";
        cin>>doctor;
        //cin.ignore();
        system("cls");
        cout<<"\n                                             PATIENT'S DETAILS                                             "<<endl;
        cout<<"\n           ---------------------------------------------------------------------------------               \n\n"<<endl;
        cout<<"                           PATIENT NAME           : ";
        cin>>name;
        cout<<"\n\n                           PATIENT AGE            : ";
        cin>>age;
        cout<<"\n\n                           PATIENT GENDER         : ";
        cin>>gender;
        cout<<"\n\n                           PATIENT BLOOD GRP      : ";
        cin>>blood;
        cout<<"\n\n                           PATIENT ADDRESS        : ";
        cin>>address;
        system("cls");
    }
    void searchAppointment() {
    string searchName;
    cout << "Enter patient's name or doctor's name to search for: ";
    cin >> searchName;

    ifstream appointmentFile("appointment.txt");
    string line;
    bool found = false;

    if (appointmentFile.is_open()) {
        while (getline(appointmentFile, line)) {
            if (line.find(searchName) != string::npos) {
                cout << line << endl;
                found = true;
            }
        }
        appointmentFile.close();
    }

    if (!found) {
        cout << "No appointment found with that name." << endl;
    }
}


    void PaymentDetails() {
    patientDetails();

    ofstream appointmentFile("appointment.txt", ios_base::app);
    if (appointmentFile.is_open()) {
        appointmentFile << "Name: " << name << ", Age: " << age << ", Gender: " << gender << ", Blood: " << blood << ", Address: " << address << ", Doctor: " << doctor << endl;
        appointmentFile.close();
    }

            switch (doctor)
            {
            case 1:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"             Dr.Maruf Hossain Anon             AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------"<<endl;
                break;


            case 2:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Payel Munsi                    AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 3:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Himel Khan                     AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 4:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Emran Hossain                  AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 5:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Md.Riad                        AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 6:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"             Dr.Mamunul Islam Shuvo            AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 7:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.shawon Hossain                 AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 8:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Rasel                          AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 9:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Eyad Ali                       AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 10:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Murad                         AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 11:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"               Dr.Rahadul Islam Rifat      AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 12:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n              Dr.Mahin Rohman             AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 13:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Alif Sheikh              AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 14:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n              Dr.Sayid Khan               AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            case 15:
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                   ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n              Dr.Siam                     AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;


            }
            if(gender=="male" || gender=="MALE")
            {
                cout<<"\n            CODE CRAFTER                                                      THANKS FOR BEING HERE....."<<endl;
                cout<<"            DEPARTMENT OF CSE                                                HAVE A NICE DAY....SIR!!!!\n\n";
            }
            else {
                cout<<"\n            CODE CRAFTER                                                       THANKS FOR BEING HERE....."<<endl;
                cout<<"            DEPARTMENT OF CSE                                                HAVE A NICE DAY....MA'AM!!!!\n\n";
            }
        }


    };


int main() {
















    Registration ();
    login();
    HospitalSystem hospital;
    int choice;



    do {
        hospital.HomePage();
        cout << "\n\n\n\n\n\n\n\n\n\n\n                                                                 ------------------------"<<endl;
        cout << "                                                                  ENTER YOUR OPTION :";
        cin >> choice;

        switch (choice) {
            case 1:
                system("cls");
                hospital.PaymentDetails();
                return 0;
                break;

                case 2:
            hospital.searchAppointment();
            break;



            case 3:
                cout<< "--------------------------"<< endl;
                cout << "\n\n\nGoodbye!--- Have a Nice Day!!!\n\n\n" << endl;
                cout<< "--------------------------"<< endl;
                break;


            default:
                cout<< "--------------------------"<< endl;
                cout << "\n\n\nInvalid option. Please try again.\n\n\n" << endl;
                cout<< "--------------------------"<< endl;
        }

    } while (choice != 2);

    return 0;
}