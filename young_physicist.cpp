/*A guy named Vasya attends the final grade of a high school.
One day Vasya decided to watch a match of his favorite hockey team.
And, as the boy loves hockey very much, even more than physics, he forgot to do the homework.
Specifically, he forgot to complete his physics tasks.
Next day the teacher got very angry at Vasya and decided to teach him a lesson.
He gave the lazy student a seemingly easy task:
You are given an idle body in space and the forces that affect it.
The body can be considered as a material point with coordinates (0; 0; 0).
Vasya had only to answer whether it is in equilibrium.
"Piece of cake" � thought Vasya, we need only to check if the sum of all vectors is equal to 0.
So, Vasya began to solve the problem. But later it turned out that there can be lots and lots of these forces,
and Vasya can not cope without your help.
Help him. Write a program that determines whether a body is idle or is moving by the given vectors of forces.*/



#include<bits/stdc++.h>
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
int n;
cin>>n;
double a=0,b=0,c=0,d,e,f;
while(n>0){

    cin>>d>>e>>f;
    a=a+d;
    b=b+e;
    c=c+f;
    n--;
}
if(a==0 && b==0 && c==0){
    cout<<"YES";

}
else{
    cout<<"NO";
}



return 0;
}
