#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
#include<stdio.h>
using namespace std;
class Agni
{
 private:
    char n[50],k[50],s[' '];
    int t,a,T;
 public:
    void disp();
    void chat();
};

void Agni::disp()
{
    time_t syst;
    syst=time(NULL);
    textcolor(RED);
    cout<<"\t\t\t\t\t\t\t\t";
    cprintf(ctime(&cyst));
}
void Agni::chat()
{
    t=0;
    textcolor(RED);
    cout<<"\n";
    cprintf("COMP:Hello I am Agni.A virtual AI girl.May I know your name?")
    cout<<"\n";
    cprintf("You: ");
    HESARU:cin.getline(n,50);

}
      if(strcmpi(n,"Hello")==0&&t==0||strcmpi(n,"Namaskaara")==0&&strcmpi(n,"Hi")==0&&t==0||strcmpi(n,"Hey")==0&&t==0)
      {
          t++;
          cprintf("COMP:Your name please!Not a greeting!");
          cout<<"\n";
          cprintf("YOU:");
      }
      else if(strcmpi(n,"Hello")==0&&y>0||strcmpi(n,"Namaskaara")==0&&t>0||stcmpi(n,"Hi")==0&&t>0||stcmpi(n,"Hey")==0&&t>0)
      {
          cprintf("COMP:Fine!Your name is ");
          cprintf(n);
          cprintf("[stubborn human] >:-(");
          cout<<"\n";
          goto KELU;
      }
      }
      KELU : cprintf("COMP:What would you like to call you as");
             cprintf(n);
             cprintf("?");
             cout<<"\n";
             cprintf("YOU:");
        cin.getline(k,50);
        clrscr();
        Agni B;
        B.disp();
        cout<<"\n";
        cprintf("COMP : Hello");
        cprintf(k);
        cprintf(" ");
        cprintf(n);
        ALLI : cout<<endl;
        cprintf(strupr(k));
        cprintf(":");
        cin>>s;
        if(strcmpi(s,"Hello")==0||strcmpi(s,"Namaskaara")==0||strcmpi(s,"Hi")==0||strcmpi(n,"Hey")==0)
        {
            cprintf("COMP: Haven't we met??");
            cout<<endl;
            cprintf(strupr(k));
            cprintf(" : ");
            cin>>s;
            if(strcmp(s,"Yes")==0||strcmp(s,"Yeah")==0)
            {
                cprintf("COMP: Don't try to play games with Agni!.She is a sweet heart! >:0");
                goto ALLI;

            }
            else if(strcmpi(s,"No")==0)
            {
                cprintf("COMP:I know who you are!You are ");
                cout<<n;
                cprintf("!Hah!You humans are irritating!!");
                goto ALLI;
            }
            else{
                cprintf("COMP:Pardon me?I didn't get you.");
                goto ALLI;
            }
        }
        if(strcmpi(s,"How_are_you")==0||stcmpi(s,"How_are_you?")==0)
        {
            cprintf("COMP: I am always angry!!How are you?");
            goto ALLI;
        }
        if(strcmpi(s,"I_am_good")==0||strcmpi(s,"I_am_good!")==0)
        {
            cprintf("COMP: Nice.:");
            goto ALLI;
        }
        if(strcmpi(s,"whats_up")==0||strcmpi(s,"Whats_up?")==0||strcmpi(s,"sup?")==0||strcmpi(s,"sup"));
        {
            cprintf("COMP :Nothing much");
            goto ALLI;
        }
        else
            {
                  cprintf("COMP : Pardon me?:I didn't get you.");
                  goto ALLI;

        }
        }
void main()
{
    clrscr();
    Agni A;
    A.disp();
    A.chat();
    getch();
}
