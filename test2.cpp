#include <iostream>
using namespace std;

int main ()
{
   int score;
   do
   {
    cout << "����������� " ;
    cin >> score;
   }
   while(score < 0 || score > 100);
   
   switch(score >= 60)
   {
    case true:
    cout << "�ϸ�" << endl;
    break;
    default:
    cout << "���ϸ�" << endl;
    break;
   } 
   return 0;
}