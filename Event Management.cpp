#include <iostream>
#include <string>
using namespace std;
int choice;
void Choice(){
    while (true)
    {
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        if (cin.fail())
        {
            cout << "Please Enter Valid Input";
            cin.clear();
            cin.ignore(1000, '\n');
        } else
        {
            cin.ignore(1000, '\n');
            break;
        }
    }
}

class Event{
public:
    static string organizer[100];
    static string phone_no[100];
    static string event_name[100];
    static string event_type[100];
    static string date[100];
    static string time[100];
    static string budget[100];
    static string attendies[100];
    static int event_count;
    static int event_out;
    
    void Organizer_in() {
        cout << "Enter Orgnizer Name: ";
        getline(cin, organizer[event_count]);
    }

    void Phone_no_in() {
        cout << "Enter your Phone Number: ";
        getline(cin, phone_no[event_count]);
    }

    void Event_name_in() {
        cout << "Enter Name of Event: ";
        getline(cin, event_name[event_count]);
    }

    void Event_type_in() {
        cout << "Enter Event Type: ";
        getline(cin, event_type[event_count]);
    }

    void Date_in() {
        cout << "Enter Date (DD MM YY): ";
        getline(cin, date[event_count]);
    }

    void Time_in() {
        cout << "Enter time (HH MM AM/PM): ";
        getline(cin, time[event_count]);
    }

    void Budget_in() {
        cout << "Enter your Budget: ";
        getline(cin, budget[event_count]);
    }

    void Attendies_in() {
        cout << "Enter Number of Attendies: ";
        getline(cin, attendies[event_count]);
    }

    void success_in() {
        cout << "Event is Booked" << endl << endl;
        event_count++;
    }

    void Organizer_out() {
        cout << "Organizer Name: " << organizer[event_out] << endl;
    }

    void Phone_no_out() {
        cout << "Organizer Phone no: " << phone_no[event_out] << endl;
    }

    void Event_name_out() {
        cout << "Event Name: " << event_name[event_out] << endl;
    }

    void Event_type_out() {
        cout << "Event Type: " << event_type[event_out] << endl;
    }

    void Date_out() {
        cout << "Event Date: " << date[event_out] << endl;
    }

    void Time_out() {
        cout << "Event Time: " << time[event_out] << endl;
    }

    void Budget_out() {
        cout << "Event Budget: " << budget[event_out] << endl;
    }

    void Attendies_out() {
        cout << "Event Attendies: " << attendies[event_out] << endl;
    }

    void event_input(){
            Organizer_in();
            Phone_no_in();
            Event_name_in();
            Event_type_in();
            Date_in();
            Time_in();
            Budget_in();
            Attendies_in();
            success_in();
    }

    void event_output() {
        if (event_count == 0)
        {
            cout << "No event is Booked" << endl << endl;
        } else
        {       
                event_out = 0;
                for (event_out; event_out < event_count; event_out++)
            {
                cout << "Event " << event_out + 1 << ": " << endl << endl;
                Organizer_out();
                Phone_no_out();
                Event_name_out();
                Event_type_out();
                Date_out();
                Time_out();
                Budget_out();
                Attendies_out();
                cout << endl;
            }
        }      
    }
};

string Event::organizer[100];
string Event::phone_no[100];
string Event::event_name[100];
string Event::event_type[100];
string Event::date[100];
string Event::time[100];
string Event::budget[100];
string Event::attendies[100];
int Event::event_count = 0;
int Event::event_out = 0;

class Admin : public Event {
    private:
        string username[5] = {"Muhammad Umair", "Ahmad", "Abdul Haq", "Faheem" , "Abdullah"} ;
        string password[5] = {"umair", "ahmad" , "abdul haq", "faheem", "abdullah"};
    public:
        void adminlogin(){
            bool login = false;
            do
            {
                string name, pass;
                cout << "Enter Username: ";
                getline(cin, name);
                cout << "Enter Password: ";
                getline(cin, pass);
    
                for (int i = 0; i < 5; i++)
                {
                    if (pass == password[i] && name == username[i])
                    {
                        login = true;
                    }             
                }
                if (login)
                {
                    cout << "Succesfully login" << endl << endl;
                } else 
                {
                    cout << "Incorrect Password or User Name" << endl << endl;
                }
            } while (!login);         
        }        
};

