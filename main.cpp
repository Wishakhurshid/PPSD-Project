#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
class customer
{
  private:
      int phone_number;
      string name;
      int book_seat;
  public:
   customer()
   {
       phone_number=0;
       name="NULL";
       book_seat=0;
   }


   void setPhone(int ph)
   {  phone_number=ph; }

   void setName(string n)
   {  name=n; }

   void bookSeat(int s)
   { book_seat=s; }




  int getPhone()
  {  return phone_number; }

  int getBookSeat()
  {  return book_seat; }

  string getName()
  {  return name; }


};
/**
**
**
**
*/
class BookingSystem
{
  //private:
    public:
        int total_price;
        int id_number;
        int movie_price;      ///These are data types
        int seats;            ///that will be used to store
        int seat_left;
        string name;          ///related data
        string show_date;
        string format;
        string show_time;




public:

  BookingSystem()
  {
      total_price=0;
      id_number=0;
      movie_price=0;
      seats=0;
      seat_left=0;
      name="NULL";
      show_date="NULL";
      format="NULL";
      show_time="NULL";


  }

  void setTotalPrice(int x)
  { total_price=x; }

  void setId(int x)
  { id_number=x; }


void setMoviePrice(int x)
{   movie_price=x; }

void setSeat(int x)
{seats=x; }


void setSeatLeft(int x)
{seat_left=x;}


string setName(string x)
{name=x;}

string setFormat(string x)
{format=x;}

string setShowDate(string x)
{ show_date=x; }

string setShowTime(string x)
{ show_time=x; }







 int getPrice()
  { return total_price; }

  int getId()
  { return id_number; }


int getMoviePrice()
{   return movie_price; }

int getSeat()
{return seats; }


int getSeatLeft()
{return seat_left;}


string getName()
{return name;}

string getFormat()
{return format;}

string getShowDate()
{ return show_date; }

string getShowTime()
{ return show_time; }




};
/**
**
**
**
*/



class functions{
public:

BookingSystem  bookingSysObj[20];
const int movie_limit=20;
int movie_stored=0;
int current_place=0;


//void bookTicket()
//{
  //  display_list();




//}   //END

void display_list()
{

    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
 for(int x=0; x<20; x++)
    {
        if(bookingSysObj[x].getId()!=0)
        {
            cout<<"Movie Id        :  "<<bookingSysObj[x].getId()<<endl;
            cout<<"Movie Name      :  "<<bookingSysObj[x].getName()<<endl;
            cout<<"Movie Format    :  "<<bookingSysObj[x].getFormat()<<endl;
            cout<<"Movie Show Date :  "<<bookingSysObj[x].getShowDate()<<endl;
            cout<<"Movie Show Time :  "<<bookingSysObj[x].getShowTime()<<endl;
            cout<<"Movie Price     :  "<<bookingSysObj[x].getMoviePrice()<<endl;
            cout<<"Movie Seats     :  "<<bookingSysObj[x].getSeat()<<endl;
        }
    }

    cout<<"-------------------------------------------------------------------------------------------------"<<endl;


}   //END




void addNewMovie()
{                         ///This is Add new movie function:

    if(movie_limit==movie_stored)
   { cout<<endl<<"Sorry, New movie cannot be added"<<endl;
    cout<<"Movie limit is full (20) "<<endl;
    cout<<"Delete a movie, than try again .!!"<<endl<<endl; }

    ///If list is not full add new movie than
else
{
    cout<<"Dear User, You are going to add a new movies "<<endl;
    cout<<"Please Enter Information about New Movie"<<endl;
    cout<<"***********************************************"<<endl<<endl;


    int nid;
    cout<<"Enter the Id of new movie :  ";
    cin>>nid;
    bookingSysObj[current_place].setId(nid);


    string nname;
    cout<<"Enter the Name of New movie :  ";
    cin>>nname;
    bookingSysObj[current_place].setName(nname);

    string nfor;
    cout<<"Enter the Format of New movie (2D or 3D) :  ";
    cin>>nfor;
    bookingSysObj[current_place].setFormat(nfor);


    string ntime;
    cout<<"Enter the Time of New movie :  ";
    cin>>ntime;
    bookingSysObj[current_place].setShowTime(ntime);


    string ndate;
    cout<<"Enter the Date of New movie -->format(12/4/2000) :  ";
    cin>>ndate;
    bookingSysObj[current_place].setShowDate(ndate);


    int nprice;
    cout<<"Enter the Price of New movie :  ";
    cin>>nprice;
    bookingSysObj[current_place].setMoviePrice(nprice);


    int nseat;
    cout<<"Enter the Seats of New movie :  ";
    cin>>nseat;
    bookingSysObj[current_place].setSeat(nseat);

    cout<<endl<<"Please wait ......."<<endl<<"New Movie Has been added successfully  "<<endl;

    current_place++;
    movie_stored++;

}//else ENd

}//End




};
int main()
{
    functions f_Obj;
    f_Obj.addNewMovie();
    f_Obj.display_list();
    return 0;
}
