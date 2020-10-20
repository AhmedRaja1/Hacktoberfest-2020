#include <iostream>
using namespace std;
int main()
{
	int choice ,choi , cho, ch, c, option, op;
    cout<<"*******///WELCOME MEGA MART///******"<<endl;
	cout<<"Press 1: for fruits "<<endl;
	cout<<"Press 2: for dress "<<endl;
	cout<<"press 3: for shoes "<<endl;
	cout<<"press 4: for juice "<<endl;
	cout<<"press 5: for sweets"<<endl;
	cout<<"press 6: for perfume"<<endl;
	cout<<"Select What you want"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
			cout<<"******WELCOME TO FRUITS SECTION*****"<<endl;
			cout<<"press 1: for Orange"<<endl;
			cout<<"press 2: for Banana"<<endl;
			cout<<"press 3: for Mango "<<endl;
			cout<<"press 4: for Strawberry"<<endl;
			cout<<"press 5: for Apple"<<endl;
			cout<<"press 6: for Cherry "<<endl;
			cout<<"Select fruits, you want"<<endl;
			cin>>choi;
			switch(choi)
			{
				case 1:
					{
						cout<<"you selected Orange "<<endl;
					}
					break;
				case 2:
				{
					cout<<"you selected Banana"<<endl;
				}	
					break;
				case 3:
					{
						cout<<"you selected Mango"<<endl;
					}
						break;
				case 4:
					{
						cout<<"you selected Strawberry"<<endl;
					}
						break;
				case 5:
				{
					cout<<"you selected Apple"<<endl;;
				}
					break;	
				case 6:
					{
						cout<<"you selected Cherry"<<endl; 
					}
						break;
			}
			}
			break;
		case 2:
		{
		cout<<"******WELCOME TO DRESS SECTION*******"<<endl;
		cout<<"press 1: for j. "<<endl;
	    cout<<"press 2: for GUL AHMAD" <<endl;
	    cout<<"press 3: for ALKARAM " <<endl;
	    cout<<"press 4: for khaadi "<<endl;
	    cout<<"press 5: for Bareeze" <<endl;
	    cout<<"press 6: for ChenOne " <<endl;
	    cout<<"//////SELECT YOUR CHOICE = "<<endl;
	    cin>>cho;
	    
	    switch(cho)
	    {
	    	case1 :
	    		{
	    			cout<<"you selected J."<<endl;
	    		}
	    		break;
	    	case 2:
			{
				cout<<"you selected GUL AHMAD "<<endl;
			}
				break;	
			case 3:
				{
					cout<<"you selected ALKARAM"<<endl;
				}
					break;
			case 4:
				{
					cout<<"you selected KHAADI "<<endl;
				}
					break;
			case 5:
				{
					cout<<"you selected Bareeze"<<endl;
				}
					break;
			case 6:
				{
					cout<<"you selected ChenOne"<<endl;
				}
	    }  
		}
			break;	
		case 3:
		{
		    cout<<"****///WELCOME SHOES SECTION///******* "<<endl;
		    cout<<"press 1: for BATA shoes "<<endl;
		    cout<<"press 2: for Mochani shoes"<<endl;
		    cout<<"press 3: for Epcot shoes "<<endl;
		    cout<<"press 4: for Borjan shoes "<<endl;
		    cout<<"press 5: for Levis shoes"<<endl;
		    cout<<"press 6: for Nike shoes "<<endl;
		    cout<<"////SELECT YOUR CHOICE  = "<<endl;
		    cin>>ch;
		    
		    switch(ch)
		    {
		    	case 1:
		    		{
		    		cout<<"you selected BATA shoes "<<endl;
		    		}
		    		break;
		    	case 2:
		    		{
		    			cout<<"you selected  Mochani shoes "<<endl;
		    		}
		    		break;
		    	case 3:
		    		{
		    			cout<<"you selected Epcot shoes"<<endl;
		    		}
		    		break;
				case 4:
					{
						cout<<"you selected Borjan shoes "<<endl;
					}
					break;
				case 5:
					{
						cout<<"you selected Levis shoes "<<endl;
					}
				case 6:
					{
						cout<<"you selected Nike shoes "<<endl;
					}
		    }
		    
		}
			break;
		case 4:
		{
			cout<<" ******///WELCOME TO JUICE SECTION///******"<<endl;
			cout<<"press 1: for BANANA JUICE "<<endl;
		    cout<<"press 2: for MANGO JUICE"<<endl;
		    cout<<"press 3: for APPLE JUICE "<<endl;
		    cout<<"press 4: for STRAWBERRY JUICE "<<endl;
		    cout<<"press 5: for ORANGE JUICE"<<endl;
		    cout<<"press 6: for CHERRY JUICE "<<endl;
		    cout<<"SELECT YOUR CHOICE  = "<<endl;
		    cin>>c;
		    
		    switch(c)
		    {
		    	case 1:
		    		{
		    		cout<<"you selected BANANA JIUCE "<<endl;
		    		}
		    		break;
		    	case 2:
		    		{
		    			cout<<"you selected  MANGO JUICE "<<endl;
		    		}
		    		break;
		    	case 3:
		    		{
		    			cout<<"you selected APPLE JUICE"<<endl;
		    		}
		    		break;
				case 4:
					{
						cout<<"you selected STRAWBERRY JUICE  "<<endl;
					}
					break;
				case 5:
					{
						cout<<"you ORANGE JUICE  "<<endl;
					}
				case 6:
					{
						cout<<"you selected CHERRY JUICE "<<endl;
					}	
		    }
			
		}
			break;
		case 5:
			{
			cout<<"*****///WELCOME TO SWEETS SECTION ///*******"<<endl;
			cout<<"press 1: for Choclates "<<endl;
		    cout<<"press 2: for Candy"<<endl;
		    cout<<"press 3: for Jelly "<<endl;
		    cout<<"press 4: for baceket "<<endl;
		    cout<<"press 5: for foods"<<endl;
		    cout<<"press 6: for backery "<<endl;
		    cout<<"////SELECT YOUR CHOICE  = "<<endl;
		    cin>>option;
		    
		    switch(option)
		    {
		    	case 1:
		    		{
		    		cout<<"you selected choclates "<<endl;
		    		}
		    		break;
		    	case 2:
		    		{
		    			cout<<"you selected  Candy "<<endl;
		    		}
		    		break;
		    	case 3:
		    		{
		    			cout<<"you selected jally"<<endl;
		    		}
		    		break;
				case 4:
					{
						cout<<"you selected baceket  "<<endl;
					}
					break;
				case 5:
					{
						cout<<"you selected foods  "<<endl;
					}
				case 6:
					{
						cout<<"you selected backery "<<endl;
					}		
		    }
				
			}
				break;
		case 6:
		{
			cout<<"******////WELCOME TO PERFUME SECTION///****** "<<endl;
			cout<<"press 1: for FOG"<<endl;
		    cout<<"press 2: for RUSH"<<endl;
		    cout<<"press 3: for AWESOME "<<endl;
		    cout<<"press 4: for GREAT "<<endl;
		    cout<<"press 5: for FAB"<<endl;
		    cout<<"press 6: for NYC "<<endl;
		    cout<<"////SELECT YOUR CHOICE  = "<<endl;
		    cin>>op;
		    
		    switch(op)
		    {
		    case 1:
		    		{
		    		cout<<"you selected FOG "<<endl;
		    		}
		    		break;
		    	case 2:
		    		{
		    			cout<<"you selected  RUSH "<<endl;
		    		}
		    		break;
		    	case 3:
		    		{
		    			cout<<"you selected AWESOME"<<endl;
		    		}
		    		break;
				case 4:
					{
						cout<<"you selected GREAT "<<endl;
					}
					break;
				case 5:
					{
						cout<<"you selected FAB  "<<endl;
					}
				case 6:
					{
						cout<<"you selected NYC "<<endl;
					}			
		    }
			
		}
			break;
			defualt:
			cout<<"Invaild Number "<<endl;	
	}
}
