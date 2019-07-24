/*
	Command line input is also called as non-interactive input
	Here argc means count of arguments and argv means argument values
*/
main(int argc, char *argv[])
{
	int i;
	for(i=0;i<argc;i++)
	 printf("%d = %s\n",i,argv[i]);
	printf("New Name is : ");
	 for(i=1;i<argc;i++)
	  printf("%c",argv[i][0]);
}
