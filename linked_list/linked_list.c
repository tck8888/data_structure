//
// Created by tck on 2020/8/14.
//
//https://blog.csdn.net/Rank_d/article/details/79692422?utm_medium=distribute.pc_relevant_right.none-task-blog-BlogCommendFromMachineLearnPai2-8.channel_param_right&depth_1-utm_source=distribute.pc_relevant_right.none-task-blog-BlogCommendFromMachineLearnPai2-8.channel_param_right

#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}Node, *pNode;

//初始化一个链表结点
pNode init_node(Node *pnode, int data);
//创建链表函数
pNode create_list();
//遍历链表
void traverse_list(pNode pHead);
//头插法建立链表，每次在表头插入
pNode createlink_byhead(Node *phead, Node node, int data);
//尾插法建立链表
pNode createlink_bytail(Node *phead, Node node, int data);
//求链表长度
int linklen(Node *phead);
//按值查找操作
pNode searchnode(Node *phead, int key);
//前插法
pNode insertnode_bypre(Node *phead, Node node, int data, int key);
//后插法
pNode insertnode_byback(Node *phead, Node node, int data, int key);
//删除结点
pNode deletenode(Node *phead, int key);
//链表倒置
pNode reverselink(Node *phead);
//链表排序（冒泡排序）
pNode linksort(Node *phead);


pNode init_node(Node *pnode, int data){
    pnode=(Node*)malloc(sizeof(Node));
    pnode->data=data;
    pnode->next=NULL;
    return pnode;
}

pNode create_list(){
    int i;
    int len=0;
    int val=0;
    pNode pHead=(pNode)malloc(sizeof(Node));
    pNode pTail=pHead;
    pTail->next=NULL;
    printf("input node count");
    scanf("%d",&len);
    for ( i = 0; i < len; ++i) {
        printf("index:%d value",i+1);
        scanf("%d",&val);
        pNode pNew = (pNode)malloc(sizeof(Node));
        pNew->data=val;
        pTail->next=pNew;
        pNew->next=NULL;
        pTail=pNew;
    }

    return pHead;

}
void traverse_list(pNode pHead){
    pNode p=pHead->next;
    while (NULL!=p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    pNode p = create_list();
    traverse_list(p);

    return 0;
}