#include<iostream>
#include<string.h>
using namespace std;

int
main () 
{
  

char s[10], ch;
do{
  
int x, i, m = 0, n = 0;
  
      
cout << "Enter the String:" << endl;
    
cin >> s;
      
x = strlen (s);
      
for (i = 0; i < x; i++)
	
	{
	  
if (s[i] == 'a' || s[i] == 'b')
	    
	    {
	      
cout << " ";
	    
}
	  
	  else
	    
	    {
	      
cout << "Wrong Input,Enter Again:" << endl;
	      
cin >> s;
	      
x = strlen (s);
	      
i = 0;
	    
}
	
}
if(s[0]=='a' && s[x-1]=='b')
{
for (i = 0; i < x; i++)
	
	{
	  
if (s[i] == 'a')
	    
	    {
	      
m++;
	    
}
	  
	  else
	    
	    {
	      
n++;
	    
}
	
}

}
else{
    cout<<" Invalid String!!"<<endl;
    goto start;
}
      
if ((m + n) % 2 == 0)
	
	{
	  
cout << "Valid String!!"<<static_cast<char>(2)<<static_cast<char>(2);
	
}
      
      else
	{
	  
cout << "Invalid String!!";
	
}

  start:    
cout << endl << "Want to check another String?? y/Y"<<endl;
      
cin >> ch;
    
}
  while (ch == 'y' || ch == 'Y');

}
