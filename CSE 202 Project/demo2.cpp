#include<iostream>
#include<graphics.h>
#include<windows.h>
#include<string.h>
using namespace std;

class hotel
{
public:
    string sdate,edate,sd,sm,sy,ed,em,ey;
    int what_to_book;
    int contact;
    int members;
    string email;
    string city;
    string checkin,checkout;
    char name[20];
    float hotel_price,travel_price,total_price;
    void plan()
    {
        int no=0;
        cout<<"Choose A Option As Per Your Requirement\n";
        cout<<"1.Flight/Train/Bus Booking\n2.Hotel Booking\n3.Both 1 And 2\n4.Explore About the Cities\n\n";
        cin>>what_to_book;
        if(what_to_book==1)
        {
          no=1;
        }
        if(what_to_book==2)
        {
            no=1;
        }
        if(what_to_book==3)
        {
            no=1;
        }
        if(what_to_book==4)
        {
            no=1;
        }
        if(no==0)
        {
            cout<<"Enter Correct Option\n\n\n\n";
            plan();
        }

    }

    void date()
    {
        if((what_to_book==2)||(what_to_book==3 ))
    {
        cout<<"Enter Starting Date and Ending Date in the Format DDMMYYYY\n";
        cin>>sdate>>edate;

        sd+=sdate[0];
        sd+=sdate[1];
        ed+=edate[0];
        ed+=edate[1];

        sm+=(sdate[2]);
        sm+=(sdate[3]);
        em+=edate[2];
        em+=edate[3];

        sy+=sdate[4];
        sy+=sdate[5];
        sy+=sdate[6];
        sy+=sdate[7];
        ey+=edate[4];
        ey+=edate[5];
        ey+=edate[6];
        ey+=edate[7];
    }
    }

    void room()
    {

        cout<<"Enter the city in which you would like to travel\n";
        cin>>city;

        cout<<"Enter Your Name\n";
        cin>>name;


        cout<<"Enter Total Number of Persons\n";
        cin>>members;

        int age[members];

        cout<<"Enter Age of each member\n\n";
        for(int i=0;i<members;i++)
        {
            cout<<"Enter Age of "<<(i+1)<<" member\n";
           cin>>age[i];
        }


        cout<<"Enter Contact number and email\n";
        cin>>contact;
        cin>>email;

    }



    void package()
    {
         if((what_to_book==2)||(what_to_book==3))
    {
        int go,any;
        int choice;
        cout<<"Choose The Package You Want to Book\n";
        cout<<"1.Premium Package-Rs.2500\n2.Golden Package-Rs.2000\n3.Silver Package-Rs.1500\n4.Normal Package-Rs.1000\nTo Know about Packages press 5\n";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Thank You For Choosing Premium Package\n\n";
            Sleep(400);
            cout<<"Choose A Hotel\n\n";
            cout<<"1.Hilton Hotels\n2.Kaveri Hotels\n3.Hyatt Palace\n4.Taj Hotel\n5.Oberoi Hotel\n\n";
            cin>>any;
            cout<<"Processing.....\n";
            Sleep(300);
            cout<<"Your Room Will Be \n";
            Sleep(1000);
            cout<<"Loading";
            for(int i=0;i<5;i++)
            {
                cout<<".";
            Sleep(500);
            }

               	initwindow(800,400,"Premium Package");
	                readimagefile("premiumroom.jpg",0,0,800,400);

	                   cout<<"Enter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

        if(members%4==0)
        {
            hotel_price=(members/4)*2500;
        }
        else
        {
            hotel_price=((members/4)+1)*2500;
        }
                    cout<<"\nPress 1 To GO Back\n";
                    cin>>go;
                    if(go==1)
                        package();
            break;
        case 2:
            cout<<"Thank You For Choosing Golden Package\n";
             Sleep(400);
            cout<<"\nChoose A Hotel\n\n";
            cout<<"1.Hilton Hotels\n2.Kaveri Hotels\n3.Hyatt Palace\n4.Taj Hotel\n5.Oberoi Hotel\n\n";
            cin>>any;
              cout<<"Processing.....\n";
            Sleep(300);
             cout<<"Your Room Will Be \n";
             Sleep(1000);
            cout<<"Loading";
            for(int i=0;i<5;i++)
            {
                cout<<".";
            Sleep(500);
            }
            initwindow(800,400,"Golden Package");
	                readimagefile("goldenroom.jpg",0,0,800,400);

	                   cout<<"Enter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

          if(members%4==0)
        {
            hotel_price=(members/4)*2000;
        }
        else
        {
            hotel_price=((members/4)+1)*2000;
        }

	                  cout<<"Press 1 To GO Back\n";
                    cin>>go;
                    if(go==1)
                        package();
            break;
        case 3:
            cout<<"Thank You For Choosing Silver Package\n\n";
             Sleep(400);
            cout<<"Choose A Hotel\n\n";
            cout<<"1.Hilton Hotels\n2.Kaveri Hotels\n3.Hyatt Palace\n4.Taj Hotel\n5.Oberoi Hotel\n\n";
            cin>>any;
              cout<<"Processing.....\n";
            Sleep(300);
             cout<<"Your Room Will Be \n";
             Sleep(1000);
            cout<<"Loading";
            for(int i=0;i<5;i++)
            {
                cout<<".";
            Sleep(500);
            }
                	initwindow(800,400,"Silver Package");
	                readimagefile("silverroom.jpg",0,0,800,400);

	                   cout<<"Enter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

          if(members%4==0)
        {
            hotel_price=(members/4)*1500;
        }
        else
        {
            hotel_price=((members/4)+1)*1500;
        }

	                  cout<<"Press 1 To GO Back\n";
                    cin>>go;
                    if(go==1)
                        package();
            break;
        case 4:
            cout<<"Thank You For Choosing Normal Package\n\n";
             Sleep(400);
            cout<<"Choose A Hotel\n\n";
            cout<<"1.Hilton Hotels\n2.Kaveri Hotels\n3.Hyatt Palace\n4.Taj Hotel\n5.Oberoi Hotel\n\n";
            cin>>any;
              cout<<"Processing.....\n";
            Sleep(300);
             cout<<"Your Room Will Be \n";
             Sleep(1000);
            cout<<"Loading";
            for(int i=0;i<5;i++)
            {
                cout<<".";
            Sleep(500);
            }
                	initwindow(800,400,"Normal Package");
	                readimagefile("deluxeroom.jpg",0,0,800,400);

	                   cout<<"Enter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

          if(members%4==0)
        {
            hotel_price=(members/4)*1000;
        }
        else
        {
            hotel_price=((members/4)+1)*1000;
        }

	                  cout<<"Press 1 To GO Back\n";
                    cin>>go;
                    if(go==1)
                        package();
            break;
        case 5:
            cout<<"Details of Premium Package:\n";
            cout<<"RS.2500/Day\n";
            cout<<"4 Time Meals Included\n4 Persons In A Room\n\n";

            cout<"Details of Golden Package:\n";
            cout<<"Rs.2000/Day\n";
            cout<<"3 Time Meals Included\n4 Persons In A Room\n\n";

            cout<<"Details of Silver Package:\n";
            cout<<"Rs.1500/Day\n";
            cout<<"2 Time Meals Included\n4 Persons In A Room\n\n";

            cout<<"Details of Normal Package:\n";
            cout<<"Rs.1000/Day\n4 Persons In A Room\n\n";

            package();
            break;
        default:
            cout<<"Invalid Option\nTry Again\n";
            package();
            break;
        }
    }
    }

};

