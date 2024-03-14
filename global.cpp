//Program to show local ang global variable
#include<iostream>
//using namespace std;

namespace Nspace{		
		int x = 5; 			  
} 				   		  
	int x=20; 	//Global declarartion			
 	int main(){	
				 
	  int x = 10; 		//local declartion		  
	  std::cout<<x<<std::endl;//Local 		   	  
	
	  std::cout<<::x<<std::endl;//Global namesp.  
	  std::cout<<Nspace::x<<std::endl;//namespace	
      return 0;				  
    }


