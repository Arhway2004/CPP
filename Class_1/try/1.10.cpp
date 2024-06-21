#include <iostream>
#include <string>
#include <list>
using namespace std;

class YoutubeChannel{
public:
    string Name;
    string OwnerName;
    int subscribersCount;
    list<string> PublishedVideoTitles;

};
int main(){
    YoutubeChannel ytchannel;
    ytchannel.Name = "Arhway_2004";
    ytchannel.OwnerName ="Arhway";
    ytchannel.subscribersCount = 10;
    ytchannel.PublishedVideoTitles = {"C++ 1","React 1","Js 1","Ts 1"};

    cout << "Name:" << ytchannel.Name <<endl;
    cout << "OwnerName:" << ytchannel.OwnerName <<endl;
    cout << "subscribersCount:" << ytchannel.subscribersCount <<endl;
    // cout << "PublishedVideoTitles:" << ytchannel.PublishedVideoTitles <<endl;
    cout<<"Video:"<<endl;
    for(string videoTitle : ytchannel.PublishedVideoTitles){
        cout<<videoTitle<<endl;
    };

    YoutubeChannel ytchannel2;
    ytchannel2.Name = "Amy_2004";
    ytchannel2.OwnerName ="Amy";
    ytchannel2.subscribersCount = 2000;
    ytchannel2.PublishedVideoTitles = {"jony 1","Game 1","HI 1","Twhat 1"};

    cout << "Name:" << ytchannel2.Name <<endl;
    cout << "OwnerName:" << ytchannel2.OwnerName <<endl;
    cout << "subscribersCount:" << ytchannel2.subscribersCount <<endl;
    // cout << "PublishedVideoTitles:" << ytchannel2.PublishedVideoTitles <<endl;
    cout<<"Video:"<<endl;
    for(string videoTitle : ytchannel2.PublishedVideoTitles){
        cout<<videoTitle<<endl;
    };
    // cin.get();
    // return 0;
    system("pause>0");
}