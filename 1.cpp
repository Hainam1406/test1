#include <stdio.h>
#include <conio.h>
#include <iostream>
#define max 100
#define FileIn "Dijkstra.txt"
using namespace std;



// thuat toan Dijkstra
void Dijkstra(int A[max][max], int n, int D, int C) {
  char DanhDau[max];
  int Nhan[max], Truoc[max], XP, min;
  for(int i=0; i<n; i++){
  Nhan[i] = 100;
  DanhDau[i] = 0;
  Truoc[i] = D;
 }
 Nhan[D] = 0;
 DanhDau[D] = 1;
 XP = D;
 while(XP != C){
    for(int j=0; j<n; j++)
       if(A[XP][j]>0 && Nhan[j]>A[XP][j]+Nhan[XP] && DanhDau[j]==0) {
          Nhan[j] = A[XP][j]+Nhan[XP];
          Truoc[j] = XP;
       }
       min = 100;
       for(int j = 0; j<n; j++)
         if(min>Nhan[j]&& DanhDau[j]==0){
            min = Nhan[j];
           XP = j;
        }
      DanhDau[XP] = 1;
  }
  cout<<"Duong Di Ngan Nhat La:"<<Nhan[C]<<endl;
  cout<<C+1<<" <- "<<Truoc[C]+1;
  int i = Truoc[C];
  while(i!=D){
     i = Truoc[i];
     cout<<" <- "<<i+1;
  }
 }
// ham chinh
int main() {
   int A[max][max],n,Dau,Cuoi; // ma tran A chua do thi
   
   21
   2
   Dijkstra(A,n,Dau,Cuoi);
   return 0;
}

