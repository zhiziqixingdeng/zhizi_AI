/*
���θ���:
�鿴ip
��С��Ϸ
��ֲ����
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
string str;
int tree;//�����߶�
int cnt,flag;
void yf(int a,int b){
	for(int i=2;i<=min(a,b);i++){
		if(a%i==0&&b%i==0){//��С������
			a/=i;
			b/=i;
		}
	}
	if(a==b){
		cout<<1<<endl;
	}
	else{
		cout<<a<<"��֮"<<b<<endl;
	}
	return;
}
void game(){
	system("cls");
	cout<<"zhizi_AI:��ӭ������Ϸ"<<endl;
	sleep(1);
	system("cls");
	int n,w;
	int r;
	while(true){
		cout<<"Ҫ��ʲô"<<endl<<"1.������Ϸ"<<endl<<"2.ʯͷ������"<<endl<<"3.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"������1~100�������"<<endl;
			sleep(1);
			cout<<"���°�"<<endl;
			r=rand()%100+1;
			while(w!=r){
				cin>>w;
				if(w>r){
					cout<<"����"<<endl;
				}
				if(w<r){
					cout<<"С��"<<endl;
				}
			}
			cout<<"��ϲ�㣬�¶���!"<<endl;
		}
		else if(n==2){
			cout<<"Ҫ��ʲô"<<endl<<"1.ʯͷ"<<endl<<"2.����"<<endl<<"3.��"<<endl;
			cin>>w;
			r=rand()%3+1;
			if(r==1){
				cout<<"ƽ��"<<endl;
			}
			else if(r==2){
				cout<<"��Ӯ��"<<endl;
			}
			else{
				cout<<"����Ӯ��"<<endl;
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
	if(x.find("ɵ��")<x.length()||x.find("2b")<x.length()||x.find("250")<x.length()){
		cnt++;
		if(cnt<=3){
			cout<<"�벻Ҫ����"<<endl;
		}
		else if(cnt==4){
			cout<<"������������������"<<endl;
		}
		else{//���޿���,��������
			while(true){
				system("start cmd");//��cmd
			}
		}
	}
	else if(x=="/help"){
		cout<<endl;
		cout<<"1./time ��ʱ"<<endl;
		cout<<"2.r �����"<<endl;
		cout<<"3./roll ����a~b�������"<<endl;
		cout<<"4./zhizi �����Լ��ĸ�����ҳ"<<endl;
		cout<<"5./number ����"<<endl;
		cout<<"6./mark ��������"<<endl;
		cout<<"7./sentence ����һ��Ӣ��"<<endl;
		cout<<"8./ip �鿴�Լ���ip"<<endl;
		cout<<"9./game ��С��Ϸ"<<endl;
		cout<<"10.tree ����"<<endl;
		cout<<"����һ���ʵ����㷢��(��ʾ:����uwu)"<<endl;
	}
	else if(x=="/ip"){
		system("configip");
	}
	else if(x=="/game"){
		game();
	}
	else if(x.find("���")<x.length()||x.find("hi")<x.length()){
		int r=rand()%2+1;
		if(r==1){
			cout<<"��ð�"<<endl;
		}
		else{
			cout<<"hi yooooo"<<endl;
		}
	}
	else if(x=="/time"){
		cout<<endl;
		int a,b,c;
		cout<<"Сʱ:";
		cin>>a;
		cout<<"����:";
		cin>>b;
		cout<<"��:";
		cin>>c;
		int s=a*3600+b*60+c;//����������
		int a1=0,b2=0,c3=0;
		while(s>a1*3600+b2*60+c3){//���ʱ�䵽��ô����
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
			//��λ����
			cout<<a1<<":"<<b2<<":"<<c3<<endl;
		}
		cout<<"ʱ�䵽awa"<<endl;
		getchar();
	}
	else if(x=="r"){
		cout<<rand()<<endl;//��������������
	}
	else if(x=="/roll"){
		cout<<endl;
		int a,b;
		cin>>a>>b;
		if(a>b){
			cout<<"��Ҫ������ʲô�����?"<<endl;//����������
		}
		else{
			if(a==b){
				cout<<a;//���һ��ֻ����a
			}
			else{
				cout<<a+rand()%(b-a+1)<<endl;//�������ʽ
			}
		}
		getchar();
	}
	else if(x=="/zhizi"){
		system("start http://zhiziqixingdeng.github.io");//�����Լ��ĸ�����ҳ
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
		cout<<"��ʽ:";
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
			cout<<"��������Ϊ0!"<<endl;
		}
		else{
			cout<<"����"<<endl;
		}
		getchar();
	}
	else if(x.find("лл")<x.length()){
		cout<<"����лawa"<<endl;
	}
	else if(x=="/mark"){
		int a,b,c,d;
		char s;
		cout<<endl;
		cout<<"1��ĸ:";
		cin>>a;
		cout<<"1����:";
		cin>>b;
		cout<<"2��ĸ:";
		cin>>c;
		cout<<"2����:";
		cin>>d;
		cout<<"�����:";
		cin>>s;
		int w1,w2;
		if(s=='+'){
			if(a==c){//�����ĸ������ͬ
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
			w2=b*d;//��Щ�ǹ�ʽ
		}
		else if(s=='/'){
			w1=a*d;
			w2=b*c;//���ǹ�ʽ
		}
		else{
			cout<<"����"<<endl;
		}
		yf(w1,w2);
		getchar();
	}
	else if(x=="/tree"){
		int a;//��ʱ����
		a=tree;
		tree+=rand()%5+1;
		cout<<"��������"<<tree-a<<"����,����"<<tree<<"����"<<endl;
		freopen("tree.in","w",stdout);
		cout<<tree;
		freopen("CON","w",stdout);
	}
	else{
		if(flag==0){
			cout<<"�һ�������awa"<<endl;
		  flag++;
		}
		else{
      cout<<"�Ҳ���qwq"<<endl;
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
	cout<<"zhizi_AI:��ð�,����zhizi_AI,����/help�鿴�ҵĹ��ܰ�!"<<endl;
	while(true){
		getline(cin,str);
		cout<<"zhizi_AI:";
		td(str);
	}
	return 0;
}
