/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main(){
    //tuples
    int i_val, j_val;
    float f_val;
    
    tuple<int,int,float> tp1; //initialize tuple
    tp1= make_tuple(1,2,15.5); //set values in tuple
    
    tuple<int,int,float> tp2;
    tp2= make_tuple(4,21,25.5);
    
    cout<<get<0>(tp1)<<" "<<get<1>(tp1)<<" "<<get<2>(tp1)<<endl;
    get<0>(tp1)=45;
    cout<<"Before"<<endl<<get<0>(tp1)<<" "<<get<1>(tp1)<<" "<<get<2>(tp1)<<endl; //print values
    cout<<get<0>(tp2)<<" "<<get<1>(tp2)<<" "<<get<2>(tp2)<<endl;
    cout<<"Tuple size: "<<tuple_size<decltype(tp1)>::value; // tuple size
    
    tp1.swap(tp2);  //tuple value swap
    
    cout<<"After"<<endl<<get<0>(tp1)<<" "<<get<1>(tp1)<<" "<<get<2>(tp1)<<endl;
    cout<<get<0>(tp2)<<" "<<get<1>(tp2)<<" "<<get<2>(tp2)<<endl;
    
    //tie()
    tie(i_val,j_val,f_val)=tp1;
    cout<<i_val<<" "<<j_val<<" "<<f_val<<endl;
    
    
    
}
