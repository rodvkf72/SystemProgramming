#include <search.h>
#include <stdio.h>
#include <string.h>
struct student{
    char *name; // 이름
    int middleScore; // 중간고사 점수
    int finalScore; // 기말고사 점수
};
int compare (const void *cp1 , const void *cp2 )
{
    return strcmp (((struct student *)cp1)->name , ((struct student *)cp2)->name );
}
void printStudent (const void *nodeptr , VISIT order , int level )
{
    if (order == preorder || order == leaf)
        printf ("이름 = %-5s, 중간고사 점수 = %d점, 기말고사 점수 = %d점 \n ",
            (*(struct student **)nodeptr)->name ,
            (*(struct student **)nodeptr)->middleScore ,
            (*(struct student **)nodeptr)->finalScore );
}
int main (void )
{
    int num;
    int i;

    printf ("학생 수를 입력하세요 : ");
    scanf ("%d", &num);
    char nametable [num *20 ]; /* 이름을 저장할 테이블 */
    struct student nodetable [num]; /* 저장할 노드 테이블 */
    struct student *root = NULL ; /* 루트 노드 */
    char *nameptr = nametable;
    struct student *nodeptr = nodetable;
    struct student **ret;

    while (i ++ < num) {
        printf ("학생의 이름, 중간고사 점수, 기말고사 점수를 입력하세요 : ");
        scanf ("%s %d %d", nameptr, &nodeptr ->middleScore ,
        &nodeptr ->finalScore ) != EOF;
        nodeptr ->name = nameptr;
        /* 트리에 넣기 */
        ret = (struct node **) tsearch ((void *) nodeptr,(void **) &root, compare);
        printf ("\"%s \" 님이 ", (*ret)->name );
        if (*ret == nodeptr)
        printf ("트리에 추가되었습니다.\n ");
        else
        printf ("트리에 이미 존재합니다.\n ");
        nameptr += strlen (nameptr) + 1 ;
        nodeptr ++;
        }
        twalk ((void *) root, printStudent);
    return 0 ;
}
