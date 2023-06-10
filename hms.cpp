#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity Of Items We Have";
    cout<<"\n Rooms Available:";
    cin>>Qrooms;
    cout<<"\n Quantity Of Pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity Of Burger :";
    cin>>Qburger;
    cout<<"\n Quantity Of Noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity Of Shake :";
    cin>>Qshake;
    cout<<"\n Quantity Of Chicken Rolls :";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken Rolls";
    cout<<"\n7) Information About Sales and Collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter Your Choice! ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter The Number Of Rooms You Want: ";
            cin>>quant;
            if(Qrooms-Srooms >= quant)
            {
                Srooms=Srooms+quant;
                Total_rooms= Total_rooms+(quant*1200);
                cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";
            } else {
                cout<<"\n\tOnly "<<Qrooms-Srooms<<"Rooms remaining in hotel ";
            }
            break;
        case 2:
            cout<<"\n\n Enter Pasta Quantity : ";
            cin>>quant;
            if(Qpasta-Spasta >= quant){
                Spasta=Spasta+quant;
                Total_pasta = Total_pasta+(quant*250);
                cout<<"\n\n\t\t"<<quant<<" pasta is the order! ";
            } else {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<" Pasta remaining in hotel ";
            }
            break;
        case 3:
            cout<<"\n\n Enter Burger Quantity : ";
            cin>>quant;
            if(Qburger-Sburger >= quant){
                Sburger=Sburger+quant;
                Total_burger = Total_burger+(quant*120);
                cout<<"\n\n\t\t"<<quant<<" burger(s) is the order! ";
            } else {
                cout<<"\n\tOnly"<<Qburger-Sburger<<" Burger(s) remaining in hotel ";
            }
            break;
        case 4:
            cout<<"\n\n Enter Noodle Quantity : ";
            cin>>quant;
            if(Qnoodles-Snoodles >= quant) {
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+(quant*140);
                cout<<"\n\n\t\t"<<quant<<" noodles is the order! ";
            } else {
                cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" noodles remaining in hotel ";
            }
            break;
        case 5:
            cout<<"\n\n Enter Shake Quantity : ";
            cin>>quant;
            if(Qshake-Sshake >= quant) {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+(quant*120);
                cout<<"\n\n\t\t"<<quant<<" shake(s) is the order! ";
            } else {
                cout<<"\n\tOnly "<<Qshake-Sshake<<" shake(s) remaining in hotel ";
            }
            break;
        case 6:
            cout<<"\n\n Enter Chicken Rolls Quantity : ";
            cin>>quant;
            if(Qchicken-Schicken >= quant) {
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+(quant*150);
                cout<<"\n\n\t\t"<<quant<<" Chicken Roll(s) is the order! ";
            } else {
                cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken Roll(s) remaining in hotel ";
            }
            break;
        case 7:
            cout<<"\n\t\tDetails of sales and collection ";
            cout<<"\n\n Number of rooms we had : "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
            cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day : $"<<Total_rooms;
            cout<<"\n\n Number of pasta we had : "<<Qpasta;
            cout<<"\n\n Number of pasta we sold: "<<Spasta;
            cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
            cout<<"\n\n Total pasta collection for the day : $"<<Total_pasta;
            cout<<"\n\n Number of burgers we had : "<<Qburger;
            cout<<"\n\n Number of burgers we sold: "<<Sburger;
            cout<<"\n\n Remaining burgers : "<<Qburger-Sburger;
            cout<<"\n\n Total burger collection for the day : $"<<Total_burger;
            cout<<"\n\n Number of noodles we had : "<<Qnoodles;
            cout<<"\n\n Number of noodles we sold: "<<Snoodles;
            cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
            cout<<"\n\n Total noodle collection for the day : $"<<Total_noodles;
            cout<<"\n\n Number of shakes we had : "<<Qshake;
            cout<<"\n\n Number of shakes we sold: "<<Sshake;
            cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
            cout<<"\n\n Total shakes collection for the day : $"<<Total_shake;
            cout<<"\n\n Number of chicken rolls we had : "<<Qchicken;
            cout<<"\n\n Number of chicken rolls we sold: "<<Schicken;
            cout<<"\n\n Remaining chicken rolls : "<<Qchicken-Schicken;
            cout<<"\n\n Total chicken roll collection for the day : $"<<Total_chicken;
            cout<<"\n\n\n Total collection for today : $"<<Total_burger+Total_chicken+Total_noodles+Total_pasta+Total_rooms+Total_shake;
            break;
        case 8:
            exit(0);
        default:
            cout<<"\n Please select from the numbers mentioned above!";
            break;
    }
    goto m;
}