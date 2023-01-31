#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book
{
	int id;
	char title[10];
	char author[10];

	struct Book *next;
};

struct Book *availableBooks = NULL;
struct Book *issuedBooks = NULL;

void insertAtEnd()
{
	struct Book *new_book = (struct Book *)malloc(sizeof(struct Book));

	printf("Enter the book ID: ");
	scanf("%d", &new_book->id);

	if (availableBooks == NULL)
	{
		printf("Enter the book title: ");
		scanf("%s", new_book->title);

		printf("Enter the author name: ");
		scanf("%s", new_book->author);

		availableBooks = new_book;
		availableBooks->next = NULL;

		printf("\nEntry successful");
	}

	else if (availableBooks->next == NULL)
	{
		if (availableBooks->id == new_book->id)
		{
			printf("%d ID already exists", new_book->id);
		}

		printf("Enter the book title: ");
		scanf("%s", new_book->title);

		printf("Enter the author name: ");
		scanf("%s", new_book->author);

		availableBooks->next = new_book;
		new_book->next = NULL;

		printf("\nEntry successful");
	}

	else
	{
		while (availableBooks->next != NULL)
		{
			if (availableBooks->id == new_book->id)
			{
				printf("%d ID already exists", new_book->id);
			}
		}

		printf("Enter the book title: ");
		scanf("%s", new_book->title);

		printf("Enter the author name: ");
		scanf("%s", new_book->author);

		availableBooks->next = new_book;
		new_book->next = NULL;

		printf("\nEntry successful");
	}
}

void printBookList()
{
	int choice;
	struct Book *iterator1 = availableBooks;
	struct Book *iterator2 = issuedBooks;

	printf("\n\t*** M E N U ***\n"
		   "1 - Available Book\n"
		   "2 - Issued Books\n"
		   "0 - Exit\n"
		   "\n>> ");

	scanf(" %d", &choice);

	switch (choice)
	{
	case 0:
		break;
		break;

	case 1:
		while (iterator1 != NULL)
		{
			printf("\n%s : %s : %d", iterator1->title, iterator1->author, iterator1->id);

			iterator1 = iterator1->next;
		}
		break;

	case 2:
		while (iterator2 != NULL)
		{
			printf("%s : %s : %d\n", iterator2->title, iterator2->author, iterator2->id);

			iterator2 = iterator2->next;
		}
		break;

	default:
		printf("\nWrong choice");
	}
}

void searchBook()
{
	int choice;
	char title[10], author[10];

	printf("\n\t*** M E N U ***\n"
		   "1 - Search by Book Title\n"
		   "2 - Search by Book Author\n"
		   "0 - Exit\n"
		   "\n>> ");

	scanf(" %d", &choice);

	switch (choice)
	{
	case 0:
		exit(0);
		break;

	case 1:
		printf("Enter Book Title:");
		scanf("%s", title);

		if (availableBooks == NULL)
		{
			printf("\nBook shelf is empty");
		}

		else if (availableBooks->next == NULL)
		{
			if (strcmp(availableBooks->title, title) == 0)
			{
				printf("\n%s book available", title);
				break;
			}

			else
			{
				printf("\n%s book not available", title);
				break;
			}
		}

		else
		{
			while (availableBooks->next != NULL)
			{
				if (strcmp(availableBooks->title, title) == 0)
				{
					printf("\n%s book available", title);
					break;
				}

				else
				{
					printf("\n%s book not available", title);
					break;
				}
			}
		}
		break;

	case 2:
		printf("Enter Book Author name:");
		scanf("%s", author);

		if (availableBooks == NULL)
		{
			printf("\nBook shelf empty");
		}

		else if (availableBooks->next == NULL)
		{
			if (strcmp(availableBooks->author, author) == 0)
			{
				printf("\n%s book available of %s", availableBooks->title, author);
			}

			else
			{
				printf("\nNo book found of Author %s", author);
				break;
			}
		}

		else
		{
			while (availableBooks != NULL)
			{
				if (strcmp(availableBooks->author, author) == 0)
				{
					printf("\n%s book available of %s", availableBooks->title, author);
					availableBooks = availableBooks->next;
				}
			}
			// printf("\n%s book available of %s", availableBooks->title, author);
		}
		break;

	default:
		printf("\nWrong choice");
	}
}

