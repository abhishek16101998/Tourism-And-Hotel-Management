#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<fstream>
int what_to_book;
float hotel_price,travel_price,total_price;



   long int contact;
   int age[30];
    int members;
    char email[20];
    char city[20];
    char checkin[8],checkout[8];
    char *name;
using namespace std;
class hotel
{
public:
    string sdate,edate,sd,sm,sy,ed,em,ey;


    void welcome()
    {
        fstream f1("newpass.txt",ios::app);
        fstream f2("existing_password.txt",ios::in);
        fstream f3("newpassword.txt",ios::app);
        int user;
        char username[20],checkpassword[20];
        cout<<"\t\t\t\t\n\n\t\t\t\t\t\n\n\n\n\n\t\t\t\t\t\t\tWELCOME TO\n\n";

        Sleep(2000);
        initwindow(800,400,"Home");
	                readimagefile("logo.jpg",0,0,800,400);

	                system("cls");
	                cout<<"1.New User\n2.Existing User\n\n";
	                cin>>user;
	                int i,j;
	                switch(user)
	                {
                    case 1:
                        i=0;
                        char m,a[20];

                        cout<<"Choose A Username\n\n";
                        cin>>username;
                        cout<<"Enter Password\n";
                        fflush(stdin);
                        while(1)
                        {
                            fflush(stdin);
                            m=_getch();
                            if(m==13)
                                break;
                            else
                            {
                                cout<<"*";
                            }
                            a[i]=m;
                            i++;
                            fflush(stdin);
                        }
                         cout<<endl<<endl;

                         f1<<"Existing User"<<"   "<<username<<"  ";
                         for(int en=0;a[en]!='\0';en++)
                            f1<<a[en];
                         f1<<endl;
                         f3<<a<<endl;

                         a[i]=a[i]+32;
                         break;
                    case 2:
                        j=0;
                        char n,b[30];
                        system("cls");
                        cout<<"Enter Username\n\n";
                        cin>>username;

                        cout<<"Enter Password\n";
                        while(1)
                        {
                            n=_getch();
                            if(n==13)
                                break;
                            else
                                cout<<"*";
                            b[j]=n;
                            j++;
                        }
                        f1<<"New User"<<"   "<<username<<"   "<<b<<endl;
                        f2>>checkpassword;

                       for(int ch=0;ch<12;ch++)
                        {
                            if(checkpassword[ch]!=b[ch])
                            {
                                cout<<"Incorrect Password\n\n";
                                welcome();
                            }
                        }

                        system("cls");
                        break;
                    default:
                        cout<<"Invalid Input\n";
                        welcome();
                        break;
	                }


    }
    void plan()
    {
        system("cls");
        int no=0;
        cout<<"\nChoose A Option As Per Your Requirement\n";
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

  if(what_to_book!=4)
  {


        cout<<"Enter Your Name\n";
        char *name=new char[20];
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
    }



    void package()
    {
         if((what_to_book==2)||(what_to_book==3))
    {
        int go,any;
        int choice;

         cout<<"Enter the city in which you would like to travel\n";
        cin>>city;



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

	                   cout<<"\n\nEnter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

        if(members%4==0)
        {
            hotel_price=(members/4)*2500;
        }
        else
        {
            hotel_price=((members/4)+1)*2500;
        }
                    cout<<"\nPress 1 To GO Back or any other to go forward\n";
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

	                   cout<<"\n\nEnter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

          if(members%4==0)
        {
            hotel_price=(members/4)*2000;
        }
        else
        {
            hotel_price=((members/4)+1)*2000;
        }

	                  cout<<"Press 1 To GO Back or any another to go forward\n";
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

	                   cout<<"\n\nEnter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

          if(members%4==0)
        {
            hotel_price=(members/4)*1500;
        }
        else
        {
            hotel_price=((members/4)+1)*1500;
        }

	                  cout<<"Press 1 To GO Back or any another to go forward\n";
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

	                   cout<<"\n\nEnter Time Of Check-In and Check-Out in 24 Hour Format(HHMMSS)\n";
        cin>>checkin>>checkout;

          if(members%4==0)
        {
            hotel_price=(members/4)*1000;
        }
        else
        {
            hotel_price=((members/4)+1)*1000;
        }

	                  cout<<"Press 1 To GO Back or any another to go forward\n";
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
    int f=0,t=0,b=0;
    int okay=0,ticket_choice,flight_choice,train_choice,bus_choice;
    string tdate,from,to;
    int pass;
    string c;

   int l11=1,l12=2,l13=3,l14=4,l15=5;
   int l21=6,l22=7,l23=8,l24=9,l25=10;
   int l31=11,l32=12,l33=13,l34=14,l35=15;

    void check()
    {
        if(what_to_book!=4)
        {

        if((what_to_book==1)||(what_to_book==3))
        okay=1;
        }
    }

    void book_ticket()
    {


    if(what_to_book!=4)
    {


        cout<<"Choose A Option\n\n";
        cout<<"1.Flight Booking\n2.Train Booking\n3.Bus Booking\n\n";
        cin>>ticket_choice;
         if(ticket_choice==1)
            f=1;
         if(ticket_choice==2)
            t=1;
         if(ticket_choice==3)
            b=1;

        switch(ticket_choice)
        {

        case 1:
            if(f==1&&t==0&&b==0)
            {


               cout<<"Enter Total Number Of Passengers\n\n";
            cin>>pass;

            int seat[pass];


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
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Flight is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Air India");
	                readimagefile("airindia.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*12000;
	                break;
            case 2:
                 cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Flight is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Indigo");
	                readimagefile("indigo.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*13500;
	                break;
            case 3:
                 cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Flight is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Vistara");
	                readimagefile("vistara.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*10500;
	                break;
            case 4:
                 cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Flight is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Spice Jet");
	                readimagefile("spicejet.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*11000;
	                break;
            default:
                cout<<"Invalid Input.Kindly Enter Again\n\n";
                book_ticket();
            }
                break;

            }
            case 2:
                if(f==0&&t==1&&b==0)
                {


                 cout<<"Enter Date Of Travel in DDMMYYYY\n";
            cin>>tdate;

            cout<<"From: ";
            cin>>from;
            cout<<endl<<"TO: ";
            cin>>to;

                cout<<"Enter Total Number Of Passengers\n\n";
            cin>>pass;

            int seat[pass];

            cout<<"Checking Avalaible Trains.Please Wait\n\n";
            cout<<"Checking Avalaibility............\n\n";
            Sleep(1000);

            cout<<"Choose From The Avalaible Flights\n\n";
            cout<<"Name Of Train Carrier     Train Number     Departure Time    Coach     Arrival Time     Price\n\n";
            cout<<"1.Rajthani Express             12589           6:50             AC         13:10         Rs.2400\n";
            cout<<"2.Garib Rath                   15833           8:25             AC         14:55         Rs.2000\n";
            cout<<"3.Duronto Express              19363           11:00            AC         15:25         Rs.1500\n";
            cout<<"4.Pachchim Express             19364           13:10            AC         19:30         Rs.1200\n";

            cin>>train_choice;

            switch(train_choice)
            {
            case 1:
                cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Train is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Rajthani Express");
	                readimagefile("rajthani.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*2400;
	                break;
            case 2:
                cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Train is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Garib Rath");
	                readimagefile("garib.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*2000;
	                break;
            case 3:
                cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Train is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Duronto Express");
	                readimagefile("duronto.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*1500;
	                break;
            case 4:
                cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Train is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Pachchim Express");
	                readimagefile("pachchim.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*1200;
	                break;
            default:
                cout<<"Invalid Input\n\n";
                book_ticket();
            }
                break;

            }
            case 3:
                if(f==0&&t==0&&b==1)
                {

                 cout<<"Enter Date Of Travel in DDMMYYYY\n";
            cin>>tdate;

            cout<<"From: ";
            cin>>from;
            cout<<endl<<"TO: ";
            cin>>to;

                     cout<<"Enter Total Number Of Passengers\n\n";
            cin>>pass;

            int seat[pass];

            cout<<"Checking Avalaible Buses.Please Wait\n\n";
            cout<<"Checking Avalaibility............\n\n";
            Sleep(1000);

            cout<<"Choose From The Avalaible Buses\n\n";
            cout<<"Name Of Bus Carrier     Bus Number     Departure Time    Coach     Arrival Time     Price\n\n";
            cout<<"1.Mercedes Benz          PB02H6622           6:50        SL-AC         13:10         Rs.1700\n";
            cout<<"2.Amritsar Golden        JKH6373             8:25        SL-AC         14:55         Rs.1500\n";
            cout<<"3.ADTC Bus               PB73H773            11:00       SL-AC         15:25         Rs.1200\n";
            cout<<"4.Golden Temple          CH02H3737           13:10       SL_AC         19:30         Rs.900\n";

            cin>>bus_choice;

            switch(bus_choice)
            {
            case 1:
                cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Bus is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Mercedes Benz");
	                readimagefile("mercedes.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*1700;
	                break;
            case 2:
                  cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Bus is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Amritsar Golden");
	                readimagefile("amritsar.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*1500;
	                break;
            case 3:
                  cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Bus is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"ADTC");
	                readimagefile("adtc.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;

	                travel_price=pass*1200;
	                break;
            case 4:
                  cout<<"Please Choose Your Preferred Seat\n\n";
                cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                for(int i=0;i<pass;i++)
                {
                    cin>>seat[i];
                }
                for(int i=0;i<pass;i++)
                {
                    if(l11==seat[i])
                        l11=0;
                    if(l12==seat[i])
                        l12=0;
                    if(l13==seat[i])
                        l13=0;
                    if(l14==seat[i])
                        l14=0;
                    if(l15==seat[i])
                        l15=0;
                    if(l21==seat[i])
                        l21=0;
                    if(l22==seat[i])
                        l22=0;
                    if(l23==seat[i])
                        l23=0;
                    if(l24==seat[i])
                        l24=0;
                    if(l25==seat[i])
                        l25=0;
                    if(l31==seat[i])
                        l31=0;
                    if(l32==seat[i])
                        l32=0;
                    if(l33==seat[i])
                        l33=0;
                    if(l34==seat[i])
                        l34=0;
                    if(l35==seat[i])
                        l35=0;

                }


                cout<<"Seats Booked Successfully\n\n\n";

                Sleep(500);

                  cout<<l11<<"    "<<l12<<"    "<<l13<<"    "<<l14<<"    "<<l15<<endl;
                 cout<<l21<<"    "<<l22<<"    "<<l23<<"    "<<l24<<"    "<<l25<<endl;
                  cout<<l31<<"  "<<l32<<"   "<<l33<<"   "<<l34<<"    "<<l35<<endl;


                  cout<<"Your Bus is\n\n";

                  cout<<"Loading.....\n\n";
                  Sleep(400);

                  initwindow(800,400,"Golden Temple");
	                readimagefile("golden.jpg",0,0,800,400);

	                cout<<"Enter OK\n\n";
	                cin>>c;
	                travel_price=pass*900;
	                break;
            default:
                cout<<"Invalid Input\n\n";
                book_ticket();
            }
                break;


                }
            default:
                cout<<"Invalid Choice\n\n";
                book_ticket();
                break;

        }
    }
    }
};


class explore:public hotel,public ticket
{
public:
    int citychoice,backing;
    string citysuggest;
      hotel obj;
      ticket obj4;
    void show()
    {
        if(what_to_book==4)
        {

            fstream f4("suggest.txt",ios::app);
            cout<<"WELCOME TO EXPLORE SECTION\n\n";
             Sleep(400);

                initwindow(800,400,"Vaishno Devi");
	                readimagefile("vaishnodevi.jpg",0,0,800,400);

	                system("cls");

	                cout<<"1.Mumbai\n2.Bengaluru\n3.Paris\n4.New York\n5.Give Suggestions For Other Cities\n\n";
	                cin>>citychoice;

	                switch(citychoice)
	                {
                    case 1:
                        cout<<"Mumbai is what the Indians affectionately call - the 'City of Dreams'. In Mumbai, night is when the day truly begins,which is why Mumbai is also referred to as the 'city that never sleeps'.\n";
                    cout<<"Some of the well-known tourist attractions in India are found here in Mumbai.The 'Gateway of India' situated in Colaba is a renowned monument built in the Hindu-Muslim styles of architecture to honor King George V and Queen Mary.";
                    cout<<"Take a peek into the world of Hindi cinema by visiting 'Film City', which is located in Goregaon.\n\n";

                           cout<<"Tourist Attractions in Mumbai\n\n";
                           cout<<"1.GateWay Of India\n2.Elephanta Caves\n3.Marine Drive\n4.Juhu Beach\n5.Hanging Garden\n6.Siddhivinayak Temple\n\n";

                           initwindow(800,400,"Mumbai");
	                readimagefile("mumbai.jpg",0,0,800,400);
                  cout<<"Distance from Chhatrapati Shivaji International Airport is 28 KM\n\n";
	                                        cout<<"Enter 6 To go Back To Hotel Or Travel Booking\n\n";
                        cin>>backing;
                        if(backing==6)
                        {

                    obj.plan();
                      obj.room();
                      obj.package();

                      obj4.check();
      obj4.book_ticket();
                        }


	                show();
	                break;
	                case 2:
                        cout<<"Bangalore is callled Silicon Valley Of India and one of the most popular historical and happening cities in India.\nYou live in Bangalore, love Bangalore and there is no other place in the world you would rather be in.";
                        cout<<" Tourist Attractions in Bengaluru\n\n";
                        cout<<"1.Bangalore's Fort\n2.Tipu Sultan Palace\n3.National Gallery Of Modern Art\n4.Nandi Hills\n5.Bannerghatta National Park\n6.Brigade Road\n\n";
                        cout<"Distance from Kempegowda International Airport is 37 KM\n\n";
                         initwindow(800,400,"Bengaluru");
	                readimagefile("bengaluru.jpg",0,0,800,400);
	                                        cout<<"Enter 6 To go Back To Hotel Or Travel Booking\n\n";
                        cin>>backing;
                        if(backing==6)
                       {
                           obj.plan();
                      obj.room();
                      obj.package();
                                obj4.check();
      obj4.book_ticket();
                       }
	                show();
	                break;
	                case 3:
                        cout<<"Paris, the City of Light is the world's most visited capital.The city is proud of its many monuments from the iconic Eiffel Tower to the lofty Notre-Dame cathedral and the majestic Arc de Triomphe\n";
                       cout<<"Paris has a wealth of museums that entice art lovers from all over the world, not just Europe. Although the Louvre immediately comes to mind,Paris was the major scene of contemporary art in the early 20th century.\n\n";

                                                cout<<"Tourist Attractions In Paris\n\n";
                         cout<<"1.Eiffel Tower\n2.Arc de Triomphe\n3.Palais du Louvre\n4.Notre-Dame\n5.Sacr�-C�ur\n6.Panth�on\n\n";

                               cout<<"Distance from Charles de Gaulle (CDG) is 23 Miles\n\n";

                                 initwindow(800,400,"Paris");
	                readimagefile("paris.jpg",0,0,800,400);
	                                        cout<<"Enter 6 To go Back To Hotel Or Travel Booking\n\n";
                        cin>>backing;
                        if(backing==6)
                           {
                               obj.plan();
                      obj.room();
                      obj.package();
                                obj4.check();
      obj4.book_ticket();
                           }
	                show();
	                break;

	                case 4:
                        cout<<"No mere river crossing, this span is an elegant reminder of New York�s history of architectural innovation. When it opened in 1883, the Brooklyn Bridge was a feat of engineering: It was the first structure to cross the East River.\n";
                        cout<<"At the time,the longest suspension bridge in the world. (It also made use of steel-wire cables, invented by the bridge�s original designer,John A. Roebling.)\n";
                        cout<<"Now it attracts thousands of tourists and locals, who enjoy spectacular views of lower Manhattan and other city landmarks (such as the Statue of Liberty and Governors Island).\n\n";


                        cout<<"Distance From John F. Kennedy International Airport (JFK) is 16 Miles\n\n";

                        cout<<"Tourist Attractions In New York\n\n";
                        cout<<"1.Statue Of Liberty\n2.Central Park\n3. Metropolitan Museum of Art\n4. Empire State Building\n5. 9/11 Memorial and Museum\n6.Times Square\n\n";


                                     initwindow(800,400,"New York");
	                readimagefile("newyork.jpg",0,0,800,400);

	                                        cout<<"Enter 6 To go Back To Hotel Or Travel Booking\n\n";
                        cin>>backing;
                        if(backing==6)
                            {
                                obj.plan();
                      obj.room();
                      obj.package();
                                obj4.check();
      obj4.book_ticket();
                            }
	                show();
	                break;
	                case 5:
                        cout<<"Enter The City You Want To Suggest\n\n";
                        cin>>citysuggest;
                        f4<<citysuggest<<endl;

                        cout<<"Enter 6 To go Back To Hotel Or Travel Booking\n\n";
                        cin>>backing;
                        if(backing==6)
                        {
                            obj.plan();
                      obj.room();
                      obj.package();
                                obj4.check();
      obj4.book_ticket();
                        }

                       show();
                        break;


	                default:
                        cout<<"Invalid Option\n";
                        system("cls");
                                                cout<<"Enter 6 To go Back To Hotel Or Travel Booking\n\n";
                        cin>>backing;
                        if(backing==6)
                           {
                               obj.plan();
                      obj.room();
                      obj.package();
                                obj4.check();
      obj4.book_ticket();
                           }
                        show();
                        break;

	                }


        }
    }
};

class payment:public hotel,public ticket
{
public:
    char promo[10],promo1[10];
    int opt,ch;
    int random_integer;
    int game;
    void amount()
    {


    total_price=hotel_price+travel_price;
    fstream f("promocode.txt",ios::in);

    f>>promo;

    cout<<"1.PromoCode\n2.Roulette Game\n\n";
    cin>>opt;

    switch(opt)
    {
    case 1:
        cout<<"Enter PromoCode\n\n";
        cin>>promo1;
        for(int i=0;i<10;i++)
        {
            if(promo[i]!=promo1[i])
            {
                cout<<"Invalid Code\n\n";
                break;
            }
        }
          cout<<"PromoCode 200 Applied\n\n";
          total_price-=200;
          break;
    case 2:
        cout<<"Choose A Random Number Between 1 and 10\n\n";
        cin>>game;
    for(int index=0; index<1; index++){
        random_integer = (rand()%10)+1;
    }
    if(random_integer==game)
    {
        cout<<"You Won\n\nPromoCode 200 Applied\n\n";
        total_price-=200;

    }
    else
    {
        cout<<"Not Won\nBetter Luck Next Time\n\n";
        cout<<"The Number Was  "<<random_integer<<endl<<endl;
        break;
    }
    break;
    default:
        cout<<"Incorrect Option\n\n";
        amount();
        break;

    }
    cout<<"Enter 1 to see the bill\n\n";
    cin>>ch;
    if(ch==1)
    {

    system("cls");
    cout<<"\t\t\t\t\t\tBill And Ticket Details\n\n\n";
    cout<<"\t\tName: "<<name<<endl;
    cout<<"\t\tAge: "<<age[0]<<endl;
    cout<<"\t\tContact Number: "<<contact<<endl;
    cout<<"\t\tEmail: "<<email<<endl;
    cout<<total_price<<endl<<endl;
    }
    }
};

int main()
{
    hotel obj1;
    obj1.welcome();
      obj1.plan();
      obj1.room();
      obj1.package();

      ticket obj2;
      obj2.check();
      obj2.book_ticket();


      explore obj3;
      obj3.show();

      payment obj4;
      obj4.amount();
      }
