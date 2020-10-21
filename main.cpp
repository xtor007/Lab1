//
//  main.cpp
//  Lab1
//
//  Created by Anatoliy Khramchenko on 10/10/20.
//  Copyright © 2020 Anatoliy Khramchenko. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, n1, n2;
    float a1, a2;
    cout << "Enter the number of progression elements and the value and number of the two elements";
    cin >> n >> a1 >> n1 >> a2 >> n2;
    if ((n<=1) or (n1<=0) or (n2<=0) or (n2==n1)) {
        cout << "incorrect input";
        exit(0);
    }
    else {
        float d;
        d = (a2-a1)/(n2-n1);
        float a;
        a = a1 - (n1-1)*d;
        float s, nd2;
        nd2 = n;
        s = (nd2/2)*(2*a+(n-1)*d);
        cout << "the sum of the elements of progression " <<s << " ";
    }
    return 0;
}
