#include <iostream>
using namespace std;


int main() {

	int item, option, quantity, itemNumber = 0, maxItems = 5, itemId, itemsSelected = 0;
	float amount, change, total, price;
	bool quit = false;
	int items[maxItems];
	int quantities[maxItems];
	int types[maxItems];
	int prices[maxItems];
	string typeNames[maxItems];
	
	system("Color FD");

	cout << "----- Easy as Pi School Supply Store -----"<<endl;
	
	do {
		
	 	cout << " ===---===School Supplies we offer===---==="<<endl;         
    	cout << "[1] Pen"<<endl;                          
    	cout << "[2] Pencil"<<endl;   
    	cout << "[3] Crayons"<<endl;                  
    	cout << "[4] Bond Paper"<<endl;                    
    	cout << "[5] Notebook"<<endl;
    	cout << "[6] Exit"<<endl;
    	cout << "Enter School Supply: ";
    	cin >> items[itemNumber];
    	cout <<" "<<endl;
    	
    	switch(items[itemNumber]) {
    		do{
				cout << " 1 - 3 only !!!"<<endl;
    		case 1: // Pen
    			cout << "Pen Ink                        PRICE"<<endl;
    	        cout << "[1] Black                      P20"<<endl;
    	        cout << "[2] Red                        P25"<<endl;   
    	        cout << "[3] Blue                       P25"<<endl; 
    			cout << "Color: ";
    			cin >> types[itemNumber];
    			
    			switch(types[itemNumber]) {
    			    case 1:
    			        prices[itemNumber] = 20;
    			        typeNames[itemNumber] = "Black";
    			        break;
    			    case 2:
    			        prices[itemNumber] = 25;
    			        typeNames[itemNumber] = "Red";
    			        break;
    			    case 3:
    			        prices[itemNumber] = 25;
    			        typeNames[itemNumber] = "Blue";
    			        break;
    			}
    		} while(types[itemNumber] >3);	
    		    cout<<"How many would you like to buy?"<<endl; 
	            cout<<"Enter quantity: ";
	            cin>>quantities[itemNumber];
    	
    	        itemNumber++;
        	    itemsSelected++;
    	    do{
        	    if(itemNumber<maxItems) {
        	    cout<<"Would you like to buy something else?"<<endl;
        	    cout<<"[1] Yes"<<endl;
        	    cout<<"[2] No"<<endl;
        	    cout<<"Enter number: "; 
        	    cin>>option;
    	        }
            }while(option>2);
            
        	    if(itemNumber == maxItems || option == 2) {
    	        quit = true;
    	        }  
    			break;
    			do{
				cout << " 1 - 3 only !!!"<<endl;
    		case 2:
    			cout << "Pencils                        PRICE"<<endl;
    	        cout << "[1] Graphite Pencil            P15"<<endl;
    	        cout << "[2] Charcoal Pencil            P55"<<endl;   
    	        cout << "[3] Mechanical Pencil          P250"<<endl; 
    			cout << "Pencil: ";
    			cin >> types[itemNumber];
    			
    			switch(types[itemNumber]) {
    			    case 1:
    			        prices[itemNumber] = 15;
    			        typeNames[itemNumber] = "Graphite Pencil";
    			        break;
    			    case 2:
    			        prices[itemNumber] = 55;
    			        typeNames[itemNumber] = "Charcoal Pencil";
    			        break;
    			    case 3:
    			        prices[itemNumber] = 250;
    			        typeNames[itemNumber] = "Mechanical Pencil";
    			        break;
    			}
    			} while(types[itemNumber] >3);	
    		    cout<<"How many would you like to buy?"<<endl;
	            cout<<"Enter quantity: ";
	            cin>>quantities[itemNumber];
    	
    	        itemNumber++;
        	    itemsSelected++;
    	
    	    do{
        	    if(itemNumber<maxItems) {
        	    cout<<"Would you like to buy something else?"<<endl;
        	    cout<<"[1] Yes"<<endl;
        	    cout<<"[2] No"<<endl;
        	    cout<<"Enter number: "; 
        	    cin>>option;
    	        }
            }while(option>2);
    	
        	    if(itemNumber == maxItems || option == 2) {
    	        quit = true;
    	        }   
    			break;	
				do{
				cout << " 1 - 3 only !!!"<<endl;	   
    		case 3:
    			cout << "Crayon Packs                   PRICE"<<endl;
    	        cout << "[1] 8-pack                     P35"<<endl;
    	        cout << "[2] 16-pack                    P69"<<endl;   
    	        cout << "[3] 48-pack                    P180"<<endl; 
    			cout << "Pack: ";
    			cin >> types[itemNumber];
    			
    			switch(types[itemNumber]) {
    			    case 1:
    			        prices[itemNumber] = 35;
    			        typeNames[itemNumber] = "8-pack";
    			        break;
    			    case 2:
    			        prices[itemNumber] = 69;
    			        typeNames[itemNumber] = "16-pack";
    			        break;
    			    case 3:
    			        prices[itemNumber] = 180;
    			        typeNames[itemNumber] = "48-pack";
    			        break;
    			}
    				} while(types[itemNumber] >3);	
    		    cout<<"How many would you like to buy?"<<endl;
	            cout<<"Enter quantity: ";
	            cin>>quantities[itemNumber];
    	
    	        itemNumber++;
        	    itemsSelected++;
    	
    	    do{
        	    if(itemNumber<maxItems) {
        	    cout<<"Would you like to buy something else?"<<endl;
        	    cout<<"[1] Yes"<<endl;
        	    cout<<"[2] No"<<endl;
        	    cout<<"Enter number: "; 
        	    cin>>option;
    	        }
            }while(option>2);
    	
        	    if(itemNumber == maxItems || option == 2) {
    	        quit = true;
    	        }   
    			break;
    			do{
				cout << " 1 - 3 only !!!"<<endl;
    		case 4:
    			cout << "Bond Paper                     PRICE"<<endl;
    	        cout << "[1] A4                         P185"<<endl;
    	        cout << "[2] Short                      P175"<<endl;   
    	        cout << "[3] Long                       P205"<<endl; 
    			cout << "Bond Paper: ";
    			cin >> types[itemNumber];
    			
    			switch(types[itemNumber]) {
    			    case 1:
    			        prices[itemNumber] = 185;
    			        typeNames[itemNumber] = "A4";
    			        break;
    			    case 2:
    			        prices[itemNumber] = 175;
    			        typeNames[itemNumber] = "Short";
    			        break;
    			    case 3:
    			        prices[itemNumber] = 205;
    			        typeNames[itemNumber] = "Long";
    			        break;
    			}
    				} while(types[itemNumber] >3);	
    		    cout<<"How many would you like to buy?"<<endl;
	            cout<<"Enter quantity: ";
	            cin>>quantities[itemNumber];
    	
    	        itemNumber++;
        	    itemsSelected++;
    	
    	    do{
        	    if(itemNumber<maxItems) {
        	    cout<<"Would you like to buy something else?"<<endl;
        	    cout<<"[1] Yes"<<endl;
        	    cout<<"[2] No"<<endl;
        	    cout<<"Enter number: "; 
        	    cin>>option;
    	        }
            }while(option>2);
    	
        	    if(itemNumber == maxItems || option == 2) {
    	        quit = true;
    	        }       			
    			break;
    			do{
				cout << " 1 - 3 only !!!"<<endl;	
    		case 5:
    			cout << "Notebook                       PRICE"<<endl;
    	        cout << "[1] B6                         P50"<<endl;
    	        cout << "[2] B5                         P75"<<endl;   
    	        cout << "[3] A5                         P100"<<endl; 
    			cout << "Notebook: ";
    			cin >> types[itemNumber];
    			
    			switch(types[itemNumber]) {
    			    case 1:
    			        prices[itemNumber] = 50;
    			        typeNames[itemNumber] = "B6";
    			        break;
    			    case 2:
    			        prices[itemNumber] = 75;
    			        typeNames[itemNumber] = "B5";
    			        break;
    			    case 3:
    			        prices[itemNumber] = 100;
    			        typeNames[itemNumber] = "A5";
    			        break;
    			}
    			} while(types[itemNumber] >3);
    		    cout<<"How many would you like to buy?"<<endl;
	            cout<<"Enter quantity: ";
	            cin>>quantities[itemNumber];
    	
    	        itemNumber++;
        	    itemsSelected++;
    	
    	    do{
        	    if(itemNumber<maxItems) {
        	    cout<<"Would you like to buy something else?"<<endl;
        	    cout<<"[1] Yes"<<endl;
        	    cout<<"[2] No"<<endl;
        	    cout<<"Enter number: "; 
        	    cin>>option;
    	        }
            }while(option>2);
    	
        	    if(itemNumber == maxItems || option == 2) {
    	        quit = true;
    	        }   
    		    break;
    		case 6:
    		    cout<< "===---===Thank you for shopping!===---===" <<endl;
    		    exit (0);
    		    break;
    	    default:
    	        cout<<"We don't have that in here. Please choose what's on the menu."<<endl;
    	}
    	
    	}while(!quit);
    	
	itemNumber = 0;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
    cout<<"=-=-=-=-=-= Easy as Pi School Supply Store =-=-=-=-=-="<<endl;
	cout<<"                 	 RECEIPT                 "<<endl;
	while(itemNumber<itemsSelected) {
	    price = prices[itemNumber]*quantities[itemNumber];
	    itemId = itemNumber+1;
        cout<< "Item "<<itemId<<": "<<" "<<typeNames[itemNumber]<<" (PHP"<<prices[itemNumber]<<") "<<quantities[itemNumber]<<"pcs - PHP"<<price<<endl;
        total = total + price;
	    itemNumber++;
	}
 	cout <<" "<<endl;
 	cout <<" "<<endl;
    cout<<"Total: PHP"<<total;

    
    


    return 0;
}
