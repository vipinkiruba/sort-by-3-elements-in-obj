// A C++ program to demonstrate
// STL sort() using
// our own comparator
#include <bits/stdc++.h>
using namespace std;

// An interval has a start
// time and end time
struct Interval {
	int start, end , third;
	int i;
	int j;
};

// Compares two intervals
// according to starting times.
bool compareInterval(Interval i1, Interval i2)
{
	return (i1.start > i2.start);
}

bool compareInterval2(Interval i1, Interval i2)
{
	return (i1.end < i2.end);
}

bool compareInterval3(Interval i1, Interval i2)
{
	return (i1.third > i2.third);
}

int main()
{
	Interval arr[]
		= { { 6, 8 , 1 }, { 1, 6 ,2}, { 6, 4 ,3}, { 4, 7 ,4} , {4 , 7 , 5} , {1 , 2 , 6} };
	int n = sizeof(arr) / sizeof(arr[0]);

	// sort the intervals in increasing order of
	// start time
	sort(arr, arr + n, compareInterval);
	
	cout << "Intervals sorted by start time : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].start << "," << arr[i].end<<"," << arr[i].third<< "] ";





	
int count = 0;
for(int i=0 ; i<n ; i++){
    if(arr[i+1].start == arr[i].start){
        count++;
    }
    else if(arr[i+1].start != arr[i].start && count != 0){
       sort(arr + (i-(count)), arr + (i+count), compareInterval2);
       
        count = 0;
    }
}

cout<<endl<<endl;
//sort(arr, arr + 2, compareInterval2);


cout << "Intervals sorted by end time : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].start << "," << arr[i].end<<"," << arr[i].third<< "] ";



int count2 = 0;
for(int i=0 ; i<n ; i++){
    if(arr[i+1].end == arr[i].end){
        count2++;
    }
    else if(arr[i+1].end != arr[i].end && count2 != 0){
       sort(arr + (i-(count2)), arr + (i+count2), compareInterval3);
       
        count2 = 0;
    }
}

cout<<endl<<endl;



	cout << "Intervals sorted by third time : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].start << "," << arr[i].end<<"," << arr[i].third<< "] ";

	return 0;
}








