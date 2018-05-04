#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void platinum_package()
{
    char start_date[8];
    char end_date[8];
    int days,room;
    int bed,cost=0;
    string start_month;
    string  end_month;
    string start_year;
    string end_year;
    cout<<"Thank You For Choosing Platinum Package\n";
    cout<<"You will be given 4 Time Meals,AC Rooms,Travel Facility in This Package\n";
    cout<<"Enter Starting Date And Ending Date In The Given Format  (DDMMYYYY)\n";
    cin>>start_date;
    cin>>end_date;
    start_month+=(start_date[2]);
    start_month+=(start_date[3]);
    end_month+=end_date[2];
    end_month+=end_date[3];
    start_year+=start_date[4];
    start_year+=start_date[5];
    start_year+=start_date[6];
    start_year+=start_date[7];
    end_year+=end_date[4];
    end_year+=end_date[5];
    end_year+=end_date[6];
    end_year+=end_date[7];

        if((start_month==end_month)&&(start_year==end_year))
        {
            days=(int)end_date-(int)start_date;
            cout<<days;
        }
        else if((start_month!=end_month)&&(start_year==end_year)
        {
            if(start_month!=(int)02||end_month!=(int)02)
            days=(int)end_date-(int)start_date+32;
            if(start_month==(int)02||end_month==(int)02)
            {

            }
        }
        else if()

    cout<<"Choose Room\n";
    cout<<"1.  3 Bed Room:5000/Day\n2.   2 Bed Room:4000/Day\n3.   1 Bed Room:3000/Day\n4   Dormitory:2000/Day";
    cin>>room;
    switch(room)
    {
    case 1:
        cout<<"You have chosen 3 Bed Room\n";
        bed=3;
        cost=5000*days;
        break;
    case 2:
        cout<<"You have chosen 2 Bed Room\n";
        bed=2;
        cost=4000*days;
        break;
    case 3:
        cout<<"You have chosen 1 Bed Room\n";
        bed=1;
        cost=3000*days;
        break;
    case 4:
        cout<"You have chosen Dormitory\n";
        bed=0;
        cost=2000*days;
        break;
    default:
        cout<<"Wrong Input\nPlease Enter Again\n";
        platinum_package();
        break;

    }

}
class travel
{
private:
    char country_name[30];
    char state_name[30];
    char city_name[30];
    long int cust_number;
    int total_passengers;

private:

    void cust_details();
    void travel_details();
    void hotel_details();
public:
    void show();
};

void travel::travel_details()
{
    cout<<"Enter The Country Name You Would Like To Visit\n";
    cin>>country_name;
    cout<<"Enter The State You Would Like To Visit\n";
    cin>>state_name;
    cout<<"Enter The City You Would Like To Visit\n";
    cin>>city_name;
}

void travel::cust_details()
{
    cout<<"Enter Total Number Of Passengers\n";
    cin>>total_passengers;
    char passengers[total_passengers][30];
    int age[total_passengers];
    cout<<"Enter Passengers Name And Age One By One\n";
    for(int i=0;i<total_passengers;i++)
    {
        cin>>passengers[i][30];
        cin>>age[i];
    }


}

hotel_details()
{

    int choice;
    cout<<"Choose A Package\n";
    cout<<"1.Platinum Package\n";
    cout<<"2.Gold Package\n";
    cout<<"3.Deluxe Package\n";
    cout<<"4.Semi-Deluxe Package\n";
    cout<<"5.Silver Package\n";
    cout<<"If You Have Any Query On Packages,Please Refer To FAQ\nIf You Want To Check FAQ Press 6\n";
    cin>>choice;
    switch(choice)
    {
      case 1:
          platinum_package();
          break;
    case 2:
        gold_package();
        break;
    case 3:
        deluxe_package();
        break;
    case 4:
        semi-deluxe_package();
        break;
    case 5:
        silver_package();
        break;
    case 6:
        faq();
        break;
    default:
        cout<<"Please Enter A VALID VALUE\n";
        hotel_details();

    }
}

void travel::show()
{
    cust_details();
    travel_details();
    hotel_details();
}





int main()
{
    travel obj;
    obj.show();
}
