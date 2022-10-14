#include<iostream>
using namespace std;
int main(){
    int [] arr ={23,34,45,67,78,89,99};
    int item ,pos=-1;
    cout<<"Enter element to be searched : ";
    cin>>item;
    pos = binarysearch(arr,0,6,item);
    if(pos!=-1){
        cout<<"Element to be found at index :"<<pos;
    }
    else{
        cout<<"Element Not found ";
    }
}
    int binarysearch(int[]a,int beg,int end,int item){
        int mid;
        if(end>=beg){
            mid = (beg+end)/2;
            if(a[mid]==item){
                return mid+1;
            }
            else if (a[mid]<item)
            {
                /* code */
                return binarysearch(a,mid+1,end,item);
            }
            else{
                return binarysearch(a,mid-1,beg,item);
            }
            
        }
    }

