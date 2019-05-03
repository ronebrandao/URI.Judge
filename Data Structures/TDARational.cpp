#include <iostream>
#include <cmath> 

using namespace std;

int getMultiple(int n, int d) 
{
    int menor;
    if (n == 0) 
        menor = d;
    else 
        menor = n < d ? abs(n) : abs(d);
        
    int multi = -1;
    
    for (int i = 1; i <= menor; i++) {
        if (n % i == 0 && d % i == 0) 
		    multi = i;
    }
	return multi;	 
}

void print(int numerator, int denominator, int multi) 
{
    if (multi != - 1)
	    printf("%d/%d = %d/%d\n", numerator, denominator, numerator / multi, denominator / multi);
	else 
	    printf("%d/%d = %d/%d\n", numerator, denominator, numerator, denominator);
}

int main() {
	
	int numOfEntries;
	int N1,N2,D1,D2;
	char P1, P2;
	char operatorName;
	
	cin >> numOfEntries;
	
	while(numOfEntries--)
	{
	   scanf("%d %c %d %c %d %c %d", &N1, &P1, &D1, &operatorName, &N2, &P2, &D2);
	   
	   int numerator = 0;
	   int denominator = 0;
	   int multi = 0;
	   
	   switch (operatorName) 
	   {
	       case '+': 
	        numerator =  (N1*D2 + N2*D1);
	        denominator = D1*D2;
	      
	        multi = getMultiple(numerator, denominator);
	        
	        print(numerator, denominator, multi);
	            
	        break;
	       case '-':
	        numerator =  (N1*D2 - N2*D1);
	        denominator = D1*D2;
	      
	        multi = getMultiple(numerator, denominator);
	        
	        print(numerator, denominator, multi);
	        
	        break;
	       case '*':
	        numerator =  N1*N2;
	        denominator = D1*D2;
	      
	        multi = getMultiple(numerator, denominator);
	        
	        print(numerator, denominator, multi);
	       
	        break;
	       case '/':
	        numerator =  N1*D2;
	        denominator = D1*N2;
	        
	        multi = getMultiple(numerator, denominator);
	        
	        print(numerator, denominator, multi);
	        break;
	   }
	   
	}
	
}
