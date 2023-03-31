#include<iostream>
#include<string.h>

using namespace std;

class Cafe{
	
	private:
		
		int a;
        char b[20];
        char c[20];
        int d;
        int e;
        int f;
        char g[20];
        
    public:
    	
    	Cafe(int a,char b[],char c[],int d,int e,int f,char g[]){
    		
    		this->a=a;
    		strcpy(this->b,b);
    		strcpy(this->c,c);
    		this->d=d;
    		this->e=e;
    		this->f=f;
    		strcpy(this->g,g);
    	
    		cout<<a<<endl;
    		cout<<b<<endl;
    		cout<<c<<endl;
    		cout<<d<<endl;
    		cout<<e<<endl;
    		cout<<f<<endl;
    		cout<<g<<endl;
    		
		}
};

int main(){
	
	int s;
    char u[20];
    char v[20];
    int w;
    int x;
    int y;
    char z[20];
    
    int i,n;
    
    cout<<"Enter Number Of Cafe : ";
    cin>>n;
    
    for(i=0;i<n;i++){
	
	cout<<"Enter Cafe Id : ";
    cin>>s;
    cout<<"Enter Cafe Name : ";
    cin>>u;
    cout<<"Enter Cafe Type : ";
    cin>>v;
   	cout<<"Enter Cafe Rating : ";
   	cin>>w;
   	cout<<"Enter Cafe Establish Year : ";
   	cin>>x;
   	cout<<"Enter Cafe Staff Quantity : ";
   	cin>>y;
   	cout<<"Enter Cafe Location : ";
   	cin>>z;
   	
   	cout<<endl;
   	
   	Cafe obj(s,u,v,w,x,y,z);
    }
	return 0;
}
