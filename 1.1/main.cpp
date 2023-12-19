/*
本次更新:
查看ip
打开小游戏
种植大树
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
string str;
int tree;//大树高度
int cnt,flag;
void yf(int a,int b){
	for(int i=2;i<=min(a,b);i++){
		if(a%i==0&&b%i==0){//最小公倍数
			a/=i;
			b/=i;
		}
	}
	if(a==b){
		cout<<1<<endl;
	}
	else{
		cout<<a<<"分之"<<b<<endl;
	}
	return;
}
void game(){
	system("cls");
	cout<<"zhizi_AI:欢迎来玩游戏"<<endl;
	sleep(1);
	system("cls");
	int n,w;
	int r;
	while(true){
		cout<<"要玩什么"<<endl<<"1.猜数游戏"<<endl<<"2.石头剪刀布"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"生成了1~100的随机数"<<endl;
			sleep(1);
			cout<<"来猜吧"<<endl;
			r=rand()%100+1;
			while(w!=r){
				cin>>w;
				if(w>r){
					cout<<"大了"<<endl;
				}
				if(w<r){
					cout<<"小了"<<endl;
				}
			}
			cout<<"恭喜你，猜对了!"<<endl;
		}
		else if(n==2){
			cout<<"要出什么"<<endl<<"1.石头"<<endl<<"2.剪刀"<<endl<<"3.布"<<endl;
			cin>>w;
			r=rand()%3+1;
			if(r==1){
				cout<<"平局"<<endl;
			}
			else if(r==2){
				cout<<"你赢了"<<endl;
			}
			else{
				cout<<"电脑赢了"<<endl;
			}
		}
		else{
			system("cls");
			getchar();
			return;
		}
	}
}
void td(string x){
	if(x.find("傻逼")<x.length()||x.find("2b")<x.length()||x.find("250")<x.length()){
		cnt++;
		if(cnt<=3){
			cout<<"请不要这样"<<endl;
		}
		else if(cnt==4){
			cout<<"再起这样将启动自卫"<<endl;
		}
		else{//忍无可忍,无需再忍
			while(true){
				system("start cmd");//打开cmd
			}
		}
	}
	else if(x=="/help"){
		cout<<endl;
		cout<<"1./time 计时"<<endl;
		cout<<"2.r 随机数"<<endl;
		cout<<"3./roll 生成a~b的随机数"<<endl;
		cout<<"4./zhizi 打开我自己的个人主页"<<endl;
		cout<<"5./number 计算"<<endl;
		cout<<"6./mark 分数计算"<<endl;
		cout<<"7./sentence 生成一句英文"<<endl;
		cout<<"8./ip 查看自己的ip"<<endl;
		cout<<"9./game 打开小游戏"<<endl;
		cout<<"10.tree 种树"<<endl;
		cout<<"还有一个彩蛋等你发现(提示:输入uwu)"<<endl;
	}
	else if(x=="/ip"){
		system("configip");
	}
	else if(x=="/game"){
		game();
	}
	else if(x.find("你好")<x.length()||x.find("hi")<x.length()){
		int r=rand()%2+1;
		if(r==1){
			cout<<"你好啊"<<endl;
		}
		else{
			cout<<"hi yooooo"<<endl;
		}
	}
	else if(x=="/time"){
		cout<<endl;
		int a,b,c;
		cout<<"小时:";
		cin>>a;
		cout<<"分钟:";
		cin>>b;
		cout<<"秒:";
		cin>>c;
		int s=a*3600+b*60+c;//计算总秒数
		int a1=0,b2=0,c3=0;
		while(s>a1*3600+b2*60+c3){//如果时间到那么结束
			sleep(1);
			system("cls");
			c3++;
			if(c3==60){
				b2++;
				c3=0;
			}
			if(b2==60){
				a1++;
				b2=0;
			}
			//单位换算
			cout<<a1<<":"<<b2<<":"<<c3<<endl;
		}
		cout<<"时间到awa"<<endl;
		getchar();
	}
	else if(x=="r"){
		cout<<rand()<<endl;//生成随机的随机数
	}
	else if(x=="/roll"){
		cout<<endl;
		int a,b;
		cin>>a>>b;
		if(a>b){
			cout<<"你要我生成什么随机数?"<<endl;//不可能生成
		}
		else{
			if(a==b){
				cout<<a;//如果一样只能是a
			}
			else{
				cout<<a+rand()%(b-a+1)<<endl;//随机数公式
			}
		}
		getchar();
	}
	else if(x=="/zhizi"){
		system("start http://zhiziqixingdeng.github.io");//打开我自己的个人主页
	}
	else if(x=="/sentence"){
		int r,ans=0;
		while(true){
			ans++;
			if(ans==1){
				r=rand()%4+1;
				if(r==1){
					cout<<"I am ";
				}
				else if(r==2){
					cout<<"They are ";
				}
				else if(r==3){
					cout<<"We are ";
				}
				else{
					cout<<"It is ";
				}
			}
			else{
				r=rand()%3+1;
				if(r==1){
					cout<<"drive car"<<endl;
				}
				else if(r==2){
					cout<<"eat rice"<<endl;
				}
				else{
					cout<<"play computer game"<<endl;
				}
				break;
			}
		}
	}
	else if(x=="uwu"||x=="awa"||x=="qaq"||x=="qwq"){
		int r=rand()%4+1;
		if(r==1){
			cout<<"uwu"<<endl;
		}
		else if(r==2){
			cout<<"awa"<<endl;
		}
		else if(r==3){
			cout<<"qaq"<<endl;
		}
		else{
			cout<<"qwq"<<endl;
		}
	}
	else if(x=="/number"){
		double a,b;
		char s;
		cout<<endl;
		cout<<"算式:";
		cin>>a>>s>>b;
		if(s=='+'){
			cout<<a+b<<endl;
		}
		else if(s=='-'){
			cout<<a-b<<endl;
		}
		else if(s=='*'){
			cout<<a*b<<endl;
		}
		else if(s=='/'&&b!=0.00){
			cout<<a/b;
		}
		else if(s=='/'&&b==0.00){
			cout<<"除数不能为0!"<<endl;
		}
		else{
			cout<<"错误"<<endl;
		}
		getchar();
	}
	else if(x.find("谢谢")<x.length()){
		cout<<"不用谢awa"<<endl;
	}
	else if(x=="/mark"){
		int a,b,c,d;
		char s;
		cout<<endl;
		cout<<"1分母:";
		cin>>a;
		cout<<"1分子:";
		cin>>b;
		cout<<"2分母:";
		cin>>c;
		cout<<"2分子:";
		cin>>d;
		cout<<"运算符:";
		cin>>s;
		int w1,w2;
		if(s=='+'){
			if(a==c){//如果分母分子相同
				w1=a;
				w2=b+d;
			}
			else{
				w1=a*c;
				w2=b*c+a*d;
			}
		}
		else if(s=='-'){
			if(a==c){
				w1=a;
				w2=b-d;
			}
			else{
				w1=a*c;
				w2=b*c-a*d;
			}
		}
		else if(s=='*'){
			w1=a*c;
			w2=b*d;//这些是公式
		}
		else if(s=='/'){
			w1=a*d;
			w2=b*c;//还是公式
		}
		else{
			cout<<"错误"<<endl;
		}
		yf(w1,w2);
		getchar();
	}
	else if(x=="/tree"){
		int a;//临时变量
		a=tree;
		tree+=rand()%5+1;
		cout<<"树长高了"<<tree-a<<"厘米,现在"<<tree<<"厘米"<<endl;
		freopen("tree.in","w",stdout);
		cout<<tree;
		freopen("CON","w",stdout);
	}
	else{
		if(flag==0){
			cout<<"我还不会呢awa"<<endl;
		  flag++;
		}
		else{
      cout<<"我不会qwq"<<endl;
		}
	}
	return;
}
void cdtree(){
  freopen("tree.in","r",stdin);
	cin>>tree;
	freopen("CON","r",stdin);
	return;
}
int main(){
	cdtree();
	srand(time(NULL));
	cout<<"zhizi_AI:你好啊,我是zhizi_AI,输入/help查看我的功能吧!"<<endl;
	while(true){
		getline(cin,str);
		cout<<"zhizi_AI:";
		td(str);
	}
	return 0;
}
