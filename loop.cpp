//Print numbers from 1 to 10
#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=10;i++)
        cout<<i<<" ";
}

//Print numbers from 10 to 1
 #include <iostream>
using namespace std;

int main() {
    for(int i=10;i>=1;i--)
        cout<<i<<" ";
}

// Sum of first n numbers
  #include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;

    for(int i=1;i<=n;i++)
        sum+=i;

    cout<<"Sum = "<<sum;
}

//Factorial using loop
 #include <iostream>
using namespace std;

int main() {
    int n,fact=1;
    cin>>n;

    for(int i=1;i<=n;i++)
        fact*=i;

    cout<<"Factorial = "<<fact;
}

//Print even numbers from 1 to 50
#include <iostream>
using namespace std;

int main() {
    for(int i=2;i<=50;i+=2)
        cout<<i<<" ";
}
