/* �������� ���������, ������� ��������� �� ������������ ������ �
������� �� �� �����, ��������� ����� � ��������� �������.*/

#include <stdio.h>
#include "task1.h"


int main()
{
	char in[256] = { 0 };
	char out[256] = { 0 };
	fgets(in, 256, stdin);
	randomWords(in, out);
	return 0;
}