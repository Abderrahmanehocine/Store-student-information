#include "main_headerfiles.h"
#include "main_class.h"

int number_of_students(){
  int number;
  cout<<"Enter number of students: ";
  cin>>number;
  return number;
}

string name_of_student(){
  string name;
  cout<<"Enter name of student: ";
  scanf("\n");
  getline(cin,name);
  return name;
}

string date_of_birth(){
  string date;
  cout<<"Enter date of birth[d/m/y]: ";
  scanf("\n");
  getline(cin,date);
  return date;
} 

string adresse(){
  string adresse;
  cout<<"Enter the adresse: ";
  scanf("\n");
  getline(cin,adresse);
  return adresse;
}

string phone_number(){
  string phone;
  cout<<"Enter phone number: ";
  cin>>phone;
  return phone;
}
int main(){
  int number=number_of_students();
  student object[number];
  for(int i=0 ; i<number ; i++){
    cout<<endl;
    object[i].set_student_name(name_of_student());
    object[i].set_date_of_birth(date_of_birth());
    object[i].set_adersse(adresse());
    object[i].set_phone_number(phone_number());
    cout<<endl;
  }
  for(int i=0 ; i<number ; i++){
    if(object[i].cheak_student_name() != "empty"){
      cout<<object[i].cheak_student_name()<<endl;
    }
    if(object[i].cheak_date_of_birth() != "empty"){
      cout<<object[i].cheak_date_of_birth()<<endl;
    }
    if(object[i].cheak_adresse() != "empty"){
      cout<<object[i].cheak_adresse()<<endl;
    }
    if(object[i].cheak_phone_number() != "empty"){
      cout<<object[i].cheak_phone_number()<<endl;
    }
    cout<<endl;
  }
}
