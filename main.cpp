// C3 P4 Array Basics - This program accepts eight batting averages and loads them into an array
// Then determines the maximum, minimum and average of batting averages.
// Input: Interactive
// Output: A display of the batting averages array, maximum, minimum and average

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <stdlib.h>

using namespace std;
char playAgain = 'Y';
int counter;

int main()
{
	cout << "~ ~ ~ ~ ~ Batting Averages Array Program ~ ~ ~ ~ ~\n\n";
    while ((playAgain == 'Y') || (playAgain == 'y'))
    {
		const int MAX_AVGS = 8;
		double avgs[MAX_AVGS];
		int loopIndex;
		double battingAvg;
		double min, max;
		min = avgs[0];
        max = avgs[0];
		double total, avg;
	   // Write a loop to get batting averages from user and assign to array
	   for (loopIndex = 0; loopIndex < MAX_AVGS; loopIndex++)
	   {
	       cout << "Enter a batting average: ";
	       cin >> battingAvg;
	       avgs[loopIndex] = battingAvg;
	   }
	   // Assign the first element in the array to be the min and max
	   min = avgs[0];
	   max = avgs[0];
	   // Start out your total with the value of the first element in the array
	   total = avgs[0];

	   // Write a loop here to access array values
	   for (loopIndex = 1; loopIndex < MAX_AVGS; loopIndex++)
	   {
	       if (avgs[loopIndex] < min)
	           min = avgs[loopIndex];
	       if (avgs[loopIndex] > max)
	           max = avgs[loopIndex];
	       total += avgs[loopIndex];
	   }
	   
	   // Calculate average of the 8 batting averages
	   avg = (total) / (MAX_AVGS);
	   
		cout << "\n\n+ + + + Display the Batting Averages Array + + + +\n\n";
		
		// Print the batting averages stored in the averages array
		cout << fixed << setprecision(3);
		counter = 1;
		for (loopIndex = 0; loopIndex < MAX_AVGS; loopIndex++)
		{
		    cout << "Batting Average " << counter << " : " << avgs[loopIndex];
		    cout << "\n";
		    counter++;
		}
		
		//Print max batting average, min batting average, and average batting average
		cout << fixed << setprecision(3);
		cout << "\n\nMaximum Batting Average: " << max;
		cout << "\nMinimum Batting Average: " << min;
		cout << fixed << setprecision(4);
		cout << "\nAverage of Batting Averages: " << avg;
    	
    	cout << "\n\nWould you like to try again (Y/N)? ";
    	cin >> playAgain;
    }
    cout << "\n° See you later!";
    cout << "\n\n© 2019 Isabella Talijancic All Rights Reserved.";
	return 0;
}