void deleteBook(int bookID, char title[10], char author[10])
{
	struct Book *availableTemp = availableBooks;
	struct Book *issuedTemp = issuedBooks;
	struct Book *iterator, *headPointer;

	struct Book *book = (struct Book *)malloc(sizeof(struct Book));

	book->id = bookID;
	strcpy(book->title, title);
	strcpy(book->author, author);

	if (issuedTemp == NULL)
	{
		issuedTemp = book;
	}

	else
	{
		while (issuedTemp->next != NULL)
		{
			issuedTemp = issuedTemp->next;
		}

		issuedTemp = book;
		issuedTemp->next = NULL;
	}

	if (availableTemp == NULL)
	{
		printf("\nBook self is empty");
	}

	// delete only node
	else if (availableTemp->next == NULL)
	{
		availableTemp = NULL;
		free(availableTemp);
		printf("\nBook issued successfully. Book self is empty now");
	}

	else
	{
		headPointer = availableTemp;

		if (headPointer == availableTemp)
		{
			// delete at beginning
			iterator = availableTemp;

			availableTemp = iterator->next;

			free(iterator);

			printf("\nBook issued successfully");

			headPointer = availableTemp;
		}

		else if (headPointer->next == NULL)
		{
			headPointer = availableTemp;
		}

		else if (headPointer->next != NULL)
		{
			// delete at end
			while (availableTemp->next != NULL)
			{
				iterator = availableTemp;
				availableTemp = availableTemp->next;
			}

			iterator->next = NULL;

			free(availableTemp);
		}
	}
}

void bookIssue()
{
	int bookId;
	char title[10];
	struct Book *temp1 = availableBooks;
	struct Book *temp2 = availableBooks;

	printf("Enter Book Title:");
	scanf("%s", title);

	if (temp1 == NULL)
	{
		printf("\nBook shelf is empty");
	}

	else if (temp1->next == NULL)
	{
		if (strcmp(temp1->title, title) == 0)
		{
			printf("\n%s book available, id=%d", temp1->title, temp1->id);
		}

		else
		{
			printf("\n%s book not found", title);
			exit(0);
		}
	}

	else
	{
		while (temp1 != NULL)
		{
			if (strcmp(temp1->title, title) == 0)
			{
				printf("\n%s book available, id=%d", temp1->title, temp1->id);

				temp1 = temp1->next;
			}
		}
	}

	printf("\nEnter the book ID: ");
	scanf("%d", &bookId);

	if (temp2->next == NULL)
	{
		if (temp2->id == bookId)
		{
			deleteBook(temp2->id, temp2->title, temp2->author);
			// exit(0);
		}

		else
		{
			printf("%d ID not found", bookId);
			exit(0);
		}
	}

	else
	{
		while (temp2->next != NULL)
		{
			if (temp2->id == bookId)
			{
				deleteBook(temp2->id, temp2->title, temp2->author);
				// exit(0);
			}

			else
			{
				printf("%d ID not found", bookId);
				break;
				// exit(0);
			}
		}
	}
}

int Menu()
{
	int choice;

	printf("\n\t*** M E N U ***\n"
		   "1 - Add Book in Library system\n"
		   "2 - Print\n"
		   "3 - Search Book\n"
		   "4 - Issue Book\n"
		   "0 - Exit\n"
		   "\n>> ");

	scanf(" %d", &choice);

	return choice;
}

void main()
{
	int choice;

	while (1)
	{
		choice = Menu();

		switch (choice)
		{
		case 0:
			exit(0);
			break;

		case 1:
			insertAtEnd();
			break;

		case 2:
			printBookList();
			break;

		case 3:
			searchBook();
			break;

		case 4:
			bookIssue();
			break;

		default:
			printf("\nWrong choice");
		}
	}
}
