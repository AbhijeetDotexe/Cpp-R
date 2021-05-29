#include<cstring>
#include<iostream>
using namespace std;
class Yt
{
    protected:
        string Title;
        float rating;
    public:
        Yt(string s, float r)
        {
            Title = s;
            rating = r;
        }
        virtual void display()
        {

        }
};
class Yt_video: public Yt
{
    float videolength;
    public:
        Yt_video(string s, float r, float vl):Yt(s,r)
        {
            videolength = vl;
        }
        void display()
        {
            cout<<"The title of the video is "<<Title<<endl;
            cout<<"Rating out of 5 for the video is "<<rating<<endl;
            cout<<"Length of the video is "<<videolength<<" minutes"<<endl;
        }
};

class Yt_text: public Yt
{
    int words;
    public:
        Yt_text(string s, float r, int w):Yt(s,r)
        {
            words = w;
        }
        void display()
        {
            cout<<"The title of the text tutorial is "<<Title<<endl;
            cout<<"Rating out of 5 for the video is "<<rating<<endl;
            cout<<"Number of Words in the tutorial is "<<words<<" words"<<endl;
        }
};
int main()
{
    string title; 
    float rating , vlen;
    int words;

    title="Why Thinkpads are the best laptops";
    vlen = 4.56;
    rating = 4.98;
    Yt_video tpvideo(title, rating, vlen);
    tpvideo.display();

    // for text
    title = "This is a text file format";
    rating = 4.1;
    words = 4.3;
    Yt_text tptext(title, rating, words);
    tptext.display();

    Yt* tuts[2];
    tuts[0] = &tpvideo;
    tuts[1] = &tptext;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
/*
 Rules for virtual functions
 1. They cannot be static 
 2. They are accessed by object pointers
 3. Virtual functions can be a friend of another class
 4. A virtual function in a base class might not be used
 5. If a virtual function is defined in the base class then there is no need to define it in the derived class

 */