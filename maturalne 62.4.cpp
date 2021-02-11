#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int oct2dec (string osemkowa)
{
    int dziesietna = strtol(osemkowa.c_str(), NULL, 8);

    return dziesietna;
}

void countOf6();

int countOf6(int number)
{
int count6=0;
 while (number > 0)
  {
       if (number %10 == 6)
              count6++;
       number/=10;
 }
return count6;
}

int main() {
	
    string a;
    fstream plik;
 
    plik.open("countof6.txt", ios::in);
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, a);
            cout << a << endl;
            
        }
        plik.close();
        
        
        cout <<"liczby 6 w liczbie 166:"<< countOf6(166)<<endl;
        
        cout<<"w systemie osemkowym:"<< oct2dec(a) << endl;
        return 0;
	}     
}
