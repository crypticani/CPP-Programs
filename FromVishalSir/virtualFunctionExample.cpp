#include <iostream>
using namespace std;

class MediaPlayer
{
public:
   virtual void playSong()
    {
        cout<<"any song"<<endl;
    }
   
};
class punjabi:public MediaPlayer
{
    void  playSong()
    {
        cout<<"punjabi song"<<endl;
    }
    
};
class telugu:public MediaPlayer
{
    void playSong()
    {
        cout<<"telugu song"<<endl;
    }
  
};
class hindi:public MediaPlayer
{
    void playSong()
    {
        cout<<"hindi song"<<endl;
    }
  
};
int main()
{
   MediaPlayer *mptr;
   hindi h1;
   mptr=&h1;
   mptr->playSong();
   return 0;
}