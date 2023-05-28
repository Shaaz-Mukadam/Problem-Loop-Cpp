//program to find the sum of positive numbers  if the user enters a negative number, the loop ends
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum = 0;

    while(n>=0){
        sum +=n;
        cin>>n;

        cout<<n<<endl;
    }
}
