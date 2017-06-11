/*
ID: krisnai1
LANG: C++11
TASK: friday
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
   ifstream fin("friday.in");
   ofstream fout("friday.out");
   int n,pos;
   fin>>n;
   pos=3;
   int freq[7]={0};
   int days[12]={31,31,28,31,30,31,30,31,31,30,31,30};
   //int n;
   fin>>n;
   for(int i=1900;i < 1900+n;i++){
   		if(i%400==0||(i%100!=0&&i%4==0)) days[2]=29;
   		for(int j=0;j < 12;j++){
   			pos=(pos+days[j])%7;
   			freq[pos]++;
   		}
   		days[2]=28;
   }
   for(int i=0;i < 6;i++) 
   		fout<<freq[(i+6)%7]<<" ";
   	fout<<freq[5]<<endl;
   	return 0;
   }