class ticket:public hotel
{
public:
    int okay=0,ticket_choice,flight_choice;
    string tdate,from,to,seat;

    string line1="1....2....3....4....5";
    string  line2="6....7....8....9....10";
     string line3="11...12...13...14...15";
     string  line4="16...17...18...19...20";
     string line5="21...22...23...24...25";
    string line6="26...27...28...29...30";
    void check()
    {
        if((what_to_book==1)||(what_to_book==3))
        okay=1;
    }

    void book_ticket()
    {
        cout<<"Choose A Option\n\n";
        cout<<"1.Flight Booking\n2.Train Booking\n3.Bus Booking\n\n";
        cin>>ticket_choice;

        switch(ticket_choice)
        {
        case 1:
            cout<<"Enter Date Of Travel in DDMMYYYY\n";
            cin>>tdate;

            cout<<"From: ";
            cin>>from;
            cout<<endl<<"TO: ";
            cin>>to;

            cout<<"Checking Avalaible Flights.Please Wait\n\n";
            cout<<"Checking Avalaibility............\n\n";
            Sleep(1000);

            cout<<"Choose From The Avalaible Flights\n\n";
            cout<<"Name Of Flight Carrier       Departure Time       Arrival Time     Price\n\n";
            cout<<"1.Air India                     6:50                  13:10         Rs.12000\n";
            cout<<"2.Indigo                        8:25                  14:55         Rs.13500\n";
            cout<<"3.Vistara                       11:00                 15:25         Rs.10500\n";
            cout<<"4.Spice Jet                     13:10                 19:30         Rs.11000\n";

            cin>>flight_choice;

            switch(flight_choice)
            {
            case 1:
                cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<"\n\n";
                string lin1='\0';
                for(int i=0;i<members;i++)
                {
                  cin>>seat;

                  for(int j=0;j<22;j++)
                  {
                      lin1+=line1[j];
                      lin1+=line1[j+1];

                      if(strcmp(seat,lin1)==0)
                      {
                          line1[j]='S';
                          line1[j+1]='B';
                      }

                      if((line2[j]+line2[j+1])==seat)
                      {
                          line2[j]="S";
                          line2[j+1]="B";
                      }

                      if((line3[j]+line3[j+1])==seat)
                      {
                          lin3[j]="S";
                          line3[j+1]="B";
                      }

                      if((line4[j]+line4[j+1])==seat)
                      {
                          line4[j]="S";
                          line4[j+1]="B";
                      }

                      if((line5[j]+line5[j+1])==seat)
                      {
                          line5[j]="S";
                          line5[j+1]="B";
                      }

                      if((line6[j]+line6[j+1])==seat)
                      {
                          line6[j]="S";
                          line6[j+1]="B";
                      }
                }

                cout<<"Seats Booked Successfully\n\n\n";

                cout<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<"\n\n";

            }

        }
    }
};

int main()
{
    hotel obj1;
      obj1.plan();
      obj1.room();
      obj1.package();

      ticket obj2;
      obj2.check();
      obj2.book_ticket();
      }
