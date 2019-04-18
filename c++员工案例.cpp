#include <bits/stdc++.h>
using namespace std;
class Date{
public :
  Date(int year1=0,int manth1=0,day1=0){

  }
  void showDate();

private:
  int year,maonth,day;
}

void Date::setDate(int yaer1,int month1,int day1){
    year=year1;
    month=month1;
    day=day1;
}
void Date::showDate(){
  cout << "year=" << year << endl << "month=" << month << endl << "day=" << day << endl;
}
class emploe{
private:
  Date date;//入职时间
  string id;//编号
  string name;
  double a[3];

public:
  void init(){
    cout << "成功创建了一个员工档案哦" << endl;
  }
  emploe(string id, string name, double s1, double s2, double s3, int year, int month, int day) :
		date(year, month, day)
	{
    this->id = id;
		this->name = name;
		salarys[0] = s1;
		salarys[1] = s2;
		salarys[2] = s3;
	}
  void showe(){
    cout << "员工名字: " << name << endl;
    cout << "编号: " << id << endl;
    cout << "入职时间: " ;
    date.showDate();
    cout << "工资是： "<< a[0]+a[1]+a[2] << endl;
  }

}

int main(){
  Date(2019,4,18);
  Date.showDate();

  return  0;
}
