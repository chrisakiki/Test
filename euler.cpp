#include <iostream> 
#include <fstream>
#include <vector>
using std::cout;
using std::endl;

int main ()
{
    std::ofstream myfile("output.csv");
    float x[50] = {};

    for (int i=0; i<50; i++){
        if (i==0.0)
        {
            x[i] = 0.0;
            //myfile<<x[i]<<endl;
            //cout<<x[i]<<endl;
        }
        x[i] = x[i-1] + 0.1;
        //myfile<<x[i]<<endl;
        //cout<<x[i]<<endl;
    }
    
    int length_x = int(sizeof(x)/sizeof(x[0])) + 1;
    
    float y[51] = {};
    y[0] = 1;
    myfile<<y[0]<<endl;
    for (int k = 1; k < length_x; k++)
    {
        y[k] = (1-3*0.1)*y[k-1];
        cout<<y[k]<<endl;
        myfile<<y[k]<<endl;
    }
    
    myfile.close();
    cout<<"I just solved the problem"<<endl;
    cout<<"Honestly, I just work here i don't know what i'm doing half the time i'm just learning as i go "<<endl;
    cout<<"woah this is so freaking cool!!"<<endl;
    return 0;
}
