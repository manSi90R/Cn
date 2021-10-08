// Que- 2 LRC Even Parity
#include <iostream>
using namespace std;
int main() 
{

    int n , binary[32];
    char alpha ;
    cin>>alpha;
    n = int(alpha) ;
   
    int i = 1;
    while (n > 0) {
 
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    int count1 = 0;
    for (int j = i - 1; j >= 0; j--)
   {
         if(binary[j] == 1)
            count1++ ;
   }

   if( count1 % 2 != 0 )
        binary[0] = 1 ;
    else
        binary[0] = 0 ;

    for (int j = i-1 ; j >= 0; j--)
   {
         cout<<binary[j] ;
   }
}

