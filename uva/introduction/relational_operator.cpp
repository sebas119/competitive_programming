#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    //register unsigned n;
    //unsigned a,b;

    int n,a,b;

    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    cin >>n;

    while(n--){
        cin>>a>>b;
        if (a>b){cout<<">";}
            else if (a<b){cout<<"<";}
            else {cout<<"=";}
        cout<<endl;
    }

    return 0;
}

