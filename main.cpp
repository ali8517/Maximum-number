#include <iostream>

using namespace std;

int main()
{

int numbers[5] , maximum;

for (int i=0; i<5; i++){
    cin >> numbers[i];
}
    maximum=numbers[0];
for (int i=1; i<5; i++){
    if(numbers[i]>maximum){
        maximum=numbers[i];
    }
}
cout << endl;

cout << " Maximum number is : " << maximum <<endl;

    return 0;
}
