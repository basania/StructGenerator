#pragma once
/*typedef struct ob
{
	char *pID;
	unsigned long int Code;
	char *pTime; // formatted by string "%02d:%02d:%02d"
				 // for example, the result may be "15:52:30"
	struct ob *pNext;
} Object;


typedef struct head
{
	Object *pObject; // Pointer to the linked list of objects.
	char cBegin; // The linked list contains objects in which
				 // the first letter of object ID is cBegin.
	struct head *pNext;
} Header;
Header *StructGenerator(int nObject); // nObject is the number of objects
*/

class Object {
public:
	char *pID;
	unsigned long int Code;
	char *pTime;
	Object *pNext;
};

class Header {
public:
	Header *pObject;
	char cBegin;
	Header *pNext;
};