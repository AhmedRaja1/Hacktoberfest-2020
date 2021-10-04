
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int cal2exp(int n);

int main() {
	
	cout<<"Welcome to our Digital Converter! \nEnter T to convert Boolean Expression into Truth Table \nEnter E to convert Truth Table into Boolean Expression: ";
	string entr;
	cin>>entr;
	cout<<"\n\n";

	if(entr == "T")
	{
		bool A[4] = { 0,0,1,1 } , B[4] = { 0,1,0,1 };

		cout << "Do you want to AND or OR the two propositional variables?" << endl;
		string andor;	
		cin >> andor;
		cout << "\nDo you want to NOT A? Y/N" << endl;
		string ansp;
		cin >> ansp;
		cout << "\nDo you want to NOT B? Y/N" << endl;
		string ansq;
		cin >> ansq;
		cout<<endl;	

		if ((andor == "AND" || andor == "OR") && (ansq == "Y" || ansq == "N") && (ansp == "Y" || ansp == "N")) {
    		if (andor == "AND" && ansp == "N" && ansq == "N") {
        		cout << "A \t B" << " \t " << "A AND B" << endl;
        		for (int i = 0; i < 4; i++) {		
            		cout << A[i] << " \t ";  
            		cout << B[i] << " \t ";
                	cout << "    " << (A[i] && B[i]) << endl;
        		}
    		}
			else if (andor == "AND" && ansp == "Y" && ansq == "N") {
        		cout << "~A \t B" << " \t " << "~A AND B" << endl;
        		for (int i = 0; i < 4; i++) {
            		cout<< !A[i] << " \t ";
                	cout << B[i] << " \t ";
    		        cout << "    " << (!(A[i]) && B[i]) << endl;
				}
        	}
    		else if (andor == "AND" && ansp == "N" && ansq == "Y") {
	        	cout << "A \t ~B" << " \t " << "A AND ~B" << endl;
    	    	for (int i = 0; i < 4; i++) {
        	    	cout << A[i] << " \t ";
               		cout << !B[i] << " \t ";
               		cout << "    " << (A[i] && !(B[i])) << endl;
        		}
	    	}
    		else if (andor == "AND" && ansp == "Y" && ansq == "Y") {
        		cout << "~A \t ~B" << " \t " << "~A AND ~B" << endl;
				for (int i = 0; i < 4; i++) {
            		cout << !A[i] << " \t ";
   	            	cout << !B[i] << " \t ";
       	        	cout << "    " << (!(A[i]) && !(B[i])) << endl;
        		}
    		}
	    	else if (andor == "OR" && ansp == "N" && ansq == "N") {
    	    	cout << "A \t B" << " \t " << "A OR B" << endl;
    		    for (int i = 0; i < 4; i++) {
        		    cout << A[i] << " \t ";
               		cout << B[i] << " \t ";
              		cout << "    " << (A[i] || B[i]) << endl;
	        	}
    		}	
    		else if (andor == "OR" && ansp == "Y" && ansq == "N") {
        		cout << "~A \t B" << " \t " << "~A OR B" << endl;
    	    	for (int i = 0; i < 4; i++) {
        	    	cout << !A[i] << " \t ";
           		    cout << B[i] << " \t ";
               		cout << "    " << (!(A[i]) || B[i]) << endl;
        		}
    		}
    		else if (andor == "OR" && ansp == "N" && ansq == "Y") {
	        	cout << "A \t ~B" << " \t " << "A OR ~B" << endl;
    	    	for (int i = 0; i < 4; i++) {
        		    cout << A[i] << " \t ";
               		cout << !B[i] << " \t ";
               		cout << "    " << (A[i] || !(B[i])) << endl;
        		}
    		}
    		else if (andor == "OR" && ansp == "Y" && ansq == "Y") {
        		cout << "~A \t ~B" << " \t " << "~A OR ~B" << endl;
        		for (int i = 0; i < 4; i++) {
            		cout << !A[i] << " \t ";
					cout << !B[i] << " \t ";
                	cout << "    " << (!(A[i]) || !(B[i])) << endl;
        		}
    		}       
		}else{
    		cerr << "ERROR: Please enter valid values - EX(AND, OR, Y, N)." << endl;
		}
	}else if(entr == "E"){
		int num_var;
		
		cout<<"\nEnter total number of variables in your truth table: ";
		cin>>num_var;
		
		int toSeq = cal2exp(num_var);
		bool seq[num_var];
		
		for(int i = 0; i< num_var; i++) seq[i] = true;
			char ch = 'A';
		
		for(int i = 0; i < num_var; i++) cout<<ch++<<"\t";
			cout<<"Output"<<endl;
		
		string exp = "";
		
		for(int i = 0; i < toSeq; i++) {
			int z = toSeq/2, b = 0;
			while(z) {
				if(i % z == 0) 
					seq[b] = seq[b]?false:true;
			cout<<seq[b]<<"\t";
			z /= 2;
			b++;
			}	
			
			bool inp;
			cin>>inp;
			char ch = 'A';
		
			for(int i = 0;(i < num_var) && inp;i++) {
				if(i == 0 && exp!="") 
					exp += " + ";
				exp += ch;
				exp += (seq[i]?"":"`");
				ch++;
			}
			cout<<endl;
		}
		cout<<exp;
	}else{
		cerr << "ERROR: Please enter valid values - EX(T or E)" <<endl;
	}
	
	getch();
	return 0;
}

int cal2exp(int n) {     
	int ret = 1;
	while(n--) ret *=2;  
	return ret;
}
