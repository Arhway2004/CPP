#include <iostream>
#include <string>
#include <list>
using namespace std;

class YoutubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YoutubeChannel(string name, string ownerName,int subscribersCount){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = subscribersCount;
        
    }
    void GetInfo(){
        cout << "Name:" << Name <<endl;
        cout << "OwnerName:" << OwnerName <<endl;
        cout << "subscribersCount:" << SubscribersCount <<endl;
        cout<<"Video:"<<endl;
        for(string videoTitle : PublishedVideoTitles){
            cout<<videoTitle<<endl;
        };
    }

};
int main(){
    YoutubeChannel ytchannel("Arhway_2004","Arhway",32);
    ytchannel.PublishedVideoTitles.push_back("C++ 1");
    ytchannel.PublishedVideoTitles.push_back("React");
    
    YoutubeChannel ytchannel2("Amy_2004","Amy",21);
    ytchannel2.PublishedVideoTitles.push_back("jony 1");

    ytchannel.GetInfo();
    ytchannel2.GetInfo();
    // cin.get();
    // return 0;
    // system("pause>0");
}