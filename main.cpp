/*Eoin Finlay
  555 Timer Calculation
  01 Nov 2017*/


//Preprocessor Directives
#include <iostream>

using namespace std;

//Main Function
int main()
{

//Local Function Declarations
void timer555(double, double, double, double*, double*);

//Variable declarations
double R1=0, R2=0, C1=0, freq, duty;
double *freq_ptr, *duty_ptr;

//Assigning pointers to an address
freq_ptr = &freq;
duty_ptr = &duty;

//while loops to ensure R1, R2 and C1 value is greater than zero
while(R1 <= 0)
{
    cout << "\n\nEnter value greater than zero for R1: ";
    cin >> R1;
}

while (R2 <= 0)
{
    cout << "\nEnter value greater than zero for R2: ";
    cin >> R2;
}

while(C1 <= 0)
{
    cout << "\nEnter value greater than zero for C1: ";
    cin >> C1;
}

//calling timer555 function
timer555(R1, R2, C1, freq_ptr, duty_ptr);

//displaying result
cout << "\n\nFrequency = " << freq <<"Hz"<<endl;
cout << "\nDuty Cycle = " << duty <<"%"<<endl;

return 0;
}

//timer555 function header
void timer555(double R1, double R2, double C1, double *freq_ptr, double *duty_ptr)
{
    //changing pointer values by way of an equation
    *freq_ptr = 1.44 / ((R1+(2.0*R2))*C1);
    *duty_ptr = (R1+R2) / (R1+(2.0*R2));
}

