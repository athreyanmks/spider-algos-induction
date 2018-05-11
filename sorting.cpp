//Athreyan 108117016
#include<bits/stdc++.h>
using namespace std;

int arr[100];//global variable

void merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
   
    int L[50], R[50];
 
    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    
    i = 0; 
    j = 0; 
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int l, int r)
{
    if (l < r)
    {
        
        int m = l+(r-l)/2;
 
        
        mergeSort(l, m);
        mergeSort(m+1, r);
 
        merge(l, m, r);
    }
}





int main()
{
	int i,n;
	
	cin>>n;
	
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	
	mergeSort(0,n-1);
	
	for(i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
}
