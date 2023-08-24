   ______________________#Patterns in DSA 

	111
	222
	333

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<("Enter the vlue of n = ");
    cin>>n;
    int i=1;   
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }   
        cout<<endl;
        i++;
    }
    return 0;
}

2) 1
   22
   333
   4444


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n= ";
    cin>>n;
    while(i<=n){
        int j=1;
        while (j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


3)
  1
  12
  123
  1234
  #include <iostream>

*******************************************************************************/
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n= ";
    cin>>n;
    while(i<=n){
        int j=1;
        while (j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
4)
  1
  23
  456
  78910

 *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n= ";
    cin>>n;
    int k=1;
    while(i<=n){
        int j=1;
        while (j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

5)
  1
  23
  345
  4567

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n= ";
    cin>>n;
    while(i<=n){
        int j=1;
        int k=i;
        while (j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

6)
  1
  21
  321
  4321



#One more logic is added

*@Note   cout<<(row-col+1);          



*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n= ";
    cin>>n;
    while(i<=n){
        int j=1;
        int k=i;
        while (j<=i){
            cout<<k;
            k--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}



7)
A A A
B B B
C C C

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int row=1;
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=n){
            if(row==1){
                cout<<"A";
            }
            else if(row==2){
                cout<<"B";
            }
            else if(row==3){
                cout<<"C";
            }
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}


#one more logic is added
cout<<('A'+row-1);

Because ASCI value of A + 1 = B
Because ASCI value of A + 1 = C


8)
   ABC
   ABC
   ABC

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int row=1;
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=n){
            if(col==1){
                cout<<"A";
            }
            else if(col==2){
                cout<<"B";
            }
            else if(col==3){
                cout<<"C";
            }
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}


# one more logic is added
cout<<ch=('A'+col - 1);
Because ASCI value of A + 1 = B
Because ASCI value of A + 1 = C


9)

ABC
DEF
GHI


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int row=1;
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    char ch = 'A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<ch;
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}

10)
A
BB
CCC


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    cout<<"Enter the value of n = ";
    cin>>n;
    while(i<=n){
        j=1;
         
        while(j<=i){
            char ch = 'A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

11)
   A
   BC
   CDE
   EFGH


*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    cout<<"Enter the value of n = ";
    cin>>n;
    while(i<=n){
        j=1;
        char ch = 'A'+i-1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

12)
   A
   BC
   DEF
   GHI

*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    cout<<"Enter the value of n = ";
    cin>>n;
    char ch = 'A';
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


13)
   ABC
   CDE
   EFG

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    cout<<"Enter the value of n = ";
    cin>>n;
    while(i<=n){
        j=1;
        char ch = 'A'+i-1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

14)*
   **
   ***
   ****


   *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int n;
    cout<<"Enter the value of n =";
    cin>>n;
     while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


15)
       *
     * *
   * * *
 * * * *

 *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    cout<<"Enter the vlue of n = ";
    cin>>n;
    while(i<=n){
        int space = n-i;
        while(space!=0){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}


16)

* * * *
* * *
* *
*

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i=0,n;
    cout<<"Enter the value of n = ";
    cin>>n;
    i = n-i;
    while(i!=0){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}


17)

   * * * *
     * * * 
       * * 
         *

*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the vlue of n = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1; space<=i-1;space++){
            cout<<" ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


18)

   1 1 1 1 
     2 2 2
       3 3
         4


*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the vlue of n = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1; space<=i-1;space++){
            cout<<" ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
     
19)
   1 2 3 4
     2 3 4 
       3 4
         4



20)

   *
  * *
 * * *
* * * * 


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    cout<<"Enter the vlue of n = ";
    cin>>n;
    while(i<=n){
        int space = n-i;
        while(space!=0){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}










21) sum and multiplication of the digits of the number 

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{   
    int n,q,r;
   cout<<"Enter the number: ";
   cin>>n;
   int sum =0;
   int mult=1;
   while (n!=0){
       r = n %10;
       q = n/10;
       n = q;
       sum = sum + r;
       mult = mult * r;
   }
  cout<<"The sum of the digits of the number is :"<<sum<<endl;
  cout<<"The multiplication of the digits of the number :"<<mult;
    return 0;
}


22) the sum of even numbers upto n numbers

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2==0){
        sum = sum+i;
        }
    }
     cout<<"the sum is:"sum;
    
    return 0;
}

23) prime number

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   
    int n,count=1;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        cout<<"number is prime number :"<<n;
    }
    else{
    cout<<"number is not a prime number :"<<n;
        
    }
    return 0;
}


24) interval prime numbers

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{   
    int n1,n2;
    cout<<"Enter the number 1 :";
    cin>>n1;
    cout<<"Enter the number 2 :";
    cin>>n2;
    
    for(int i=n1; i<=n2;i++){
        if (i == 1 || i == 0)
            continue;
        int count=1;
        for(int j = 2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count == 1){
            cout<<i<<endl;
        }
        
    }
    return 0;
}

25)fabonaci series
