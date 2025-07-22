/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Aionnio
 *
 * Created on 31 Ιουλίου 2023, 3:54 μ.μ.
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <atomic>
#include <thread>
#include <climits>
#include <limits>
#include <iomanip>
#include <vector>
#include <sstream>
#include <list>
using namespace std;

/*
 * 
 */
int cdi;
int fl;
int m;
int stping;
int numberaro[5000];
int numberart[5000];
int cnar=0;
list<long long int> a;
string sb;
long long int cd( long long int n,int tbl,double mk){   
     //cout<<"inserting for adding digits " << mk <<"\n";
    if(n==0){n=mk;}
    if(mk==0){n=n;}
    m=n%10;  
    cdi+=m;
    fl=-1;
    if(n/10==0){
        stping+=1;
        if(tbl==0){a.push_front(m);}
       //cout<<"zeroing " << m << " and result "<< cdi <<"\n"; 
       // if(tbl==1){numberaro[cnar]=m; cnar+=1;}
       // if(tbl==2){numberart[cnar]=m; cnar+=1;}
      //  cout<<"zeroing " << m << " and result "<< cdi <<"\n";  
        fl=1;
               if(fl==1){
                   //cout<<"fl is " << fl << " with cdi " << cdi <<"\n"; 
               } //cdi=0;            
               return cdi;   //return 1;
    }
    else
    {
        stping+=1;
        if(tbl==0){a.push_front(m);}
         //cout<<"looping with " << n << " and "  << m << " and semi-result " << cdi << "\n"; 
       // if(tbl==1){numberaro[cnar]=m; cnar+=1;}
       // if(tbl==2){numberart[cnar]=m; cnar+=1;}
      //  cout<<"looping with " << n << " and "  << m << " and semi-result " << cdi << "\n";
        cd(n/10,tbl,mk);  //return 1 + cd(n/10);
    }   
    return cdi;
}

 int nof(long long int nl){ if(nl/10==0){stping+=1;}else{stping+=1; nof(nl/10);} return stping;}
 
  int gen_conti(long long int x){
  cdi=0; cnar=1;  int ms=cd(x,0,0);
    int nul;
    stping=0;nul=nof(ms);  int fli=0;  
   if(nul>1){   
       for(;;){
       cdi=0;cnar=1;ms=cd(ms,0,0);
       stping=0;nul=nof(ms);
       if(nul==1){ fli=1;break;}
       if(fli==1){break;}
       }
   }
    return ms ; 
 }
  list<long long int> b;
 long long int mmiioopp(long long int vlone ,long long int vltwo)
 {
     cout<<"Entering miop\n";
  long long int sum_them;
  if(vlone==9){cout<<" ----> from miop inserting 9 from : one\n";
  b.push_front(vlone);
  sb+=to_string(vlone);
  }
  if(vltwo==9){cout<<" ----> from miop inserting 9 from : two\n";
  b.push_front(vltwo);
  sb+=to_string(vltwo);
  }
  sum_them=vlone + vltwo;
  if(sum_them<=9){cout<<"new value of " << vlone << " " << " and " << vltwo << " with sum of " << sum_them <<"\n";
  cout<<"**** Inserting @ B from first " << sum_them <<"\n";
  b.push_front(sum_them);
  sb+=to_string(sum_them); goto A;
  }
  if(sum_them>9 && vlone!=9 && vltwo!=9){
      cout<<"**** Inserting @ B from second " << vlone << " and  "<< vltwo <<"\n";
      b.push_front(vlone);
      sb+=to_string(vlone);
      b.push_front(vltwo);
      sb+=to_string(vltwo);
      //b.sort();
      goto A;
  }
  if(sum_them>9 && vlone!=9 && vltwo==9)
  { cout<<"**** Inserting @ B from third " << vlone << " and  "<< vltwo <<"\n";
      b.push_front(vlone);
      sb+=to_string(vlone);
      b.push_front(vltwo);
      sb+=to_string(vltwo);
      goto A;
  }
  
  if(sum_them>9 && vlone==9 && vltwo!=9)
  { cout<<"**** Inserting @ B from fourth " << vlone << " and  "<< vltwo <<"\n";
      b.push_front(vlone);b.push_front(vltwo);
      sb+=to_string(vlone);sb+=to_string(vltwo);
      goto A;
  }
  A:
   return sum_them;
 } 
   
  long long int myn; 
  int cnt=1;
  
  string fnls;
  void shar(){
      int m=0;
      fnls.clear();
      cout<<"\n";
      cout<<"steps are " << stping <<"\n";
      cout<<"printing values of a \n";
      cout<<"*************************\n";
    for(auto it=a.begin();it!=a.end();++it)
       {
        cout<< m << " " << " showing  value --> " << *it << " \n";stping+=1;
        fnls+=to_string(*it);
        m+=1;   
       }
      b.clear();
      std::this_thread::sleep_for(std::chrono::milliseconds(100));     
      cout<<"*************************\n";
      cout<<"out of printing values\n";
      cout<<"b is cleared\n";
      cout<<"new steps are " << stping <<"\n";
      cout<<"\n";
      //sb=" ";
      cnt+=1;      
  }
 
  int chk_da_sm;
  string dsm;
  
  
