#include<stdio.h>

int main() {
  int m_subject1;
  int m_subject2;
  int m_subject3;
  int m_subject4;
  int m_subject5;
  int total_marks;
  double percentage;
  puts("Enter your marks: ");
  scanf("%d", &m_subject1);
  scanf("%d", &m_subject2);
  scanf("%d", &m_subject3);
  scanf("%d", &m_subject4);
  scanf("%d", &m_subject5);

  total_marks = m_subject1 + m_subject2 + m_subject3 + m_subject4 + m_subject5;
  percentage = total_marks / 5.0;

  printf("Total marks = %d\n", total_marks);
  printf("Percentage = %g\n", percentage);

  return 0;
}