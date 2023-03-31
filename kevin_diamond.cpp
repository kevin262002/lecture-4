#include<iostream>
#include<string.h>

using namespace std;

class Diamond{
	
	private:
		
		int a;
        char b[20];
        int c;
        int d;
        int e;
        int f;
        char g[20];
        
    public:
    	
    	Diamond(int a,char b[],int c,int d,int e,int f,char g[]){
    		
    		this->a=a;
    		strcpy(this->b,b);
    		this->c=c;
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
    int v;
    int w;
    int x;
    int y;
    char z[20];
    
    int i,n;
    
    cout<<"Enter Number Of Compny : ";
    cin>>n;
    
    for(i=1;i<=n;i++){
	
	cout<<"Enter Compny Id : ";
    cin>>s;
    cout<<"Enter Compny Name : ";
    cin>>u;
    cout<<"Enter Compny Staff Quantity : ";
    cin>>v;
   	cout<<"Enter Compny Revenue : ";
   	cin>>w;
   	cout<<"Enter Compny Imporn Raw Diamond : ";
   	cin>>x;
   	cout<<"Enter Compny Export Diamond : ";
   	cin>>y;
   	cout<<"Enter Compny CEO : ";
   	cin>>z;
   	
   	cout<<endl;
   	
   	Diamond obj(s,u,v,w,x,y,z);
    }
	return 0;
}
