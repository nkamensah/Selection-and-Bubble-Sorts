#include<iostream> 
using namespace std; 
int main() { 
    int array[5],temp,min,i,j; 
    for(i=0;i<=4;i++) 
    { 
        cout<<"Enter the value"<<endl; 
        cin>>array[i]; 
    } 
    cout<<"values before sorting"<<endl; 
    for(i=0;i<=4;i++) 
    { 
        cout<<array[i]<<" "; 
    } 
    cout<<endl; 
    for (i = 0; i <= 4; i++)
    {
        min = i;
        for (j = i + 1; j <= 4; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
    cout << "values after sorting" << endl;
    for (i = 0; i <= 4; i++)
    {
        cout << array[i] << " ";
    }
}
