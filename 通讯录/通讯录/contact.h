#define _CRT_SECURE_NO_WARNINGS 1


//声明函数

//1.存放1000个好友的信息
//名字 电话 性别 住址 年龄
//2.增加好友信息
//3.删除指定名字的好友信息
//4.查找好友信息
//5.修改好友消息
//6.打印好友信息
//7.排序

//#define MAX 1000

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
#include<stdlib.h>


enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录类型
typedef struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;//记录当前已经有的元素个数
	int capacity;//记录当前通讯录的最大容量
}Contact;

//声明函数
//初始化
void InitContact(struct Contact* ps);

//增加一个信息到通讯录
void AddContact(struct Contact* ps);

//打印通讯录
void ShowContact(struct Contact* ps);

//删除指定的联系人
void DelContact(struct Contact* ps);

//查找
void SearchContact(const struct Contact* ps);

//修改制定联系人
void ModifyContact(struct Contact* ps);

//排序通讯录内容
void SortContact(struct Contact* ps);

void DestroyContact(Contact* ps);