#include "main_headerfiles.h"

class student{
 private: 
  string student_name;
  string date_of_birth;
  string adresse;
  string phone_number;
 public: 
  string cheak_student_name(){
    if(student_name != ""){
      return student_name;
    }
    else{
      return "empty";
    }
  }
  string cheak_date_of_birth(){
    if(date_of_birth !=""){
      return date_of_birth;
    }
    else{
      return "empty";
    }
  }
  string cheak_adresse(){
    if(adresse != ""){
      return adresse;
    }
    else{
      return "empty";
    }
  }
  string cheak_phone_number(){
    if(phone_number != ""){
      return phone_number;
    }
    else{
      return "empty";
    }
  }
  void set_student_name(string x){
    if(student_name == ""){
      student_name=x;
    }
    else{
      x=cheak_student_name();
      if(x == "empty"){
        student_name="student";
      }
    }
  }
  void set_date_of_birth(string x){
    if(date_of_birth == ""){
      date_of_birth=x;
    }
    else{
      x=cheak_date_of_birth();
      if(x == "empty"){
        date_of_birth="default date";
      }
    }
  }
  void set_adersse(string x){
    if(adresse == ""){
      adresse=x;
    }
    else{
      x=cheak_adresse();
      if(x =="empty" ){
        adresse="default adresse";
      }
    }
  }
  void set_phone_number(string x){
    if(phone_number == ""){
      phone_number=x;
    }
    else{
      x=cheak_phone_number();
      if(x == "empty"){
        phone_number="default phone number";
      }
    }
  }
};
