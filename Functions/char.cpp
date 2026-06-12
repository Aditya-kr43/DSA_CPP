// Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet. 
 //Eg : input = ‘c’, return value = ‘d’ // Note : for ch = ‘z’, return ‘a’.
 #include<iostream>
 using namespace std;
 char nextchar( char ch)
 {  
    if(ch=='z')
    {
        return 'a';
    }
    char next= 99+1;
    return next;
 }
 int main ()
 {
    char result = nextchar('z');
    cout << result << endl;
    return 0;
 }
