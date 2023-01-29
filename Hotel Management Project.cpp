#include <iostream>

using namespace std;

int main()
{
    int quant,choice;

    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0; // Quantity

    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0; // food items sold

    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0; // total price of items

    cout<<"\n\tQuantity of items we have";
    cout<<"\nRoom available:";
    cin>>Qrooms;
    cout<<"\nQuantiy of pasta:";
    cin>>Qpasta;
    cout<<"\nQuantiy of burger:";
    cin>>Qburger;
    cout<<"\nQuantiy of noodles:";
    cin>>Qnoodles;
    cout<<"\nQuantiy of shake:";
    cin>>Qshake;
    cout<<"\nQuantiy of chicken-roll:";
    cin>>Qchicken;

    menu:
    cout<<"\n\t\t Please select from the given menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chiecken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice: ";
    cin>>choice;

    switch(choice)
    {

    case 1:
            cout<<"\n\nEnter the number of rooms you want:";
            cin>>quant;
            if(Qrooms-Srooms>=quant)
            {
             Srooms = Srooms+quant;
             Total_rooms = Total_rooms+quant*1200;
             cout<<"\n\n\t\t "<<quant<<" room\rooms have been alloted to you!";
            }
            else
             cout<<"\n\t Only"<<Qrooms-Srooms<<" Rooms remaining in the hotel";
             break;


    case 2:
            cout<<"\n\nEnter pasta Quantity:";
            cin>>quant;
            if(Qpasta-Spasta>=quant)
            {
             Spasta = Spasta+quant;
             Total_pasta = Total_pasta+quant*250;
             cout<<"\n\n\t\t"<<quant<<" Pasta ordered!";
            }
            else
             cout<<"\n\t Only"<<Qpasta-Spasta<<"pasta remaining in the hotel";
             break;



    case 3:
            cout<<"\n\nEnter Burger Quantity:";
            cin>>quant;
            if(Qburger-Sburger>=quant)
            {
             Sburger = Sburger+quant;
             Total_burger = Total_burger+quant*120;
             cout<<"\n\n\t\t"<<quant<<" Burger ordered!";
            }
            else
             cout<<"\n\t Only"<<Qburger-Sburger<<"burger remaining in the hotel";
             break;


    case 4:
            cout<<"\n\nEnter Noodle Quantity:";
            cin>>quant;
            if(Qnoodles-Snoodles>=quant)
            {
             Snoodles = Snoodles+quant;
             Total_noodles = Total_noodles+quant*150;
             cout<<"\n\n\t\t"<<quant<<" Noodle ordered!";
            }
            else
             cout<<"\n\t Only"<<Qnoodles-Snoodles<<"noodles remaining in the hotel";
             break;


    case 5:
            cout<<"\n\nEnter Shake Quantity:";
            cin>>quant;
            if(Qshake-Sshake>=quant)
            {
             Sshake = Sshake+quant;
             Total_shake = Total_shake+quant*200;
             cout<<"\n\n\t\t"<<quant<<" Shake ordered!";
            }
            else
             cout<<"\n\t Only"<<Qshake-Sshake<<"shake remaining in the hotel";
             break;



    case 6:
            cout<<"\n\nEnter Chicken Roll Quantity:";
            cin>>quant;
            if(Qchicken-Schicken>=quant)
            {
             Schicken = Schicken+quant;
             Total_chicken = Total_chicken+quant*150;
             cout<<"\n\n\t\t"<<quant<<" Chicken Roll ordered!";
            }
            else
             cout<<"\n\t Only"<<Qchicken-Schicken<<"chicken Roll remaining in the hotel";
             break;

     case 7:
            cout<<"\n\tDetails of sales and collection";
            cout<<"\n\nNumber of rooms we had: "<<Qrooms;
            cout<<"\n\nNumber of rooms we gave for rent: "<<Srooms;
            cout<<"\n\nRemaining rooms: "<<Qrooms-Srooms;
            cout<<"\n\nTotal rooms collection for the day: "<<Total_rooms;


            cout<<"\n\nNumber of Pastas we had: "<<Qpasta;
            cout<<"\n\nNumber of Pastas we sold: "<<Spasta;
            cout<<"\n\nRemaining Pastas: "<<Qpasta-Spasta;
            cout<<"\n\nTotal Pastas collection for the day: "<<Total_pasta;


            cout<<"\n\nNumber of Burger we had: "<<Qburger;
            cout<<"\n\nNumber of Burger we sold: "<<Sburger;
            cout<<"\n\nRemaining burger: "<<Qburger-Sburger;
            cout<<"\n\nTotal Burger collection for the day: "<<Total_burger;


            cout<<"\n\nNumber of Noodles we had: "<<Qnoodles;
            cout<<"\n\nNumber of Noodles we sold: "<<Snoodles;
            cout<<"\n\nRemaining Noodles: "<<Qnoodles-Snoodles;
            cout<<"\n\nTotal Noodles collection for the day: "<<Total_noodles;


            cout<<"\n\nNumber of Shakes we had: "<<Qshake;
            cout<<"\n\nNumber of Shakes we sold: "<<Sshake;
            cout<<"\n\nRemaining Shakes: "<<Qshake-Sshake;
            cout<<"\n\nTotal Shake collection for the day: "<<Total_shake;



            cout<<"\n\nNumber of Chicken roll we had: "<<Qchicken;
            cout<<"\n\nNumber of Chicekn roll we sold: "<<Schicken;
            cout<<"\n\nRemaining Chicken roll: "<<Qchicken-Schicken;
            cout<<"\n\nTotal Chicken roll collection for the day: "<<Total_chicken;

            cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_burger+Total_pasta+Total_noodles+Total_shake+Total_chicken;
            break;

       case 8:
              cout<<"\n\nThankyou!";
              exit(0);

         default:
                  cout<<"\n Please select the numbers mentioned above!";

    }

goto menu;


    return 0;
}
