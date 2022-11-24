#include <iostream>
using namespace std;


int main ()
{

int x =50;
int y =50;
if (x ==y) {
cout << "1";

}
else if  (x >y)
{
    cout << "2";
}

else
cout << "3";

//switch case
int day =4;
switch (day)
{
case 1:
cout << "Monday";
break;
case 2:
cout << "Tuesday";
break;
case 3:
cout << "Wednesday";
break;
case 4:
cout << "Thursday";
break;
case 5:
cout << "Friday";
break;
case 6:
cout << "Saturday";
case 7:
cout << "Sunday";
break;

default:
cout << "looking forward to the weekend";

}

//while loop
//the while loop loops through a block of code as long as a specified condition is true:
//int i=0;
//while (i<10 )
//{
//    cout << i<< endl;
//    i++;
//}
//do while loop this loop will execute the code block once 
//before checking if the condition is true, then it repeat the loop as long as the condition is true

//int z= 0;

//do {
//    cout <<z << endl;
//    z++;
//}

//while (1 <5);

//for loop
//when you know exactly how many times you want to loop through a 
//block of code , use the for loop instead of a while loop:
//for (statement 1; statement 2; statement 3)
//{code block  to be executed}
//for (int q=0; q<=10; q++)
//{cout <<q << endl;}

//nested loops
//it is also possible to place a loop inside another loop.
//this is called a nested loop
//the inner loop will be executed one time for each iteration of the "outer loop"

//outer loop
for (int c=1; c<=5; ++c)
{cout << "Outer:" <<c<<endl;

//inner loop 
for (int j=1; j<=6; ++j)
{
    cout << "inner :"<<j << endl;
        }

}

//for-each loop

//int myNumbers [5]= {10,20,30,40,50};
//for (int 1: myNumbers)
//{
//    cout << i << "\n";
//}





    return 0;
}