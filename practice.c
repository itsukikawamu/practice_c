#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct member{
char name[51];
char age[5];
struct member *next;
}member;

void freeMember(member *head){
    member *tmp;
    while (head != NULL){
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

int main(void){

    char buffer[100];
    int addnum;
    char *endptr;
    printf("何人？: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    addnum  = strtol(buffer, &endptr, 10);
    if (*endptr != '\0') {
    printf("無効な文字が含まれています。\n");
    return 1;
    }

    member *head = NULL;
    member *n = NULL;
    for(int i = 0; i < addnum; i++){
        // メモリの確保
        n = malloc(sizeof(member));
        if (n == NULL) {
            printf("メモリの確保に失敗しました\n");
            freeMember(head);
            return 1;  // エラー終了
        }
        
        printf("名前を入力してください: ");
        fgets(n->name, sizeof(n->name), stdin);
        n->name[strcspn(n->name, "\n")] = '\0'; 

        printf("年齢を入力してください: ");
        fgets(n->age, sizeof(n->age), stdin);
        n->age[strcspn(n->age, "\n")] = '\0'; 
        n->next = head;
        head = n; 
    }

    // データを表示
    FILE *file = fopen("members.csv", "a+");
    if (file == NULL){
        printf("ファイルの作成に失敗しました。\n");
        freeMember(head);
        return 1;
    }
    fseek(file, 0, SEEK_END); // ファイルの最後に移動
    long file_size = ftell(file);
    if (file_size == 0) {
    fprintf(file, "NAME, AGE\n"); // 新しいファイルであればヘッダーを書き込む
    }
    
    // メンバーデータを書き込む
    for (member *tmp = head; tmp != NULL; tmp = tmp->next) {
        fprintf(file, "%s,%s\n", tmp->name, tmp->age);
    }
    // ファイルを閉じる
    fclose(file);
    printf("データがmembers.csvに保存されました\n");


    // メモリの解放
    freeMember(head);

    return 0;
}