 #include<iostream>
  using namespace std;

  int main()
  {
      long int n,i,j,cn=0;
      cin>>n;
      long int a[n];

      for (  i=0; i <n; i++) cin>>a[i];

      for ( i=0; i<n; )
      {
          if ( a[i]==10)
          {
              for ( j=i+1; j<n; j++)
                if ( a[j]!=10) break;

              cn++;
              i=j;
          }
          else
          {
              for( j=i+1; j<n; j++)
                if (a[j]!=1) break;
              cn++;
              i=j;
           }
      }

      cout<<cn<<endl;

      return 0;


  }