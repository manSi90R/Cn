/*
Program 3: Write a program to bit stuff the given binary data.
Algorithm for Bit-Stuffing 
1. Start 
2. Initialize the array for transmitted stream with the special bit pattern 0111 1110 which indicates the beginning of the frame. 
3. Get the bit stream to be transmitted in to the array. 
4. Check for five consecutive ones and if they occur, stuff a bit 0 
5. Display the data transmitted as it appears on the data line after appending 0111 1110 at the End. 
6. For de-stuffing, copy the transmitte
6. For de-stuffing, copy the transmitted data to another array after detecting the stuffed bits. 
7. Display the received bit stream. 
8. Stop
INPUT/OUTPUT: 
Enter the bit string (space for each byte) 11111111 01111110 00111110 
After stuffing: 01111110 111110111011111010001111100 01111110
*/
#include <iostream>
/*
Program 3: Write a program to bit stuff the given binary data.
Algorithm for Bit-Stuffing 
1. Start 
2. Initialize the array for transmitted stream with the special bit pattern 0111 1110 which indicates the beginning of the frame. 
3. Get the bit stream to be transmitted in to the array. 
4. Check for five consecutive ones and if they occur, stuff a bit 0 
5. Display the data transmitted as it appears on the data line after appending 0111 1110 at the End. 
6. For de-stuffing, copy the transmitte
6. For de-stuffing, copy the transmitted data to another array after detecting the stuffed bits. 
7. Display the received bit stream. 
8. Stop
INPUT/OUTPUT: 
Enter the bit string (space for each byte) 11111111 01111110 00111110 
After stuffing: 01111110 111110111011111010001111100 01111110
*/
#include <string>
using namespace std;

int main()
{
	string spclBit ;
    string inpBit;
	
	getline( cin >> ws , spclBit );
	getline( cin >> ws , inpBit );
	
	int size = inpBit.length() ;
	int countBit = 0 ;
	
	for( int i = 0 ; i<size ; i++ )
	{
		if( inpBit[i] == 1 )
			countBit++;
		if( countBit == 5 )
		{
			countBit = 0 ;
			inpBit.insert(i,'0') ;
			size++ ;
		}
	}
	
	cout<<spclBit<<" "<<inpBit<<" "<<spclBit;	
}

