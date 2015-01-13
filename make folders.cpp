#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<direct.h>
#include<string>

void makefolders(std::string, int);
void makeDir(std::string, int,std::string);

int number_of_directories;

int main()
{
	char path[51];
	int height;
	printf("Please enter the path where you want the directories to be created:\n");
	gets_s(path, 50);

	printf("\nEnter the levels you wanna reach: \n");
	scanf_s("%d", &height);
	makefolders(path, height);
	printf("\n\n\nSuccessfully created %d Directories!! Enjoy!!!", number_of_directories);
	printf("\n\nFor more details contact Arlene Batada :)\n\n");
	_getch();
	return 0;
}

void makefolders(std::string path, int height)
{
	if (height==0)
		return;

	makeDir(path, height, "a");
	makeDir(path, height, "b");
	makeDir(path, height, "c");
	makeDir(path, height, "d");
	makeDir(path, height, "e");
	makeDir(path, height, "f");
	makeDir(path, height, "g");
	makeDir(path, height, "h");
	makeDir(path, height, "i");
	makeDir(path, height, "j");
	makeDir(path, height, "k");
	makeDir(path, height, "l");
	makeDir(path, height, "m");
	makeDir(path, height, "n");
	makeDir(path, height, "o");
	makeDir(path, height, "p");
	makeDir(path, height, "q");
	makeDir(path, height, "r");
	makeDir(path, height, "s");
	makeDir(path, height, "t");
	makeDir(path, height, "u");
	makeDir(path, height, "v");
	makeDir(path, height, "w");
	makeDir(path, height, "x");
	makeDir(path, height, "y");
	makeDir(path, height, "z");
	return;
}

void makeDir(std::string path, int height, std::string letter)
{
	path=path+"/"+letter;
	if(_mkdir(path.c_str())==0)
	{
		printf("\nDirectory successfully created at %s", path.c_str());
		number_of_directories++;
	}
	else
	{
		printf("\nSorry! There was a problem in creating directory at %s", path.c_str());
	}

	
	height-=1;
	makefolders(path, height);
	return;
}
