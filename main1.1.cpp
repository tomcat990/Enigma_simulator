#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(vector<int>& vect,int i,int j){
	int store;
	store=vect[i];
	vect[i]=vect[j];
	vect[j]=store;

}

void randomizer(vector<int>& vect1){
	for(int i=0;i<40;i++){
		swap(vect1,rand()%26,rand()%26);
	}

}

int indexfinder(vector<int> vect2,int val){
	for(int i=0;i<vect2.size();i++){
		if(val==vect2[i]){
			return i;
		}
	}
	return -1;
}

void roatation(vector<int>& vect3){
	int store1=vect3[0];
	for(int i=0;i<vect3.size()-1;i++){
		vect3[i]=vect3[i+1];
	}
	vect3[25]=store1;
}





int main(){

//srand(time(0));

	vector<char> letter={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	vector<int> num26={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	
	//rotors
	randomizer(num26);
	vector<int> r1;
	r1=num26;
	randomizer(num26);
	vector<int> r2;
	r2=num26;
	randomizer(num26);
	vector<int> r3;
	r3=num26;

	//input
	int tries=0;
	char ch;
	vector<char> output;
	while((ch=cin.get())!= '\n'){
		for(int j=0;j<letter.size();j++){
			if(ch==letter[j]){
				output.push_back(letter[indexfinder(r1,indexfinder(r2,(indexfinder(r3,25-(r3[r2[r1[j]]])))))]);
			}
		}	
		roatation(r1);
		tries+=1;
		if(tries%26==0){
			roatation(r2);
		}
		if((tries%(26*26))==0){
			roatation(r3);
		}
	}


	//output 
	for (int i=0;i<output.size();i++){
			cout<<output[i];
	}


/*
for (int i=0;i<r1.size();i++){
	cout<<r3[i]<<" ";
	
}

*/
cout<<endl;

return 0;
}
