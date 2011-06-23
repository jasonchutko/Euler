#include <iostream>
#include <math.h>
#include <vector>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    int count = 0;
    string str;
    
    freopen("102data.txt", "r", stdin);
    
    for(int y = 0; y < 1000; y++)
    {
        
        cin >> str;
        
        std::vector<int> vect;
        
        std::stringstream ss(str);
        
        int i;
        
        while (ss >> i)
        {
            vect.push_back(i);
            
            if (ss.peek() == ',')
                ss.ignore();
        }
        
        int Ax = vect[0];
        int Ay = vect[1];
        int Bx = vect[2];
        int By = vect[3];
        int Cx = vect[4];
        int Cy = vect[5];
        
        double theta1 = acos( ((Ax * Bx) + (Ay * By)) / (sqrt((Ax*Ax) + (Ay*Ay)) * sqrt((Bx*Bx) + (By*By))) );
        double theta2 = acos( ((Bx * Cx) + (By * Cy)) / (sqrt((Bx*Bx) + (By*By)) * sqrt((Cx*Cx) + (Cy*Cy))) );
        double theta3 = acos( ((Ax * Cx) + (Ay * Cy)) / (sqrt((Ax*Ax) + (Ay*Ay)) * sqrt((Cx*Cx) + (Cy*Cy))) );
        
        if((theta1 + theta2+ theta3) < 6.28320 && (theta1 + theta2 + theta3) > 6.28317)
        {
            count++;
        }
    }
    
    cout << count;

	return 0;
}
