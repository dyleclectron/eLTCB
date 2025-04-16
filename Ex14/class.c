#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    char full_name[30];
    int age;
    int mark;
};
int main()
{
    int n;scanf("%d",&n);
    struct student menber[n+2];
    for (int i=0;i<n;i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n",i+1);
        getchar();
        printf("Ho ten: ");
        scanf("%[^\n]",menber[i].full_name);
        printf("Tuoi: ");
        scanf("%d",&menber[i].age);
        printf("Diem TB: ");
        scanf("%d",&menber[i].mark);
    }
    printf("\nDanh sach sinh vien\n");
    printf("STT\tHo ten\t\tTuoi\tDiem TB\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%-20s\t%d\t%d\n",i+1,menber[i].full_name,menber[i].age,menber[i].mark);
    }    char name[30];
    printf("\nNhap ten sinh vien can chen truoc: ");
    getchar();
    scanf("%[^\n]",name);
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(strcmp(menber[i].full_name,name)==0)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Khong tim thay sinh vien\n");
        return 0;
    }
    n++;
    for(int i=n-1;i>pos;i--)
    {
        menber[i]=menber[i-1];
    }
    printf("\nNhap thong tin sinh vien can chen\n");
    printf("Ho ten: ");
    getchar();
    scanf("%[^\n]",menber[pos].full_name);
    printf("Tuoi: ");
    scanf("%d",&menber[pos].age);
    printf("Diem TB: ");
    scanf("%d",&menber[pos].mark);
    printf("\nDanh sach sinh vien sau khi chen\n");
    printf("STT\tHo ten\t\tTuoi\tDiem TB\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%-20s\t%d\t%d\n",i+1,menber[i].full_name,menber[i].age,menber[i].mark);
    }
    //xóa một sinh viên có tên trong danh sách
    char name_del[30];
    printf("\nNhap ten sinh vien can xoa: ");
    getchar();
    scanf("%[^\n]",name_del);
    int pos_del=-1;
    for(int i=0;i<n;i++)
    {
        if(strcmp(menber[i].full_name,name_del)==0)
        {
            pos_del=i;
            break;
        }
    }
    if(pos_del==-1)
    {
        printf("Khong tim thay sinh vien\n");
        return 0;
    }
    for(int i=pos_del;i<n-1;i++)
    {
        menber[i]=menber[i+1];
    }
    n--;
    printf("\nDanh sach sinh vien sau khi xoa\n");
    printf("STT\tHo ten\t\tTuoi\tDiem TB\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%-20s\t%d\t%d\n",i+1,menber[i].full_name,menber[i].age,menber[i].mark);
    }
    return 0;
}
