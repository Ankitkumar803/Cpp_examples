#include <iostream>
using namespace std;
int linearsearch(int array[],int n ,int num){

    int i;
    for( i=0;i<n;i++){
    if(num==array[i]){
      
      return i; 
    }
      
    }
return -1;

}


 
 int main(){
    int n;  
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }

    //cout<<arr[0]<<endl;

    int num;
    cin>>num;
   /* bool flag=0;
    int i;
    for( i=0;i<n;i++){
    if(num==arr[i]){
      cout<<i<<endl;
      flag=1; 
    }
      
    }

    if(flag==0){
      cout<<"number is not there"<<endl;
    }
*/

cout<<linearsearch(arr,n,num)<<endl;
    
   


     return 0;


 }