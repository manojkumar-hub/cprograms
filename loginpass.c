Java Group 1 July-2019
Class Notes 23.07.2019

Dr.Bhuvneshwar Prasad Sharma-MBA
Jul 23 (Edited Jul 23)

dynamicarray.c
C

loginpass.c
C

cmdtest.c
C
Class comments

Joining…
/*
	WAP to input userid and password. If userid is bp and password is sharma then show a 
	message "authontication passsed" else "authentication fail"

*/
main()
{
	char userid[51],pass[51];
	int i=0; char ch;
	printf("Enter user id : ");
	gets(userid);
	printf("Password : ");
	while(i<50)
	{
		ch=getch();
		if(ch=='\r') break;
		pass[i]=ch;
		i++;
		putchar('*');
	}
	pass[i]='\0';
	if(strcmp(userid,"bp")==0 && strcmp(pass,"sharma")==0)
		printf("authentication passed");
	else
	 	printf("authentication fail");
}
