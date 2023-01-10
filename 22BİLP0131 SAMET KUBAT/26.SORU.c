#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
  char name[50];
  int age;
} Student;

int compare(const void* a, const void* b) {
  Student* sa = (Student*) a;
  Student* sb = (Student*) b;
  if (sa->age < sb->age) return -1;
  if (sa->age > sb->age) return 1;
  return 0;
}

int main(void) {
  Student students[MAX_STUDENTS];
  int num_students;

  printf("Kac tane ogrenci var? ");
  scanf("%d", &num_students);

  for (int i = 0; i < num_students; i++) {
    printf("Öðrencinin adi: ");
    scanf("%s", students[i].name);
    printf("Öðrencinin yaþý: ");
    scanf("%d", &students[i].age);
  }

  qsort(students, num_students, sizeof(Student), compare);

  for (int i = 0; i < num_students; i++) {
    printf("%s, %d\n", students[i].name, students[i].age);
  }

  return 0;
}

//Bu yapý içinde öðrencinin adýný saklayan name dizisi, öðrencinin yaþýný saklayan age deðiþkeni bulunmaktadýr.//

