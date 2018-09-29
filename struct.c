#include <stdio.h>
#include <string.h>

struct User{
    int id;
    char name[10];
    int age;
};

struct User createUser(){
    struct User newUser;
    return newUser;
}
struct User updateUserAge(struct User user,int age){
    user.age = age;
    printf("update %s age : %d\n", user.name, user.age);
    return user;
}

void printLog(struct User user){
    printf("Id   : %d\n", user.id);
    printf("Name : %s\n", user.name);
    printf("Age  : %d\n", user.age);
    printf("\n");
}

int main(){
    struct User user = {1,{'a','l','a','n','\0'}};
    user.age = 31;
    printLog(user);

    int nameSize = strlen(user.name);
    printf("name.size : %d\n", nameSize);
    
    for(int i=0; i < nameSize; i++){
        printf("i[%d] = %c\n",i,user.name[i]);
    }

    struct User user2 = updateUserAge(user,32);
    printLog(user2);
    struct User user3 = createUser();
    printLog(user3);

    return 0;
}
