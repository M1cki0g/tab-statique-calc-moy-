#include<iostream>

using namespace std;

float moyenne(int t[]){
int sum = 0;
for(int i=0 ; i<6 ; i++){
    sum += t[i];
}
return sum/6;
}

void aff(float moy){
cout<<"moy="<<moy;
}

int main(){
float moy;

int t[6] = {10,15,19,20,11,12};
moy = moyenne(t);
aff(moy);
}
