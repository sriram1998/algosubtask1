#include <iostream>
using namespace std;

int main()
{int nod,noq,input,a[50],b[50],c[50];    //nod is no.of dresses in stack    noq is no.of queries    input is the size of dress asked
cin>>nod>>noq;
for(int i=0;i<nod;i++)
 {cin>>a[i];
c[i]=b[i]=a[i];}

for(int i=0;i<noq;i++)
 {int x=0,y,z;
    int smallest,largest;
cin>>input;
   for(int j=0;j<nod;j++)
        if(a[j]>=input)
        {a[j]=a[j]-input;    //for 1st simulation where the first correct size is used
            break;
        }
        for(int j=0;j<nod;j++)
            cout<<a[j]<<" ";     //1st simulated array
        cout<<"\n";
        for(int j=0;j<nod;j++)
            if(b[j]>=input)
                if(x==0)
                    {
                    smallest=b[j];
                    x=1;
                    y=j;
                }
                else
                    if(b[j]<smallest)
                        {
                        smallest=b[j];
                        y=j;
                    }
        x=0;
        b[y]=b[y]-input;
        for(int j=0;j<nod;j++)   //2nd simulation
            cout<<b[j]<<" ";
        cout<<"\n";
        for(int j=0;j<nod;j++)
            if(c[j]>=input)
                if(x==0)
                    {
                    largest=c[j];
                    x=1;
                    z=j;
                }
                else
                    if(c[j]>largest)
                    {
                    largest=c[j];
                    z=j;
                }
        c[z]=c[z]-q;
        for(int j=0;j<nod;j++)
            cout<<c[j]<<" ";    //3rd simulation
        cout<<"\n\n";
    }
  return 0;
}