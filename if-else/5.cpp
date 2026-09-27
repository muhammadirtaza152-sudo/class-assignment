#include <iostream>
using namespace std;
int main()
{
  int matric_marks,intermidiadte_marks,Test_marks;  
  double Matric_percentage,Intermidiadte_percentage,Entery_Test_percentage,TotalMarks,Marks,Total_pecentage;
  cout<<"Enter your Matric marks"<<endl;
  cin>>matric_marks;
  cout<<"Enter your Intermidiate_marks"<<endl;
  cin>>intermidiadte_marks;
  cout<<"Enter your Test_Marks"<<endl;
  cin>>Test_marks;
Matric_percentage=(matric_marks/1200.0)*100;
Intermidiadte_percentage=(intermidiadte_marks/1200.0)*100;
Entery_Test_percentage=(Test_marks/100)*100;
Total_pecentage=(Matric_percentage*0.10)+(Intermidiadte_percentage*0.40)+(Entery_Test_percentage*0.50);
if (Total_pecentage >=60 && Total_pecentage<=100)
{
    cout<<"You are able to apply for university"<<endl;

}
if(Total_pecentage >=40 && Total_pecentage<=50)
{
     cout<<"You are not able to apply for university"<<endl;
}
else 
{
     cout<<"wrong input"<<endl;
}
return 0;
}
