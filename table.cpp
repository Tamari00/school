#include <iostream>
using namespace std;


int main()
{

 int tab1[10] = {7, 3, 1, 6, 9, 5, 4, 10, 2, 2};
 int tab2[10];
 int tab3[10];
 int k = 10;
 
 cout<<tab1[4]<<endl;
 
tab1[6]=12;
for(int i = 0; i<10; i++){
    tab2[i] = tab1[i];
    tab3[i] = tab2[i]+tab1[i];
}

for(int j = 0; j<10; j++){
    k--;
    tab2[j] = tab1[k];
}





    return 0;
}