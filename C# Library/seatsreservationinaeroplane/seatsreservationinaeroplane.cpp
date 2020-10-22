#include<iostream>
using namespace std;
int main() {
	int i;
	int booked[10] = {0};
	while(1) {
	cout<<"PLease type 1 for FIrst class and 2 for economy class: ";
	cin>>i;
	if(i == 1)  {
		int a = 0;
		for(; a < 5; a++) {
			if(booked[a] == 0) break;
		}
		if(a == 5 ) {
			cout<<"First class full, would you like to get a seat in economy class. (1 for yes or anything other for no) \n\n";
			cin>>a;
			if(a ==1) {
				int seat = 14;
				for(int b = 5; b < 10; b++) {
				if(booked[b] == 0) {
					seat = b + 1;
					booked[b] = 1;
					break;
				}
			}
				if(seat == 14) {
					cout<<"Economy class is also full.\n\n\n";
				}else {
					cout<<"Boarding pass:\nSeat no is: "<<seat<<"\nSeat is in economy class: \n\n";
				}
			}else {				cout<<"Next flight in 3 hrs\n\n";
			}
		}else {
			cout<<"Availible in first class. \n\n";
			int seat = 0;
			for(int b = 0; b < 5; b++) {
				if(booked[b] == 0) {
					seat = b + 1;
					booked[b] = 1;
					break;
				}
			}
			cout<<"\nBoarding pass:\nSeat No: "<<seat<<"\nSeat is in first class\n\n";
		}
	}else {
		int a = 5;
		for(; a < 10; a++) {
			if(booked[a] == 0) break;
		}
		if(a == 10 ) {
			cout<<"Economy class full, would you like to get a seat in first class. (1 for yes or anything other for no) \n\n";
			cin>>a;
			if(a == 1) {
				int seat = 10;
				for(int b = 0; b < 5; b++) {
				if(booked[b] == 0) {
					seat = b + 1;
					booked[b] = 1;
					break;
				}
			}
				if(seat == 10) {
					cout<<"First class is also full.\n\n\n";
				}else {
					cout<<"Boarding pass:\nSeat no is: "<<seat<<"\nSeat is in First class: \n\n";
				}
			}else {
				cout<<"Next flight in 3 hrs\n\n";
			}
		}else {
			cout<<"Availible in economy class.\n\n"<<endl;
			int seat = 0;
			for(int b = 5; b < 10; b++) {
				if(booked[b] == 0) {
					seat = b + 1;
					booked[b] = 1;
					break;
				}
			}
			cout<<"\nBoarding pass:\nSeat No: "<<seat<<"\nSeat is in economy class\n\n";
		}
	}
}
	return 0;
}
