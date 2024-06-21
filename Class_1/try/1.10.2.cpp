#include <iostream>
#include <string>
#include <list>
using namespace std;

class YoutubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
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
    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubcribe(){
        SubscribersCount--;
    } 
    void PublishedVideo(string title){
        PublishedVideoTitles.push_back(title);
    }
};
int main(){
    YoutubeChannel ytchannel("Arhway_2004","Arhway",32);
    ytchannel.PublishedVideo("C++ 1");
    ytchannel.PublishedVideo("React");
    

    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.GetInfo();
}