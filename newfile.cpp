#include <iostream>
#include <string>

double farehniteConverter(double celcuis) {
    double farehnite = (celcuis*1.8)+32;
    return farehnite;
   
}

void func() {}
        
int main() {
      /* int marks;
      std::cout<<"enter your marks please ";
      std::cin>>marks;
      std::cout<<""<<std::endl;
      std::cout<<checker(marks)<<std::endl;
     */
     int arr[4] = {0,4,1,2};
     int arr_1[5] = {0,4};
     int arr_2[] = {1,2,3};
 /*    for(int i=0; i<=3; i++) {
         std::cout<<arr_2[i]<<",";
     }*/
     std::cout<<"\n"<<"length of first array is "<<(sizeof(arr)/sizeof(arr[0]))<<std::endl;
     
     std::cout<<"\n"<<std::endl;
     
     std::cout<<"Studying multidimensional arrays"<<std::endl;
     
     int multiArr[3][3] = {
         {1,2,3},
         {4,5,6},
         {7,8,9}
     };
     
     for (int i=0; i<3; i++) {
         std::cout<<"\n";
         for(int j=0; j<3; j++) {
             int elm = multiArr[i][j];
             std::cout<<elm<<" ";
         }
     }
     
    int element = multiArr[0][2];
     std::cout<<element<<std::endl;
      
      
     std::cout<<"zero matrix"<<std::endl;
     
     int zeroMatrix[4][4] = {{0}};
     std::cout<<"\n"<<std::endl;
     
     std::cout<<zeroMatrix[0][0]<<std::endl;
     
     for(int i = 0; i<4; i++) {
         std::cout<<"\n";
         for(int j=0; j<4; j++) {
             int zeroM = zeroMatrix[i][j];
             std::cout<<zeroM<<" ";
         }
     }
     

     
return 0;
}