/*Given an integer n, return a string array answer (1-indexed) where:

    * answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
    * answer[i] == "Fizz" if i is divisible by 3.
    * answer[i] == "Buzz" if i is divisible by 5.
    * answer[i] == i (as a string) if none of the above conditions are true.
*/
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
    int i;
    for(i=1;i<=n;i++){
        if(i%15==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0 ){
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0 ){
            cout<<"Buzz"<<endl;
        }
        else {
            cout<<i<<endl;
        }

    }

}

int main()
