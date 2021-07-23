//APARTMENT_MANAGEMENT_SYSTEM

#include <iostream>
#include <string>
using namespace std;
string i, name, dob, ph, address, gender, complaint={""}, suggestion={""};
int flag=0;

//function to display personal details of the user
void personal_details(){
    cout<<"Your Personal Details are :"<<endl<<"Name - "<<name<<endl<<"Date of Birth - "<<dob<<endl<<"Gender - "<<gender<<endl<<"Phone Number - "<<ph<<endl<<"Address - "<<address<<endl;
}

//function to register a complaint given by the user
void register_complaint(){
    cout<<"Enter Your Complaint - ";
    cin.ignore();
    getline(cin,complaint);
    cout<<"Complaint Registered Successfully."<<endl;
}

//function to display complaint registered by the user
void view_complaint(){
    if(complaint==""){
        cout<<"Currently You Have No Registered Complaint"<<endl;
    }
    else cout<<"Your Registered Complaint - "<<complaint<<endl;
}

//function to book a parking slot for the user
void book_parkingSlot(){
    if(flag==0){
        cout<<"Parking Slot Booked Successfully."<<endl;
        flag=1;
    }
    else cout<<"Parking Slot Already Booked, No More Parking Slots Available."<<endl;
}

//function to display all the notices available
void notices_section(){
    cout<<"This is Notices Section."<<endl<<"All notices will be displayed here."<<endl;
}

//function to register a suggestion for the user
void register_suggestion(){
    cout<<"Enter Your Suggestion - ";
    cin.ignore();
    getline(cin,suggestion);
    cout<<"Suggestion Recieved Successfully."<<endl;
}

//function to display suggestion resigtered by the user
void view_suggestion(){
    if(suggestion==""){
        cout<<"Currently You Have No Suggestion"<<endl;
    }
    else cout<<"Your Personal Suggestion - "<<suggestion<<endl;
}

//main function for driver code
int main() {
    //Welcome message to the user
    cout<<"Welcome to Apartment Management System"<<endl<<"In this system you can do various tasks like Register a Complaint, Book a Parking Slot, View Notices Section, Convey Your Personal Suggestions to the Concerned Authorities."<<endl;
    
    //Taking personal details from the user
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"Enter Your Name - ";
    getline(cin,name);
    cout<<"Enter Your Date of Birth - ";
    getline(cin,dob);
    cout<<"Enter Your Gender - ";
    getline(cin,gender);
    cout<<"Enter Your Phone Number - ";
    getline(cin,ph);
    cout<<"Enter Your Address - ";
    getline(cin,address);
    cout<<"---------------------------------------------------------"<<endl;
    
    
    do{
        //Providing various options to user to navigate through the program
        cout<<"To view your Personal Details enter 1 and press enter"<<endl<<"Or to Register a Complaint enter 2 and press enter"<<endl<<"Or to View the Registered Complaint enter 3 and press enter"<<endl<<"Or to Book a Parking Slot enter 4 and press enter"<<endl<<"Or to View Notices Section enter 5 and press enter"<<endl<<"Or to Convey Your Personal Suggestion enter 6 and press enter"<<endl<<"Or to View Your Personal Suggestion enter 7 and press enter"<<endl<<"Or to End the program enter 0 and press enter : ";
        
        cin>>i;
        cout<<"---------------------------------------------------------"<<endl;
        
        //if user wants to end the program
        if(i=="0"){
            break;
        }

        else if(i=="1"){
            personal_details();
        }
        
        else if(i=="2"){
            register_complaint();
        }
        
        else if(i=="3"){
            view_complaint();
        }
        
        else if(i=="4"){
            book_parkingSlot();
        }
                
        else if(i=="5"){
            notices_section();
        }
              
        else if(i=="6"){
            register_suggestion();
        }
        
        else if(i=="7"){
            view_suggestion();
        }
            
        else cout<<"Invalid Choice!!"<<endl;

        
        cout<<"---------------------------------------------------------"<<endl;
        
    }while(i!="0");
    
    //end line for the program
    cout<<endl<<"Thankyou and have a Good Day!!"<<endl<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    
    return 0;
}

