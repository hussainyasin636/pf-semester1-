#include<iostream>
using namespace std;
string zodiacsign( string month ,int date)
{  
    string sign;
if((month=="march" || month=="April") && ((date>=21)|| date<=19))
{
    sign = "Aries";
    return sign;
}
 else if((month=="april"||month=="may") && (date>=20)||(date<=20))
{
    sign = "A ries";
    return sign;
}
else if((month=="may"||month=="june") && (date>=21)||(date<=20))
{
    sign = "gemini";
    return sign;
}
else if((month=="june"||month=="july") && (date>=21)||(date<=20))
{
    sign = "cancer";
    return sign;
}
else if((month=="july"||month=="August") && (date>=23)||(date<=22))
{
    sign = "leo";
    return sign;
}
else if((month=="august"||month=="september") && (date>=23)||(date<=22))
{
    sign = "virgo";
    return sign;
}

else if((month=="september"||month=="october") && (date>=23)&&(date<=22))
{
    sign = "libra";
    return sign;
}
else if((month=="october"||month=="november") && (date>=23)&&(date<=21))
{
    sign = "scorpio";
    return sign;
}
else if((month=="november"||month=="december") && (date>=22)&&(date<=21))
{
    sign = "sagittarius";
    return sign;
}
else if((month=="december"||month=="january") && (date>=22)&&(date<=19))
{
    sign = "capricorn";
    return sign;
}
else if((month=="january"||month=="february") && (date>=20)&&(date<=18))
{
    sign = "aquarius";
    return sign;
}


}

int main(){
    string month;
    int date;
    cout<<"Enter your date of birth";
    cin>>date;
    cout<<"Enter your birth month (e.g january,february,march";
    cin>>month;
      string sign = zodiacsign( month,date);
    cout<<"Your zodiac sign = "<<sign; 


}