class User : public Event {
    protected:
        string username[100], password[100];
    public:
        int user_no = 0;
        void user_signup() {
            cout << "Enter User Name: ";
            getline(cin, username[user_no]);
            cout << "Enter Password: ";
            getline(cin, password[user_no]);
            cout << "Account is created" << endl << endl;
            user_no++;
        }

        void user_login(){
            bool login = false;
            do
            {
                cout << "Please Enter your Details" <<endl;
                string name, pass;
                cout << "Enter Username: ";
                getline(cin, name);
                cout << "Enter Password: ";
                getline(cin, pass);
    
                for (int i = 0; i < user_no + 1; i++)
                {
                    if (pass == password[i] && name == username[i])
                    {
                        login = true;
                    }             
                }
                if (login)
                {
                    cout << "Succesfully login" << endl << endl;
                } else 
                {
                    cout << "Incorrect Password or User Name" << endl << endl;
                }
            } while (!login);         
        } 

        void view_booked_events() {
            bool found = false;
            for (int i = 0; i < event_count; i++) {
                if (organizer[i] == username[user_no - 1]) { 
                    cout << "Event " << i + 1 << ": " << endl;
                    cout << "Organizer Name: " << organizer[i] << endl;
                    cout << "Organizer Phone No: " << phone_no[i] << endl;
                    cout << "Event Name: " << event_name[i] << endl;
                    cout << "Event Type: " << event_type[i] << endl;
                    cout << "Event Date: " << date[i] << endl;
                    cout << "Event Time: " << time[i] << endl;
                    cout << "Event Budget: " << budget[i] << endl;
                    cout << "Event Attendies: " << attendies[i] << endl;
                    cout << endl;
                    found = true;
                }
            }
            if (!found) {
                cout << "You have no booked events." << endl;
            }
        }
        
};

int main() {
    bool outerloop, adminloop , userloop, userloop2;
    Admin a;
    User u;
    cout << "***Event Management system***" << endl;
    do
    {
        cout << "1. Admin Profile \n2. User Profile \n3. Exit "<< endl;
        outerloop = true;
        Choice();
        switch (choice)
        {
        case 1:
        a.adminlogin();
        cout << "Welcome Admin" << endl;
            do
            {
                cout << "1. Events details \n2. Exit" << endl;
                adminloop = true;
                Choice();
                switch (choice)
                {
                case 1:
                    a.event_output();
                    adminloop = true;
                    break;
                case 2: 
                    cout << "See you later Admin" << endl;
                    adminloop = false;
                    break;
                default:
                    cout << "Please Enter valid input" << endl;
                    adminloop = true;
                    break;
                }
            } while (adminloop);
            outerloop = true;
        break;

        case 2:
            cout << "***Welcome User***" << endl;
            do
            {
                cout << "1. Sign up \n2. Login \n3. Exit" << endl;
                Choice();
                switch (choice)
                {
                case 1:
                    u.user_signup();
                    userloop2 = true;
                    break;
                
                case 2:
                    u.user_login();
                    do
                    {
                        userloop2 = true;
                        cout << "1. Book Event \n2. View Booked events \n3.Logout" << endl;
                        userloop = true;
                        Choice();
                        switch (choice)
                        {
                        case 1:
                            u.event_input();
                            userloop = true;
                            break;
                        
                        case 2:
                            cout << "View Booked events" << endl << endl;
                            u.view_booked_events();
                            userloop = true;
                            break;
        
                        case 3:
                            cout << "See you later user" << endl;
                            userloop = false;
                            break;
        
                        default:
                            cout << "Please Enter Valid Choice " << endl << endl;
                            userloop = true;
                            break;
                        }
        
                    } while (userloop);
                    userloop2 = true;
                    break;

                case 3:
                    userloop2 = false;
                    break;

                default:
                    userloop2 = true;
                    cout << "Please Enter valid Choice" << endl << endl;
                    break;
                }
            } while (userloop2);
            outerloop = true;
            break;

        case 3:
            cout << "***Thanks for using***" << endl;
            outerloop = false;
            break;

        default:
            cout << "Please Enter Valid Choice " << endl << endl;
            outerloop = true;
            break;
        }
    } while (outerloop);   
}
