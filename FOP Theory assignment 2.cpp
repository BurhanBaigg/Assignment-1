#include <iostream>
#include <string>
using namespace std;

//Task 1
int main () {
int INT;
cout<<"Enter a positive integer: "<<endl; cin>>INT;

if (INT<=0) {
cout<<"Invalid input, enter a positive integer: "<<endl;
 }
else {
cout<<"Factors of "<<INT<<" are: "<<endl;
for (int i=1; i<=INT; i++) {
     if (INT%i==0 ) {
     	cout<<i<<endl;
	 }
}
cout<<endl;
}
return 0;
}

//Task 2
int main () {

 int x = 5;
 int y = 10;
 if (x == 5)
 if (y == 10)
 std::cout << "x is 5 and y is 10" << std::endl;
 else
 std::cout << "x is not 5" << std::endl;
 return 0;
}

//Task 3
int main () {
	
int num;
cout<<"Enter a number to check: "; cin>>num;
int res;
res= (num>10 && num<=20) ? 1:0;
cout<<res<<endl;
return 0;
}

//Task 4

	bool isPrime(int num) {
		if (num<=1) {
			return false;
		}
		for (int i=2; i*i<=num; i++) {
			if (num%i==0) {
			
			return false;
		}
		}
		return true;
}
	int main () {
	
	int N;
	cout<<"Enter a number: "<<endl; cin>>N;
	while (N>1) {
		if(isPrime(N)) {
			cout<<"Largest prime number less than or equal to N is: "<<N<<endl;
			break;
		}
		--N;
	}
	return 0;
}


//Task 5
int main () {

string str1, str2;

int len;
cout<<"Input the first string: ";
getline(cin, str1);
cout<<"Input the second string: ";
getline(cin, str2);
	if (str1==str2){
		len=str1.length();
	for (int i=0; i<len/2; i++){
			swap(str2[i], str2[len-i-1]);
	}
	}
	cout<<"The first sting is: "<<str1<<endl;
	
	cout<<"The second srting is: "<<str2<<endl;
	
return 0;
}

//Task 6

int main () {

int dividend,divisor;
cout<<"Enter the dividend: "; cin>>dividend;
cout<<"Enter the divisor: "; cin>>divisor;

int quotient=0,remainder=0;
while (dividend>=divisor) {
	dividend-=divisor;
	quotient++;
}
remainder=dividend;
cout<<"Quotient of the number is: "<<quotient<<endl;
cout<<"Remainder of the division is: "<<remainder;

return 0;
}


//Task 7
int main(){
	string string1;
	int length;
	cout<<"Input the string: ";
	getline(cin, string1);
	length= string1.length();
	for (int i=0; i<=length; i++){
		for (int j=0; j<=length; j++){
			if (tolower(string1[i])==tolower(string1[j]) && i!=j){
				string1.erase(j, 1);
				j--;
				length=string1.length();
			}
		}
	}
	cout<<"The string without duplicate letters is: "<<string1;
	return 0;
}

//Task 8
int main () {
	int n,a[5]={1,2,3,4,5};
	cout<<"Original array was: ";
	for (int i=0;i<5; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the addition of elements you want: ";
	cin>>n;
	for (int i=5;i<5+n;i++) {
		a[i]=i+1;
	}
	cout<<"Array with added elements: ";
	for (int i=0;i<5+n;i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}


//Task 9
int main() {
    int X;
    cout << "Enter the number you want to represent as a triplet: "; cin >> X;

for (int i=0; i<=X; i++) {
	for (int j=i+1;j<=X;j++) {
		for (int k=j+1;k<=X;k++) {
		int	a[3]={i,j,k};
			int sum=a[0]+a[1]+a[2];
			if (sum==X) {
				cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
			}
		}
	}
}
return 0;
}

//Task 10
int main() {
	
    int Array[6];
    cout <<"Enter 6 different terms for sorting: " <<endl;
    for (int i=0;i<6;i++) 
        cin>>Array[i];
    
    cout<<"Original array was: ";
    for (int j=0;j<6;j++)
        cout<<Array[j]<< " ";

    for (int i=0;i<6-1;i++) {
        for (int j=0;j<6-i-1;j++ ) {
            if (Array[j]>Array[j+1]) {
                int Swap=Array[j];
            Array[j]=Array[j+1];
            Array[j+1]=Swap;
    }
    }
    }

    cout<<"\nThe sorted array is: "<<endl;
    for (int i=0;i<6;i++) {
        cout<<Array[i]<< " ";
    }

    return 0; 
}


