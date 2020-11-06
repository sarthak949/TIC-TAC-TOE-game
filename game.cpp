 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 char arr[9]={'1','2','3','4','5','6','7','8','9'};
 int cont=0;
 void check(char , char);
 //calling pat pattern-----
 void pat(char arr[])
 {
  cout<<"\t _________________________"<<endl;
  cout<<"\t|"<<arr[0]<<"|\t" <<arr[1]<<"|\t" <<arr[2]<<"|"<<endl;
  cout<<"\t|"<<arr[3]<<"|\t" <<arr[4]<<"|\t" <<arr[5]<<"|"<<endl;
  cout<<"\t|"<<arr[6]<<"|\t" <<arr[7]<<"|\t" <<arr[8]<<"|"<<endl;
  cout<<"\t ________________________"<<endl;
 }
 //-----------play function----------------
 void play()
 {  char s,p;
  cout<<"\nenter position and symbol:"<<endl;
  cin>>s>>p;
  check(s,p);
 }
 //---------check function------
 void check(char s, char p)
 {  int i;
  for(i=0;i<=8;i++)
  {
    if(arr[i]==s)
    {
      arr[i]=p;
    }
  }
  cont++;
 }
 int ending( char arr[])
 {
  if((arr[0]=='x' && arr[1]=='x' && arr[2]=='x') || (arr[0]=='x' && arr[3]=='x' && arr[6]=='x')  )
  return 100;
  else if((arr[2]=='x' && arr[5]=='x' && arr[8]=='x') || (arr[6]=='x' && arr[7]=='x' && arr[8]=='x' ) )
  return 100;
  else if((arr[0]=='x' && arr[4]=='x' && arr[8]=='x') || (arr[1]=='x' && arr[4]=='x' && arr[7]=='x'))
  return 100;
  //-------for symbol y---------
  else if((arr[0]=='o' && arr[1]=='o' && arr[2]=='o') || (arr[0]=='o' && arr[3]=='o' && arr[6]=='o')  )
  return 200;
     else if((arr[2]=='o' && arr[5]=='o' && arr[8]=='o') || (arr[6]=='o' && arr[7]=='o' && arr[8]=='o' ) )
  return 200;
  else if((arr[0]=='o' && arr[4]=='o' && arr[8]=='o') || (arr[1]=='o' && arr[4]=='o' && arr[7]=='o'))
  return 200;

  //else if(cont==8)//not working
    //return 400;

    else
  return 300;


 }

 int main()
 { int a,k,i;
  char c;
  cout<<"\ttic tac toe"<<endl<<endl;
 //--------------------------------------------
 pat(arr);
 //-------------------------------------------------
 cout<<"symbol for player 1 is x and for 2 is O"<<endl<<endl;
  label:
  play();
  system("cls");
  pat(arr);
  k=ending(arr);
  if(cont<9)
  {
    if(k==100)
    {
      cout<<"\nplayer 1 win and loser have to die";
    }
    else if(k==200)
    {
      cout<<"\nplayer 2 win and loser have to die";
    }
    else if(k==300)
    goto label;
 }
  else
  {
    cout<<"no one win";
    exit(0);
  }

  return 0;

 }
