#include<iostream>
using namespace std;

int main()
{
    int i=1;
    int j=2;
    int k;

    k=i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;
} 


//operatorList

//arithmaticOperators
//+,-,*,/,%,++,--

//relationalOperators
//==,!=,>,<,>=,<=

//logicalOperator
//&&,||,!

//bitwiseOperator
//&,|,^,~,<<,>>

//assignmentOperator
//=,+=,-=,*=,/=

//miscOperator
//sizeOf(),condition?X:Y,cast,comma(,)