#include "HTable.h" 
#include <iostream>


using namespace std;

HTable::HTable()	//default constructor 
{
	max_size = 23;		//the size of the table is 23
	dt = new data[max_size];
	numel = 0;
	for(int i = 0; i < max_size; i++) 
	{
		dt[i].key = -1;
		dt[i].value = "N/A";
	}
}
HTable::HTable (int t_size)
{
	max_size = t_size; 	//the size of the table equal to the input parameter
	dt = new data[max_size];	
	numel = 0; 
	for(int i=0; i < max_size; i++)
	{
		dt[i].key = -1;
		dt[i].value = "N/A";
	}
}
int HTable::hash(int &k)	//This function evaluates the hash code of k
{
	return k % max_size;
}
int HTable::rehash(int &k)	
{			        //If multiple keys have the same hash code, then rehash so the index value move to a space that is not taken.
	return (k+1) % max_size;
}	
int HTable::add(data &d)
{
	if(numel== max_size) //When table is full, it returns -1
	{
		return -1;
	}
	int element = hash(d.key);	//element is the result of the hash code
	if(dt[element].key == -1){
		dt[element].key = d.key;	
		dt[element].value = d.value;
		numel++;			
		return 0;
	} else
	{
		for(int i = 0; i < dt[element].key; i++){ //If there is collision it continue to rehash until a space is found
			if(dt[element].key != -1)
			{
				element = rehash(element);
			}
		}
			dt[element].key = d.key;	
			dt[element].value = d.value;
			numel ++;			//Count the data added again
			return 0;
	}
}

int HTable::remove(data &d) //data is remove from the table 
{
	if(numel == 0)	//When table is empty, it can't remove data
	{
		return -1;
	}
	int element = hash(d.key);
	if(dt[element].key == d.key) //Check if the key is the same as the hash code of the key
	{
		dt[element].key = -1;		
		dt[element].value = "N/A";	
		numel --;			
		return 0;
	}
	else
	{
		int check = element;						//If collision occur, it goes through the while loop
		while(dt[element].key != d.key && dt[element].value != d.value) 
		{
			element = rehash(element);
			if(check == element)		//if data pair is not found and it is the end of the table, it returns -1
			{
				return -1;
			}
		}
			dt[element].key = -1;		//when the keys are found, its goes back to it initial value and key
			dt[element].value="N/A";
			numel --;
			return 0;
	}
}
void HTable::output()
{
	for(int i = 0; i<max_size; i++)
	{
		cout<< i <<" -> "<< dt[i].key <<"     "<< dt[i].value <<endl; //Prints out the index, key, and value of each data.
	}
	cout << "There are " << numel << " data in the table." << endl;
}
