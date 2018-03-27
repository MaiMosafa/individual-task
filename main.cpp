// FCI – Programming 1 – 2018 - Assignment 2
// Program Name:computing velocity
// Last Modification Date: 27/2/2018
// Author1 and ID and Group: Mai Mostafa Abd El-Rahman & 20170303 & G12
// Teaching Assistant:Eng.Khdega
// Purpose:computing velocity
#include <iostream>
using namespace std;
int main()
{
    float velocity;
    int start_Tc,end_Tc;
    cout<<"enter start temp.: ";
    cin>>start_Tc;
    cout<<"enter end temp.: ";
    cin>>end_Tc;
    for(int Tc=start_Tc ; Tc<=end_Tc ; Tc++){
        velocity = 331.3 + 0.61 * Tc;
        cout<<"At "<<Tc<<" degrees Celsius the velocity of sound is "<<velocity<<" m/s"<<endl;
    }
}
