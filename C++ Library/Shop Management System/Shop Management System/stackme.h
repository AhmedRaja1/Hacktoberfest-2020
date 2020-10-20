#include <bits/stdc++.h> 
using namespace std; 
 

struct bucket
 { 
	int data; 
   bucket* link; 
   };
    
struct bucket* top; 
 
void push(int data) 
{  
	struct bucket* temp; 
	temp = new bucket(); 

	if (!temp) { 
		cout << "\nHeap Overflow"; 
		exit(1); 
	} 

	temp->data = data; 

	temp->link = top; 

	top = temp; 
} 
 
int isEmpty() 
{ 
	return top == NULL; 
} 
 
int peek() 
{ 
	 
	if (!isEmpty()) 
		return top->data; 
	else
		exit(1); 
} 


void bpop() 
{ 
	struct bucket* temp; 

	
	if (top == NULL) { 
		cout << "\nStack Underflow" << endl; 
		exit(1); 
	} 
	else { 
		
		temp = top; 
		top = top->link;  
		temp->link = NULL; 
		
		// release memory of top node 
		free(temp); 
		
	}
		cout<<"Your Trolley No is :"<<top->data<<endl; 
    	cout<<"                  ___"<<endl;
	    cout<<"                 /  |"<<endl;
	    cout<<"  ______________/  /--"<<endl;
	    cout<<" |___/__ /___/_|     "<<endl;     
	    cout<<" |__/___/___/__|     "<<endl;     
	    cout<<" |_/___/___/___|     "<<endl;     
	    cout<<"    \_______/         "<<endl;
	    cout<<"      O   O           "<<endl;


} 

void bdisplay() 
{ 
	struct bucket* temp; 

	 
	if (top == NULL) { 
		cout << "\nStack Underflow"; 
		exit(1); 
	} 
	else { 
		temp = top; 
		while (temp != NULL)
 { 
	cout << temp->data << " ";  
			temp = temp->link; 
		} 
	} 
} 

