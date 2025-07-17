#include <iostream>
#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

void songLyricsDisplay(const string lyrics, int typeSpeed, int pauseDuration, bool clearConsole);

int main()
{
    system("cls");
    songLyricsDisplay("3...",0,1000,true);
    songLyricsDisplay("2...",0,1000,true);
    songLyricsDisplay("1...",0,1000,true);
    songLyricsDisplay("",0,500,true);
    
    PlaySound(TEXT("idly.wav"), NULL, SND_ASYNC);
    songLyricsDisplay("when ",0,2900,false);
    songLyricsDisplay("you ",0,500,false);
    songLyricsDisplay("go ",0,1500,false);
    //songLyricsDisplay(".. ",50,1500,false);
    songLyricsDisplay("would you ",50,500,false);
    //songLyricsDisplay("you ",0,500,false);
    songLyricsDisplay("have ",0,900,false);
    songLyricsDisplay("the ",0,800,false);
    songLyricsDisplay("guts ",0,700,false);
    songLyricsDisplay("to ",0,600,false);
    songLyricsDisplay("say?",0,2000,false);

    cout<<endl;
    songLyricsDisplay("i dont love you",90,1000,false);
    cout<<endl;
    songLyricsDisplay("like i loved you?",80,1100,false);
    cout<<endl;
    songLyricsDisplay("yes",0,200,false);
    songLyricsDisplay("ter",0,1000,false);
    songLyricsDisplay("day",0,1000,false);
    songLyricsDisplay(".",0,1700,false);
    songLyricsDisplay(".",0,1400,false);
    songLyricsDisplay(".",0,700,false);
    songLyricsDisplay(".",0,300,false);

    cout<<endl;
    songLyricsDisplay("i dont love you",40,1400,false);
    cout<<endl;
    songLyricsDisplay("like i loved you",40,1900,false);
    cout<<endl;
    songLyricsDisplay("yes",0,200,false);
    songLyricsDisplay("ter",0,1200,false);
    songLyricsDisplay("day",0,1000,false);
    songLyricsDisplay("....",1000,10,false);
    
    cout<<endl;
    songLyricsDisplay("i dont love you",60,1400,false);
    cout<<endl;
    songLyricsDisplay("like i loved you",60,2000,false);
    cout<<endl;
    songLyricsDisplay("yes",0,600,false);
    songLyricsDisplay("ter",0,1200,false);
    songLyricsDisplay("day",0,1000,false);
    songLyricsDisplay("....",1000,10,false);

    cout<<endl;
    system("pause");
    

    return 0;
}

void songLyricsDisplay(const string lyrics, int typeSpeed, int pauseDuration, bool clearConsole)
{
    for(int i = 0; i < lyrics.length(); i++)
    {
        cout << lyrics[i] << flush;
        Sleep(typeSpeed);
    }
    Sleep(pauseDuration);
    if(clearConsole)
        system("cls");
}