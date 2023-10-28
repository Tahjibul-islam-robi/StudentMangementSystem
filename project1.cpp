
#include<iostream>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter(){
 int c;
 cout<<"how many students do you want to enter : ";
 cin>> c;

 if(total==0){

 total=total+c;

 for(int i = 0; i<c; i++){
    cout<<"\nEnter data of student -  "<<i+1<<endl<<endl;
    cout<<"Enter name : ";
    cin>> arr1[i];
    cout<<"Enter roll no : ";
    cin>> arr2[i];
    cout<<"Enter address : ";
    cin>> arr3[i];
    cout<<"Enter class : ";
    cin>>arr4[i];
    cout<<"Enter contact : ";
    cin>>arr5[i];
     }
 }

 else{
    for(int i = total; i<total+c; i++){
    cout<<"\nEnter data of student -  "<<i+1<<endl<<endl;
    cout<<"Enter name : ";
    cin>> arr1[i];
    cout<<"Enter roll no : ";
    cin>> arr2[i];
    cout<<"Enter address : ";
    cin>> arr3[i];
    cout<<"Enter class : ";
    cin>>arr4[i];
    cout<<"Enter contact : ";
    cin>>arr5[i];
     }
     total=total+c;
     }

     cout<<endl<<"--------Enter is sucses--------!"<<endl;
}



void show(){
    if(total==0){
        cout<<"----no data enterd---------"<<endl;
    }
    else{
for(int i = 0; i<total; i++){
    cout<<endl<<"Date of student : "<<i+1<<endl<<endl;
    cout<<"Name: "<<arr1[i]<<endl;
    cout<<"Rollno: "<<arr2[i]<<endl;
    cout<<"Address: "<<arr3[i]<<endl;
    cout<<"Class: "<<arr4[i]<<endl;
    cout<<"Contact"<<arr5[i]<<endl;
     }
}
}
 

void search(){
    string rollno;
    cout<<"Enter roll No. - ";
    cin>> rollno;

    for(int i=0;i<total;i++){
        if(rollno==arr2[i]){

     cout<<"Date of student : "<<i+1<<endl<<endl;
    cout<<"Name: "<<arr1[i]<<endl;
    cout<<"Rollno: "<<arr2[i]<<endl;
    cout<<"address: "<<arr3[i]<<endl;
    cout<<"Class: "<<arr4[i]<<endl;
    cout<<"Contact"<<arr5[i]<<endl;
        }
    }


}

void update(){
 string rollno;
    cout<<"Enter roll No. - ";
    cin>> rollno;

    for(int i=0;i<total;i++){
        if(rollno==arr2[i]){
    cout<<endl<<"------previous Data ------   "<<endl<<endl;
    cout<<"Date of student : "<<i+1<<endl<<endl;
    cout<<"Name: "<<arr1[i]<<endl;
    cout<<"Rollno: "<<arr2[i]<<endl;
    cout<<"address: "<<arr3[i]<<endl;
    cout<<"Class: "<<arr4[i]<<endl;
    cout<<"Contact"<<arr5[i]<<endl;
    cout<<"\n---------Enter new data----"<<endl;
    cout<<"Enter name : ";
    cin>> arr1[i];
    cout<<"Enter roll no : ";
    cin>> arr2[i];
    cout<<"enter address :";
    cin>>arr3[i];
    cout<<"Enter class : ";
    cin>>arr4[i];
    cout<<"Enter contact : ";
    cin>>arr5[i];
        }
}
}

void   deleterecord(){
  int a;
  cout<<"prees 1 to delet full record"<<endl;
   cout<<"prees 2 to delet specific record"<<endl;
   cin>> a;

   if(a==1){
    total = 0;
    cout<<"Full record deleted"<<endl;
   }

   else{
    string rollno;
    cout<<"Enter roll no: ";
    cin>> rollno;
    for(int i = 0; i<total; i++)
    {
        if(rollno==arr2[i]){
            for(int j = i; j<total; j++){
                arr1[j]=arr1[j+1];
                arr2[j]=arr2[j+1];
                arr3[j]=arr3[j+1];
                arr4[j]=arr4[j+1];
                arr5[j]=arr5[j+1];
            }
        total--;
        cout<<"your specific record deleted!!"<<endl;
        }
    }
   }

}




int main(){
    cout<<"-----------Student manegment-----------"<<endl<<endl;
    int value;
    while(true){
        cout<< "press 1 to Enter Data"<<endl;
        cout<< "press 2 to Show Data"<<endl;
        cout<< "press 3 to search Data"<<endl;
        cout<< "press 4 to update Data"<<endl;
        cout<< "press 5 to Delete Data"<<endl;
        cout<< "press 6 to Exit"<<endl;
        cin>>value;

        switch(value){

        case 1:
        enter();
        break;

        case 2:
        show();
        break;

        case 3:
        search();
        break;

        case 4:
        update();
        break;

        case 5:
        deleterecord();
        break;

        case 6:
        exit(0);
        break;

        default:
        cout<<"Invalid number";





        }
    }
}

    