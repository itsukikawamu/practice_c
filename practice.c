#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    typedef struct {
    char name[51];
    char age[4];
    }member;

    member *members=NULL;
    int count = 1;
    // メモリの確保
    members = malloc(sizeof(member) * count);
    if (members == NULL) {
        printf("メモリの確保に失敗しました\n");
        return 1;  // エラー終了
    }
    strcpy(members[0].name, "NAME");
    strcpy(members[0].age, "AGE");

    char buffer[100];
    int addnum;
    char *endptr;
    printf("何人？: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    addnum  = strtol(buffer, &endptr ,10);
    if (*endptr != '\0') {
    printf("無効な文字が含まれています。\n");
    return 1;
}

    for(int i=0; i<addnum; i++){
        count++;
        member *tmp = realloc(members, sizeof(member) * count);
        if (tmp == NULL) {
            printf("メモリの再確保に失敗しました\n");
            free(members);  // 元のメモリを解放して終了
            return 1;}
        members = tmp; 

        printf("名前を入力してください: ");
        fgets(members[count-1].name, sizeof(members[count-1].name), stdin);
        members[count-1].name[strcspn(members[count-1].name, "\n")] = '\0'; 

        printf("年齢を入力してください: ");
        fgets(members[count-1].age, sizeof(members[count-1].age), stdin);
        members[count-1].age[strcspn(members[count-1].age, "\n")] = '\0'; 
    }

    // データを表示
    for (int j = 0; j < count; j++) {
        printf("%-20s %-4s\n", members[j].name, members[j].age);
    }
    // メモリの解放
    free(members);

    return 0;
}