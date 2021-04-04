#include<iostream>


using namespace std;
bool vitrichuan(int** a,int x, int y,int n , int m){
    if(x<n && y<m && a[x][y]==0) return true;
    else return false;
}
bool giai(int** a,int pos_i,int pos_j,int x, int y,int** solve){
    if(pos_i ==x-1  && pos_j ==y-1 ){
        solve[pos_i][pos_j] = 2;
        return true;
    }
    if(vitrichuan(a,pos_i,pos_j,x,y)){
        solve[pos_i][pos_j] = 2;
        if(giai(a,pos_i+1,pos_j,x,y,solve)) return true;
        if(giai(a,pos_i,pos_j+1,x,y,solve)) return true;
        solve[pos_i][pos_j] = 1;
        return false;
    }
    return false;
}


int main(){
    int n , m; cin >> n >> m;
    int** a = new int*[n];
    for(int i = 0; i< n; i++ ){
        a[i] = new int[m];

    }
    for(int i = 0; i< n; i++ ){
        for(int j = 0 ; j < m;j++)
            cin >> a[i][j];      
    }
    int** b = new int*[n];
    for(int i = 0; i< n; i++ ){
        b[i] = new int[m];

    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j<m;j++){
            b[i][j] = 1;
        }
    }
    /* for(int i = 0; i< n; i++ ){
        for(int j = 0 ; j < m;j++)
            cout<<b[i][j]<<" ";
            cout<<endl;
            
    } */
    if(giai(a,0,0,n,m,b)){
    for(int i = 0; i< n; i++ ){
        for(int j = 0 ; j < m;j++){
            if(b[i][j]==2) a[i][j] = 2;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        }
    }
}