int tsi(){    
  cout<<"\n";
  cout<<" ------> ******* Starting the process ********* <------- \n";  
  std::list<long long int>::iterator ii=a.begin();
  std::list<long long int>::pointer p;
  p=ii.operator ->();
  int mi=0;
  int msti=0;   
  long long int onvl;
  long long int twvl;
  int play=-1;
  long long int loc;
  long long int sof=0;
  int cdl=0;
  *p=ii.operator *();
  for(;;)
  {
    if(mi==0){cout<<"internal loop " <<  &ii <<  " with " << *ii <<" | "; mi+=1;
              if(play==-1){onvl=*ii; play+=1;} cdl+=1;
              cout<<"da p is " << &p << " *p " << *p << " and p " << p <<"\n";
    }  
     p+=1; 
     ii.operator ++(*p);     
     cout<<"internal loop " <<  &ii <<  " with " << *ii <<  " | ";
     cout<<"da p is " << &p << " *p " << *p << " and p " << p <<"\n"; 
//     if(cdl==1){mi=mi;cdl+=1;}
//     if(cdl>1){mi+=1;}
     mi+=1;
     if(play==-1 && mi>=3){onvl=*ii;play+=1;cout<<"play is 1\n";}
     if(play==1 && mi>=3){twvl=*ii; play+=1;cout<<"play is increased by 1=2\n";}
     std::this_thread::sleep_for(std::chrono::milliseconds(50));
     if(mi%2==0){
         cout<<"two values mod \n";
         twvl=*ii;
         play+=2;
         cout<<"with " << onvl << " and " << twvl <<"\n";
         loc= mmiioopp(onvl,twvl); 
         cout<<"at mod the loc value is " << loc <<"\n";
         cout<<"play from mod " << play <<"\n";
     }
     if(play==2){cout<<"play is 2\n";sof=sof+loc;play=-1; }   
     if(mi==stping){       
         cout<<"we are in the final record\n";
         onvl=sof;
         twvl=*ii;
         if( play==0){cout<<"pushing last number\n";b.push_front(*ii);sb+=to_string(*ii);
         cout<<"**** Inserting @ B " << *ii <<"\n";  
         goto A;
         }
         if(onvl<=9){
         long long int mc=mmiioopp(onvl,twvl);
         if(mc<=9){cout<<"mc " << mc <<"\n";}
         }               
         A:
         cout<<"Ending Session with sb (incorrect only gives some temp info) " << sb <<"\n";
          chk_da_sm+=1;
         break;
     }     
  }
  cout<<"out of break\n";
  cout<<"\n";
  if( chk_da_sm==5){dsm=sb;}
  int rb=sb.size()-1;
  int ab=sb.size()-1;  
  cout<<"trying to shrink? press 1 for yes  2 to exit\n";
  int shr=0;
  if(dsm==sb){shr=1; goto B;}
  cin >> shr;
  if(sb.size()==2  && shr==1 ){cout<<"Final result is " << sb.at(0)<<"\n"; goto B;}
  if(shr==1){
      cout<<"da while " << cnt <<"\n";
      a.clear();
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
      cout<<"a is cleared\n";
      char k;
      int m;
      stping=0;
      for(int i=0;i<=sb.size()-1;i++)
      {       
          //k=sb.at(i);
          m=int(sb.at(i)  - '0') ;
         //cout<<"m " << m <<" | ";
          if(m>=0){
          a.push_front(m);
          std::this_thread::sleep_for(std::chrono::milliseconds(100));
         } 
      }
      a.sort();
      cout<<"a is sorted out\n";
      cout<<"shrinking \n";
      cout<<"while sb " << sb <<  "\n";
       mi=0;
      cdl=0;
      play=-1;
      sof=0;
      shar();      
  }
  B:
  cout<<" ------> ******* Ending the process ********* <------- \n";
  cout<<"\n";
  return 0;
}  
  
  
long long int mynum;
int main(int argc, char** argv) {
    cout<<"just enter a number xD";
    cout<<"voyeristic behaviours have fun \n";
    
//    cout<<"enter number\n";
//    cin>>myn;
//    stping=0;
//    cnar=0;cdi=0;
//    int k=cd(myn,0,0);  
    
    mynum=stoll(argv[1]);
    stping=0;cnar=0;cdi=0;
    int kk=cd(mynum,0,0);
    
    
    a.sort();    
    cout<<"\n";
    sb=" ";
    cnt=1;
    int op=tsi(); 
    b.sort();
    cnt=1;
    if(sb.size()>2){
              sb.clear();
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
      cout<<"sb is cleared\n";
        cout<<"From main \n";
        int ot=tsi();
        if(ot==0){
      char k;
      int m;
      int lk=0;
      stping=0;
      cout<<"****************** Start of Adding ****************** \n";
      for(int i=0;i<=sb.size()-1;i++)
      {       
          //k=sb.at(i);
          m=int(sb.at(i)  - '0') ;
         // cout<<"m " << m <<"\n";
          if(m>=0 && m!=9){        
              lk=lk+m;
               cout<<"value " << m << " sum of lk --> " << lk <<"\n";
          }
      }
      cout<<"****************** End of Adding ****************** \n";
     cdi=0;cnar=1;int kll=cd(mynum,-1,0);
     cout<<"lk " << lk <<"\n";
     cdi=0;cnar=1;  
     int kf=cd(lk,-1,0);
     cout<<"for number " << mynum << " the result is " << kll <<"\n";   
     cout<<"for calculated number " << fnls  << " or " << sb <<  " the result is " << kf <<"\n";
        }
    }
    return 0;
}

