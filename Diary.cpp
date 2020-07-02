#include<iostream>
#include<fstream>
#include<ctime>

using namespace std;

int main(){
    const int MAX = 3000;
    char notes[MAX];

    cout<<"Good Day!!!"<<endl;
    cout<<"How you doing?"<<endl;
    cout<<"Wanna share something with me"<<endl;
    cout<<endl;
    cout<<"Please Enter $ symbol to terminate the entry"<<endl;
    cout<<endl;

    cin.get(notes,MAX,'$');
    
    time_t now = time(0);
    char* dt = ctime(&now);
    
    ofstream file_("myDiary.txt", ios::app);

    if(file_.is_open()){
        file_<<dt<< endl;;
        file_<<notes<<endl;
        file_.close();
    }


    std::cin.get();
    return 0;
}