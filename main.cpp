#include <iostream>
#include <string.h>
using namespace std;
int maxsum(int arraynew[], int sizearray)
{
    int maxsum=0;
    int sum=0;
    for(int i=0; i<sizearray; i++)
    {
        for(int j=i; j<sizearray; j++)
        {
            sum=0;
            for(int k=i; k<=j; k++)
            {
                sum+=arraynew[k];
            }if(sum>maxsum){
            maxsum=sum;}
        }
    }return maxsum;
}



int main()
{
  int sum=8;
  int newarray[]={7,6,5,4,3,2,1,0};
  cout<< " "<< maxsum(newarray, sum);

}
