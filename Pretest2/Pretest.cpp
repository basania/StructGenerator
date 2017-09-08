#include "Pretest.h"
#include "stdio.h"
#include <iostream>

#pragma warning (disable : 4996)
int main()
{
	Header *pList = StructGenerator(25);
	printf("Hello\n");
	
	while (pList) {
		pList->pObject->pID;
		std::cout << pList->pObject->pID << " " << pList->pObject->pTime << std::endl;
		pList = pList->pNext;
	}

	return 0;
}