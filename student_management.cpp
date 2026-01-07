#include<iostream> //input/output ke liye(cin,cout)
#include<fstream> //file handling ke liye (file me data save karna)
using namespace std;

class student{ //student ka blueprint(roll,name,marks)
    public:
    int roll;
    string name;
    float marks;

    void addStudent(){
        ofstream //
        file("student.txt", ios::app);  //file banana/open karna,,  ios::app--> purana data delete nahi hoga
        cout<<"enter roll number: ";
        cin>>roll;
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter marks: ";
         cin>>marks;
        file<<roll<< " "<<name<<" "<<marks<<endl; //student ka data file me save karta hai
         file.close();
        cout<<"student record added successfully\n";
       }
        void showStudents(){
            ifstream
            file("student.txt");
            cout<<"\nroll\tname\tmarks\n";
            while(file>>roll>>name>>marks){ // jab tak file me data hai,tab tak read karta rahega
                cout<<roll<<"\t"<<name<<"\t"<<marks<<endl;
            }
            file.close();
        }
};
int main(){
    student s;
    int choice;
    
    do{  //menu bar bar chale jab tak user exit na kare 
        cout<<"\n---student management system---\n";
        cout<<"1. add student\n";
        cout<<"2. show all student\n";
        cout<<"3. exit\n";
        cout<<"enter choice: ";
        cin >> choice;
        switch (choice){ //user ka choice handle karta hai 
            case 1:
            s.addStudent();
            break;
            case 2:
            s.showStudents();
            break;
            case 3:
            cout<<"thank you!\n";
            break;
            default:
            cout<<"invalid choice\n";
        }
    }while(choice != 3);
    return 0;
}
