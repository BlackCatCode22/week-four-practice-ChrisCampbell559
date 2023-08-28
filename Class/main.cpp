#include <iostream>
#include <string>


using namespace std;

int main()
{
    cout << "welcome to week four practice" << endl;

    //create a one demensional arraty
    char myChars[10] = {'a','b','c','d','e','f','g','h','i','j'};

    cout << "\n\nshould be an e ... " << myChars[4];

    cout << "\n\nmyChars is " << myChars ;

    for (int i =0; i < 10; i++) {
        cout << "\n\n myChars[" << i << "] is " << myChars[i] << "\n\n";
    }
    int num1 =33;
    int num2 = 111;

    if (num1 > num2) {
    cout << "\n The test condition was true";
    }
    else {
        cout << "\n The test condition evaluation to false";

    }



    return 0;
}
