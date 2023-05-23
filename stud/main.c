#include <stdio.h>
#include<stdlib.h>

FILE *fp;
FILE *t;

struct student{
    char name[5];
    int id;
};

struct student s;

int main()
{

    printf("File opened\n");
    while(1){
        int choice;
        printf("1.add details\n2.display\n3.updateinfo\n4.deletestudent\n5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){

        case 1: addstudent();
            break;


        case 2:
            display();
            break;

        case 3:
            updateinfo();
               break;

        case 4:
            deletestudent();
              break;


        case 5:exit(1);
                break;
        }
    }
    return 0;
}


void addstudent(){

    fp = fopen("C:/Users/Charan/Desktop/student.txt","a+");

    int count=0;

    if(fp == NULL){
        puts("Cannot open file");
        exit(1);
    }

    while(fscanf(fp, "%d %s ",&s.id,s.name)!=EOF){
        count++;
    }

    printf("Number of Student Record: %d\n",count+1);

    if(count<=100){
        s.id= count+10;//add to id


        printf("Enter student name:\n");
        scanf("%s",s.name);
        fprintf(fp,"%d %s\n",s.id,s.name);//file write

    }
    fclose(fp);
}







//    int count=0;


//    while(fscanf(s,79,fp)!=NULL){
//        count++;
//    }
// s->id =count+1000;

//rewind(fp);

//    if(fp == NULL){
//        puts("Cannot open file");
//        exit(1);
//    }



//    while(fscanf(fp,"%s %d",&s->id,&s->name)!=EOF){
//        count++;
//    }


// fflush(stdin);
//    printf("Enter student name:\n");
//    gets(s->name);
//    fprintf(fp,"%d\t",s->id);
//    fputs(s->name, fp);
//    fprintf(fp,"\n");

//    fflush(stdin);
//}
//fclose(fp);



void display(){

    fp = fopen("C:/Users/Charan/Desktop/student.txt","r");

    printf("id\t name\n");
     while(fscanf(fp,"%d %s",&s.id,s.name)!=EOF){
        printf("%d %s\n",s.id,s.name);
     }

    fclose(fp);
}



//    rewind(fp);

//    if(fp == NULL){
//        puts("Cannot open file");
//        exit(1);
//    }

//    printf("Id\tName\n");

//    while(fgets(s,79,fp)!=NULL){
//        puts(s);
//    }


void updateinfo(){

    fp = fopen("C:/Users/Charan/Desktop/student.txt", "r+");
    t = fopen("C:/Users/Charan/Desktop/student1.txt", "w+");

    int id;
    printf("Enter the ID  to delete:\n");
    scanf("%d", &id);


    while (fscanf(fp,"%d %s",&s.id,s.name)!=EOF) {
        if (s.id == id) {
            printf("Enter the new name:\n");
            scanf("%s",s.name);
   //printf("%s",s.name);
        }
        fprintf(t,"%d %s\n",s.id,s.name);
    }

    rewind(fp);
    rewind(t);



//    fclose(fp);
//    fclose(tfp);
//    fp = fopen("C:/Users/Charan/Desktop/student.txt", "r+");
//    tfp = fopen("C:/Users/Charan/Desktop/student1.txt", "w+");

//    while (fscanf(tfp,"%d %s",&s.id,s.name)!=EOF) {

//        fprintf(fp,"%d %s",s.id,s.name);
//    }

    fclose(fp);
    fclose(t);
    remove("C:/Users/Charan/Desktop/student.txt");
    rename("C:/Users/Charan/Desktop/student1.txt","C:/Users/Charan/Desktop/student.txt");
    printf("updated\n");
}

void deletestudent(){

    fp = fopen("C:/Users/Charan/Desktop/student.txt", "r+");
    t = fopen("C:/Users/Charan/Desktop/student1.txt", "w+");

    int id/*count = 0*/;
    printf("Enter the ID  to delete:\n");
    scanf("%d", &id);


    while (fscanf(fp,"%d %s",&s.id,s.name)!=EOF) {//line by line read
        if(s.id!= id){
            fprintf(t,"%d\t%s\n",s.id,s.name);
        }
    }

    fclose(fp);
    fclose(t);




//while(fscanf(fp,"%d %s",&s.id,s.name)!=EOF) {
//          fprintf(tfp,"%d %s\n",s.id,s.name);
//       }



    remove("C:/Users/Charan/Desktop/student.txt");
    rename("C:/Users/Charan/Desktop/student1.txt","C:/Users/Charan/Desktop/student.txt");
    printf("deleted \n");
}




