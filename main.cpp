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

BookingSystem cus;
//void bookTicket()
//{
  //  display_list();




//}   //END

void display_list()
{
    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    cout<<"| Id  \t| Name                \t| Format\t| Show Date  \t | Show Time \t| Price\t | Seat  |"<<endl;
    //cout<<"| "<<cus.getId()<< setw(10) <<"|"<<cus.getName()<<"\t| "<<cus.getFormat()<<"\t| "<<cus.getShowDate()<<"\t| "<<cus.getShowTime()<<"\t| "<<cus.getPrice()<<"\t| "<<cus.getSeat()<<"\t| "<<endl;

    string NN="Sir jaleel";
    printf("my name is %5s ", "saifullah");


}   //END


};
int main()
{
    functions f_Obj;
    f_Obj.display_list();
    return 0;
}
