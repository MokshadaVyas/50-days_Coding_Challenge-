#include<iostream>
using namespace std;
int main()
{
    int firstplayer,secondplayer;
    int rock=1,paper=2,scissor=3;
    cout<<"--PLAYER 1--"<<endl;
    cout<<"Please choose your option:"<<endl;
    cout<<"1.rock,2.paper,3.scissor"<<endl;
    cin>>firstplayer;

    cout<<"--PLAYER 2--"<<endl;
    cout<<"Please choose your option:"<<endl;
    cout<<"1.rock,2.paper,3.scissor"<<endl;
    cin>>secondplayer;

    if(firstplayer==secondplayer)
    {
        cout<<"It's a draw!!"<<endl;
    }
    else if(firstplayer==rock && secondplayer==scissor || firstplayer==paper && secondplayer==rock || firstplayer==scissor && secondplayer==paper )
    {
        cout<<"----Player 1 is winner----"<<endl;
    }
    else 
    {
        cout<<"----Player 2 is winner----"<<endl;
    }




    return 0;
}