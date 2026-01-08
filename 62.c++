#include<iostream>
using namespace std;
int sum(int x,int y)
{
    return x+y;
}
float sum(float x,float y,float z){
    return x+y+z;
}
int sum(int x, int y,int z){
    return x+y+z;
}
int main(){
    int a=2,b=8,c=3;
    cout<<sum(10,5)<<endl;
    cout<<sum(2.3f,3.5f,4.8f)<<endl;
    cout<<sum(33,39,398)<<endl;
}